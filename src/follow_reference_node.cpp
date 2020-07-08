//***************************************************************************
// Copyright 2016 OceanScan - Marine Systems & Technology, Lda.             *
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
//***************************************************************************

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
