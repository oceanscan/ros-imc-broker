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

#ifndef IMC_CAMERAZOOM_HPP_INCLUDED_
#define IMC_CAMERAZOOM_HPP_INCLUDED_

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
  //! Camera Zoom.
  class CameraZoom: public Message
  {
  public:
    //! Action.
    enum ActionEnum
    {
      //! Reset Zoom.
      ACTION_ZOOM_RESET = 0,
      //! Zoom In.
      ACTION_ZOOM_IN = 1,
      //! Zoom Out.
      ACTION_ZOOM_OUT = 2,
      //! Stop Zooming.
      ACTION_ZOOM_STOP = 3
    };

    //! Camera Number.
    uint8_t id;
    //! Absolute Zoom Level.
    uint8_t zoom;
    //! Action.
    uint8_t action;

    static uint16_t
    getIdStatic(void)
    {
      return 300;
    }

    static CameraZoom*
    cast(Message* msg__)
    {
      return (CameraZoom*)msg__;
    }

    CameraZoom(void)
    {
      m_header.mgid = CameraZoom::getIdStatic();
      clear();
    }

    CameraZoom*
    clone(void) const
    {
      return new CameraZoom(*this);
    }

    void
    clear(void)
    {
      id = 0;
      zoom = 0;
      action = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::CameraZoom& other__ = static_cast<const CameraZoom&>(msg__);
      if (id != other__.id) return false;
      if (zoom != other__.zoom) return false;
      if (action != other__.action) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(id, ptr__);
      ptr__ += IMC::serialize(zoom, ptr__);
      ptr__ += IMC::serialize(action, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(zoom, bfr__, size__);
      bfr__ += IMC::deserialize(action, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(id, bfr__, size__);
      bfr__ += IMC::deserialize(zoom, bfr__, size__);
      bfr__ += IMC::deserialize(action, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return CameraZoom::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "CameraZoom";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 3;
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
      IMC::toJSON(os__, "zoom", zoom, nindent__);
      IMC::toJSON(os__, "action", action, nindent__);
    }
  };
}

#endif
