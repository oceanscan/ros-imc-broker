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

#ifndef IMC_HISTORICDATA_HPP_INCLUDED_
#define IMC_HISTORICDATA_HPP_INCLUDED_

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
#include <IMC/Spec/RemoteData.hpp>

namespace IMC
{
  //! Historic Data Series.
  class HistoricData: public Message
  {
  public:
    //! Base Latitude.
    float base_lat;
    //! Base Longitude.
    float base_lon;
    //! Base Timestamp.
    float base_time;
    //! Data.
    MessageList<RemoteData> data;

    static uint16_t
    getIdStatic(void)
    {
      return 184;
    }

    static HistoricData*
    cast(Message* msg__)
    {
      return (HistoricData*)msg__;
    }

    HistoricData(void)
    {
      m_header.mgid = HistoricData::getIdStatic();
      clear();
      data.setParent(this);
    }

    HistoricData*
    clone(void) const
    {
      return new HistoricData(*this);
    }

    void
    clear(void)
    {
      base_lat = 0;
      base_lon = 0;
      base_time = 0;
      data.clear();
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::HistoricData& other__ = static_cast<const HistoricData&>(msg__);
      if (base_lat != other__.base_lat) return false;
      if (base_lon != other__.base_lon) return false;
      if (base_time != other__.base_time) return false;
      if (data != other__.data) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(base_lat, ptr__);
      ptr__ += IMC::serialize(base_lon, ptr__);
      ptr__ += IMC::serialize(base_time, ptr__);
      ptr__ += data.serialize(ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(base_lat, bfr__, size__);
      bfr__ += IMC::deserialize(base_lon, bfr__, size__);
      bfr__ += IMC::deserialize(base_time, bfr__, size__);
      bfr__ += data.deserialize(bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(base_lat, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(base_lon, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(base_time, bfr__, size__);
      bfr__ += data.reverseDeserialize(bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return HistoricData::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "HistoricData";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 12;
    }

    size_t
    getVariableSerializationSize(void) const
    {
      return data.getSerializationSize();
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "base_lat", base_lat, nindent__);
      IMC::toJSON(os__, "base_lon", base_lon, nindent__);
      IMC::toJSON(os__, "base_time", base_time, nindent__);
      data.toJSON(os__, "data", nindent__);
    }

  protected:
    void
    setTimeStampNested(double value__)
    {
      data.setTimeStamp(value__);
    }

    void
    setSourceNested(uint16_t value__)
    {
      data.setSource(value__);
    }

    void
    setSourceEntityNested(uint8_t value__)
    {
      data.setSourceEntity(value__);
    }

    void
    setDestinationNested(uint16_t value__)
    {
      data.setDestination(value__);
    }

    void
    setDestinationEntityNested(uint8_t value__)
    {
      data.setDestinationEntity(value__);
    }
  };
}

#endif
