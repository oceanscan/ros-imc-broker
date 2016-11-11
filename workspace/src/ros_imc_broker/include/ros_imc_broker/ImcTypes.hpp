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

#ifndef ROS_IMC_BROKER_IMC_TYPES_HPP_INCLUDED_
#define ROS_IMC_BROKER_IMC_TYPES_HPP_INCLUDED_

// ROS headers.
#include <ros/ros.h>
#include <ros/message_traits.h>
#include <ros/serialization.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityState>
    {
      static const char* value()
      {
        return "cab103733095abc0c4bc46b7e74ddde2";
      }

      static const char* value(const DUNE::IMC::EntityState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityState>
    {
      static const char* value()
      {
        return "imc/EntityState";
      }

      static const char* value(const DUNE::IMC::EntityState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::QueryEntityState>
    {
      static const char* value()
      {
        return "7ee20b2c6af7dd0729bc97c468839c1a";
      }

      static const char* value(const DUNE::IMC::QueryEntityState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::QueryEntityState>
    {
      static const char* value()
      {
        return "imc/QueryEntityState";
      }

      static const char* value(const DUNE::IMC::QueryEntityState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::QueryEntityState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::QueryEntityState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::QueryEntityState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::QueryEntityState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::QueryEntityState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::QueryEntityState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityInfo>
    {
      static const char* value()
      {
        return "099203496a48d859f93d5d099722891d";
      }

      static const char* value(const DUNE::IMC::EntityInfo& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityInfo>
    {
      static const char* value()
      {
        return "imc/EntityInfo";
      }

      static const char* value(const DUNE::IMC::EntityInfo& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityInfo>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityInfo& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityInfo>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityInfo& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityInfo& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityInfo& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::QueryEntityInfo>
    {
      static const char* value()
      {
        return "1be5ae828317dc7ab3e32c16a8f1f68f";
      }

      static const char* value(const DUNE::IMC::QueryEntityInfo& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::QueryEntityInfo>
    {
      static const char* value()
      {
        return "imc/QueryEntityInfo";
      }

      static const char* value(const DUNE::IMC::QueryEntityInfo& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::QueryEntityInfo>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::QueryEntityInfo& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::QueryEntityInfo>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::QueryEntityInfo& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::QueryEntityInfo& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::QueryEntityInfo& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityList>
    {
      static const char* value()
      {
        return "c5eea0d67c9ab3e5be91e9c7ad3aa488";
      }

      static const char* value(const DUNE::IMC::EntityList& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityList>
    {
      static const char* value()
      {
        return "imc/EntityList";
      }

      static const char* value(const DUNE::IMC::EntityList& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityList>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityList& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityList>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityList& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityList& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityList& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CpuUsage>
    {
      static const char* value()
      {
        return "917b27d2ef708220ca744f6f0562f627";
      }

      static const char* value(const DUNE::IMC::CpuUsage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CpuUsage>
    {
      static const char* value()
      {
        return "imc/CpuUsage";
      }

      static const char* value(const DUNE::IMC::CpuUsage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CpuUsage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CpuUsage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CpuUsage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CpuUsage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CpuUsage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CpuUsage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TransportBindings>
    {
      static const char* value()
      {
        return "4ffb8c763ae06275a7ee26f16aa9c09a";
      }

      static const char* value(const DUNE::IMC::TransportBindings& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TransportBindings>
    {
      static const char* value()
      {
        return "imc/TransportBindings";
      }

      static const char* value(const DUNE::IMC::TransportBindings& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TransportBindings>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TransportBindings& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TransportBindings>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TransportBindings& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TransportBindings& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TransportBindings& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RestartSystem>
    {
      static const char* value()
      {
        return "c79a764a4e87ccbe86577ac3d3a95a31";
      }

      static const char* value(const DUNE::IMC::RestartSystem& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RestartSystem>
    {
      static const char* value()
      {
        return "imc/RestartSystem";
      }

      static const char* value(const DUNE::IMC::RestartSystem& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RestartSystem>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RestartSystem& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RestartSystem>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RestartSystem& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RestartSystem& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RestartSystem& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DevCalibrationControl>
    {
      static const char* value()
      {
        return "68ce861e91718a0d75038543e83f021e";
      }

      static const char* value(const DUNE::IMC::DevCalibrationControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DevCalibrationControl>
    {
      static const char* value()
      {
        return "imc/DevCalibrationControl";
      }

      static const char* value(const DUNE::IMC::DevCalibrationControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DevCalibrationControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DevCalibrationControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DevCalibrationControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DevCalibrationControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DevCalibrationControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DevCalibrationControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DevCalibrationState>
    {
      static const char* value()
      {
        return "fef3a94b3c8b08a1a857ab64b6a56c9c";
      }

      static const char* value(const DUNE::IMC::DevCalibrationState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DevCalibrationState>
    {
      static const char* value()
      {
        return "imc/DevCalibrationState";
      }

      static const char* value(const DUNE::IMC::DevCalibrationState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DevCalibrationState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DevCalibrationState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DevCalibrationState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DevCalibrationState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DevCalibrationState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DevCalibrationState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityActivationState>
    {
      static const char* value()
      {
        return "3e96771c97b66fc06fe88de9103f80f9";
      }

      static const char* value(const DUNE::IMC::EntityActivationState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityActivationState>
    {
      static const char* value()
      {
        return "imc/EntityActivationState";
      }

      static const char* value(const DUNE::IMC::EntityActivationState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityActivationState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityActivationState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityActivationState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityActivationState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityActivationState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityActivationState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::QueryEntityActivationState>
    {
      static const char* value()
      {
        return "5c441b76e6a91e600c1647ad9f50c72c";
      }

      static const char* value(const DUNE::IMC::QueryEntityActivationState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::QueryEntityActivationState>
    {
      static const char* value()
      {
        return "imc/QueryEntityActivationState";
      }

      static const char* value(const DUNE::IMC::QueryEntityActivationState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::QueryEntityActivationState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::QueryEntityActivationState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::QueryEntityActivationState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::QueryEntityActivationState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::QueryEntityActivationState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::QueryEntityActivationState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleOperationalLimits>
    {
      static const char* value()
      {
        return "b175eaff33a3472983f5fb74aab0e2f1";
      }

      static const char* value(const DUNE::IMC::VehicleOperationalLimits& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleOperationalLimits>
    {
      static const char* value()
      {
        return "imc/VehicleOperationalLimits";
      }

      static const char* value(const DUNE::IMC::VehicleOperationalLimits& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleOperationalLimits>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleOperationalLimits& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleOperationalLimits>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleOperationalLimits& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleOperationalLimits& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleOperationalLimits& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::MsgList>
    {
      static const char* value()
      {
        return "0ad315e4c8481ae19f01a0ec2d279e33";
      }

      static const char* value(const DUNE::IMC::MsgList& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::MsgList>
    {
      static const char* value()
      {
        return "imc/MsgList";
      }

      static const char* value(const DUNE::IMC::MsgList& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::MsgList>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::MsgList& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::MsgList>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::MsgList& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::MsgList& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::MsgList& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SimulatedState>
    {
      static const char* value()
      {
        return "dfa65c3006ff88f9d594056e05719278";
      }

      static const char* value(const DUNE::IMC::SimulatedState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SimulatedState>
    {
      static const char* value()
      {
        return "imc/SimulatedState";
      }

      static const char* value(const DUNE::IMC::SimulatedState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SimulatedState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SimulatedState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SimulatedState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SimulatedState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SimulatedState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SimulatedState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LeakSimulation>
    {
      static const char* value()
      {
        return "a9d46ae38a6dd2a067730900601768e7";
      }

      static const char* value(const DUNE::IMC::LeakSimulation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LeakSimulation>
    {
      static const char* value()
      {
        return "imc/LeakSimulation";
      }

      static const char* value(const DUNE::IMC::LeakSimulation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LeakSimulation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LeakSimulation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LeakSimulation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LeakSimulation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LeakSimulation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LeakSimulation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UASimulation>
    {
      static const char* value()
      {
        return "28ea7ad6b78fd1cbb21a7f535558e0ff";
      }

      static const char* value(const DUNE::IMC::UASimulation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UASimulation>
    {
      static const char* value()
      {
        return "imc/UASimulation";
      }

      static const char* value(const DUNE::IMC::UASimulation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UASimulation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UASimulation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UASimulation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UASimulation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UASimulation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UASimulation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DynamicsSimParam>
    {
      static const char* value()
      {
        return "da3751c6128a9ef21a900da5485091a2";
      }

      static const char* value(const DUNE::IMC::DynamicsSimParam& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DynamicsSimParam>
    {
      static const char* value()
      {
        return "imc/DynamicsSimParam";
      }

      static const char* value(const DUNE::IMC::DynamicsSimParam& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DynamicsSimParam>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DynamicsSimParam& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DynamicsSimParam>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DynamicsSimParam& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DynamicsSimParam& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DynamicsSimParam& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::StorageUsage>
    {
      static const char* value()
      {
        return "99e9e8c17bff1355e9c3dba5e46746c3";
      }

      static const char* value(const DUNE::IMC::StorageUsage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::StorageUsage>
    {
      static const char* value()
      {
        return "imc/StorageUsage";
      }

      static const char* value(const DUNE::IMC::StorageUsage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::StorageUsage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::StorageUsage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::StorageUsage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::StorageUsage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::StorageUsage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::StorageUsage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CacheControl>
    {
      static const char* value()
      {
        return "3b8e5067b4882b5422336537c930124a";
      }

      static const char* value(const DUNE::IMC::CacheControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CacheControl>
    {
      static const char* value()
      {
        return "imc/CacheControl";
      }

      static const char* value(const DUNE::IMC::CacheControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CacheControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CacheControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CacheControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CacheControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CacheControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CacheControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LoggingControl>
    {
      static const char* value()
      {
        return "9002e4531742b2ee488dc2189c97bc4d";
      }

      static const char* value(const DUNE::IMC::LoggingControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LoggingControl>
    {
      static const char* value()
      {
        return "imc/LoggingControl";
      }

      static const char* value(const DUNE::IMC::LoggingControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LoggingControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LoggingControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LoggingControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LoggingControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LoggingControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LoggingControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LogBookEntry>
    {
      static const char* value()
      {
        return "0d02f8b29f35c75d4758e77b80df842a";
      }

      static const char* value(const DUNE::IMC::LogBookEntry& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LogBookEntry>
    {
      static const char* value()
      {
        return "imc/LogBookEntry";
      }

      static const char* value(const DUNE::IMC::LogBookEntry& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LogBookEntry>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LogBookEntry& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LogBookEntry>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LogBookEntry& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LogBookEntry& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LogBookEntry& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LogBookControl>
    {
      static const char* value()
      {
        return "44fda935976c720028054a1edf15e8c2";
      }

      static const char* value(const DUNE::IMC::LogBookControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LogBookControl>
    {
      static const char* value()
      {
        return "imc/LogBookControl";
      }

      static const char* value(const DUNE::IMC::LogBookControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LogBookControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LogBookControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LogBookControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LogBookControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LogBookControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LogBookControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ReplayControl>
    {
      static const char* value()
      {
        return "ccfdde97e1ea2dfeaf74308c78be10a1";
      }

      static const char* value(const DUNE::IMC::ReplayControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ReplayControl>
    {
      static const char* value()
      {
        return "imc/ReplayControl";
      }

      static const char* value(const DUNE::IMC::ReplayControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ReplayControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ReplayControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ReplayControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ReplayControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ReplayControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ReplayControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ClockControl>
    {
      static const char* value()
      {
        return "9732d8a930993592b1f5f43985a10699";
      }

      static const char* value(const DUNE::IMC::ClockControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ClockControl>
    {
      static const char* value()
      {
        return "imc/ClockControl";
      }

      static const char* value(const DUNE::IMC::ClockControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ClockControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ClockControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ClockControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ClockControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ClockControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ClockControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricCTD>
    {
      static const char* value()
      {
        return "30eb58e0b4c30d4c79e87c3b4a7e5fc7";
      }

      static const char* value(const DUNE::IMC::HistoricCTD& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricCTD>
    {
      static const char* value()
      {
        return "imc/HistoricCTD";
      }

      static const char* value(const DUNE::IMC::HistoricCTD& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricCTD>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricCTD& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricCTD>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricCTD& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricCTD& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricCTD& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricTelemetry>
    {
      static const char* value()
      {
        return "4b573c03d625d32a8c8f33c133e4e132";
      }

      static const char* value(const DUNE::IMC::HistoricTelemetry& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricTelemetry>
    {
      static const char* value()
      {
        return "imc/HistoricTelemetry";
      }

      static const char* value(const DUNE::IMC::HistoricTelemetry& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricTelemetry>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricTelemetry& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricTelemetry>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricTelemetry& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricTelemetry& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricTelemetry& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricSonarData>
    {
      static const char* value()
      {
        return "fde07fe1e29520cee7e694d9706a7894";
      }

      static const char* value(const DUNE::IMC::HistoricSonarData& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricSonarData>
    {
      static const char* value()
      {
        return "imc/HistoricSonarData";
      }

      static const char* value(const DUNE::IMC::HistoricSonarData& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricSonarData>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricSonarData& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricSonarData>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricSonarData& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricSonarData& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricSonarData& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricEvent>
    {
      static const char* value()
      {
        return "c8c38e8d6c213a43fef05fa8aa22165e";
      }

      static const char* value(const DUNE::IMC::HistoricEvent& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricEvent>
    {
      static const char* value()
      {
        return "imc/HistoricEvent";
      }

      static const char* value(const DUNE::IMC::HistoricEvent& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricEvent>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricEvent& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricEvent>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricEvent& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricEvent& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricEvent& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Heartbeat>
    {
      static const char* value()
      {
        return "cfe387eb6aa603933014529f87b5a7a8";
      }

      static const char* value(const DUNE::IMC::Heartbeat& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Heartbeat>
    {
      static const char* value()
      {
        return "imc/Heartbeat";
      }

      static const char* value(const DUNE::IMC::Heartbeat& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Heartbeat>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Heartbeat& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Heartbeat>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Heartbeat& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Heartbeat& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Heartbeat& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Announce>
    {
      static const char* value()
      {
        return "52133914b5dc88b3629b65728613b4d5";
      }

      static const char* value(const DUNE::IMC::Announce& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Announce>
    {
      static const char* value()
      {
        return "imc/Announce";
      }

      static const char* value(const DUNE::IMC::Announce& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Announce>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Announce& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Announce>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Announce& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Announce& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Announce& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AnnounceService>
    {
      static const char* value()
      {
        return "1b4cef12492e27868f6091118be0322c";
      }

      static const char* value(const DUNE::IMC::AnnounceService& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AnnounceService>
    {
      static const char* value()
      {
        return "imc/AnnounceService";
      }

      static const char* value(const DUNE::IMC::AnnounceService& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AnnounceService>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AnnounceService& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AnnounceService>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AnnounceService& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AnnounceService& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AnnounceService& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RSSI>
    {
      static const char* value()
      {
        return "9b0ac0f131334a5e8f1429cde494febd";
      }

      static const char* value(const DUNE::IMC::RSSI& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RSSI>
    {
      static const char* value()
      {
        return "imc/RSSI";
      }

      static const char* value(const DUNE::IMC::RSSI& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RSSI>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RSSI& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RSSI>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RSSI& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RSSI& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RSSI& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VSWR>
    {
      static const char* value()
      {
        return "f07040a9c97b7380a9724e81ebf21692";
      }

      static const char* value(const DUNE::IMC::VSWR& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VSWR>
    {
      static const char* value()
      {
        return "imc/VSWR";
      }

      static const char* value(const DUNE::IMC::VSWR& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VSWR>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VSWR& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VSWR>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VSWR& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VSWR& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VSWR& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LinkLevel>
    {
      static const char* value()
      {
        return "bcf298baa0f1d7c619f1f03d64f74a3b";
      }

      static const char* value(const DUNE::IMC::LinkLevel& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LinkLevel>
    {
      static const char* value()
      {
        return "imc/LinkLevel";
      }

      static const char* value(const DUNE::IMC::LinkLevel& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LinkLevel>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LinkLevel& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LinkLevel>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LinkLevel& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LinkLevel& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LinkLevel& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Sms>
    {
      static const char* value()
      {
        return "8eb33957214d70c260d11877dee2b769";
      }

      static const char* value(const DUNE::IMC::Sms& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Sms>
    {
      static const char* value()
      {
        return "imc/Sms";
      }

      static const char* value(const DUNE::IMC::Sms& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Sms>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Sms& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Sms>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Sms& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Sms& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Sms& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SmsTx>
    {
      static const char* value()
      {
        return "2cdd75c67e432d96c48d13919d1dcede";
      }

      static const char* value(const DUNE::IMC::SmsTx& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SmsTx>
    {
      static const char* value()
      {
        return "imc/SmsTx";
      }

      static const char* value(const DUNE::IMC::SmsTx& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SmsTx>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SmsTx& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SmsTx>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SmsTx& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SmsTx& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SmsTx& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SmsRx>
    {
      static const char* value()
      {
        return "6ecf0e08a983da239c876962aa89eff3";
      }

      static const char* value(const DUNE::IMC::SmsRx& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SmsRx>
    {
      static const char* value()
      {
        return "imc/SmsRx";
      }

      static const char* value(const DUNE::IMC::SmsRx& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SmsRx>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SmsRx& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SmsRx>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SmsRx& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SmsRx& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SmsRx& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SmsState>
    {
      static const char* value()
      {
        return "b3a0c17483b5516e74c23c711baa4cf5";
      }

      static const char* value(const DUNE::IMC::SmsState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SmsState>
    {
      static const char* value()
      {
        return "imc/SmsState";
      }

      static const char* value(const DUNE::IMC::SmsState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SmsState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SmsState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SmsState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SmsState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SmsState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SmsState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TextMessage>
    {
      static const char* value()
      {
        return "4cfdd37e0650a6f266b942a8cd689880";
      }

      static const char* value(const DUNE::IMC::TextMessage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TextMessage>
    {
      static const char* value()
      {
        return "imc/TextMessage";
      }

      static const char* value(const DUNE::IMC::TextMessage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TextMessage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TextMessage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TextMessage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TextMessage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TextMessage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TextMessage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::IridiumMsgRx>
    {
      static const char* value()
      {
        return "055e3f5cfa0214fd56a78aebbd76118e";
      }

      static const char* value(const DUNE::IMC::IridiumMsgRx& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::IridiumMsgRx>
    {
      static const char* value()
      {
        return "imc/IridiumMsgRx";
      }

      static const char* value(const DUNE::IMC::IridiumMsgRx& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::IridiumMsgRx>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::IridiumMsgRx& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::IridiumMsgRx>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::IridiumMsgRx& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::IridiumMsgRx& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::IridiumMsgRx& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::IridiumMsgTx>
    {
      static const char* value()
      {
        return "b1655671b573bfe06d30325e08706e03";
      }

      static const char* value(const DUNE::IMC::IridiumMsgTx& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::IridiumMsgTx>
    {
      static const char* value()
      {
        return "imc/IridiumMsgTx";
      }

      static const char* value(const DUNE::IMC::IridiumMsgTx& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::IridiumMsgTx>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::IridiumMsgTx& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::IridiumMsgTx>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::IridiumMsgTx& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::IridiumMsgTx& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::IridiumMsgTx& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::IridiumTxStatus>
    {
      static const char* value()
      {
        return "12d63f820d11aa04688682b162b23a4c";
      }

      static const char* value(const DUNE::IMC::IridiumTxStatus& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::IridiumTxStatus>
    {
      static const char* value()
      {
        return "imc/IridiumTxStatus";
      }

      static const char* value(const DUNE::IMC::IridiumTxStatus& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::IridiumTxStatus>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::IridiumTxStatus& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::IridiumTxStatus>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::IridiumTxStatus& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::IridiumTxStatus& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::IridiumTxStatus& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GroupMembershipState>
    {
      static const char* value()
      {
        return "456d4fc5e8227cfd03f6ba115969cf86";
      }

      static const char* value(const DUNE::IMC::GroupMembershipState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GroupMembershipState>
    {
      static const char* value()
      {
        return "imc/GroupMembershipState";
      }

      static const char* value(const DUNE::IMC::GroupMembershipState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GroupMembershipState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GroupMembershipState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GroupMembershipState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GroupMembershipState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GroupMembershipState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GroupMembershipState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SystemGroup>
    {
      static const char* value()
      {
        return "2d882115ddd1e8b9a854cffadb0a7b8b";
      }

      static const char* value(const DUNE::IMC::SystemGroup& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SystemGroup>
    {
      static const char* value()
      {
        return "imc/SystemGroup";
      }

      static const char* value(const DUNE::IMC::SystemGroup& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SystemGroup>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SystemGroup& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SystemGroup>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SystemGroup& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SystemGroup& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SystemGroup& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LinkLatency>
    {
      static const char* value()
      {
        return "7ffd32f7df7f887be4d6b487717b6054";
      }

      static const char* value(const DUNE::IMC::LinkLatency& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LinkLatency>
    {
      static const char* value()
      {
        return "imc/LinkLatency";
      }

      static const char* value(const DUNE::IMC::LinkLatency& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LinkLatency>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LinkLatency& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LinkLatency>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LinkLatency& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LinkLatency& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LinkLatency& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ExtendedRSSI>
    {
      static const char* value()
      {
        return "36de17a1ca8a3b761b1a6e5adccbf819";
      }

      static const char* value(const DUNE::IMC::ExtendedRSSI& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ExtendedRSSI>
    {
      static const char* value()
      {
        return "imc/ExtendedRSSI";
      }

      static const char* value(const DUNE::IMC::ExtendedRSSI& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ExtendedRSSI>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ExtendedRSSI& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ExtendedRSSI>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ExtendedRSSI& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ExtendedRSSI& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ExtendedRSSI& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricData>
    {
      static const char* value()
      {
        return "d5e5e20d26d43cb61e3954a9470e0337";
      }

      static const char* value(const DUNE::IMC::HistoricData& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricData>
    {
      static const char* value()
      {
        return "imc/HistoricData";
      }

      static const char* value(const DUNE::IMC::HistoricData& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricData>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricData& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricData>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricData& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricData& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricData& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CompressedHistory>
    {
      static const char* value()
      {
        return "436a4f7f21d0707882a21e53de3cbf67";
      }

      static const char* value(const DUNE::IMC::CompressedHistory& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CompressedHistory>
    {
      static const char* value()
      {
        return "imc/CompressedHistory";
      }

      static const char* value(const DUNE::IMC::CompressedHistory& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CompressedHistory>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CompressedHistory& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CompressedHistory>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CompressedHistory& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CompressedHistory& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CompressedHistory& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricSample>
    {
      static const char* value()
      {
        return "4c7d74b70a88248bcee16f56727b170f";
      }

      static const char* value(const DUNE::IMC::HistoricSample& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricSample>
    {
      static const char* value()
      {
        return "imc/HistoricSample";
      }

      static const char* value(const DUNE::IMC::HistoricSample& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricSample>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricSample& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricSample>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricSample& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricSample& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricSample& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::HistoricDataQuery>
    {
      static const char* value()
      {
        return "a3db572ccb42ac29639e4be65201e71c";
      }

      static const char* value(const DUNE::IMC::HistoricDataQuery& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::HistoricDataQuery>
    {
      static const char* value()
      {
        return "imc/HistoricDataQuery";
      }

      static const char* value(const DUNE::IMC::HistoricDataQuery& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::HistoricDataQuery>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::HistoricDataQuery& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::HistoricDataQuery>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::HistoricDataQuery& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::HistoricDataQuery& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::HistoricDataQuery& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RemoteCommand>
    {
      static const char* value()
      {
        return "f67577db7cbd5e5fc1d502197695b1f0";
      }

      static const char* value(const DUNE::IMC::RemoteCommand& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RemoteCommand>
    {
      static const char* value()
      {
        return "imc/RemoteCommand";
      }

      static const char* value(const DUNE::IMC::RemoteCommand& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RemoteCommand>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RemoteCommand& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RemoteCommand>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RemoteCommand& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RemoteCommand& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RemoteCommand& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LblRange>
    {
      static const char* value()
      {
        return "18e496fdbcf299ef02f3e9a6be84f643";
      }

      static const char* value(const DUNE::IMC::LblRange& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LblRange>
    {
      static const char* value()
      {
        return "imc/LblRange";
      }

      static const char* value(const DUNE::IMC::LblRange& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LblRange>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LblRange& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LblRange>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LblRange& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LblRange& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LblRange& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LblBeacon>
    {
      static const char* value()
      {
        return "05d13904e840f1f1b6867e9eccd0e16d";
      }

      static const char* value(const DUNE::IMC::LblBeacon& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LblBeacon>
    {
      static const char* value()
      {
        return "imc/LblBeacon";
      }

      static const char* value(const DUNE::IMC::LblBeacon& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LblBeacon>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LblBeacon& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LblBeacon>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LblBeacon& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LblBeacon& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LblBeacon& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LblConfig>
    {
      static const char* value()
      {
        return "90cd9afc4703ec05f619296414879716";
      }

      static const char* value(const DUNE::IMC::LblConfig& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LblConfig>
    {
      static const char* value()
      {
        return "imc/LblConfig";
      }

      static const char* value(const DUNE::IMC::LblConfig& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LblConfig>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LblConfig& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LblConfig>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LblConfig& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LblConfig& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LblConfig& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AcousticMessage>
    {
      static const char* value()
      {
        return "b4b8310d073b0f27147f9d7802563687";
      }

      static const char* value(const DUNE::IMC::AcousticMessage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AcousticMessage>
    {
      static const char* value()
      {
        return "imc/AcousticMessage";
      }

      static const char* value(const DUNE::IMC::AcousticMessage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AcousticMessage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AcousticMessage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AcousticMessage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AcousticMessage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AcousticMessage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AcousticMessage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AcousticOperation>
    {
      static const char* value()
      {
        return "c05900ebb8bfb7e267d3589e9cd6f67e";
      }

      static const char* value(const DUNE::IMC::AcousticOperation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AcousticOperation>
    {
      static const char* value()
      {
        return "imc/AcousticOperation";
      }

      static const char* value(const DUNE::IMC::AcousticOperation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AcousticOperation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AcousticOperation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AcousticOperation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AcousticOperation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AcousticOperation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AcousticOperation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AcousticSystemsQuery>
    {
      static const char* value()
      {
        return "f0e6ef7ec71b049307f3e1ec67d99fac";
      }

      static const char* value(const DUNE::IMC::AcousticSystemsQuery& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AcousticSystemsQuery>
    {
      static const char* value()
      {
        return "imc/AcousticSystemsQuery";
      }

      static const char* value(const DUNE::IMC::AcousticSystemsQuery& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AcousticSystemsQuery>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AcousticSystemsQuery& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AcousticSystemsQuery>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AcousticSystemsQuery& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AcousticSystemsQuery& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AcousticSystemsQuery& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AcousticSystems>
    {
      static const char* value()
      {
        return "8ad24048fac3bb3fddd7d74a71d49ab5";
      }

      static const char* value(const DUNE::IMC::AcousticSystems& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AcousticSystems>
    {
      static const char* value()
      {
        return "imc/AcousticSystems";
      }

      static const char* value(const DUNE::IMC::AcousticSystems& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AcousticSystems>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AcousticSystems& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AcousticSystems>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AcousticSystems& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AcousticSystems& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AcousticSystems& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AcousticLink>
    {
      static const char* value()
      {
        return "5dc00f20e2666c91ce76fd594055defa";
      }

      static const char* value(const DUNE::IMC::AcousticLink& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AcousticLink>
    {
      static const char* value()
      {
        return "imc/AcousticLink";
      }

      static const char* value(const DUNE::IMC::AcousticLink& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AcousticLink>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AcousticLink& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AcousticLink>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AcousticLink& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AcousticLink& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AcousticLink& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Rpm>
    {
      static const char* value()
      {
        return "f0ab93e6aecfbd044decb781f1dc7291";
      }

      static const char* value(const DUNE::IMC::Rpm& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Rpm>
    {
      static const char* value()
      {
        return "imc/Rpm";
      }

      static const char* value(const DUNE::IMC::Rpm& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Rpm>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Rpm& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Rpm>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Rpm& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Rpm& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Rpm& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Voltage>
    {
      static const char* value()
      {
        return "da0050539a3fb905751b64cf068ae093";
      }

      static const char* value(const DUNE::IMC::Voltage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Voltage>
    {
      static const char* value()
      {
        return "imc/Voltage";
      }

      static const char* value(const DUNE::IMC::Voltage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Voltage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Voltage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Voltage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Voltage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Voltage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Voltage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Current>
    {
      static const char* value()
      {
        return "b44cd80f14e8c8f1f0feaf609ab28cff";
      }

      static const char* value(const DUNE::IMC::Current& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Current>
    {
      static const char* value()
      {
        return "imc/Current";
      }

      static const char* value(const DUNE::IMC::Current& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Current>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Current& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Current>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Current& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Current& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Current& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GpsFix>
    {
      static const char* value()
      {
        return "938c1dd6a59d540e750894e7e56ef211";
      }

      static const char* value(const DUNE::IMC::GpsFix& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GpsFix>
    {
      static const char* value()
      {
        return "imc/GpsFix";
      }

      static const char* value(const DUNE::IMC::GpsFix& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GpsFix>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GpsFix& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GpsFix>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GpsFix& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GpsFix& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GpsFix& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EulerAngles>
    {
      static const char* value()
      {
        return "aeac26199b345357b6e88d9c08ba1b54";
      }

      static const char* value(const DUNE::IMC::EulerAngles& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EulerAngles>
    {
      static const char* value()
      {
        return "imc/EulerAngles";
      }

      static const char* value(const DUNE::IMC::EulerAngles& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EulerAngles>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EulerAngles& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EulerAngles>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EulerAngles& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EulerAngles& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EulerAngles& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EulerAnglesDelta>
    {
      static const char* value()
      {
        return "db73647efcf368835cb5a1e6a244d859";
      }

      static const char* value(const DUNE::IMC::EulerAnglesDelta& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EulerAnglesDelta>
    {
      static const char* value()
      {
        return "imc/EulerAnglesDelta";
      }

      static const char* value(const DUNE::IMC::EulerAnglesDelta& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EulerAnglesDelta>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EulerAnglesDelta& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EulerAnglesDelta>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EulerAnglesDelta& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EulerAnglesDelta& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EulerAnglesDelta& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AngularVelocity>
    {
      static const char* value()
      {
        return "363782945f63f60ff7659d8ee838e926";
      }

      static const char* value(const DUNE::IMC::AngularVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AngularVelocity>
    {
      static const char* value()
      {
        return "imc/AngularVelocity";
      }

      static const char* value(const DUNE::IMC::AngularVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AngularVelocity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AngularVelocity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AngularVelocity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AngularVelocity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AngularVelocity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AngularVelocity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Acceleration>
    {
      static const char* value()
      {
        return "8f282b6f1155cb37704a5ca309f727b1";
      }

      static const char* value(const DUNE::IMC::Acceleration& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Acceleration>
    {
      static const char* value()
      {
        return "imc/Acceleration";
      }

      static const char* value(const DUNE::IMC::Acceleration& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Acceleration>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Acceleration& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Acceleration>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Acceleration& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Acceleration& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Acceleration& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::MagneticField>
    {
      static const char* value()
      {
        return "0f2c5bf2c987289d9c1b972eb34ac16b";
      }

      static const char* value(const DUNE::IMC::MagneticField& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::MagneticField>
    {
      static const char* value()
      {
        return "imc/MagneticField";
      }

      static const char* value(const DUNE::IMC::MagneticField& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::MagneticField>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::MagneticField& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::MagneticField>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::MagneticField& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::MagneticField& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::MagneticField& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GroundVelocity>
    {
      static const char* value()
      {
        return "9831663f053020cc0426de774aeb8a44";
      }

      static const char* value(const DUNE::IMC::GroundVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GroundVelocity>
    {
      static const char* value()
      {
        return "imc/GroundVelocity";
      }

      static const char* value(const DUNE::IMC::GroundVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GroundVelocity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GroundVelocity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GroundVelocity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GroundVelocity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GroundVelocity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GroundVelocity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::WaterVelocity>
    {
      static const char* value()
      {
        return "87f3697085f9ae52341e17eff8a90bf3";
      }

      static const char* value(const DUNE::IMC::WaterVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::WaterVelocity>
    {
      static const char* value()
      {
        return "imc/WaterVelocity";
      }

      static const char* value(const DUNE::IMC::WaterVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::WaterVelocity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::WaterVelocity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::WaterVelocity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::WaterVelocity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::WaterVelocity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::WaterVelocity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VelocityDelta>
    {
      static const char* value()
      {
        return "10c93bdb464a14cfc9b48cdb9482c101";
      }

      static const char* value(const DUNE::IMC::VelocityDelta& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VelocityDelta>
    {
      static const char* value()
      {
        return "imc/VelocityDelta";
      }

      static const char* value(const DUNE::IMC::VelocityDelta& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VelocityDelta>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VelocityDelta& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VelocityDelta>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VelocityDelta& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VelocityDelta& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VelocityDelta& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Distance>
    {
      static const char* value()
      {
        return "f0bd569806634d9eb4a5da613a89ce20";
      }

      static const char* value(const DUNE::IMC::Distance& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Distance>
    {
      static const char* value()
      {
        return "imc/Distance";
      }

      static const char* value(const DUNE::IMC::Distance& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Distance>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Distance& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Distance>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Distance& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Distance& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Distance& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Temperature>
    {
      static const char* value()
      {
        return "5f9815206a965133fd3fe4050ae436b0";
      }

      static const char* value(const DUNE::IMC::Temperature& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Temperature>
    {
      static const char* value()
      {
        return "imc/Temperature";
      }

      static const char* value(const DUNE::IMC::Temperature& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Temperature>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Temperature& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Temperature>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Temperature& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Temperature& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Temperature& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Pressure>
    {
      static const char* value()
      {
        return "9eaabc0119510e58f5a1d769dcc6f3e8";
      }

      static const char* value(const DUNE::IMC::Pressure& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Pressure>
    {
      static const char* value()
      {
        return "imc/Pressure";
      }

      static const char* value(const DUNE::IMC::Pressure& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Pressure>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Pressure& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Pressure>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Pressure& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Pressure& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Pressure& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Depth>
    {
      static const char* value()
      {
        return "606c222b151362426fb4a4160c762694";
      }

      static const char* value(const DUNE::IMC::Depth& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Depth>
    {
      static const char* value()
      {
        return "imc/Depth";
      }

      static const char* value(const DUNE::IMC::Depth& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Depth>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Depth& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Depth>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Depth& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Depth& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Depth& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DepthOffset>
    {
      static const char* value()
      {
        return "010a24eb60f087b116f06ceee284e472";
      }

      static const char* value(const DUNE::IMC::DepthOffset& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DepthOffset>
    {
      static const char* value()
      {
        return "imc/DepthOffset";
      }

      static const char* value(const DUNE::IMC::DepthOffset& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DepthOffset>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DepthOffset& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DepthOffset>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DepthOffset& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DepthOffset& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DepthOffset& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SoundSpeed>
    {
      static const char* value()
      {
        return "2804525bcff44c8e44142d56674f60a5";
      }

      static const char* value(const DUNE::IMC::SoundSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SoundSpeed>
    {
      static const char* value()
      {
        return "imc/SoundSpeed";
      }

      static const char* value(const DUNE::IMC::SoundSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SoundSpeed>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SoundSpeed& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SoundSpeed>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SoundSpeed& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SoundSpeed& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SoundSpeed& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::WaterDensity>
    {
      static const char* value()
      {
        return "1065803da2b040ee75a82f3a2a43333d";
      }

      static const char* value(const DUNE::IMC::WaterDensity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::WaterDensity>
    {
      static const char* value()
      {
        return "imc/WaterDensity";
      }

      static const char* value(const DUNE::IMC::WaterDensity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::WaterDensity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::WaterDensity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::WaterDensity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::WaterDensity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::WaterDensity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::WaterDensity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Conductivity>
    {
      static const char* value()
      {
        return "36e3b5e5612fbc58d0ae906672aaee54";
      }

      static const char* value(const DUNE::IMC::Conductivity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Conductivity>
    {
      static const char* value()
      {
        return "imc/Conductivity";
      }

      static const char* value(const DUNE::IMC::Conductivity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Conductivity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Conductivity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Conductivity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Conductivity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Conductivity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Conductivity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Salinity>
    {
      static const char* value()
      {
        return "db91194bede3e56b14154d5df0dc81d6";
      }

      static const char* value(const DUNE::IMC::Salinity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Salinity>
    {
      static const char* value()
      {
        return "imc/Salinity";
      }

      static const char* value(const DUNE::IMC::Salinity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Salinity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Salinity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Salinity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Salinity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Salinity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Salinity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::WindSpeed>
    {
      static const char* value()
      {
        return "881ea81a504acde63d2ee805634370ff";
      }

      static const char* value(const DUNE::IMC::WindSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::WindSpeed>
    {
      static const char* value()
      {
        return "imc/WindSpeed";
      }

      static const char* value(const DUNE::IMC::WindSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::WindSpeed>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::WindSpeed& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::WindSpeed>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::WindSpeed& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::WindSpeed& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::WindSpeed& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RelativeHumidity>
    {
      static const char* value()
      {
        return "b98a072c00fa9a6530ef2b8f9b66807d";
      }

      static const char* value(const DUNE::IMC::RelativeHumidity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RelativeHumidity>
    {
      static const char* value()
      {
        return "imc/RelativeHumidity";
      }

      static const char* value(const DUNE::IMC::RelativeHumidity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RelativeHumidity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RelativeHumidity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RelativeHumidity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RelativeHumidity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RelativeHumidity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RelativeHumidity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DevDataText>
    {
      static const char* value()
      {
        return "caaacf3d66bb3fe98b3c89117386b4ec";
      }

      static const char* value(const DUNE::IMC::DevDataText& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DevDataText>
    {
      static const char* value()
      {
        return "imc/DevDataText";
      }

      static const char* value(const DUNE::IMC::DevDataText& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DevDataText>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DevDataText& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DevDataText>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DevDataText& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DevDataText& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DevDataText& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DevDataBinary>
    {
      static const char* value()
      {
        return "89b3d7885424e9050a0ac9568f97f861";
      }

      static const char* value(const DUNE::IMC::DevDataBinary& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DevDataBinary>
    {
      static const char* value()
      {
        return "imc/DevDataBinary";
      }

      static const char* value(const DUNE::IMC::DevDataBinary& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DevDataBinary>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DevDataBinary& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DevDataBinary>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DevDataBinary& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DevDataBinary& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DevDataBinary& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SonarData>
    {
      static const char* value()
      {
        return "f25824c170f2fe41a033f7a45c476dde";
      }

      static const char* value(const DUNE::IMC::SonarData& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SonarData>
    {
      static const char* value()
      {
        return "imc/SonarData";
      }

      static const char* value(const DUNE::IMC::SonarData& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SonarData>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SonarData& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SonarData>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SonarData& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SonarData& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SonarData& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Pulse>
    {
      static const char* value()
      {
        return "401c99a475d2b17f3aa3d4533b817eb4";
      }

      static const char* value(const DUNE::IMC::Pulse& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Pulse>
    {
      static const char* value()
      {
        return "imc/Pulse";
      }

      static const char* value(const DUNE::IMC::Pulse& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Pulse>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Pulse& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Pulse>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Pulse& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Pulse& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Pulse& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PulseDetectionControl>
    {
      static const char* value()
      {
        return "68899189c24de61e4dfe31bce9007521";
      }

      static const char* value(const DUNE::IMC::PulseDetectionControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PulseDetectionControl>
    {
      static const char* value()
      {
        return "imc/PulseDetectionControl";
      }

      static const char* value(const DUNE::IMC::PulseDetectionControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PulseDetectionControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PulseDetectionControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PulseDetectionControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PulseDetectionControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PulseDetectionControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PulseDetectionControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FuelLevel>
    {
      static const char* value()
      {
        return "5fdf2925904d08bcfc8801fec30b8c80";
      }

      static const char* value(const DUNE::IMC::FuelLevel& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FuelLevel>
    {
      static const char* value()
      {
        return "imc/FuelLevel";
      }

      static const char* value(const DUNE::IMC::FuelLevel& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FuelLevel>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FuelLevel& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FuelLevel>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FuelLevel& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FuelLevel& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FuelLevel& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GpsNavData>
    {
      static const char* value()
      {
        return "67382df2f795fcf602c3b7e160d6284e";
      }

      static const char* value(const DUNE::IMC::GpsNavData& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GpsNavData>
    {
      static const char* value()
      {
        return "imc/GpsNavData";
      }

      static const char* value(const DUNE::IMC::GpsNavData& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GpsNavData>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GpsNavData& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GpsNavData>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GpsNavData& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GpsNavData& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GpsNavData& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ServoPosition>
    {
      static const char* value()
      {
        return "67024d7fa1c025c181d27aca51a6b73c";
      }

      static const char* value(const DUNE::IMC::ServoPosition& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ServoPosition>
    {
      static const char* value()
      {
        return "imc/ServoPosition";
      }

      static const char* value(const DUNE::IMC::ServoPosition& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ServoPosition>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ServoPosition& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ServoPosition>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ServoPosition& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ServoPosition& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ServoPosition& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DeviceState>
    {
      static const char* value()
      {
        return "3b40a41909a8ecdac7c01e61c9dc72a9";
      }

      static const char* value(const DUNE::IMC::DeviceState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DeviceState>
    {
      static const char* value()
      {
        return "imc/DeviceState";
      }

      static const char* value(const DUNE::IMC::DeviceState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DeviceState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DeviceState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DeviceState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DeviceState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DeviceState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DeviceState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::BeamConfig>
    {
      static const char* value()
      {
        return "73c639d1151b65999e22b08a98a32338";
      }

      static const char* value(const DUNE::IMC::BeamConfig& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::BeamConfig>
    {
      static const char* value()
      {
        return "imc/BeamConfig";
      }

      static const char* value(const DUNE::IMC::BeamConfig& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::BeamConfig>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::BeamConfig& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::BeamConfig>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::BeamConfig& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::BeamConfig& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::BeamConfig& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DataSanity>
    {
      static const char* value()
      {
        return "7474d469e8e5b1326e5b8d14e6fabddc";
      }

      static const char* value(const DUNE::IMC::DataSanity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DataSanity>
    {
      static const char* value()
      {
        return "imc/DataSanity";
      }

      static const char* value(const DUNE::IMC::DataSanity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DataSanity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DataSanity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DataSanity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DataSanity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DataSanity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DataSanity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RhodamineDye>
    {
      static const char* value()
      {
        return "5a215730755c1192a7238a0906fb2a27";
      }

      static const char* value(const DUNE::IMC::RhodamineDye& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RhodamineDye>
    {
      static const char* value()
      {
        return "imc/RhodamineDye";
      }

      static const char* value(const DUNE::IMC::RhodamineDye& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RhodamineDye>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RhodamineDye& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RhodamineDye>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RhodamineDye& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RhodamineDye& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RhodamineDye& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CrudeOil>
    {
      static const char* value()
      {
        return "9e4a9972a2d6d59d790004c7f73868fc";
      }

      static const char* value(const DUNE::IMC::CrudeOil& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CrudeOil>
    {
      static const char* value()
      {
        return "imc/CrudeOil";
      }

      static const char* value(const DUNE::IMC::CrudeOil& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CrudeOil>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CrudeOil& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CrudeOil>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CrudeOil& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CrudeOil& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CrudeOil& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FineOil>
    {
      static const char* value()
      {
        return "84132819cd5c5f2483ed7f1eedd2ed0b";
      }

      static const char* value(const DUNE::IMC::FineOil& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FineOil>
    {
      static const char* value()
      {
        return "imc/FineOil";
      }

      static const char* value(const DUNE::IMC::FineOil& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FineOil>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FineOil& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FineOil>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FineOil& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FineOil& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FineOil& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Turbidity>
    {
      static const char* value()
      {
        return "e70f76816c4d5f2c307bbb7dae3615e5";
      }

      static const char* value(const DUNE::IMC::Turbidity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Turbidity>
    {
      static const char* value()
      {
        return "imc/Turbidity";
      }

      static const char* value(const DUNE::IMC::Turbidity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Turbidity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Turbidity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Turbidity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Turbidity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Turbidity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Turbidity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Chlorophyll>
    {
      static const char* value()
      {
        return "00a69fb33858120ecce8f0a51202f21a";
      }

      static const char* value(const DUNE::IMC::Chlorophyll& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Chlorophyll>
    {
      static const char* value()
      {
        return "imc/Chlorophyll";
      }

      static const char* value(const DUNE::IMC::Chlorophyll& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Chlorophyll>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Chlorophyll& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Chlorophyll>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Chlorophyll& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Chlorophyll& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Chlorophyll& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Fluorescein>
    {
      static const char* value()
      {
        return "a376938f04bca44c37c46164c709298f";
      }

      static const char* value(const DUNE::IMC::Fluorescein& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Fluorescein>
    {
      static const char* value()
      {
        return "imc/Fluorescein";
      }

      static const char* value(const DUNE::IMC::Fluorescein& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Fluorescein>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Fluorescein& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Fluorescein>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Fluorescein& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Fluorescein& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Fluorescein& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Phycocyanin>
    {
      static const char* value()
      {
        return "a4d517cdef6deafde7ca19d6332c9893";
      }

      static const char* value(const DUNE::IMC::Phycocyanin& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Phycocyanin>
    {
      static const char* value()
      {
        return "imc/Phycocyanin";
      }

      static const char* value(const DUNE::IMC::Phycocyanin& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Phycocyanin>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Phycocyanin& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Phycocyanin>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Phycocyanin& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Phycocyanin& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Phycocyanin& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Phycoerythrin>
    {
      static const char* value()
      {
        return "8439dfc91b72b7d173408e7015ae74ad";
      }

      static const char* value(const DUNE::IMC::Phycoerythrin& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Phycoerythrin>
    {
      static const char* value()
      {
        return "imc/Phycoerythrin";
      }

      static const char* value(const DUNE::IMC::Phycoerythrin& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Phycoerythrin>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Phycoerythrin& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Phycoerythrin>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Phycoerythrin& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Phycoerythrin& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Phycoerythrin& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GpsFixRtk>
    {
      static const char* value()
      {
        return "c609475c71ac9b9b6b4ad19f6bb3f0c9";
      }

      static const char* value(const DUNE::IMC::GpsFixRtk& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GpsFixRtk>
    {
      static const char* value()
      {
        return "imc/GpsFixRtk";
      }

      static const char* value(const DUNE::IMC::GpsFixRtk& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GpsFixRtk>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GpsFixRtk& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GpsFixRtk>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GpsFixRtk& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GpsFixRtk& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GpsFixRtk& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ExternalNavData>
    {
      static const char* value()
      {
        return "befefebedaa037dad7acf4e3804ab85d";
      }

      static const char* value(const DUNE::IMC::ExternalNavData& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ExternalNavData>
    {
      static const char* value()
      {
        return "imc/ExternalNavData";
      }

      static const char* value(const DUNE::IMC::ExternalNavData& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ExternalNavData>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ExternalNavData& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ExternalNavData>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ExternalNavData& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ExternalNavData& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ExternalNavData& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DissolvedOxygen>
    {
      static const char* value()
      {
        return "2df3f4b2dd394457079c436b37cc781a";
      }

      static const char* value(const DUNE::IMC::DissolvedOxygen& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DissolvedOxygen>
    {
      static const char* value()
      {
        return "imc/DissolvedOxygen";
      }

      static const char* value(const DUNE::IMC::DissolvedOxygen& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DissolvedOxygen>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DissolvedOxygen& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DissolvedOxygen>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DissolvedOxygen& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DissolvedOxygen& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DissolvedOxygen& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AirSaturation>
    {
      static const char* value()
      {
        return "9bc376cf32127762b1a0708b1b08517a";
      }

      static const char* value(const DUNE::IMC::AirSaturation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AirSaturation>
    {
      static const char* value()
      {
        return "imc/AirSaturation";
      }

      static const char* value(const DUNE::IMC::AirSaturation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AirSaturation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AirSaturation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AirSaturation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AirSaturation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AirSaturation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AirSaturation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Throttle>
    {
      static const char* value()
      {
        return "efcc70e55673973327f1c73db7d33701";
      }

      static const char* value(const DUNE::IMC::Throttle& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Throttle>
    {
      static const char* value()
      {
        return "imc/Throttle";
      }

      static const char* value(const DUNE::IMC::Throttle& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Throttle>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Throttle& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Throttle>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Throttle& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Throttle& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Throttle& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PH>
    {
      static const char* value()
      {
        return "4123441d15555ca6ff209b43a10bf470";
      }

      static const char* value(const DUNE::IMC::PH& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PH>
    {
      static const char* value()
      {
        return "imc/PH";
      }

      static const char* value(const DUNE::IMC::PH& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PH>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PH& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PH>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PH& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PH& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PH& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Redox>
    {
      static const char* value()
      {
        return "0f07f5d27e45724060a42cc320917d73";
      }

      static const char* value(const DUNE::IMC::Redox& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Redox>
    {
      static const char* value()
      {
        return "imc/Redox";
      }

      static const char* value(const DUNE::IMC::Redox& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Redox>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Redox& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Redox>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Redox& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Redox& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Redox& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CameraZoom>
    {
      static const char* value()
      {
        return "7dd56ea8a333d0053976032710ff4c2a";
      }

      static const char* value(const DUNE::IMC::CameraZoom& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CameraZoom>
    {
      static const char* value()
      {
        return "imc/CameraZoom";
      }

      static const char* value(const DUNE::IMC::CameraZoom& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CameraZoom>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CameraZoom& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CameraZoom>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CameraZoom& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CameraZoom& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CameraZoom& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetThrusterActuation>
    {
      static const char* value()
      {
        return "1fa2fb863ad837c6cc0086064a7f206f";
      }

      static const char* value(const DUNE::IMC::SetThrusterActuation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetThrusterActuation>
    {
      static const char* value()
      {
        return "imc/SetThrusterActuation";
      }

      static const char* value(const DUNE::IMC::SetThrusterActuation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetThrusterActuation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetThrusterActuation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetThrusterActuation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetThrusterActuation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetThrusterActuation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetThrusterActuation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetServoPosition>
    {
      static const char* value()
      {
        return "64bf8efe24ad60435e0bcdffdac1eed9";
      }

      static const char* value(const DUNE::IMC::SetServoPosition& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetServoPosition>
    {
      static const char* value()
      {
        return "imc/SetServoPosition";
      }

      static const char* value(const DUNE::IMC::SetServoPosition& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetServoPosition>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetServoPosition& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetServoPosition>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetServoPosition& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetServoPosition& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetServoPosition& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetControlSurfaceDeflection>
    {
      static const char* value()
      {
        return "a45683527d88023531301d603cc7e9be";
      }

      static const char* value(const DUNE::IMC::SetControlSurfaceDeflection& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetControlSurfaceDeflection>
    {
      static const char* value()
      {
        return "imc/SetControlSurfaceDeflection";
      }

      static const char* value(const DUNE::IMC::SetControlSurfaceDeflection& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetControlSurfaceDeflection>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetControlSurfaceDeflection& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetControlSurfaceDeflection>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetControlSurfaceDeflection& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetControlSurfaceDeflection& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetControlSurfaceDeflection& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RemoteActionsRequest>
    {
      static const char* value()
      {
        return "5a59db1e2ca7d454cc266c126aea2dd3";
      }

      static const char* value(const DUNE::IMC::RemoteActionsRequest& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RemoteActionsRequest>
    {
      static const char* value()
      {
        return "imc/RemoteActionsRequest";
      }

      static const char* value(const DUNE::IMC::RemoteActionsRequest& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RemoteActionsRequest>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RemoteActionsRequest& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RemoteActionsRequest>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RemoteActionsRequest& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RemoteActionsRequest& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RemoteActionsRequest& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RemoteActions>
    {
      static const char* value()
      {
        return "35ea1868ab07cc7da913175c4c2064b6";
      }

      static const char* value(const DUNE::IMC::RemoteActions& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RemoteActions>
    {
      static const char* value()
      {
        return "imc/RemoteActions";
      }

      static const char* value(const DUNE::IMC::RemoteActions& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RemoteActions>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RemoteActions& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RemoteActions>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RemoteActions& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RemoteActions& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RemoteActions& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ButtonEvent>
    {
      static const char* value()
      {
        return "07c3aa53b1805fe7e0924ad5173f842e";
      }

      static const char* value(const DUNE::IMC::ButtonEvent& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ButtonEvent>
    {
      static const char* value()
      {
        return "imc/ButtonEvent";
      }

      static const char* value(const DUNE::IMC::ButtonEvent& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ButtonEvent>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ButtonEvent& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ButtonEvent>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ButtonEvent& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ButtonEvent& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ButtonEvent& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LcdControl>
    {
      static const char* value()
      {
        return "fb311e3e2379d57ebd64cf391370d6df";
      }

      static const char* value(const DUNE::IMC::LcdControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LcdControl>
    {
      static const char* value()
      {
        return "imc/LcdControl";
      }

      static const char* value(const DUNE::IMC::LcdControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LcdControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LcdControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LcdControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LcdControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LcdControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LcdControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PowerOperation>
    {
      static const char* value()
      {
        return "8a12566f076f84a29240cd69f2e40ffa";
      }

      static const char* value(const DUNE::IMC::PowerOperation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PowerOperation>
    {
      static const char* value()
      {
        return "imc/PowerOperation";
      }

      static const char* value(const DUNE::IMC::PowerOperation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PowerOperation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PowerOperation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PowerOperation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PowerOperation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PowerOperation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PowerOperation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PowerChannelControl>
    {
      static const char* value()
      {
        return "b48364529b8f0fd8f63a691a00be55fe";
      }

      static const char* value(const DUNE::IMC::PowerChannelControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PowerChannelControl>
    {
      static const char* value()
      {
        return "imc/PowerChannelControl";
      }

      static const char* value(const DUNE::IMC::PowerChannelControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PowerChannelControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PowerChannelControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PowerChannelControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PowerChannelControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PowerChannelControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PowerChannelControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::QueryPowerChannelState>
    {
      static const char* value()
      {
        return "7a8fbcd2ea50eb5f1528086bcfdad11c";
      }

      static const char* value(const DUNE::IMC::QueryPowerChannelState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::QueryPowerChannelState>
    {
      static const char* value()
      {
        return "imc/QueryPowerChannelState";
      }

      static const char* value(const DUNE::IMC::QueryPowerChannelState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::QueryPowerChannelState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::QueryPowerChannelState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::QueryPowerChannelState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::QueryPowerChannelState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::QueryPowerChannelState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::QueryPowerChannelState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PowerChannelState>
    {
      static const char* value()
      {
        return "e22f22e1e9c510dce3ad1ae3ee928d8d";
      }

      static const char* value(const DUNE::IMC::PowerChannelState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PowerChannelState>
    {
      static const char* value()
      {
        return "imc/PowerChannelState";
      }

      static const char* value(const DUNE::IMC::PowerChannelState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PowerChannelState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PowerChannelState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PowerChannelState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PowerChannelState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PowerChannelState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PowerChannelState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LedBrightness>
    {
      static const char* value()
      {
        return "6ab61e40ed6367feac94a7065ac65f58";
      }

      static const char* value(const DUNE::IMC::LedBrightness& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LedBrightness>
    {
      static const char* value()
      {
        return "imc/LedBrightness";
      }

      static const char* value(const DUNE::IMC::LedBrightness& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LedBrightness>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LedBrightness& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LedBrightness>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LedBrightness& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LedBrightness& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LedBrightness& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::QueryLedBrightness>
    {
      static const char* value()
      {
        return "d65888f0c727ccfd0b380a3ec7b387bf";
      }

      static const char* value(const DUNE::IMC::QueryLedBrightness& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::QueryLedBrightness>
    {
      static const char* value()
      {
        return "imc/QueryLedBrightness";
      }

      static const char* value(const DUNE::IMC::QueryLedBrightness& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::QueryLedBrightness>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::QueryLedBrightness& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::QueryLedBrightness>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::QueryLedBrightness& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::QueryLedBrightness& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::QueryLedBrightness& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetLedBrightness>
    {
      static const char* value()
      {
        return "92d53c04314bdacb1e982423e30d4ba1";
      }

      static const char* value(const DUNE::IMC::SetLedBrightness& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetLedBrightness>
    {
      static const char* value()
      {
        return "imc/SetLedBrightness";
      }

      static const char* value(const DUNE::IMC::SetLedBrightness& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetLedBrightness>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetLedBrightness& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetLedBrightness>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetLedBrightness& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetLedBrightness& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetLedBrightness& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetPWM>
    {
      static const char* value()
      {
        return "8af1a82c3a45669580bd7293abeb8afc";
      }

      static const char* value(const DUNE::IMC::SetPWM& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetPWM>
    {
      static const char* value()
      {
        return "imc/SetPWM";
      }

      static const char* value(const DUNE::IMC::SetPWM& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetPWM>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetPWM& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetPWM>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetPWM& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetPWM& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetPWM& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PWM>
    {
      static const char* value()
      {
        return "3107c694ff54b0af1be724ea6af590cc";
      }

      static const char* value(const DUNE::IMC::PWM& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PWM>
    {
      static const char* value()
      {
        return "imc/PWM";
      }

      static const char* value(const DUNE::IMC::PWM& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PWM>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PWM& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PWM>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PWM& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PWM& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PWM& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EstimatedState>
    {
      static const char* value()
      {
        return "e2413728bdbdcf82b256a4996f12c20e";
      }

      static const char* value(const DUNE::IMC::EstimatedState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EstimatedState>
    {
      static const char* value()
      {
        return "imc/EstimatedState";
      }

      static const char* value(const DUNE::IMC::EstimatedState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EstimatedState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EstimatedState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EstimatedState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EstimatedState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EstimatedState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EstimatedState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EstimatedStreamVelocity>
    {
      static const char* value()
      {
        return "18ecf5bc6272f51972af17ef4ab51254";
      }

      static const char* value(const DUNE::IMC::EstimatedStreamVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EstimatedStreamVelocity>
    {
      static const char* value()
      {
        return "imc/EstimatedStreamVelocity";
      }

      static const char* value(const DUNE::IMC::EstimatedStreamVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EstimatedStreamVelocity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EstimatedStreamVelocity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EstimatedStreamVelocity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EstimatedStreamVelocity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EstimatedStreamVelocity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EstimatedStreamVelocity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::IndicatedSpeed>
    {
      static const char* value()
      {
        return "21f254af6fdb5bee03d6aab71b4052ff";
      }

      static const char* value(const DUNE::IMC::IndicatedSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::IndicatedSpeed>
    {
      static const char* value()
      {
        return "imc/IndicatedSpeed";
      }

      static const char* value(const DUNE::IMC::IndicatedSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::IndicatedSpeed>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::IndicatedSpeed& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::IndicatedSpeed>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::IndicatedSpeed& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::IndicatedSpeed& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::IndicatedSpeed& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrueSpeed>
    {
      static const char* value()
      {
        return "d48c0d5921af6872d15024c91abf9150";
      }

      static const char* value(const DUNE::IMC::TrueSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrueSpeed>
    {
      static const char* value()
      {
        return "imc/TrueSpeed";
      }

      static const char* value(const DUNE::IMC::TrueSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrueSpeed>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrueSpeed& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrueSpeed>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrueSpeed& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrueSpeed& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrueSpeed& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::NavigationUncertainty>
    {
      static const char* value()
      {
        return "c0f147069facfb92ba0c494a273d942a";
      }

      static const char* value(const DUNE::IMC::NavigationUncertainty& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::NavigationUncertainty>
    {
      static const char* value()
      {
        return "imc/NavigationUncertainty";
      }

      static const char* value(const DUNE::IMC::NavigationUncertainty& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::NavigationUncertainty>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::NavigationUncertainty& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::NavigationUncertainty>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::NavigationUncertainty& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::NavigationUncertainty& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::NavigationUncertainty& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::NavigationData>
    {
      static const char* value()
      {
        return "fef375df3cdea600fe56c7628688c6c3";
      }

      static const char* value(const DUNE::IMC::NavigationData& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::NavigationData>
    {
      static const char* value()
      {
        return "imc/NavigationData";
      }

      static const char* value(const DUNE::IMC::NavigationData& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::NavigationData>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::NavigationData& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::NavigationData>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::NavigationData& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::NavigationData& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::NavigationData& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GpsFixRejection>
    {
      static const char* value()
      {
        return "40b902889e6ea2110ae82c60a4c9aa86";
      }

      static const char* value(const DUNE::IMC::GpsFixRejection& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GpsFixRejection>
    {
      static const char* value()
      {
        return "imc/GpsFixRejection";
      }

      static const char* value(const DUNE::IMC::GpsFixRejection& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GpsFixRejection>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GpsFixRejection& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GpsFixRejection>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GpsFixRejection& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GpsFixRejection& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GpsFixRejection& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LblRangeAcceptance>
    {
      static const char* value()
      {
        return "f060b331b9a2e2fee19b9ad10d234351";
      }

      static const char* value(const DUNE::IMC::LblRangeAcceptance& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LblRangeAcceptance>
    {
      static const char* value()
      {
        return "imc/LblRangeAcceptance";
      }

      static const char* value(const DUNE::IMC::LblRangeAcceptance& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LblRangeAcceptance>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LblRangeAcceptance& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LblRangeAcceptance>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LblRangeAcceptance& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LblRangeAcceptance& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LblRangeAcceptance& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DvlRejection>
    {
      static const char* value()
      {
        return "e965e92d9f6e3b7b28122b9c382a92f0";
      }

      static const char* value(const DUNE::IMC::DvlRejection& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DvlRejection>
    {
      static const char* value()
      {
        return "imc/DvlRejection";
      }

      static const char* value(const DUNE::IMC::DvlRejection& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DvlRejection>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DvlRejection& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DvlRejection>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DvlRejection& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DvlRejection& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DvlRejection& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LblEstimate>
    {
      static const char* value()
      {
        return "e1e8b354844eccafe35ba21f4f580be1";
      }

      static const char* value(const DUNE::IMC::LblEstimate& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LblEstimate>
    {
      static const char* value()
      {
        return "imc/LblEstimate";
      }

      static const char* value(const DUNE::IMC::LblEstimate& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LblEstimate>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LblEstimate& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LblEstimate>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LblEstimate& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LblEstimate& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LblEstimate& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AlignmentState>
    {
      static const char* value()
      {
        return "81db121aa3a7f940f89272156e1ac634";
      }

      static const char* value(const DUNE::IMC::AlignmentState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AlignmentState>
    {
      static const char* value()
      {
        return "imc/AlignmentState";
      }

      static const char* value(const DUNE::IMC::AlignmentState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AlignmentState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AlignmentState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AlignmentState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AlignmentState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AlignmentState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AlignmentState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GroupStreamVelocity>
    {
      static const char* value()
      {
        return "c1e58ce4b7a1a1b703780006f4d7cc3b";
      }

      static const char* value(const DUNE::IMC::GroupStreamVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GroupStreamVelocity>
    {
      static const char* value()
      {
        return "imc/GroupStreamVelocity";
      }

      static const char* value(const DUNE::IMC::GroupStreamVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GroupStreamVelocity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GroupStreamVelocity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GroupStreamVelocity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GroupStreamVelocity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GroupStreamVelocity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GroupStreamVelocity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Airflow>
    {
      static const char* value()
      {
        return "04c33d59cfdd3634e7f68a96d6b665af";
      }

      static const char* value(const DUNE::IMC::Airflow& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Airflow>
    {
      static const char* value()
      {
        return "imc/Airflow";
      }

      static const char* value(const DUNE::IMC::Airflow& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Airflow>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Airflow& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Airflow>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Airflow& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Airflow& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Airflow& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredHeading>
    {
      static const char* value()
      {
        return "ef6f41e42df842e91e71a8a746153dce";
      }

      static const char* value(const DUNE::IMC::DesiredHeading& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredHeading>
    {
      static const char* value()
      {
        return "imc/DesiredHeading";
      }

      static const char* value(const DUNE::IMC::DesiredHeading& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredHeading>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredHeading& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredHeading>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredHeading& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredHeading& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredHeading& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredZ>
    {
      static const char* value()
      {
        return "082930eb96948d3e36d5cba22a6c5dfd";
      }

      static const char* value(const DUNE::IMC::DesiredZ& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredZ>
    {
      static const char* value()
      {
        return "imc/DesiredZ";
      }

      static const char* value(const DUNE::IMC::DesiredZ& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredZ>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredZ& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredZ>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredZ& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredZ& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredZ& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredSpeed>
    {
      static const char* value()
      {
        return "bd414c98b138e6b6cb4a9658808d1bbd";
      }

      static const char* value(const DUNE::IMC::DesiredSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredSpeed>
    {
      static const char* value()
      {
        return "imc/DesiredSpeed";
      }

      static const char* value(const DUNE::IMC::DesiredSpeed& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredSpeed>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredSpeed& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredSpeed>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredSpeed& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredSpeed& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredSpeed& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredRoll>
    {
      static const char* value()
      {
        return "0c56f807c16edbdbb29303462a77461d";
      }

      static const char* value(const DUNE::IMC::DesiredRoll& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredRoll>
    {
      static const char* value()
      {
        return "imc/DesiredRoll";
      }

      static const char* value(const DUNE::IMC::DesiredRoll& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredRoll>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredRoll& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredRoll>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredRoll& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredRoll& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredRoll& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredPitch>
    {
      static const char* value()
      {
        return "151bf51fd9810eba46c340ea412b26dd";
      }

      static const char* value(const DUNE::IMC::DesiredPitch& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredPitch>
    {
      static const char* value()
      {
        return "imc/DesiredPitch";
      }

      static const char* value(const DUNE::IMC::DesiredPitch& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredPitch>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredPitch& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredPitch>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredPitch& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredPitch& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredPitch& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredVerticalRate>
    {
      static const char* value()
      {
        return "8e1612f12b5d74c8b0cba10473bd1418";
      }

      static const char* value(const DUNE::IMC::DesiredVerticalRate& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredVerticalRate>
    {
      static const char* value()
      {
        return "imc/DesiredVerticalRate";
      }

      static const char* value(const DUNE::IMC::DesiredVerticalRate& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredVerticalRate>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredVerticalRate& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredVerticalRate>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredVerticalRate& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredVerticalRate& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredVerticalRate& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredPath>
    {
      static const char* value()
      {
        return "24887bacb4782df082ef46b70bf4ed7c";
      }

      static const char* value(const DUNE::IMC::DesiredPath& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredPath>
    {
      static const char* value()
      {
        return "imc/DesiredPath";
      }

      static const char* value(const DUNE::IMC::DesiredPath& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredPath>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredPath& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredPath>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredPath& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredPath& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredPath& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredControl>
    {
      static const char* value()
      {
        return "c68bf089734c102670ae222359326ae0";
      }

      static const char* value(const DUNE::IMC::DesiredControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredControl>
    {
      static const char* value()
      {
        return "imc/DesiredControl";
      }

      static const char* value(const DUNE::IMC::DesiredControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredHeadingRate>
    {
      static const char* value()
      {
        return "e4376ec268b1871ab9c9a760d268c4b1";
      }

      static const char* value(const DUNE::IMC::DesiredHeadingRate& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredHeadingRate>
    {
      static const char* value()
      {
        return "imc/DesiredHeadingRate";
      }

      static const char* value(const DUNE::IMC::DesiredHeadingRate& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredHeadingRate>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredHeadingRate& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredHeadingRate>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredHeadingRate& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredHeadingRate& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredHeadingRate& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredVelocity>
    {
      static const char* value()
      {
        return "cc6645da31a11c4048f4c4f5aad0e805";
      }

      static const char* value(const DUNE::IMC::DesiredVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredVelocity>
    {
      static const char* value()
      {
        return "imc/DesiredVelocity";
      }

      static const char* value(const DUNE::IMC::DesiredVelocity& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredVelocity>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredVelocity& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredVelocity>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredVelocity& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredVelocity& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredVelocity& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PathControlState>
    {
      static const char* value()
      {
        return "98d6f3eb81c7872dd78347ae3046f936";
      }

      static const char* value(const DUNE::IMC::PathControlState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PathControlState>
    {
      static const char* value()
      {
        return "imc/PathControlState";
      }

      static const char* value(const DUNE::IMC::PathControlState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PathControlState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PathControlState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PathControlState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PathControlState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PathControlState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PathControlState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AllocatedControlTorques>
    {
      static const char* value()
      {
        return "a7f1f193e99d112ed4326e5085601243";
      }

      static const char* value(const DUNE::IMC::AllocatedControlTorques& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AllocatedControlTorques>
    {
      static const char* value()
      {
        return "imc/AllocatedControlTorques";
      }

      static const char* value(const DUNE::IMC::AllocatedControlTorques& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AllocatedControlTorques>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AllocatedControlTorques& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AllocatedControlTorques>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AllocatedControlTorques& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AllocatedControlTorques& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AllocatedControlTorques& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ControlParcel>
    {
      static const char* value()
      {
        return "a9c564184730d2efc4def31b9b4f1b90";
      }

      static const char* value(const DUNE::IMC::ControlParcel& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ControlParcel>
    {
      static const char* value()
      {
        return "imc/ControlParcel";
      }

      static const char* value(const DUNE::IMC::ControlParcel& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ControlParcel>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ControlParcel& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ControlParcel>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ControlParcel& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ControlParcel& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ControlParcel& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Brake>
    {
      static const char* value()
      {
        return "129e4e3788bf4e2499f947a4ff3d1756";
      }

      static const char* value(const DUNE::IMC::Brake& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Brake>
    {
      static const char* value()
      {
        return "imc/Brake";
      }

      static const char* value(const DUNE::IMC::Brake& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Brake>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Brake& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Brake>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Brake& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Brake& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Brake& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredLinearState>
    {
      static const char* value()
      {
        return "94f84bb2a63b42a88e479f6bcec0818a";
      }

      static const char* value(const DUNE::IMC::DesiredLinearState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredLinearState>
    {
      static const char* value()
      {
        return "imc/DesiredLinearState";
      }

      static const char* value(const DUNE::IMC::DesiredLinearState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredLinearState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredLinearState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredLinearState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredLinearState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredLinearState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredLinearState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DesiredThrottle>
    {
      static const char* value()
      {
        return "610cdc4276dcacefc5008c846b56af8e";
      }

      static const char* value(const DUNE::IMC::DesiredThrottle& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DesiredThrottle>
    {
      static const char* value()
      {
        return "imc/DesiredThrottle";
      }

      static const char* value(const DUNE::IMC::DesiredThrottle& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DesiredThrottle>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DesiredThrottle& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DesiredThrottle>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DesiredThrottle& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DesiredThrottle& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DesiredThrottle& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Goto>
    {
      static const char* value()
      {
        return "06b4237e1cc8d263645545031b4b82d4";
      }

      static const char* value(const DUNE::IMC::Goto& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Goto>
    {
      static const char* value()
      {
        return "imc/Goto";
      }

      static const char* value(const DUNE::IMC::Goto& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Goto>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Goto& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Goto>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Goto& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Goto& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Goto& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PopUp>
    {
      static const char* value()
      {
        return "f8b08a3d975b28c01a56e5c4c4cb3b3b";
      }

      static const char* value(const DUNE::IMC::PopUp& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PopUp>
    {
      static const char* value()
      {
        return "imc/PopUp";
      }

      static const char* value(const DUNE::IMC::PopUp& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PopUp>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PopUp& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PopUp>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PopUp& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PopUp& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PopUp& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Teleoperation>
    {
      static const char* value()
      {
        return "a607bbfc89b96b195638525a1ba26a4d";
      }

      static const char* value(const DUNE::IMC::Teleoperation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Teleoperation>
    {
      static const char* value()
      {
        return "imc/Teleoperation";
      }

      static const char* value(const DUNE::IMC::Teleoperation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Teleoperation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Teleoperation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Teleoperation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Teleoperation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Teleoperation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Teleoperation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Loiter>
    {
      static const char* value()
      {
        return "243045aacd89efc84a34d8a02197916a";
      }

      static const char* value(const DUNE::IMC::Loiter& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Loiter>
    {
      static const char* value()
      {
        return "imc/Loiter";
      }

      static const char* value(const DUNE::IMC::Loiter& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Loiter>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Loiter& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Loiter>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Loiter& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Loiter& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Loiter& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::IdleManeuver>
    {
      static const char* value()
      {
        return "ceafdffcb1a027286858e3e4e870b77a";
      }

      static const char* value(const DUNE::IMC::IdleManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::IdleManeuver>
    {
      static const char* value()
      {
        return "imc/IdleManeuver";
      }

      static const char* value(const DUNE::IMC::IdleManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::IdleManeuver>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::IdleManeuver& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::IdleManeuver>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::IdleManeuver& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::IdleManeuver& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::IdleManeuver& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LowLevelControl>
    {
      static const char* value()
      {
        return "24bc22e7271614bc9359ac8647a8efbd";
      }

      static const char* value(const DUNE::IMC::LowLevelControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LowLevelControl>
    {
      static const char* value()
      {
        return "imc/LowLevelControl";
      }

      static const char* value(const DUNE::IMC::LowLevelControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LowLevelControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LowLevelControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LowLevelControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LowLevelControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LowLevelControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LowLevelControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Rows>
    {
      static const char* value()
      {
        return "7cc1e0cfe8cd58bc6eca9d14c8ef38bf";
      }

      static const char* value(const DUNE::IMC::Rows& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Rows>
    {
      static const char* value()
      {
        return "imc/Rows";
      }

      static const char* value(const DUNE::IMC::Rows& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Rows>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Rows& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Rows>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Rows& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Rows& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Rows& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FollowPath>
    {
      static const char* value()
      {
        return "ce6db1ae8b18d517ff83aa6674629f7a";
      }

      static const char* value(const DUNE::IMC::FollowPath& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FollowPath>
    {
      static const char* value()
      {
        return "imc/FollowPath";
      }

      static const char* value(const DUNE::IMC::FollowPath& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FollowPath>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FollowPath& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FollowPath>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FollowPath& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FollowPath& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FollowPath& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PathPoint>
    {
      static const char* value()
      {
        return "3438a5355d59bd1202c23d5ddf44761e";
      }

      static const char* value(const DUNE::IMC::PathPoint& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PathPoint>
    {
      static const char* value()
      {
        return "imc/PathPoint";
      }

      static const char* value(const DUNE::IMC::PathPoint& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PathPoint>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PathPoint& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PathPoint>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PathPoint& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PathPoint& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PathPoint& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::YoYo>
    {
      static const char* value()
      {
        return "f5cfa5ee851c923695d1f78fef5b6edd";
      }

      static const char* value(const DUNE::IMC::YoYo& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::YoYo>
    {
      static const char* value()
      {
        return "imc/YoYo";
      }

      static const char* value(const DUNE::IMC::YoYo& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::YoYo>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::YoYo& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::YoYo>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::YoYo& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::YoYo& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::YoYo& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TeleoperationDone>
    {
      static const char* value()
      {
        return "a7e94f0bcdd027cc9e8155d94a24eb27";
      }

      static const char* value(const DUNE::IMC::TeleoperationDone& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TeleoperationDone>
    {
      static const char* value()
      {
        return "imc/TeleoperationDone";
      }

      static const char* value(const DUNE::IMC::TeleoperationDone& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TeleoperationDone>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TeleoperationDone& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TeleoperationDone>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TeleoperationDone& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TeleoperationDone& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TeleoperationDone& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::StationKeeping>
    {
      static const char* value()
      {
        return "0105edb6e2512f2a5c2c7dd940f5e5e7";
      }

      static const char* value(const DUNE::IMC::StationKeeping& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::StationKeeping>
    {
      static const char* value()
      {
        return "imc/StationKeeping";
      }

      static const char* value(const DUNE::IMC::StationKeeping& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::StationKeeping>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::StationKeeping& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::StationKeeping>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::StationKeeping& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::StationKeeping& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::StationKeeping& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Elevator>
    {
      static const char* value()
      {
        return "ad0e0f2636f226e3dd22433be7b1a3e6";
      }

      static const char* value(const DUNE::IMC::Elevator& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Elevator>
    {
      static const char* value()
      {
        return "imc/Elevator";
      }

      static const char* value(const DUNE::IMC::Elevator& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Elevator>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Elevator& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Elevator>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Elevator& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Elevator& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Elevator& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FollowTrajectory>
    {
      static const char* value()
      {
        return "24eebfa70370f1f6d636a1c645b75302";
      }

      static const char* value(const DUNE::IMC::FollowTrajectory& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FollowTrajectory>
    {
      static const char* value()
      {
        return "imc/FollowTrajectory";
      }

      static const char* value(const DUNE::IMC::FollowTrajectory& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FollowTrajectory>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FollowTrajectory& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FollowTrajectory>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FollowTrajectory& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FollowTrajectory& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FollowTrajectory& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrajectoryPoint>
    {
      static const char* value()
      {
        return "a21d702359a475dd50855cc3c08d7ee8";
      }

      static const char* value(const DUNE::IMC::TrajectoryPoint& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrajectoryPoint>
    {
      static const char* value()
      {
        return "imc/TrajectoryPoint";
      }

      static const char* value(const DUNE::IMC::TrajectoryPoint& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrajectoryPoint>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrajectoryPoint& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrajectoryPoint>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrajectoryPoint& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrajectoryPoint& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrajectoryPoint& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CustomManeuver>
    {
      static const char* value()
      {
        return "0ea644bec28c243568223fa1a25c59d1";
      }

      static const char* value(const DUNE::IMC::CustomManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CustomManeuver>
    {
      static const char* value()
      {
        return "imc/CustomManeuver";
      }

      static const char* value(const DUNE::IMC::CustomManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CustomManeuver>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CustomManeuver& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CustomManeuver>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CustomManeuver& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CustomManeuver& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CustomManeuver& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleFormation>
    {
      static const char* value()
      {
        return "8aad5c8bce620894e16202b3031b2721";
      }

      static const char* value(const DUNE::IMC::VehicleFormation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleFormation>
    {
      static const char* value()
      {
        return "imc/VehicleFormation";
      }

      static const char* value(const DUNE::IMC::VehicleFormation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleFormation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleFormation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleFormation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleFormation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleFormation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleFormation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleFormationParticipant>
    {
      static const char* value()
      {
        return "62cd70f6bb3d9abbdfc621abf13da6fe";
      }

      static const char* value(const DUNE::IMC::VehicleFormationParticipant& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleFormationParticipant>
    {
      static const char* value()
      {
        return "imc/VehicleFormationParticipant";
      }

      static const char* value(const DUNE::IMC::VehicleFormationParticipant& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleFormationParticipant>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleFormationParticipant& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleFormationParticipant>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleFormationParticipant& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleFormationParticipant& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleFormationParticipant& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::StopManeuver>
    {
      static const char* value()
      {
        return "3aaedc5a75cb7af19ed2bb0af410e809";
      }

      static const char* value(const DUNE::IMC::StopManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::StopManeuver>
    {
      static const char* value()
      {
        return "imc/StopManeuver";
      }

      static const char* value(const DUNE::IMC::StopManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::StopManeuver>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::StopManeuver& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::StopManeuver>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::StopManeuver& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::StopManeuver& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::StopManeuver& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RegisterManeuver>
    {
      static const char* value()
      {
        return "e8d768669ad331951b0b364611a273c4";
      }

      static const char* value(const DUNE::IMC::RegisterManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RegisterManeuver>
    {
      static const char* value()
      {
        return "imc/RegisterManeuver";
      }

      static const char* value(const DUNE::IMC::RegisterManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RegisterManeuver>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RegisterManeuver& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RegisterManeuver>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RegisterManeuver& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RegisterManeuver& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RegisterManeuver& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ManeuverControlState>
    {
      static const char* value()
      {
        return "435a114ba40182f1068290207901d3dc";
      }

      static const char* value(const DUNE::IMC::ManeuverControlState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ManeuverControlState>
    {
      static const char* value()
      {
        return "imc/ManeuverControlState";
      }

      static const char* value(const DUNE::IMC::ManeuverControlState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ManeuverControlState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ManeuverControlState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ManeuverControlState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ManeuverControlState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ManeuverControlState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ManeuverControlState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FollowSystem>
    {
      static const char* value()
      {
        return "6f8b07e3aec88421c2966e6b1714f50e";
      }

      static const char* value(const DUNE::IMC::FollowSystem& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FollowSystem>
    {
      static const char* value()
      {
        return "imc/FollowSystem";
      }

      static const char* value(const DUNE::IMC::FollowSystem& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FollowSystem>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FollowSystem& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FollowSystem>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FollowSystem& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FollowSystem& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FollowSystem& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CommsRelay>
    {
      static const char* value()
      {
        return "e5c0ab67748bde78021b2b50bad7f68c";
      }

      static const char* value(const DUNE::IMC::CommsRelay& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CommsRelay>
    {
      static const char* value()
      {
        return "imc/CommsRelay";
      }

      static const char* value(const DUNE::IMC::CommsRelay& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CommsRelay>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CommsRelay& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CommsRelay>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CommsRelay& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CommsRelay& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CommsRelay& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CoverArea>
    {
      static const char* value()
      {
        return "a9ffd7723d2709d91b69f6c0263652e0";
      }

      static const char* value(const DUNE::IMC::CoverArea& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CoverArea>
    {
      static const char* value()
      {
        return "imc/CoverArea";
      }

      static const char* value(const DUNE::IMC::CoverArea& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CoverArea>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CoverArea& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CoverArea>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CoverArea& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CoverArea& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CoverArea& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PolygonVertex>
    {
      static const char* value()
      {
        return "5799f58cc5a501d117467406755c8e20";
      }

      static const char* value(const DUNE::IMC::PolygonVertex& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PolygonVertex>
    {
      static const char* value()
      {
        return "imc/PolygonVertex";
      }

      static const char* value(const DUNE::IMC::PolygonVertex& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PolygonVertex>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PolygonVertex& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PolygonVertex>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PolygonVertex& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PolygonVertex& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PolygonVertex& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CompassCalibration>
    {
      static const char* value()
      {
        return "961085632b165251bf16fe07b38548de";
      }

      static const char* value(const DUNE::IMC::CompassCalibration& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CompassCalibration>
    {
      static const char* value()
      {
        return "imc/CompassCalibration";
      }

      static const char* value(const DUNE::IMC::CompassCalibration& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CompassCalibration>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CompassCalibration& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CompassCalibration>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CompassCalibration& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CompassCalibration& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CompassCalibration& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationParameters>
    {
      static const char* value()
      {
        return "b7ead72e1ed990a52d0589527b2bdb2c";
      }

      static const char* value(const DUNE::IMC::FormationParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationParameters>
    {
      static const char* value()
      {
        return "imc/FormationParameters";
      }

      static const char* value(const DUNE::IMC::FormationParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationPlanExecution>
    {
      static const char* value()
      {
        return "fd15cfffa5ff97ab7fec32860d3af484";
      }

      static const char* value(const DUNE::IMC::FormationPlanExecution& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationPlanExecution>
    {
      static const char* value()
      {
        return "imc/FormationPlanExecution";
      }

      static const char* value(const DUNE::IMC::FormationPlanExecution& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationPlanExecution>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationPlanExecution& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationPlanExecution>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationPlanExecution& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationPlanExecution& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationPlanExecution& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FollowReference>
    {
      static const char* value()
      {
        return "c6a3357211f8eb8de4c8c2395a3f39c8";
      }

      static const char* value(const DUNE::IMC::FollowReference& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FollowReference>
    {
      static const char* value()
      {
        return "imc/FollowReference";
      }

      static const char* value(const DUNE::IMC::FollowReference& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FollowReference>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FollowReference& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FollowReference>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FollowReference& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FollowReference& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FollowReference& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Reference>
    {
      static const char* value()
      {
        return "65f53993d1f3e60a4d033c4446489713";
      }

      static const char* value(const DUNE::IMC::Reference& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Reference>
    {
      static const char* value()
      {
        return "imc/Reference";
      }

      static const char* value(const DUNE::IMC::Reference& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Reference>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Reference& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Reference>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Reference& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Reference& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Reference& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FollowRefState>
    {
      static const char* value()
      {
        return "e13b43020896edf3866955215b69ed3e";
      }

      static const char* value(const DUNE::IMC::FollowRefState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FollowRefState>
    {
      static const char* value()
      {
        return "imc/FollowRefState";
      }

      static const char* value(const DUNE::IMC::FollowRefState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FollowRefState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FollowRefState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FollowRefState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FollowRefState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FollowRefState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FollowRefState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationMonitor>
    {
      static const char* value()
      {
        return "207acf0cd024655055a40568427e2be5";
      }

      static const char* value(const DUNE::IMC::FormationMonitor& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationMonitor>
    {
      static const char* value()
      {
        return "imc/FormationMonitor";
      }

      static const char* value(const DUNE::IMC::FormationMonitor& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationMonitor>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationMonitor& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationMonitor>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationMonitor& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationMonitor& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationMonitor& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RelativeState>
    {
      static const char* value()
      {
        return "034dbb9de440ed697219e0863692332e";
      }

      static const char* value(const DUNE::IMC::RelativeState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RelativeState>
    {
      static const char* value()
      {
        return "imc/RelativeState";
      }

      static const char* value(const DUNE::IMC::RelativeState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RelativeState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RelativeState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RelativeState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RelativeState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RelativeState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RelativeState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Dislodge>
    {
      static const char* value()
      {
        return "04e74140b6047a99bb4428149711efab";
      }

      static const char* value(const DUNE::IMC::Dislodge& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Dislodge>
    {
      static const char* value()
      {
        return "imc/Dislodge";
      }

      static const char* value(const DUNE::IMC::Dislodge& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Dislodge>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Dislodge& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Dislodge>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Dislodge& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Dislodge& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Dislodge& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Formation>
    {
      static const char* value()
      {
        return "778424fd338078f9f07c5fc0f7011e6b";
      }

      static const char* value(const DUNE::IMC::Formation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Formation>
    {
      static const char* value()
      {
        return "imc/Formation";
      }

      static const char* value(const DUNE::IMC::Formation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Formation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Formation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Formation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Formation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Formation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Formation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Launch>
    {
      static const char* value()
      {
        return "f04136d13768b13439fc2da23e884d17";
      }

      static const char* value(const DUNE::IMC::Launch& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Launch>
    {
      static const char* value()
      {
        return "imc/Launch";
      }

      static const char* value(const DUNE::IMC::Launch& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Launch>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Launch& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Launch>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Launch& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Launch& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Launch& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Drop>
    {
      static const char* value()
      {
        return "d4f5dc68f6295680f7c9459e1a9316db";
      }

      static const char* value(const DUNE::IMC::Drop& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Drop>
    {
      static const char* value()
      {
        return "imc/Drop";
      }

      static const char* value(const DUNE::IMC::Drop& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Drop>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Drop& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Drop>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Drop& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Drop& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Drop& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ScheduledGoto>
    {
      static const char* value()
      {
        return "ff2752701c9538844e71bbe0d8906c5b";
      }

      static const char* value(const DUNE::IMC::ScheduledGoto& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ScheduledGoto>
    {
      static const char* value()
      {
        return "imc/ScheduledGoto";
      }

      static const char* value(const DUNE::IMC::ScheduledGoto& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ScheduledGoto>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ScheduledGoto& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ScheduledGoto>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ScheduledGoto& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ScheduledGoto& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ScheduledGoto& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RowsCoverage>
    {
      static const char* value()
      {
        return "142f78d80fd528fe295d2563a310f222";
      }

      static const char* value(const DUNE::IMC::RowsCoverage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RowsCoverage>
    {
      static const char* value()
      {
        return "imc/RowsCoverage";
      }

      static const char* value(const DUNE::IMC::RowsCoverage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RowsCoverage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RowsCoverage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RowsCoverage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RowsCoverage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RowsCoverage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RowsCoverage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Sample>
    {
      static const char* value()
      {
        return "dd73fe7a74c24ff28909d1d1d118f4dd";
      }

      static const char* value(const DUNE::IMC::Sample& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Sample>
    {
      static const char* value()
      {
        return "imc/Sample";
      }

      static const char* value(const DUNE::IMC::Sample& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Sample>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Sample& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Sample>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Sample& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Sample& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Sample& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ImageTracking>
    {
      static const char* value()
      {
        return "4128b78e50758cb53c733a6a4921e77a";
      }

      static const char* value(const DUNE::IMC::ImageTracking& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ImageTracking>
    {
      static const char* value()
      {
        return "imc/ImageTracking";
      }

      static const char* value(const DUNE::IMC::ImageTracking& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ImageTracking>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ImageTracking& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ImageTracking>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ImageTracking& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ImageTracking& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ImageTracking& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Takeoff>
    {
      static const char* value()
      {
        return "d734b0282ea4a08b4bf8e280967f1790";
      }

      static const char* value(const DUNE::IMC::Takeoff& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Takeoff>
    {
      static const char* value()
      {
        return "imc/Takeoff";
      }

      static const char* value(const DUNE::IMC::Takeoff& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Takeoff>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Takeoff& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Takeoff>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Takeoff& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Takeoff& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Takeoff& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Land>
    {
      static const char* value()
      {
        return "2f61d0399c826e536330a5cfb5afadc0";
      }

      static const char* value(const DUNE::IMC::Land& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Land>
    {
      static const char* value()
      {
        return "imc/Land";
      }

      static const char* value(const DUNE::IMC::Land& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Land>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Land& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Land>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Land& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Land& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Land& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleState>
    {
      static const char* value()
      {
        return "663671b9e43c3516c6e56f3df34a9a8c";
      }

      static const char* value(const DUNE::IMC::VehicleState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleState>
    {
      static const char* value()
      {
        return "imc/VehicleState";
      }

      static const char* value(const DUNE::IMC::VehicleState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleCommand>
    {
      static const char* value()
      {
        return "0a194c742f1ec6cf690f90d0eee83ca5";
      }

      static const char* value(const DUNE::IMC::VehicleCommand& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleCommand>
    {
      static const char* value()
      {
        return "imc/VehicleCommand";
      }

      static const char* value(const DUNE::IMC::VehicleCommand& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleCommand>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleCommand& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleCommand>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleCommand& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleCommand& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleCommand& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::MonitorEntityState>
    {
      static const char* value()
      {
        return "e6e6245503047fafb6a85f0167502c6f";
      }

      static const char* value(const DUNE::IMC::MonitorEntityState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::MonitorEntityState>
    {
      static const char* value()
      {
        return "imc/MonitorEntityState";
      }

      static const char* value(const DUNE::IMC::MonitorEntityState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::MonitorEntityState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::MonitorEntityState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::MonitorEntityState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::MonitorEntityState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::MonitorEntityState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::MonitorEntityState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityMonitoringState>
    {
      static const char* value()
      {
        return "4c0eda5b81494edcd9543b11ed7504fa";
      }

      static const char* value(const DUNE::IMC::EntityMonitoringState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityMonitoringState>
    {
      static const char* value()
      {
        return "imc/EntityMonitoringState";
      }

      static const char* value(const DUNE::IMC::EntityMonitoringState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityMonitoringState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityMonitoringState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityMonitoringState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityMonitoringState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityMonitoringState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityMonitoringState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::OperationalLimits>
    {
      static const char* value()
      {
        return "77f4918de71ef271b883e5b77637c238";
      }

      static const char* value(const DUNE::IMC::OperationalLimits& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::OperationalLimits>
    {
      static const char* value()
      {
        return "imc/OperationalLimits";
      }

      static const char* value(const DUNE::IMC::OperationalLimits& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::OperationalLimits>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::OperationalLimits& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::OperationalLimits>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::OperationalLimits& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::OperationalLimits& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::OperationalLimits& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GetOperationalLimits>
    {
      static const char* value()
      {
        return "b3773bd21857b3efbcec36fb1619e453";
      }

      static const char* value(const DUNE::IMC::GetOperationalLimits& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GetOperationalLimits>
    {
      static const char* value()
      {
        return "imc/GetOperationalLimits";
      }

      static const char* value(const DUNE::IMC::GetOperationalLimits& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GetOperationalLimits>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GetOperationalLimits& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GetOperationalLimits>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GetOperationalLimits& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GetOperationalLimits& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GetOperationalLimits& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Calibration>
    {
      static const char* value()
      {
        return "fe24b1f41cff94ee5d2884bf0a27f816";
      }

      static const char* value(const DUNE::IMC::Calibration& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Calibration>
    {
      static const char* value()
      {
        return "imc/Calibration";
      }

      static const char* value(const DUNE::IMC::Calibration& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Calibration>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Calibration& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Calibration>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Calibration& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Calibration& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Calibration& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ControlLoops>
    {
      static const char* value()
      {
        return "4b207f10f1ebbd10ff73f4d976068620";
      }

      static const char* value(const DUNE::IMC::ControlLoops& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ControlLoops>
    {
      static const char* value()
      {
        return "imc/ControlLoops";
      }

      static const char* value(const DUNE::IMC::ControlLoops& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ControlLoops>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ControlLoops& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ControlLoops>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ControlLoops& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ControlLoops& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ControlLoops& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleMedium>
    {
      static const char* value()
      {
        return "c4d8fb7955259dddff24104f347ea470";
      }

      static const char* value(const DUNE::IMC::VehicleMedium& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleMedium>
    {
      static const char* value()
      {
        return "imc/VehicleMedium";
      }

      static const char* value(const DUNE::IMC::VehicleMedium& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleMedium>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleMedium& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleMedium>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleMedium& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleMedium& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleMedium& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Collision>
    {
      static const char* value()
      {
        return "881eb41ec773a973a9b71908855f080f";
      }

      static const char* value(const DUNE::IMC::Collision& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Collision>
    {
      static const char* value()
      {
        return "imc/Collision";
      }

      static const char* value(const DUNE::IMC::Collision& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Collision>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Collision& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Collision>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Collision& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Collision& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Collision& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormState>
    {
      static const char* value()
      {
        return "fcc63ea6eb78d964884188f8f9746925";
      }

      static const char* value(const DUNE::IMC::FormState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormState>
    {
      static const char* value()
      {
        return "imc/FormState";
      }

      static const char* value(const DUNE::IMC::FormState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::AutopilotMode>
    {
      static const char* value()
      {
        return "16f4a8cb716459e802d302d156ff74d4";
      }

      static const char* value(const DUNE::IMC::AutopilotMode& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::AutopilotMode>
    {
      static const char* value()
      {
        return "imc/AutopilotMode";
      }

      static const char* value(const DUNE::IMC::AutopilotMode& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::AutopilotMode>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::AutopilotMode& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::AutopilotMode>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::AutopilotMode& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::AutopilotMode& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::AutopilotMode& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationState>
    {
      static const char* value()
      {
        return "05369cb681033855432c0d6cd40f4b28";
      }

      static const char* value(const DUNE::IMC::FormationState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationState>
    {
      static const char* value()
      {
        return "imc/FormationState";
      }

      static const char* value(const DUNE::IMC::FormationState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ReportControl>
    {
      static const char* value()
      {
        return "a84a8ca5cba5c4fdd88f44968ee0ebcf";
      }

      static const char* value(const DUNE::IMC::ReportControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ReportControl>
    {
      static const char* value()
      {
        return "imc/ReportControl";
      }

      static const char* value(const DUNE::IMC::ReportControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ReportControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ReportControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ReportControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ReportControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ReportControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ReportControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Abort>
    {
      static const char* value()
      {
        return "f47cbe31460c5247cf34845d9c05ffb8";
      }

      static const char* value(const DUNE::IMC::Abort& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Abort>
    {
      static const char* value()
      {
        return "imc/Abort";
      }

      static const char* value(const DUNE::IMC::Abort& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Abort>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Abort& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Abort>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Abort& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Abort& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Abort& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanSpecification>
    {
      static const char* value()
      {
        return "a14656f509e2b2fdf246593361475ef7";
      }

      static const char* value(const DUNE::IMC::PlanSpecification& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanSpecification>
    {
      static const char* value()
      {
        return "imc/PlanSpecification";
      }

      static const char* value(const DUNE::IMC::PlanSpecification& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanSpecification>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanSpecification& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanSpecification>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanSpecification& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanSpecification& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanSpecification& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanManeuver>
    {
      static const char* value()
      {
        return "e8392106dc6dd1db31f708b4dff81251";
      }

      static const char* value(const DUNE::IMC::PlanManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanManeuver>
    {
      static const char* value()
      {
        return "imc/PlanManeuver";
      }

      static const char* value(const DUNE::IMC::PlanManeuver& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanManeuver>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanManeuver& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanManeuver>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanManeuver& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanManeuver& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanManeuver& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanTransition>
    {
      static const char* value()
      {
        return "5a2842be0f36d77aacd744c992a0dfd0";
      }

      static const char* value(const DUNE::IMC::PlanTransition& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanTransition>
    {
      static const char* value()
      {
        return "imc/PlanTransition";
      }

      static const char* value(const DUNE::IMC::PlanTransition& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanTransition>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanTransition& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanTransition>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanTransition& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanTransition& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanTransition& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EmergencyControl>
    {
      static const char* value()
      {
        return "c3e240ab9e1eb3f930a926408e124b11";
      }

      static const char* value(const DUNE::IMC::EmergencyControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EmergencyControl>
    {
      static const char* value()
      {
        return "imc/EmergencyControl";
      }

      static const char* value(const DUNE::IMC::EmergencyControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EmergencyControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EmergencyControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EmergencyControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EmergencyControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EmergencyControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EmergencyControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EmergencyControlState>
    {
      static const char* value()
      {
        return "cd4c079d21fb6cce8108334f85c3b694";
      }

      static const char* value(const DUNE::IMC::EmergencyControlState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EmergencyControlState>
    {
      static const char* value()
      {
        return "imc/EmergencyControlState";
      }

      static const char* value(const DUNE::IMC::EmergencyControlState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EmergencyControlState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EmergencyControlState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EmergencyControlState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EmergencyControlState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EmergencyControlState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EmergencyControlState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanDB>
    {
      static const char* value()
      {
        return "6a4bbc6eda8f14d9ca818af2cd1d13ea";
      }

      static const char* value(const DUNE::IMC::PlanDB& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanDB>
    {
      static const char* value()
      {
        return "imc/PlanDB";
      }

      static const char* value(const DUNE::IMC::PlanDB& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanDB>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanDB& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanDB>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanDB& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanDB& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanDB& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanDBState>
    {
      static const char* value()
      {
        return "314b283a08b07bb3bcad38d2982b7f5a";
      }

      static const char* value(const DUNE::IMC::PlanDBState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanDBState>
    {
      static const char* value()
      {
        return "imc/PlanDBState";
      }

      static const char* value(const DUNE::IMC::PlanDBState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanDBState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanDBState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanDBState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanDBState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanDBState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanDBState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanDBInformation>
    {
      static const char* value()
      {
        return "7030918162fd18fbd7357b07135e64ea";
      }

      static const char* value(const DUNE::IMC::PlanDBInformation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanDBInformation>
    {
      static const char* value()
      {
        return "imc/PlanDBInformation";
      }

      static const char* value(const DUNE::IMC::PlanDBInformation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanDBInformation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanDBInformation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanDBInformation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanDBInformation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanDBInformation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanDBInformation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanControl>
    {
      static const char* value()
      {
        return "82d1a1aaf71d5695b5551197fcab46e0";
      }

      static const char* value(const DUNE::IMC::PlanControl& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanControl>
    {
      static const char* value()
      {
        return "imc/PlanControl";
      }

      static const char* value(const DUNE::IMC::PlanControl& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanControl>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanControl& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanControl>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanControl& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanControl& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanControl& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanControlState>
    {
      static const char* value()
      {
        return "9a63d9e544506e3b86d4efc0290d4aeb";
      }

      static const char* value(const DUNE::IMC::PlanControlState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanControlState>
    {
      static const char* value()
      {
        return "imc/PlanControlState";
      }

      static const char* value(const DUNE::IMC::PlanControlState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanControlState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanControlState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanControlState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanControlState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanControlState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanControlState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanVariable>
    {
      static const char* value()
      {
        return "efb42495a5973f9f7aaa91c87e172c65";
      }

      static const char* value(const DUNE::IMC::PlanVariable& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanVariable>
    {
      static const char* value()
      {
        return "imc/PlanVariable";
      }

      static const char* value(const DUNE::IMC::PlanVariable& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanVariable>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanVariable& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanVariable>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanVariable& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanVariable& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanVariable& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanGeneration>
    {
      static const char* value()
      {
        return "b73afda4076fd2cb290f410d482c4995";
      }

      static const char* value(const DUNE::IMC::PlanGeneration& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanGeneration>
    {
      static const char* value()
      {
        return "imc/PlanGeneration";
      }

      static const char* value(const DUNE::IMC::PlanGeneration& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanGeneration>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanGeneration& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanGeneration>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanGeneration& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanGeneration& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanGeneration& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::LeaderState>
    {
      static const char* value()
      {
        return "d94e0e5d8fd264da4bcca90c6abf142a";
      }

      static const char* value(const DUNE::IMC::LeaderState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::LeaderState>
    {
      static const char* value()
      {
        return "imc/LeaderState";
      }

      static const char* value(const DUNE::IMC::LeaderState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::LeaderState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::LeaderState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::LeaderState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::LeaderState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::LeaderState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::LeaderState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PlanStatistics>
    {
      static const char* value()
      {
        return "ef433605b686a002848e72bac9cea2f9";
      }

      static const char* value(const DUNE::IMC::PlanStatistics& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PlanStatistics>
    {
      static const char* value()
      {
        return "imc/PlanStatistics";
      }

      static const char* value(const DUNE::IMC::PlanStatistics& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PlanStatistics>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PlanStatistics& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PlanStatistics>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PlanStatistics& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PlanStatistics& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PlanStatistics& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ReportedState>
    {
      static const char* value()
      {
        return "8aa9c437003d3d9285e5e002838b795b";
      }

      static const char* value(const DUNE::IMC::ReportedState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ReportedState>
    {
      static const char* value()
      {
        return "imc/ReportedState";
      }

      static const char* value(const DUNE::IMC::ReportedState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ReportedState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ReportedState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ReportedState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ReportedState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ReportedState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ReportedState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RemoteSensorInfo>
    {
      static const char* value()
      {
        return "8f55e07d000731097585019bcd769b5e";
      }

      static const char* value(const DUNE::IMC::RemoteSensorInfo& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RemoteSensorInfo>
    {
      static const char* value()
      {
        return "imc/RemoteSensorInfo";
      }

      static const char* value(const DUNE::IMC::RemoteSensorInfo& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RemoteSensorInfo>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RemoteSensorInfo& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RemoteSensorInfo>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RemoteSensorInfo& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RemoteSensorInfo& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RemoteSensorInfo& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Map>
    {
      static const char* value()
      {
        return "d894d2475b0858b5d3b1550de3d460dd";
      }

      static const char* value(const DUNE::IMC::Map& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Map>
    {
      static const char* value()
      {
        return "imc/Map";
      }

      static const char* value(const DUNE::IMC::Map& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Map>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Map& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Map>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Map& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Map& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Map& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::MapFeature>
    {
      static const char* value()
      {
        return "e271314dbb50a747e3671cc92b8e9d7e";
      }

      static const char* value(const DUNE::IMC::MapFeature& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::MapFeature>
    {
      static const char* value()
      {
        return "imc/MapFeature";
      }

      static const char* value(const DUNE::IMC::MapFeature& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::MapFeature>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::MapFeature& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::MapFeature>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::MapFeature& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::MapFeature& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::MapFeature& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::MapPoint>
    {
      static const char* value()
      {
        return "557157fd0646c21c9001b823fe659956";
      }

      static const char* value(const DUNE::IMC::MapPoint& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::MapPoint>
    {
      static const char* value()
      {
        return "imc/MapPoint";
      }

      static const char* value(const DUNE::IMC::MapPoint& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::MapPoint>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::MapPoint& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::MapPoint>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::MapPoint& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::MapPoint& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::MapPoint& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CcuEvent>
    {
      static const char* value()
      {
        return "f7d0c753ff44b5f9006660783e7f0d5f";
      }

      static const char* value(const DUNE::IMC::CcuEvent& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CcuEvent>
    {
      static const char* value()
      {
        return "imc/CcuEvent";
      }

      static const char* value(const DUNE::IMC::CcuEvent& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CcuEvent>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CcuEvent& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CcuEvent>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CcuEvent& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CcuEvent& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CcuEvent& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::VehicleLinks>
    {
      static const char* value()
      {
        return "3d94fd4816350938ac620e5cd914fe4f";
      }

      static const char* value(const DUNE::IMC::VehicleLinks& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::VehicleLinks>
    {
      static const char* value()
      {
        return "imc/VehicleLinks";
      }

      static const char* value(const DUNE::IMC::VehicleLinks& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::VehicleLinks>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::VehicleLinks& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::VehicleLinks>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::VehicleLinks& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::VehicleLinks& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::VehicleLinks& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrexObservation>
    {
      static const char* value()
      {
        return "0c414612a5c2ca5f39211673059259e0";
      }

      static const char* value(const DUNE::IMC::TrexObservation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrexObservation>
    {
      static const char* value()
      {
        return "imc/TrexObservation";
      }

      static const char* value(const DUNE::IMC::TrexObservation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrexObservation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrexObservation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrexObservation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrexObservation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrexObservation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrexObservation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrexCommand>
    {
      static const char* value()
      {
        return "fc936c0876b4e364c8ede37dede612f2";
      }

      static const char* value(const DUNE::IMC::TrexCommand& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrexCommand>
    {
      static const char* value()
      {
        return "imc/TrexCommand";
      }

      static const char* value(const DUNE::IMC::TrexCommand& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrexCommand>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrexCommand& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrexCommand>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrexCommand& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrexCommand& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrexCommand& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrexOperation>
    {
      static const char* value()
      {
        return "ef557caace3159d95ddaad6a91109c4f";
      }

      static const char* value(const DUNE::IMC::TrexOperation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrexOperation>
    {
      static const char* value()
      {
        return "imc/TrexOperation";
      }

      static const char* value(const DUNE::IMC::TrexOperation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrexOperation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrexOperation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrexOperation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrexOperation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrexOperation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrexOperation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrexAttribute>
    {
      static const char* value()
      {
        return "038d7c952eb33bfda32ef240a5bdacef";
      }

      static const char* value(const DUNE::IMC::TrexAttribute& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrexAttribute>
    {
      static const char* value()
      {
        return "imc/TrexAttribute";
      }

      static const char* value(const DUNE::IMC::TrexAttribute& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrexAttribute>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrexAttribute& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrexAttribute>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrexAttribute& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrexAttribute& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrexAttribute& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrexToken>
    {
      static const char* value()
      {
        return "1e8f3bf1d4042e07c2af3d8930d74fa2";
      }

      static const char* value(const DUNE::IMC::TrexToken& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrexToken>
    {
      static const char* value()
      {
        return "imc/TrexToken";
      }

      static const char* value(const DUNE::IMC::TrexToken& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrexToken>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrexToken& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrexToken>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrexToken& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrexToken& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrexToken& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::TrexPlan>
    {
      static const char* value()
      {
        return "7b75da6054e55203a52dccc0cbb40fb5";
      }

      static const char* value(const DUNE::IMC::TrexPlan& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::TrexPlan>
    {
      static const char* value()
      {
        return "imc/TrexPlan";
      }

      static const char* value(const DUNE::IMC::TrexPlan& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::TrexPlan>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::TrexPlan& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::TrexPlan>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::TrexPlan& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::TrexPlan& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::TrexPlan& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Event>
    {
      static const char* value()
      {
        return "9d3b75c28d27d8e8b1a5bafebdfa51fd";
      }

      static const char* value(const DUNE::IMC::Event& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Event>
    {
      static const char* value()
      {
        return "imc/Event";
      }

      static const char* value(const DUNE::IMC::Event& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Event>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Event& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Event>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Event& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Event& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Event& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CompressedImage>
    {
      static const char* value()
      {
        return "7df1299122ede5aab190c4e9e6a3bb8e";
      }

      static const char* value(const DUNE::IMC::CompressedImage& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CompressedImage>
    {
      static const char* value()
      {
        return "imc/CompressedImage";
      }

      static const char* value(const DUNE::IMC::CompressedImage& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CompressedImage>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CompressedImage& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CompressedImage>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CompressedImage& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CompressedImage& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CompressedImage& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ImageTxSettings>
    {
      static const char* value()
      {
        return "0010844c729a1c500f8159147c991bea";
      }

      static const char* value(const DUNE::IMC::ImageTxSettings& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ImageTxSettings>
    {
      static const char* value()
      {
        return "imc/ImageTxSettings";
      }

      static const char* value(const DUNE::IMC::ImageTxSettings& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ImageTxSettings>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ImageTxSettings& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ImageTxSettings>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ImageTxSettings& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ImageTxSettings& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ImageTxSettings& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::RemoteState>
    {
      static const char* value()
      {
        return "4196cce974d6054e66371bcdb3b41dcc";
      }

      static const char* value(const DUNE::IMC::RemoteState& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::RemoteState>
    {
      static const char* value()
      {
        return "imc/RemoteState";
      }

      static const char* value(const DUNE::IMC::RemoteState& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::RemoteState>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::RemoteState& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::RemoteState>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::RemoteState& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::RemoteState& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::RemoteState& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Target>
    {
      static const char* value()
      {
        return "e947128f11ad6ec1705115a57f566235";
      }

      static const char* value(const DUNE::IMC::Target& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Target>
    {
      static const char* value()
      {
        return "imc/Target";
      }

      static const char* value(const DUNE::IMC::Target& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Target>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Target& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Target>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Target& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Target& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Target& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityParameter>
    {
      static const char* value()
      {
        return "c6263f879909bb3c2d6d6702bf3f936a";
      }

      static const char* value(const DUNE::IMC::EntityParameter& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityParameter>
    {
      static const char* value()
      {
        return "imc/EntityParameter";
      }

      static const char* value(const DUNE::IMC::EntityParameter& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityParameter>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityParameter& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityParameter>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityParameter& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityParameter& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityParameter& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::EntityParameters>
    {
      static const char* value()
      {
        return "916e25f5a70fa97ea3e10c56fb32313f";
      }

      static const char* value(const DUNE::IMC::EntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::EntityParameters>
    {
      static const char* value()
      {
        return "imc/EntityParameters";
      }

      static const char* value(const DUNE::IMC::EntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::EntityParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::EntityParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::EntityParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::EntityParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::EntityParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::EntityParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::QueryEntityParameters>
    {
      static const char* value()
      {
        return "c1ad268ecacd6acc8c275024a42edca9";
      }

      static const char* value(const DUNE::IMC::QueryEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::QueryEntityParameters>
    {
      static const char* value()
      {
        return "imc/QueryEntityParameters";
      }

      static const char* value(const DUNE::IMC::QueryEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::QueryEntityParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::QueryEntityParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::QueryEntityParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::QueryEntityParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::QueryEntityParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::QueryEntityParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetEntityParameters>
    {
      static const char* value()
      {
        return "efb6a200d5f840977dd79e764889de4d";
      }

      static const char* value(const DUNE::IMC::SetEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetEntityParameters>
    {
      static const char* value()
      {
        return "imc/SetEntityParameters";
      }

      static const char* value(const DUNE::IMC::SetEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetEntityParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetEntityParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetEntityParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetEntityParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetEntityParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetEntityParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SaveEntityParameters>
    {
      static const char* value()
      {
        return "0dab6d7ccff59056d32363ebffd71c74";
      }

      static const char* value(const DUNE::IMC::SaveEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SaveEntityParameters>
    {
      static const char* value()
      {
        return "imc/SaveEntityParameters";
      }

      static const char* value(const DUNE::IMC::SaveEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SaveEntityParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SaveEntityParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SaveEntityParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SaveEntityParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SaveEntityParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SaveEntityParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CreateSession>
    {
      static const char* value()
      {
        return "05c4c7de2b4587c8491f52d0c4ccc776";
      }

      static const char* value(const DUNE::IMC::CreateSession& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CreateSession>
    {
      static const char* value()
      {
        return "imc/CreateSession";
      }

      static const char* value(const DUNE::IMC::CreateSession& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CreateSession>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CreateSession& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CreateSession>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CreateSession& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CreateSession& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CreateSession& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::CloseSession>
    {
      static const char* value()
      {
        return "71066021bbf558ced9433337577a1b2e";
      }

      static const char* value(const DUNE::IMC::CloseSession& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::CloseSession>
    {
      static const char* value()
      {
        return "imc/CloseSession";
      }

      static const char* value(const DUNE::IMC::CloseSession& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::CloseSession>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::CloseSession& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::CloseSession>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::CloseSession& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::CloseSession& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::CloseSession& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SessionSubscription>
    {
      static const char* value()
      {
        return "e1e7dafd039edd668b1dacf48cb07049";
      }

      static const char* value(const DUNE::IMC::SessionSubscription& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SessionSubscription>
    {
      static const char* value()
      {
        return "imc/SessionSubscription";
      }

      static const char* value(const DUNE::IMC::SessionSubscription& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SessionSubscription>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SessionSubscription& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SessionSubscription>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SessionSubscription& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SessionSubscription& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SessionSubscription& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SessionKeepAlive>
    {
      static const char* value()
      {
        return "31703bf05ecc8bfb6a7dd72320e8aee6";
      }

      static const char* value(const DUNE::IMC::SessionKeepAlive& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SessionKeepAlive>
    {
      static const char* value()
      {
        return "imc/SessionKeepAlive";
      }

      static const char* value(const DUNE::IMC::SessionKeepAlive& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SessionKeepAlive>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SessionKeepAlive& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SessionKeepAlive>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SessionKeepAlive& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SessionKeepAlive& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SessionKeepAlive& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SessionStatus>
    {
      static const char* value()
      {
        return "093b5b07cc45db3b01ee74bd77fe24ba";
      }

      static const char* value(const DUNE::IMC::SessionStatus& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SessionStatus>
    {
      static const char* value()
      {
        return "imc/SessionStatus";
      }

      static const char* value(const DUNE::IMC::SessionStatus& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SessionStatus>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SessionStatus& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SessionStatus>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SessionStatus& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SessionStatus& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SessionStatus& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PushEntityParameters>
    {
      static const char* value()
      {
        return "3dd77af53cb4c95fa61c9fa72c0e4e86";
      }

      static const char* value(const DUNE::IMC::PushEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PushEntityParameters>
    {
      static const char* value()
      {
        return "imc/PushEntityParameters";
      }

      static const char* value(const DUNE::IMC::PushEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PushEntityParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PushEntityParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PushEntityParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PushEntityParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PushEntityParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PushEntityParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::PopEntityParameters>
    {
      static const char* value()
      {
        return "1aeda3c7d9f3ddc15367f0bb8f76f8e5";
      }

      static const char* value(const DUNE::IMC::PopEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::PopEntityParameters>
    {
      static const char* value()
      {
        return "imc/PopEntityParameters";
      }

      static const char* value(const DUNE::IMC::PopEntityParameters& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::PopEntityParameters>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::PopEntityParameters& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::PopEntityParameters>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::PopEntityParameters& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::PopEntityParameters& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::PopEntityParameters& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::IoEvent>
    {
      static const char* value()
      {
        return "37625ace79b6f373edd3c7937eea3a03";
      }

      static const char* value(const DUNE::IMC::IoEvent& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::IoEvent>
    {
      static const char* value()
      {
        return "imc/IoEvent";
      }

      static const char* value(const DUNE::IMC::IoEvent& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::IoEvent>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::IoEvent& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::IoEvent>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::IoEvent& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::IoEvent& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::IoEvent& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UamTxFrame>
    {
      static const char* value()
      {
        return "d8e74076cf88bba4217cf69ad83d48f2";
      }

      static const char* value(const DUNE::IMC::UamTxFrame& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UamTxFrame>
    {
      static const char* value()
      {
        return "imc/UamTxFrame";
      }

      static const char* value(const DUNE::IMC::UamTxFrame& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UamTxFrame>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UamTxFrame& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UamTxFrame>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UamTxFrame& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UamTxFrame& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UamTxFrame& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UamRxFrame>
    {
      static const char* value()
      {
        return "66871862150ca8f4b03e6c9093f45466";
      }

      static const char* value(const DUNE::IMC::UamRxFrame& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UamRxFrame>
    {
      static const char* value()
      {
        return "imc/UamRxFrame";
      }

      static const char* value(const DUNE::IMC::UamRxFrame& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UamRxFrame>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UamRxFrame& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UamRxFrame>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UamRxFrame& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UamRxFrame& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UamRxFrame& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UamTxStatus>
    {
      static const char* value()
      {
        return "ff3f8140489a950cc427c7ce9585b964";
      }

      static const char* value(const DUNE::IMC::UamTxStatus& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UamTxStatus>
    {
      static const char* value()
      {
        return "imc/UamTxStatus";
      }

      static const char* value(const DUNE::IMC::UamTxStatus& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UamTxStatus>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UamTxStatus& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UamTxStatus>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UamTxStatus& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UamTxStatus& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UamTxStatus& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UamRxRange>
    {
      static const char* value()
      {
        return "4710bc93e6dc9a8676e12e1b9c623864";
      }

      static const char* value(const DUNE::IMC::UamRxRange& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UamRxRange>
    {
      static const char* value()
      {
        return "imc/UamRxRange";
      }

      static const char* value(const DUNE::IMC::UamRxRange& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UamRxRange>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UamRxRange& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UamRxRange>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UamRxRange& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UamRxRange& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UamRxRange& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormCtrlParam>
    {
      static const char* value()
      {
        return "c63f1acb5079a8ef4e26712a85119d45";
      }

      static const char* value(const DUNE::IMC::FormCtrlParam& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormCtrlParam>
    {
      static const char* value()
      {
        return "imc/FormCtrlParam";
      }

      static const char* value(const DUNE::IMC::FormCtrlParam& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormCtrlParam>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormCtrlParam& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormCtrlParam>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormCtrlParam& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormCtrlParam& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormCtrlParam& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationEval>
    {
      static const char* value()
      {
        return "ce2df6f0141bca5dc59407fe78cac230";
      }

      static const char* value(const DUNE::IMC::FormationEval& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationEval>
    {
      static const char* value()
      {
        return "imc/FormationEval";
      }

      static const char* value(const DUNE::IMC::FormationEval& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationEval>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationEval& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationEval>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationEval& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationEval& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationEval& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationControlParams>
    {
      static const char* value()
      {
        return "a809bc269f11ce7bc7710b9be414e3b4";
      }

      static const char* value(const DUNE::IMC::FormationControlParams& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationControlParams>
    {
      static const char* value()
      {
        return "imc/FormationControlParams";
      }

      static const char* value(const DUNE::IMC::FormationControlParams& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationControlParams>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationControlParams& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationControlParams>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationControlParams& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationControlParams& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationControlParams& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::FormationEvaluation>
    {
      static const char* value()
      {
        return "6c6fd981cdc41123792431ac0c7e3855";
      }

      static const char* value(const DUNE::IMC::FormationEvaluation& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::FormationEvaluation>
    {
      static const char* value()
      {
        return "imc/FormationEvaluation";
      }

      static const char* value(const DUNE::IMC::FormationEvaluation& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::FormationEvaluation>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::FormationEvaluation& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::FormationEvaluation>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::FormationEvaluation& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::FormationEvaluation& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::FormationEvaluation& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::MessagePart>
    {
      static const char* value()
      {
        return "05c7fe52b9a217e276efafec8b3c2813";
      }

      static const char* value(const DUNE::IMC::MessagePart& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::MessagePart>
    {
      static const char* value()
      {
        return "imc/MessagePart";
      }

      static const char* value(const DUNE::IMC::MessagePart& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::MessagePart>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::MessagePart& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::MessagePart>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::MessagePart& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::MessagePart& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::MessagePart& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::NeptusBlob>
    {
      static const char* value()
      {
        return "e9090ed3cb795ffb451326fe38b525e7";
      }

      static const char* value(const DUNE::IMC::NeptusBlob& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::NeptusBlob>
    {
      static const char* value()
      {
        return "imc/NeptusBlob";
      }

      static const char* value(const DUNE::IMC::NeptusBlob& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::NeptusBlob>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::NeptusBlob& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::NeptusBlob>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::NeptusBlob& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::NeptusBlob& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::NeptusBlob& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Aborted>
    {
      static const char* value()
      {
        return "71d047ef7c7744bd58d868d43e86643b";
      }

      static const char* value(const DUNE::IMC::Aborted& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Aborted>
    {
      static const char* value()
      {
        return "imc/Aborted";
      }

      static const char* value(const DUNE::IMC::Aborted& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Aborted>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Aborted& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Aborted>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Aborted& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Aborted& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Aborted& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblAngles>
    {
      static const char* value()
      {
        return "8157fff9b27ae577ae0a2a8275cc05fb";
      }

      static const char* value(const DUNE::IMC::UsblAngles& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblAngles>
    {
      static const char* value()
      {
        return "imc/UsblAngles";
      }

      static const char* value(const DUNE::IMC::UsblAngles& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblAngles>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblAngles& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblAngles>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblAngles& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblAngles& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblAngles& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblPosition>
    {
      static const char* value()
      {
        return "9ccb211d76a6fcb01e64ae60ddf2d7e5";
      }

      static const char* value(const DUNE::IMC::UsblPosition& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblPosition>
    {
      static const char* value()
      {
        return "imc/UsblPosition";
      }

      static const char* value(const DUNE::IMC::UsblPosition& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblPosition>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblPosition& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblPosition>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblPosition& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblPosition& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblPosition& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblFix>
    {
      static const char* value()
      {
        return "8e3ff651a9f0b99c8eed93de314ad92f";
      }

      static const char* value(const DUNE::IMC::UsblFix& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblFix>
    {
      static const char* value()
      {
        return "imc/UsblFix";
      }

      static const char* value(const DUNE::IMC::UsblFix& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblFix>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblFix& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblFix>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblFix& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblFix& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblFix& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::ParametersXml>
    {
      static const char* value()
      {
        return "d98e3181f1d45d0814be4a6c7bf3b2f4";
      }

      static const char* value(const DUNE::IMC::ParametersXml& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::ParametersXml>
    {
      static const char* value()
      {
        return "imc/ParametersXml";
      }

      static const char* value(const DUNE::IMC::ParametersXml& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::ParametersXml>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::ParametersXml& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::ParametersXml>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::ParametersXml& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::ParametersXml& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::ParametersXml& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GetParametersXml>
    {
      static const char* value()
      {
        return "28bc625f8c15faa6ef9729b253beee0c";
      }

      static const char* value(const DUNE::IMC::GetParametersXml& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GetParametersXml>
    {
      static const char* value()
      {
        return "imc/GetParametersXml";
      }

      static const char* value(const DUNE::IMC::GetParametersXml& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GetParametersXml>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GetParametersXml& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GetParametersXml>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GetParametersXml& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GetParametersXml& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GetParametersXml& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::SetImageCoords>
    {
      static const char* value()
      {
        return "e29a6b8fa23b800fcfb81e9b5c936a9f";
      }

      static const char* value(const DUNE::IMC::SetImageCoords& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::SetImageCoords>
    {
      static const char* value()
      {
        return "imc/SetImageCoords";
      }

      static const char* value(const DUNE::IMC::SetImageCoords& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::SetImageCoords>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::SetImageCoords& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::SetImageCoords>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::SetImageCoords& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::SetImageCoords& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::SetImageCoords& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GetImageCoords>
    {
      static const char* value()
      {
        return "0496553a84ac161c01b4a4ea818d9d23";
      }

      static const char* value(const DUNE::IMC::GetImageCoords& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GetImageCoords>
    {
      static const char* value()
      {
        return "imc/GetImageCoords";
      }

      static const char* value(const DUNE::IMC::GetImageCoords& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GetImageCoords>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GetImageCoords& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GetImageCoords>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GetImageCoords& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GetImageCoords& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GetImageCoords& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::GetWorldCoordinates>
    {
      static const char* value()
      {
        return "45d6b473e3d4ff886b56c15d370a9dec";
      }

      static const char* value(const DUNE::IMC::GetWorldCoordinates& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::GetWorldCoordinates>
    {
      static const char* value()
      {
        return "imc/GetWorldCoordinates";
      }

      static const char* value(const DUNE::IMC::GetWorldCoordinates& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::GetWorldCoordinates>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::GetWorldCoordinates& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::GetWorldCoordinates>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::GetWorldCoordinates& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::GetWorldCoordinates& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::GetWorldCoordinates& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblAnglesExtended>
    {
      static const char* value()
      {
        return "add7544b06a166930bdb17f39dcac128";
      }

      static const char* value(const DUNE::IMC::UsblAnglesExtended& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblAnglesExtended>
    {
      static const char* value()
      {
        return "imc/UsblAnglesExtended";
      }

      static const char* value(const DUNE::IMC::UsblAnglesExtended& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblAnglesExtended>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblAnglesExtended& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblAnglesExtended>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblAnglesExtended& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblAnglesExtended& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblAnglesExtended& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblPositionExtended>
    {
      static const char* value()
      {
        return "1db4ffb72a3831966826793f8f7b5fc3";
      }

      static const char* value(const DUNE::IMC::UsblPositionExtended& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblPositionExtended>
    {
      static const char* value()
      {
        return "imc/UsblPositionExtended";
      }

      static const char* value(const DUNE::IMC::UsblPositionExtended& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblPositionExtended>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblPositionExtended& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblPositionExtended>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblPositionExtended& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblPositionExtended& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblPositionExtended& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblFixExtended>
    {
      static const char* value()
      {
        return "5693c5f9e9dc9060c606c129bf1af0b1";
      }

      static const char* value(const DUNE::IMC::UsblFixExtended& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblFixExtended>
    {
      static const char* value()
      {
        return "imc/UsblFixExtended";
      }

      static const char* value(const DUNE::IMC::UsblFixExtended& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblFixExtended>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblFixExtended& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblFixExtended>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblFixExtended& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblFixExtended& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblFixExtended& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblModem>
    {
      static const char* value()
      {
        return "f275c54092c04022fad9b8643648cc72";
      }

      static const char* value(const DUNE::IMC::UsblModem& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblModem>
    {
      static const char* value()
      {
        return "imc/UsblModem";
      }

      static const char* value(const DUNE::IMC::UsblModem& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblModem>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblModem& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblModem>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblModem& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblModem& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblModem& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::UsblConfig>
    {
      static const char* value()
      {
        return "0bfdf60449e5278dbca35ca7e204d316";
      }

      static const char* value(const DUNE::IMC::UsblConfig& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::UsblConfig>
    {
      static const char* value()
      {
        return "imc/UsblConfig";
      }

      static const char* value(const DUNE::IMC::UsblConfig& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::UsblConfig>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::UsblConfig& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::UsblConfig>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::UsblConfig& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::UsblConfig& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::UsblConfig& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::DissolvedOrganicMatter>
    {
      static const char* value()
      {
        return "f4c88a410c1b052d06d40258e9b031b8";
      }

      static const char* value(const DUNE::IMC::DissolvedOrganicMatter& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::DissolvedOrganicMatter>
    {
      static const char* value()
      {
        return "imc/DissolvedOrganicMatter";
      }

      static const char* value(const DUNE::IMC::DissolvedOrganicMatter& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::DissolvedOrganicMatter>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::DissolvedOrganicMatter& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::DissolvedOrganicMatter>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::DissolvedOrganicMatter& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::DissolvedOrganicMatter& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::DissolvedOrganicMatter& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::OpticalBackscatter>
    {
      static const char* value()
      {
        return "b76de503b433e97ce305befce2b0f352";
      }

      static const char* value(const DUNE::IMC::OpticalBackscatter& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::OpticalBackscatter>
    {
      static const char* value()
      {
        return "imc/OpticalBackscatter";
      }

      static const char* value(const DUNE::IMC::OpticalBackscatter& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::OpticalBackscatter>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::OpticalBackscatter& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::OpticalBackscatter>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::OpticalBackscatter& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::OpticalBackscatter& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::OpticalBackscatter& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}
namespace ros
{
  namespace message_traits
  {
    template<>
    struct MD5Sum<DUNE::IMC::Tachograph>
    {
      static const char* value()
      {
        return "54b06f012c417826d778c05b7f19bb75";
      }

      static const char* value(const DUNE::IMC::Tachograph& m)
      {
        return value();
      }
    };

    template<>
    struct DataType<DUNE::IMC::Tachograph>
    {
      static const char* value()
      {
        return "imc/Tachograph";
      }

      static const char* value(const DUNE::IMC::Tachograph& m)
      {
        return value();
      }
    };

    template<>
    struct Definition<DUNE::IMC::Tachograph>
    {
      static const char* value()
      {
        return "X";
      }

      static const char* value(const DUNE::IMC::Tachograph& m)
      {
        return value();
      }
    };
  }

  namespace serialization
  {
    template<>
    struct Serializer<DUNE::IMC::Tachograph>
    {
      template<typename Stream>
      inline static void write(Stream& stream, const DUNE::IMC::Tachograph& t)
      {
        size_t size = t.getSerializationSize();
        DUNE::IMC::Packet::serialize(&t, stream.advance(size), size);
      }

      template<typename Stream>
      inline static void read(Stream& stream, DUNE::IMC::Tachograph& t)
      {
        DUNE::IMC::Message* msg = DUNE::IMC::Packet::deserialize(stream.getData(), stream.getLength(), &t);
      }

      inline static uint32_t serializedLength(const DUNE::IMC::Tachograph& t)
      {
        return t.getSerializationSize();
      }
    };
  }
}

#endif
