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

#ifndef ROS_IMC_BROKER_MAPPINGS_HPP_INCLUDED_
#define ROS_IMC_BROKER_MAPPINGS_HPP_INCLUDED_

// ROS headers.
#include <ros/ros.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local haeders.
#include <ros_imc_broker/ImcTypes.hpp>

namespace ros_imc_broker
{
  typedef void (*Publisher) (ros::Publisher&, const DUNE::IMC::Message*);

  template <typename Type>
  static void
  publish(ros::Publisher& publisher, const DUNE::IMC::Message* msg)
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

  static std::pair<unsigned, Publisher> publisher_pairs_id[] =
  {
#define MESSAGE(id, abbrev)                                             \
    std::pair<unsigned, Publisher>(id, &publish<DUNE::IMC::abbrev>),
#include <DUNE/IMC/Factory.def>
  };
  DUNE_DECLARE_STATIC_MAP(publisher_by_id, unsigned, Publisher, publisher_pairs_id);

  static std::pair<unsigned, PublisherCreator> publisher_creator_pairs[] =
  {
#define MESSAGE(id, abbrev)                                             \
    std::pair<unsigned, PublisherCreator>(id, &createPublisher<DUNE::IMC::abbrev>),
#include <DUNE/IMC/Factory.def>
  };
  DUNE_DECLARE_STATIC_MAP(publisher_creators, unsigned, PublisherCreator, publisher_creator_pairs);
}

#endif
