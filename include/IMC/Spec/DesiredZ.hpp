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

#ifndef IMC_DESIREDZ_HPP_INCLUDED_
#define IMC_DESIREDZ_HPP_INCLUDED_

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
#include <IMC/Spec/ControlCommand.hpp>

namespace IMC
{
  //! Desired Z.
  class DesiredZ: public ControlCommand
  {
  public:
    //! Value.
    float value;
    //! Z Units.
    uint8_t z_units;

    static uint16_t
    getIdStatic(void)
    {
      return 401;
    }

    static DesiredZ*
    cast(Message* msg__)
    {
      return (DesiredZ*)msg__;
    }

    DesiredZ(void)
    {
      m_header.mgid = DesiredZ::getIdStatic();
      clear();
    }

    DesiredZ*
    clone(void) const
    {
      return new DesiredZ(*this);
    }

    void
    clear(void)
    {
      value = 0;
      z_units = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::DesiredZ& other__ = static_cast<const DesiredZ&>(msg__);
      if (value != other__.value) return false;
      if (z_units != other__.z_units) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(value, ptr__);
      ptr__ += IMC::serialize(z_units, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      bfr__ += IMC::deserialize(z_units, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return DesiredZ::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "DesiredZ";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 5;
    }

    double
    getValueFP(void) const
    {
      return static_cast<double>(value);
    }

    void
    setValueFP(double val)
    {
      value = static_cast<float>(val);
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "value", value, nindent__);
      IMC::toJSON(os__, "z_units", z_units, nindent__);
    }
  };
}

#endif
