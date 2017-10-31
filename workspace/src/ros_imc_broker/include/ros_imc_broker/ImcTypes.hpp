//*******************************************************************************
// Copyright (C) 2016-2017 OceanScan - Marine Systems & Technology, Lda.        *
//*******************************************************************************
// This program is free software; you can redistribute it and/or modify it      *
// under the terms of the GNU General Public License as published by the        *
// Free Software Foundation; either version 2 of the License, or (at your       *
// option) any later version.                                                   *
//                                                                              *
// This program is distributed in the hope that it will be useful, but          *
// WITHOUT ANY WARRANTY; without even the implied warranty of                   *
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General     *
// Public License for more details.                                             *
//                                                                              *
// You should have received a copy of the GNU General Public License along      *
// with this program; if not, write to the Free Software Foundation, Inc.,      *
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.                  *
//*******************************************************************************
// Automatically generated.                                                     *
//*******************************************************************************

#ifndef IMC_BROKER_IMC_TYPES_HPP_INCLUDED_
#define IMC_BROKER_IMC_TYPES_HPP_INCLUDED_

// ROS headers.
#include <ros/ros.h>
#include <ros/message_traits.h>
#include <ros/serialization.h>

// IMC headers.
#include <IMC/Base/Packet.hpp>
#include <IMC/Spec/AllMessages.hpp>

#define MESSAGE(id, abbrev, md5)                                        \
  namespace ros                                                         \
  {                                                                     \
    namespace message_traits                                            \
    {                                                                   \
      template<>                                                        \
      struct MD5Sum<IMC::abbrev>                                        \
      {                                                                 \
        static const char* value()                                      \
        {                                                               \
          return md5;                                                   \
        }                                                               \
                                                                        \
        static const char* value(const IMC::abbrev& m)                  \
        {                                                               \
          return value();                                               \
        }                                                               \
      };                                                                \
                                                                        \
      template<>                                                        \
      struct DataType<IMC::abbrev>                                      \
      {                                                                 \
        static const char* value()                                      \
        {                                                               \
          return "imc/" #abbrev;                                        \
        }                                                               \
                                                                        \
        static const char* value(const IMC::abbrev& m)                  \
        {                                                               \
          return value();                                               \
        }                                                               \
      };                                                                \
                                                                        \
      template<>                                                        \
      struct Definition<IMC::abbrev>                                    \
      {                                                                 \
        static const char* value()                                      \
        {                                                               \
          return "X";                                                   \
        }                                                               \
                                                                        \
        static const char* value(const IMC::abbrev& m)                  \
        {                                                               \
          return value();                                               \
        }                                                               \
      };                                                                \
    }                                                                   \
                                                                        \
    namespace serialization                                             \
    {                                                                   \
      template<>                                                        \
      struct Serializer<IMC::abbrev>                                    \
      {                                                                 \
        template<typename Stream>                                       \
        inline static void write(Stream& stream, const IMC::abbrev& t)  \
        {                                                               \
          size_t size = t.getSerializationSize();                       \
          IMC::Packet::serialize(&t, stream.advance(size), size);       \
        }                                                               \
                                                                        \
        template<typename Stream>                                       \
        inline static void read(Stream& stream, IMC::abbrev& t)         \
        {                                                               \
          IMC::Packet::deserialize(stream.getData(),                    \
                                   stream.getLength(), &t);             \
        }                                                               \
                                                                        \
        inline static uint32_t serializedLength(const IMC::abbrev& t)   \
        {                                                               \
          return t.getSerializationSize();                              \
        }                                                               \
      };                                                                \
    }                                                                   \
  }
#include <IMC/Spec/Factory.xdef>

#endif
