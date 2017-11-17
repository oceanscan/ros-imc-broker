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
    entity_name_("Sidescan"),
    entity_id_(0)
  {
    // Subscribers.
    subscribe<ParamsController, IMC::EntityList>("IMC/In/EntityList", this);
    subscribe<ParamsController, IMC::EntityActivationState>("IMC/In/EntityActivationState", this);

    // Publishers.
    set_params_pub_ = nh.advertise<IMC::SetEntityParameters>("IMC/Out/SetEntityParameters", 1000);
    query_entity_list_pub_ = nh.advertise<IMC::EntityList>("IMC/Out/EntityList", 1000);

    // Parameters.
    config_map_["High-Frequency Channel"] = "true";
    config_map_["Low-Frequency Channel"] = "true";
    config_map_["Range"] = "30";
  }

  virtual
  ~ParamsController(void)
  {
  }

  void
  on(const IMC::EntityActivationState& msg)
  {
    if (!isFromControlledSystem(msg))
      return;

    entity_act_state_ = msg;
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
  }

  void
  updateStateMachine(void)
  {
    switch (state_)
    {
      case SM_ENTITY_LIST_QUERY:
        ROS_INFO("quering list of entities");
        queryEntityList();
        state_ = SM_ENTITY_LIST_WAIT;
        break;

      case SM_ENTITY_LIST_WAIT:
        if (entity_id_ != 0)
        {
          ROS_INFO("entity id of '%s' is %u", entity_name_.c_str(), entity_id_);
          state_ = SM_ENTITY_ACTIVATE;
        }
        else
        {
          state_ = SM_ENTITY_LIST_QUERY;
        }
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
          state_ = SM_ENTITY_CONFIG;
        }
        else if (entity_act_state_.state == IMC::EntityActivationState::EAS_ACT_FAIL)
        {
          ROS_INFO("failed to activate entity: %s", entity_act_state_.error.c_str());
          state_ = SM_ENTITY_ACTIVATE;
        }
        break;

      case SM_ENTITY_CONFIG:
        ROS_INFO("sending configuration");
        publishParamMap(config_map_);
        state_ = SM_IDLE;
        break;

      case SM_IDLE:
        break;
    }
  }

private:
  enum State
  {
    SM_ENTITY_LIST_QUERY,
    SM_ENTITY_LIST_WAIT,
    SM_ENTITY_ACTIVATE,
    SM_ENTITY_ACTIVATE_WAIT,
    SM_ENTITY_CONFIG,
    SM_IDLE
  };

  State state_;
  //! Entity name.
  std::string entity_name_;
  //! Entity identifier.
  unsigned entity_id_;
  //! Last received activation state.
  IMC::EntityActivationState entity_act_state_;
  //! Configuration map.
  std::map<std::string, std::string> config_map_;
  ros::Publisher set_params_pub_;
  ros::Publisher query_entity_list_pub_;
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
