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
// Automatically generated.                                                 *
//***************************************************************************

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
