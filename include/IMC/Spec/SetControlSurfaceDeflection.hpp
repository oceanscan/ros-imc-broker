//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
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
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 74f41081eac3414e0a982ae6a8fe7347                            *
//***************************************************************************

#ifndef IMC_SETCONTROLSURFACEDEFLECTION_HPP_INCLUDED_
#define IMC_SETCONTROLSURFACEDEFLECTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// IMC headers.
#include <IMC/Base/Config.hpp>
#include <IMC/Base/Message.hpp>
#include <IMC/Base/InlineMessage.hpp>
#include <IMC/Base/MessageList.hpp>
#include <IMC/Base/JSON.hpp>
#include <IMC/Base/Serialization.hpp>
#include <IMC/Spec/Enumerations.hpp>
#include <IMC/Spec/Bitfields.hpp>

namespace IMC
{
  //! Set Control Surface Deflection.
  class SetControlSurfaceDeflection: public Message
  {
  public:
    //! Identifier.
    uint8_t id;
    //! Angle.
    float angle;

    static uint16_t
    getIdStatic(void)
    {
      return 303;
    }

    static SetControlSurfaceDeflection*
    cast(Message* msg__)
    {
      return (SetControlSurfaceDeflection*)msg__;
    }

    SetControlSurfaceDeflection(void)
    {
      m_header.mgid = SetControlSurfaceDeflection::getIdStatic();
      clear();
    }

    SetControlSurfaceDeflection*
    clone(void) const
    {
      return new SetControlSurfaceDeflection(*this);
    }

    void
    clear(void)
    {
      id = 0;
      angle = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::SetControlSurfaceDeflection& other__ = static_cast<const SetControlSurfaceDeflection&>(msg__);
      if (id != other__.id) return false;
      if (angle != other__.angle) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(angle, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(angle, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(angle, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return SetControlSurfaceDeflection::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "SetControlSurfaceDeflection";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 5;
    }

    uint16_t
    getSubId(void) const
    {
      return id;
    }

    void
    setSubId(uint16_t subid)
    {
      id = (uint8_t)subid;
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "id", id, nindent__);
      IMC::toJSON(os__, "angle", angle, nindent__);
    }
  };
}

#endif
