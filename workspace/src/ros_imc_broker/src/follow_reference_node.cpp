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

// ROS headers.
#include <ros/ros.h>
#include <ros/callback_queue.h>

// Local headers.
#include <ros_imc_broker/FollowReferenceController.hpp>

int
main(int argc, char** argv)
{
  ros::init(argc, argv, "follow_reference_node", ros::init_options::AnonymousName);

  ros::NodeHandle nh;

  ros_imc_broker::FollowReferenceController ctl(nh, "lauv-simulator-1");

  // 50x50 m square.
  // A.
  ctl.addReference(0.7188105014017008, -0.15196319997726826, -1.0, 1.0);
  // B.
  ctl.addReference(0.7188026474200668, -0.15196319997726826, -2.0, 1.0);
  // C.
  ctl.addReference(0.7188026474200668, -0.15197361959290270, -3.0, 1.0);
  // D.
  ctl.addReference(0.7188105014017008, -0.15197361959290270, -4.0, 1.0);
  // A.
  ctl.addReference(0.7188105014017008, -0.15196319997726826, -5.0, 1.0);

  while (ros::ok())
  {
    ros::getGlobalCallbackQueue()->callAvailable(ros::WallDuration(1.0));
    ctl.updateStateMachine();
  }

  return 0;
}
