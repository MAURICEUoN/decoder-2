/*****************************************************************************

  Licensed to Accellera Systems Initiative Inc. (Accellera) under one or
  more contributor license agreements.  See the NOTICE file distributed
  with this work for additional information regarding copyright ownership.
  Accellera licenses this file to you under the Apache License, Version 2.0
  (the "License"); you may not use this file except in compliance with the
  License.  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
  implied.  See the License for the specific language governing
  permissions and limitations under the License.

 *****************************************************************************/

//=====================================================================
///  @file lt_top.h

///  @brief This class instantiates components that compose the TLM2
///         example system

//=====================================================================
//  Original Authors:
//    Anna Keist, ESLX
//    Bill Bunton, ESLX
//    Jack Donovan, ESLX
//=====================================================================

#ifndef __LT_TOP_H__
#define __LT_TOP_H__

#include "tlm.h"                              // TLM header
#include "at_target_4_phase.h"                // at with lt memory target
#include "at_target_1_phase.h"                // at with lt memory target
#include "initiator_top.h"                    // processor abstraction initiator
#include "models/SimpleBusLT.h"               // Bus/Router Implementation

/// Top wrapper Module
class lt_top
: public sc_core::sc_module                   //  SC base class
{
public:

/// Constructor

  lt_top
  ( sc_core::sc_module_name name);

//Member Variables  ===========================================================
  private:
  SimpleBusLT<2, 2>       m_bus;                  ///< simple bus
  at_target_1_phase       m_lt_target_1;          ///< instance 1 target
  at_target_4_phase       m_lt_target_2;          ///< instance 2 target
  initiator_top           m_initiator_1;          ///< instance 1 initiator
  initiator_top           m_initiator_2;          ///< instance 2 initiator
};
#endif /* __LT_TOP_H__ */
