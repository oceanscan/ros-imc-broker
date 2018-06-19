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

#ifndef ROS_IMC_BROKER_MAPPINGS_HPP_INCLUDED_
#define ROS_IMC_BROKER_MAPPINGS_HPP_INCLUDED_

// ROS headers.
#include <ros/ros.h>

// IMC headers.
#include <IMC/Spec/AllMessages.hpp>

// Local haeders.
#include <ros_imc_broker/ImcTypes.hpp>

namespace ros_imc_broker
{
  typedef void (*Publisher) (ros::Publisher&, const IMC::Message*);

  template <typename Type>
  static void
  publish(ros::Publisher& publisher, const IMC::Message* msg)
  {
    publisher.publish(*static_cast<const Type*>(msg));
  }

  typedef ros::Publisher (*PublisherCreator) (ros::NodeHandle&, const std::string&, uint32_t, bool);

  template <typename T>
  ros::Publisher
  createPublisher(ros::NodeHandle& handle, const std::string& topic, uint32_t qsize, bool latch)
  {
    return handle.advertise<T>(topic, qsize, latch);
  }

#define DECLARE_STATIC_MAP(name, ta, tb, ps)                       \
  static std::map<ta, tb> name(ps, ps + sizeof(ps) / sizeof(ps[0]))

  static std::pair<unsigned, Publisher> publisher_pairs_id[] =
  {
#define MESSAGE(id, abbrev, md5)                                \
    std::pair<unsigned, Publisher>(id, &publish<IMC::abbrev>),
#include <IMC/Spec/Factory.xdef>
  };
  DECLARE_STATIC_MAP(publisher_by_id, unsigned, Publisher, publisher_pairs_id);

  static std::pair<unsigned, PublisherCreator> publisher_creator_pairs[] =
  {
#define MESSAGE(id, abbrev, md5)                                        \
    std::pair<unsigned, PublisherCreator>(id, &createPublisher<IMC::abbrev>),
#include <IMC/Spec/Factory.xdef>
  };
  DECLARE_STATIC_MAP(publisher_creators, unsigned, PublisherCreator, publisher_creator_pairs);
}

#endif
