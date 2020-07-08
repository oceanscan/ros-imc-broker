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

#ifndef IMC_GETIMAGECOORDS_HPP_INCLUDED_
#define IMC_GETIMAGECOORDS_HPP_INCLUDED_

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
  //! Get Image Coordinates.
  class GetImageCoords: public Message
  {
  public:
    //! Camera Identifier.
    uint8_t camid;
    //! X.
    uint16_t x;
    //! Y.
    uint16_t y;

    static uint16_t
    getIdStatic(void)
    {
      return 896;
    }

    static GetImageCoords*
    cast(Message* msg__)
    {
      return (GetImageCoords*)msg__;
    }

    GetImageCoords(void)
    {
      m_header.mgid = GetImageCoords::getIdStatic();
      clear();
    }

    GetImageCoords*
    clone(void) const
    {
      return new GetImageCoords(*this);
    }

    void
    clear(void)
    {
      camid = 0;
      x = 0;
      y = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::GetImageCoords& other__ = static_cast<const GetImageCoords&>(msg__);
      if (camid != other__.camid) return false;
      if (x != other__.x) return false;
      if (y != other__.y) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(camid, ptr__);
      ptr__ += IMC::serialize(x, ptr__);
      ptr__ += IMC::serialize(y, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(camid, bfr__, size__);
      bfr__ += IMC::deserialize(x, bfr__, size__);
      bfr__ += IMC::deserialize(y, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(camid, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(x, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(y, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return GetImageCoords::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "GetImageCoords";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 5;
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "camid", camid, nindent__);
      IMC::toJSON(os__, "x", x, nindent__);
      IMC::toJSON(os__, "y", y, nindent__);
    }
  };
}

#endif
