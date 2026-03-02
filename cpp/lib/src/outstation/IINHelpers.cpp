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
////#include "outstation/IINHelpers.h"

#include "log_info.h"

#include "header_dnp3.h"
#include "IINHelpers.h"

////namespace opendnp3
////{

IINField IINFromParseResult(ParseResult_uint8_t result)
{
#ifdef  LOG_INFO
  std::cout<<std::endl;
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{IINFromParseResult1"<<std::endl;
#endif
  switch (result)
  {
  case (ParseResult_OK):               //ParseResult_OK,  //0
  {
#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}IINFromParseResult1_"<<std::endl;
  decrement_stack_info();
#endif
    return Empty_in_IINField_static();
  }
////        return IINField::Empty();
  case (ParseResult_UNKNOWN_OBJECT):   //ParseResult_UNKNOWN_OBJECT,   //6
  {
//   void IINField_in_IINFieldOver2(IINField *pIINField, IINBit_uint8_t bit);
////        return IINField(IINBit::OBJECT_UNKNOWN);
    IINField iIINField;
    IINField_in_IINFieldOver2(&iIINField, IINBit_OBJECT_UNKNOWN);
    return iIINField;
  }
  default:
  {
////        return IINField(IINBit::PARAM_ERROR);
#ifdef  LOG_INFO
  std::cout<<getString_stack_info();
  std::cout<<"}IINFromParseResult2_"<<std::endl;
  decrement_stack_info();
#endif
    IINField iIINField;
    IINField_in_IINFieldOver2(&iIINField, IINBit_PARAM_ERROR);
    return iIINField;
  }
  }
}

////} // namespace opendnp3
