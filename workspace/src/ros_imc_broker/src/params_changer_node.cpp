//*************************************************************************
// Copyright (C) 2016 OceanScan - Marine Systems & Technology, Lda.       *
//*************************************************************************
// This program is free software; you can redistribute it and/or modify   *
// it under the terms of the GNU General Public License as published by   *
// the Free Software Foundation; either version 2 of the License, or (at  *
// your option) any later version.                                        *
//                                                                        *
// This program is distributed in the hope that it will be useful, but    *
// WITHOUT ANY WARRANTY; without even the implied warranty of             *
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU       *
// General Public License for more details.                               *
//                                                                        *
// You should have received a copy of the GNU General Public License      *
// along with this program; if not, write to the Free Software            *
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA          *
// 02110-1301 USA.                                                        *
//*************************************************************************
//Author: Ricardo Martins                                                 *
//*************************************************************************

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

class ParamsController: public ros_imc_broker::SimpleController
{
public:
  ParamsController(ros::NodeHandle& nh, const std::string& system_name):
    SimpleController(nh, system_name),
    state_(SM_ENTITY_LIST_QUERY),
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
      for (; itr != msg.params.end(); ++itr)
      {
        if (config_map_.find((*itr)->name) != config_map_.end())
        {
          ROS_INFO("found '%s' : '%s'", (*itr)->name.c_str(), (*itr)->value.c_str());
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
      ROS_INFO("incoming data: '%s' (%s): %f", msg.getName(), entity_name_.c_str(), msg.value);
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
      case SM_ENTITY_LIST_QUERY:
        ROS_INFO("querying list of entities");
        queryEntityList();
        state_ = SM_ENTITY_LIST_WAIT;
        break;

      case SM_ENTITY_LIST_WAIT:
        if (entity_id_ != 0)
        {
          ROS_INFO("entity id of '%s' is %u", entity_name_.c_str(), entity_id_);
          state_ = SM_ENTITY_CONFIG;
        }
        else
        {
          state_ = SM_ENTITY_LIST_QUERY;
        }
        break;

      case SM_ENTITY_CONFIG:
        ROS_INFO("querying list of parameters for %s", entity_name_.c_str());
        queryEntityParameters();
        state_ = SM_ENTITY_PARAMS_WAIT;
        break;

      case SM_ENTITY_PARAMS_WAIT:
        if (!wait_params_)
        {
          ROS_INFO("compare list of parameters for %s", entity_name_.c_str());
          state_ = SM_ENTITY_PARAMS_COMPARE;
        }
        else
        {
          state_ = SM_ENTITY_CONFIG;
        }
        break;

      case SM_ENTITY_PARAMS_COMPARE:
        if (compareEntityParameters())
        {
          ROS_INFO("entity '%s' parameters match", entity_name_.c_str());
          if (entity_act_state_.state == IMC::EntityActivationState::EAS_INACTIVE)
            state_ = SM_ENTITY_ACTIVATE;
          else
            state_ = SM_IDLE;
        }
        else
        {
          ROS_INFO("entity '%s' parameters do NOT match", entity_name_.c_str());
          state_ = SM_ENTITY_SEND_PARAMS;
        }
        break;

      case SM_ENTITY_SEND_PARAMS:
        ROS_INFO("sending configuration");
        publishParamMap(config_map_);
        state_ = SM_ENTITY_CONFIG;
        break;

      case SM_ENTITY_ACTIVATE:
        ROS_INFO("requesting activation of '%s'", entity_name_.c_str());
        entity_act_state_.clear();
        requestActivation();
        state_ = SM_ENTITY_ACTIVATE_WAIT;
        break;

      case SM_ENTITY_ACTIVATE_WAIT:
        if (entity_act_state_.state == IMC::EntityActivationState::EAS_ACTIVE)
        {
          ROS_INFO("entity is active");
          state_ = SM_IDLE;
          start_ = boost::chrono::system_clock::now();
        }
        else if (entity_act_state_.state == IMC::EntityActivationState::EAS_ACT_FAIL)
        {
          ROS_INFO("failed to activate entity: %s", entity_act_state_.error.c_str());
          state_ = SM_ENTITY_ACTIVATE;
        }
        break;

      case SM_IDLE:
        if (!reset_)
        {
          boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start_;
          if (sec.count() > 60.0)
            reset();
        }
        break;
    }
  }

  //! Redefine arguments in real-time, during plan execution.
  void
  reset(void)
  {
    ROS_INFO("setting new arguments");
    config_map_["Correction Factor"] = "25.0";
    config_map_["Data Period"] = "15.0";
    state_ = SM_ENTITY_CONFIG;
    reset_ = true;
  }

private:
  enum State
  {
    SM_ENTITY_LIST_QUERY,
    SM_ENTITY_LIST_WAIT,
    SM_ENTITY_ACTIVATE,
    SM_ENTITY_ACTIVATE_WAIT,
    SM_ENTITY_CONFIG,
    SM_ENTITY_PARAMS_WAIT,
    SM_ENTITY_PARAMS_COMPARE,
    SM_ENTITY_SEND_PARAMS,
    SM_IDLE
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

  //! State machine state.
  State state_;
  //! Entity name.
  std::string entity_name_;
  //! Entity identifier.
  unsigned entity_id_;
  //! Last received activation state.
  IMC::EntityActivationState entity_act_state_;
  //! Configuration map (desired arguments).
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
