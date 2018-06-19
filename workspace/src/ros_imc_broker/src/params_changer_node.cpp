//***************************************************************************
// Copyright 2016-2017 OceanScan - Marine Systems & Technology, Lda.        *
//***************************************************************************
// Licensed under the Apache License, Version 2.0 (the "License");          *
// you may not use this file except in compliance with the License.         *
// You may obtain a copy of the License at                                  *
//                                                                          *
// http://www.apache.org/licenses/LICENSE-2.0                               *
//                                                                          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the License is distributed on an "AS IS" BASIS,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the License for the specific language governing permissions and      *
// limitations under the License.                                           *
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ headers.
#include <queue>
#include <map>

// Boost headers.
#include <boost/algorithm/string.hpp>
#include <boost/timer.hpp>

// ROS headers.
#include <ros/ros.h>
#include <ros/callback_queue.h>

// IMC headers.
#include <IMC/Spec/EntityParameters.hpp>

// Local headers.
#include <ros_imc_broker/SimpleController.hpp>

//! Class that controls an entity, including some of its parameters.
//!
//! Standard execution is implemented in function «updateStateMachine»
//! through state enum «State». Expected behavior:
//!
//!  * query list of entities from DUNE.
//!  * wait for arrival of entities list.
//!  * once entity id has been resolved from entities list, query target entity parameters.
//!  * wait for arrival of target entity parameters.
//!  * compare loaded parameters with desired values.
//!    -- if they do not match, send desired parameters and go back to 3)
//!    -- if they match, activate task.
//!  * wait for entity activation state
//!  * once active, monitor two timeouts:
//!    -- the first one, to reconfigure entity parameters and go to 3)
//!    -- the final one, to deactivate entity.
//!  * wait for entity deactivation state
//!  * end of execution.
//!
class ParamsController: public ros_imc_broker::SimpleController
{
public:
  //! Time to wait for entity parameters update.
  static const float c_entity_update = 60.0f;
  //! Time to wait for entity deactivation and end of execution.
  static const float c_entity_deactivation = 200.0f;

  ParamsController(ros::NodeHandle& nh, const std::string& system_name):
    SimpleController(nh, system_name),
    state_(SM_ENTITIES_LIST_QUERY),
    entity_name_("Dummy Payload"),
    entity_id_(0),
    wait_params_(false),
    reset_(false)
  {
    // Subscribers.
    subscribe<ParamsController, IMC::EntityList>("IMC/In/EntityList", this);
    subscribe<ParamsController, IMC::EntityActivationState>("IMC/In/EntityActivationState", this);
    subscribe<ParamsController, IMC::EntityParameters>("IMC/In/EntityParameters", this);
    subscribe<ParamsController, IMC::Temperature>("IMC/In/Temperature", this);

    // Publishers.
    set_params_pub_ = nh.advertise<IMC::SetEntityParameters>("IMC/Out/SetEntityParameters", 1000);
    query_entity_list_pub_ = nh.advertise<IMC::EntityList>("IMC/Out/EntityList", 1000);
    query_entity_params_pub_ = nh.advertise<IMC::QueryEntityParameters>("IMC/Out/QueryEntityParameters", 1000);

    // Parameters.
    config_map_["Correction Factor"] = "2.0";
    config_map_["Data Period"] = "5.0";
  }

  virtual
  ~ParamsController(void)
  {
  }

  void
  on(const IMC::EntityActivationState& msg)
  {
    if (isFromControlledEntity(msg))
      entity_act_state_ = msg;
  }

  void
  on(const IMC::EntityParameters& msg)
  {
    if (isFromControlledEntity(msg))
    {
      // load current parameters (that match desired config_map)
      IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg.params.begin();
      int i = 0;
      for (; itr != msg.params.end(); ++itr)
      {
        if (config_map_.find((*itr)->name) != config_map_.end())
        {
          ROS_INFO("'%s' parameter #%d -- '%s' = '%s'", entity_name_.c_str(), i++,
                   (*itr)->name.c_str(), (*itr)->value.c_str());
          loaded_map_[(*itr)->name] = (*itr)->value;
        }
      }

      wait_params_ = false;
    }
  }

  void
  on(const IMC::EntityList& msg)
  {
    if (!isFromControlledSystem(msg))
      return;

    if (msg.op != IMC::EntityList::OP_REPORT)
      return;

    std::vector<std::string> parts;
    boost::split(parts, msg.list, boost::is_any_of(";"), boost::token_compress_on);
    for (size_t i = 0; i < parts.size(); ++i)
    {
      std::vector<std::string> subparts;
      boost::split(subparts, parts[i], boost::is_any_of("="), boost::token_compress_on);
      if (subparts.size() != 2)
        continue;
      if (subparts[0] == entity_name_)
      {
        entity_id_ = boost::lexical_cast<unsigned>(subparts[1]);
        break;
      }
    }
  }

