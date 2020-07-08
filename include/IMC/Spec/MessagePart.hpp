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

#ifndef IMC_MESSAGEPART_HPP_INCLUDED_
#define IMC_MESSAGEPART_HPP_INCLUDED_

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
  //! Message Fragment.
  class MessagePart: public Message
  {
  public:
    //! Transmission Unique Id.
    uint8_t uid;
    //! Fragment Number.
    uint8_t frag_number;
    //! Total Number of fragments.
    uint8_t num_frags;
    //! Fragment Data.
    std::vector<char> data;

    static uint16_t
    getIdStatic(void)
    {
      return 877;
    }

    static MessagePart*
    cast(Message* msg__)
    {
      return (MessagePart*)msg__;
    }

    MessagePart(void)
    {
      m_header.mgid = MessagePart::getIdStatic();
      clear();
    }

    MessagePart*
    clone(void) const
    {
      return new MessagePart(*this);
    }

    void
    clear(void)
    {
      uid = 0;
      frag_number = 0;
      num_frags = 0;
      data.clear();
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::MessagePart& other__ = static_cast<const MessagePart&>(msg__);
      if (uid != other__.uid) return false;
      if (frag_number != other__.frag_number) return false;
      if (num_frags != other__.num_frags) return false;
      if (data != other__.data) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(uid, ptr__);
      ptr__ += IMC::serialize(frag_number, ptr__);
      ptr__ += IMC::serialize(num_frags, ptr__);
      ptr__ += IMC::serialize(data, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(uid, bfr__, size__);
      bfr__ += IMC::deserialize(frag_number, bfr__, size__);
      bfr__ += IMC::deserialize(num_frags, bfr__, size__);
      bfr__ += IMC::deserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(uid, bfr__, size__);
      bfr__ += IMC::deserialize(frag_number, bfr__, size__);
      bfr__ += IMC::deserialize(num_frags, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(data, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return MessagePart::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "MessagePart";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 3;
    }

    size_t
    getVariableSerializationSize(void) const
    {
      return IMC::getSerializationSize(data);
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "uid", uid, nindent__);
      IMC::toJSON(os__, "frag_number", frag_number, nindent__);
      IMC::toJSON(os__, "num_frags", num_frags, nindent__);
      IMC::toJSON(os__, "data", data, nindent__);
    }
  };
}

#endif
