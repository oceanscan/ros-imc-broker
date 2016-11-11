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
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
// General Public License for more details.                               *
//                                                                        *
// You should have received a copy of the GNU General Public License      *
// along with this program; if not, write to the Free Software            *
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA          *
// 02110-1301 USA.                                                        *
//*************************************************************************
//Author: Ricardo Martins                                                 *
//*************************************************************************

#ifndef ROS_IMC_BROKER_FOLLOW_REFERENCE_CONTROLLER_HPP_INCLUDED_
#define ROS_IMC_BROKER_FOLLOW_REFERENCE_CONTROLLER_HPP_INCLUDED_

// ROS headers.
#include <ros/ros.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include <ros_imc_broker/SimpleController.hpp>

namespace ros_imc_broker
{
  class FollowReferenceController: public SimpleController
  {
  public:
    FollowReferenceController(ros::NodeHandle& nh, const std::string& system_name):
      SimpleController(nh, system_name),
      follow_ref_state_changed_(false),
      state_(SM_START)
    {
      // Subscribers.
      subscribe<FollowReferenceController, DUNE::IMC::PlanControlState>("IMC/In/PlanControlState", this);
      subscribe<FollowReferenceController, DUNE::IMC::FollowRefState>("IMC/In/FollowRefState", this);

      // Publishers.
      plan_control_pub_ = nh.advertise<DUNE::IMC::PlanControl>("IMC/Out/PlanControl", 1000);
      reference_pub_ = nh.advertise<DUNE::IMC::Reference>("IMC/Out/Reference", 1000);
    }

    void
    addReference(double lat, double lon, double depth_or_alt, double speed)
    {
      boost::shared_ptr<DUNE::IMC::Reference> ref(new DUNE::IMC::Reference);

      // Position reference.
      ref->setDestination(getSystemId());
      ref->lat = lat;
      ref->lon = lon;
      ref->flags = DUNE::IMC::Reference::FLAG_LOCATION | DUNE::IMC::Reference::FLAG_SPEED | DUNE::IMC::Reference::FLAG_Z;

      // Vertical reference.
      DUNE::IMC::DesiredZ z_ref;
      z_ref.value = std::abs(depth_or_alt);
      z_ref.z_units = depth_or_alt < 0 ? DUNE::IMC::Z_DEPTH : DUNE::IMC::Z_ALTITUDE;
      ref->z.set(z_ref);

      // Speed reference.
      DUNE::IMC::DesiredSpeed speed_ref;
      speed_ref.value = speed;
      speed_ref.speed_units = DUNE::IMC::SUNITS_METERS_PS;
      ref->speed.set(speed_ref);

      references_.push(ref);
    }

    void
    updateExternalStateMachine(void)
    {
      switch (state_)
      {
        case SM_START:
          startPlan();
          clearFollowReferenceState();
          state_ = SM_GUIDE;
          break;

        case SM_GUIDE:
          if (follow_ref_state_.state == DUNE::IMC::FollowRefState::FR_GOTO)
          {
            guide();
          }
          else if (follow_ref_state_.state == DUNE::IMC::FollowRefState::FR_TIMEOUT)
          {
            ROS_ERROR("reference timeout");
            state_ = SM_IDLE;
          }
          else if (followReferenceStateIsKnown())
          {
            state_ = changeReference() ? SM_GUIDE_WAIT : SM_IDLE;
          }
          break;

        case SM_GUIDE_WAIT:
          if (follow_ref_state_changed_)
            state_ = SM_GUIDE;
          break;

        case SM_IDLE:
          break;
      }
    }

    void
    on(const DUNE::IMC::PlanControlState& msg)
    {
      if (!isFromControlledSystem(msg))
        return;

      plan_state_id_ = msg.plan_id;
    }

    void
    on(const DUNE::IMC::FollowRefState& msg)
    {
      if (!isFromControlledSystem(msg))
        return;

      if (follow_ref_state_.state == msg.state)
      {
        follow_ref_state_changed_ = false;
      }
      else
      {
        follow_ref_state_changed_ = true;
        follow_ref_state_ = msg;
      }
    }

  private:
    enum State
    {
      SM_START,
      SM_GUIDE,
      SM_GUIDE_WAIT,
      SM_IDLE
    };

    //! Current finite state machine state.
    State state_;
    //! Plan control publisher.
    ros::Publisher plan_control_pub_;
    //! Reference publisher.
    ros::Publisher reference_pub_;
    //! Desired plan id.
    std::string plan_id_;
    //! Executing plan id.
    std::string plan_state_id_;
    //! Queue of pending references.
    std::queue<boost::shared_ptr<DUNE::IMC::Reference> > references_;
    //! Current reference.
    boost::shared_ptr<DUNE::IMC::Reference> reference_;
    //! Last received follow reference state.
    DUNE::IMC::FollowRefState follow_ref_state_;
    //! True if follow reference state changed.
    bool follow_ref_state_changed_;

    //! Tests if the current follow reference state is known.
    //! @return true if follow reference state is known, false otherwise.
    bool
    followReferenceStateIsKnown(void)
    {
      return follow_ref_state_.state != 0;
    }

    //! Clears the current follow reference state.
    void
    clearFollowReferenceState(void)
    {
      follow_ref_state_.clear();
      follow_ref_state_changed_ = false;
    }

    void
    startPlan(void)
    {
      ROS_INFO("engaging follow reference");
      plan_state_id_.clear();
      plan_id_ = "follow_tno";

      DUNE::IMC::PlanControl pc;
      pc.plan_id = plan_id_;
      pc.op = DUNE::IMC::PlanControl::PC_START;
      pc.type = DUNE::IMC::PlanControl::PC_REQUEST;
      pc.request_id = 1000;

      DUNE::IMC::FollowReference man;
      man.control_src = 0xFFFF;
      man.control_ent = 255;
      man.loiter_radius = 20;
      man.timeout = 0.0;

      DUNE::IMC::PlanManeuver pm;
      pm.maneuver_id = "1";
      pm.data.set(man);

      DUNE::IMC::PlanSpecification ps;
      ps.plan_id = pc.plan_id;
      ps.start_man_id = pm.maneuver_id;
      ps.maneuvers.push_back(pm);

      pc.arg.set(ps);

      plan_control_pub_.publish(pc);
    }

    bool
    changeReference(void)
    {
      if (references_.empty())
      {
        ROS_INFO("no more references, maneuver done");
        reference_ = boost::shared_ptr<DUNE::IMC::Reference>(new DUNE::IMC::Reference);
        reference_->setSource(0xFFFF);
        reference_->setDestination(getSystemId());
        reference_->flags = DUNE::IMC::Reference::FLAG_MANDONE;
        guide();
        reference_.reset();
        return false;
      }

      ROS_INFO("changing reference");
      reference_ = references_.front();
      references_.pop();
      guide();
      return true;
    }

    void
    guide(void)
    {
      if (reference_)
        reference_pub_.publish(reference_);
    }
  };
}

#endif