  void
  on(const IMC::Temperature& msg)
  {
    if (isFromControlledEntity(msg))
      ROS_INFO(" \tincoming data: '%s' (%s): %f", msg.getName(), entity_name_.c_str(), msg.value);
  }

  void
  publishParamMap(const std::map<std::string, std::string>& map)
  {
    IMC::SetEntityParameters req;
    req.name = entity_name_;

    for (std::map<std::string, std::string>::const_iterator itr = map.begin(); itr != map.end(); ++itr)
    {
      IMC::EntityParameter param;
      param.name = itr->first;
      param.value = itr->second;
      req.params.push_back(param);
    }

    set_params_pub_.publish(req);
  }

  void
  publishParamActive(bool active)
  {
    IMC::EntityParameter param;
    param.name = "Active";
    param.value = active ? "true" : "false";

    IMC::SetEntityParameters req;
    req.name = entity_name_;
    req.params.push_back(param);

    set_params_pub_.publish(req);
  }

  void
  requestActivation()
  {
    publishParamActive(true);
  }

  void
  requestDeactivation()
  {
    publishParamActive(false);
  }

  void
  queryEntityList()
  {
    IMC::EntityList req;
    req.op = IMC::EntityList::OP_QUERY;
    query_entity_list_pub_.publish(req);
    ros::Duration(1.0).sleep();
  }

  void
  queryEntityParameters()
  {
    IMC::QueryEntityParameters req;
    req.name = entity_name_;
    query_entity_params_pub_.publish(req);
    ros::Duration(1.0).sleep();
    wait_params_ = true;
  }

  void
  updateStateMachine(void)
  {
    switch (state_)
    {
      case SM_ENTITIES_LIST_QUERY:
        ROS_INFO("querying list of entities");
        queryEntityList();
        state_ = SM_ENTITIES_LIST_WAIT;
        break;

      case SM_ENTITIES_LIST_WAIT:
        if (entity_id_ != 0)
        {
          ROS_INFO("entity id of '%s' is %u", entity_name_.c_str(), entity_id_);
          state_ = SM_ENTITY_PARAMS_QUERY;
        }
        else
        {
          state_ = SM_ENTITIES_LIST_QUERY;
        }
        break;

      case SM_ENTITY_PARAMS_QUERY:
        ROS_INFO("'%s' query list of parameters", entity_name_.c_str());
        queryEntityParameters();
        state_ = SM_ENTITY_PARAMS_WAIT;
        break;

      case SM_ENTITY_PARAMS_WAIT:
        if (!wait_params_)
          state_ = SM_ENTITY_PARAMS_COMPARE;
        else
          state_ = SM_ENTITY_PARAMS_QUERY;

        break;

      case SM_ENTITY_PARAMS_COMPARE:
        if (compareEntityParameters())
        {
          ROS_WARN("'%s' parameters match", entity_name_.c_str());
          if (entity_act_state_.state == IMC::EntityActivationState::EAS_INACTIVE)
            state_ = SM_ENTITY_ACTIVATE;
          else
            state_ = SM_RUNNING;
        }
        else
        {
          ROS_WARN("'%s' parameters do not match", entity_name_.c_str());
          state_ = SM_ENTITY_PARAMS_SEND;
        }
        break;

      case SM_ENTITY_PARAMS_SEND:
        ROS_WARN("'%s' configure parameters", entity_name_.c_str());
        publishParamMap(config_map_);
        state_ = SM_ENTITY_PARAMS_QUERY;
        break;

      case SM_ENTITY_ACTIVATE:
        ROS_INFO("'%s' request activation", entity_name_.c_str());
        entity_act_state_.clear();
        requestActivation();
        state_ = SM_ENTITY_ACTIVATE_WAIT;
        break;

      case SM_ENTITY_ACTIVATE_WAIT:
        if (entity_act_state_.state == IMC::EntityActivationState::EAS_ACTIVE)
        {
          ROS_INFO("'%s' is active", entity_name_.c_str());
          state_ = SM_RUNNING;
          start_ = boost::chrono::system_clock::now();
          ROS_WARN("'%s' parameters will be configured in %.1f seconds", entity_name_.c_str(), c_entity_update);
          ROS_WARN("'%s' will be deactivated in %.1f seconds", entity_name_.c_str(), c_entity_deactivation);
        }
        else if (entity_act_state_.state == IMC::EntityActivationState::EAS_ACT_FAIL)
        {
          ROS_ERROR("'%s' failed to activate entity", entity_act_state_.error.c_str());
          state_ = SM_ENTITY_ACTIVATE;
        }
        break;

      case SM_RUNNING:
        // checking if it is time to reset entity parameters.
        if (!reset_)
        {
          boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start_;
          if (sec.count() > c_entity_update)
            resetParameters();
        }

        // check if it is time to deactivate and go home.
        if (reset_)
        {
          boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start_;
          if (sec.count() > c_entity_deactivation)
          {
            if (entity_act_state_.state == IMC::EntityActivationState::EAS_ACTIVE)
              state_ = SM_ENTITY_DEACTIVATE;
          }
        }

        break;

      case SM_ENTITY_DEACTIVATE:
        ROS_WARN("'%s' request deactivation", entity_name_.c_str());
        entity_act_state_.clear();
        requestDeactivation();
        state_ = SM_ENTITY_DEACTIVATE_WAIT;
        break;

      case SM_ENTITY_DEACTIVATE_WAIT:
        if (entity_act_state_.state == IMC::EntityActivationState::EAS_INACTIVE)
        {
          ROS_INFO("'%s' is deactivated", entity_name_.c_str());
          ROS_WARN(" -- finished execution --");
          state_ = SM_END;
        }
        else if (entity_act_state_.state == IMC::EntityActivationState::EAS_DEACT_FAIL)
        {
          ROS_ERROR("'%s' failed to activate entity", entity_act_state_.error.c_str());
          state_ = SM_ENTITY_DEACTIVATE;
        }
        break;

      case SM_END:
        break;

    }
  }

private:
  enum State
  {
    //! Query entity list.
    SM_ENTITIES_LIST_QUERY,
    //! Wait for entity list reply.
    SM_ENTITIES_LIST_WAIT,
    //! Query desired entity parameters.
    SM_ENTITY_PARAMS_QUERY,
    //! Wait for desired entity parameters reply.
    SM_ENTITY_PARAMS_WAIT,
    //! Compare loaded entity parameters with desired.
    SM_ENTITY_PARAMS_COMPARE,
    //! Send new parameters if they mismatch.
    SM_ENTITY_PARAMS_SEND,
    //! Activate desired entity.
    SM_ENTITY_ACTIVATE,
    //! Wait for entity activation reply.
    SM_ENTITY_ACTIVATE_WAIT,
    //! Entity is running.
    SM_RUNNING,
    //! Deactivate entity.
    SM_ENTITY_DEACTIVATE,
    //! Wait for entity deactivation reply.
    SM_ENTITY_DEACTIVATE_WAIT,
    //! Finished execution.
    SM_END
  };

