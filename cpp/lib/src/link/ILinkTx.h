/*
 * Copyright 2013-2022 Step Function I/O, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Step Function I/O
 * LLC (https://stepfunc.io) under one or more contributor license agreements.
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Step Function I/O LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef OPENDNP3_ILINKTX_H
#define OPENDNP3_ILINKTX_H

////#include "link/ILinkSession.h"
#include "ILinkSession.h"

////#include <ser4cpp/container/SequenceTypes.h>

////namespace opendnp3
////{

/**
 * Interface the link layer uses to transmit data
 */
////class ILinkTx
typedef struct
{
////public:
////    virtual ~ILinkTx() {}

  /**
   * Begin transmission of a frame. Callback happens OFF the call stack (via executor)
  * Начать передачу кадра. Обратный вызов происходит вне стека вызовов (через исполнителя)
   */
  void (*pBeginTransmit_in_ILinkTx)(void*, RSeq_for_Uint16_t* buffer, ILinkSession* context);// = 0;

  void* pParentPointer_in_ILinkTx;
} ILinkTx;

void BeginTransmit_in_ILinkTx(ILinkTx*, RSeq_for_Uint16_t* buffer, ILinkSession* context);

void* getParentPointer_in_ILinkTx(ILinkTx*);
void  setParentPointer_in_ILinkTx(ILinkTx*, void*);

////} // namespace opendnp3


#endif
