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

#ifndef IMC_ALIGNMENTSTATE_HPP_INCLUDED_
#define IMC_ALIGNMENTSTATE_HPP_INCLUDED_

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
  //! Alignment State.
  class AlignmentState: public Message
  {
  public:
    //! State.
    enum StateEnum
    {
      //! Not Aligned.
      AS_NOT_ALIGNED = 0,
      //! Aligned.
      AS_ALIGNED = 1,
      //! Not Supported.
      AS_NOT_SUPPORTED = 2,
      //! Aligning.
      AS_ALIGNING = 3,
      //! Wrong Medium.
      AS_WRONG_MEDIUM = 4
    };

    //! State.
    uint8_t state;

    static uint16_t
    getIdStatic(void)
    {
      return 361;
    }

    static AlignmentState*
    cast(Message* msg__)
    {
      return (AlignmentState*)msg__;
    }

    AlignmentState(void)
    {
      m_header.mgid = AlignmentState::getIdStatic();
      clear();
    }

    AlignmentState*
    clone(void) const
    {
      return new AlignmentState(*this);
    }

    void
    clear(void)
    {
      state = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::AlignmentState& other__ = static_cast<const AlignmentState&>(msg__);
      if (state != other__.state) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(state, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(state, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return AlignmentState::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "AlignmentState";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 1;
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "state", state, nindent__);
    }
  };
}

#endif