  //! Tests if current entity parameters match desired parameters.
  //! @return true if current entity parameters match desired.
  bool
  compareEntityParameters(void)
  {
    std::map<std::string, std::string>::const_iterator it = config_map_.begin();
    for (; it != config_map_.end(); it++)
    {
      if (loaded_map_.find(it->first) != loaded_map_.end())
      {
        if (loaded_map_[it->first] != config_map_[it->first])
          return false;
      }
      else
      {
        return false;
      }
    }

    return true;
  }

  //! Tests if a given message was sent by the controlled system's entity.
  //! @return true if message is from controlled system, false otherwise.
  bool
  isFromControlledEntity(const IMC::Message& msg) const
  {
    return isFromControlledSystem(msg) && entity_id_ != 0 && msg.getSourceEntity() == entity_id_;
  }

  //! Redefine parameters in real-time, during plan execution.
  void
  resetParameters(void)
  {
    ROS_INFO("'%s' configure new parameters", entity_name_.c_str());
    config_map_["Correction Factor"] = "25.0";
    config_map_["Data Period"] = "15.0";
    state_ = SM_ENTITY_PARAMS_QUERY;
    reset_ = true;
  }

  //! State machine state.
  State state_;
  //! Entity name.
  std::string entity_name_;
  //! Entity identifier.
  unsigned entity_id_;
  //! Last received activation state.
  IMC::EntityActivationState entity_act_state_;
  //! Configuration map (desired parameters).
  std::map<std::string, std::string> config_map_;
  //! Loaded configuration map.
  std::map<std::string, std::string> loaded_map_;
  //! Waiting entity parameters.
  bool wait_params_;
  //! Publisher nodes.
  ros::Publisher set_params_pub_;
  ros::Publisher query_entity_list_pub_;
  ros::Publisher query_entity_params_pub_;
  //! Parameter redefinition timer.
  boost::chrono::system_clock::time_point start_;
  //! Reset parameters flag.
  bool reset_;
};

int
main(int argc, char** argv)
{
  ros::init(argc, argv, "params_changer_node", ros::init_options::AnonymousName);

  ros::NodeHandle nh;
  ParamsController ctl(nh, "lauv-simulator-1");

  while (ros::ok())
  {
    ros::getGlobalCallbackQueue()->callAvailable(ros::WallDuration(1.0));
    ctl.updateStateMachine();
  }

  return 0;
}
