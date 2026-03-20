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
#ifndef OPENDNP3_HEADERWRITER_for_DoubleBitBinary_H
#define OPENDNP3_HEADERWRITER_for_DoubleBitBinary_H

////#include "app/BitfieldRangeWriteIterator.h"
////#include "app/CountWriteIterator.h"
////#include "app/DNP3Serializer.h"
////#include "app/GroupVariationRecord.h"
////#include "app/IVariableLength.h"
////#include "app/PrefixedWriteIterator.h"
////#include "app/RangeWriteIterator.h"

////#include "opendnp3/app/GroupVariationID.h"
////#include "opendnp3/gen/QualifierCode.h"

#include "HeaderWriter.h"
#include "PrefixedWriteIterator_for_DoubleBitBinary.h"
#include "RangeWriteIterator_for_DoubleBitBinary.h"
#include "CountWriteIterator_for_DoubleBitBinary.h"
////#include <ser4cpp/container/Settable.h>
////#include <ser4cpp/serialization/LittleEndian.h>

////namespace opendnp3
////{

//================================================DoubleBitBinary=================================================================
//--------------------------------IterateOverCount_for_UInt16_Ananlog_in_HeaderWriter--------------------------------------------------------
////    template<class CountType, class WriteType>
////    CountWriteIterator<CountType, WriteType> IterateOverCount(QualifierCode qc,
////                                                              const DNP3Serializer<WriteType>& serializer);
CountWriteIterator_for_UInt16_DoubleBitBinary IterateOverCount_for_UInt16_DoubleBitBinary_in_HeaderWriter(HeaderWriter *pHeaderWriter,
    QualifierCode_uint8_t qc,
    DNP3Serializer_for_DoubleBitBinary* serializer);

//--------------------------------IterateOverCount_for_UInt16_DoubleBitBinary_in_HeaderWriter--------------------------------------------------------
//--------------------------------IterateOverCount_for_UInt8_Ananlog_in_HeaderWriter--------------------------------------------------------
////    template<class CountType, class WriteType>
////    CountWriteIterator<CountType, WriteType> IterateOverCount(QualifierCode qc,
////                                                              const DNP3Serializer<WriteType>& serializer);
CountWriteIterator_for_UInt8_DoubleBitBinary IterateOverCount_for_UInt8_DoubleBitBinary_in_HeaderWriter(HeaderWriter *pHeaderWriter,
    QualifierCode_uint8_t qc,
    DNP3Serializer_for_DoubleBitBinary* serializer);

//--------------------------------IterateOverCount_for_UInt8_DoubleBitBinary_in_HeaderWriter--------------------------------------------------------
//--------------------------------IterateOverCountWithPrefix_for_UInt16_DoubleBitBinary--------------------------------------------------------
////template<class PrefixType, class WriteType>
////PrefixedWriteIterator<PrefixType, WriteType> HeaderWriter::IterateOverCountWithPrefix(
////    QualifierCode qc, const DNP3Serializer<WriteType>& serializer)
PrefixedWriteIterator_for_UInt16_DoubleBitBinary IterateOverCountWithPrefix_for_UInt16_DoubleBitBinary_in_HeaderWriter(HeaderWriter *pHeaderWriter,
    QualifierCode_uint8_t qc, DNP3Serializer_for_DoubleBitBinary* serializer);

//--------------------------------IterateOverCountWithPrefix_for_UInt16_DoubleBitBinary--------------------------------------------------------
//--------------------------------IterateOverCountWithPrefixAndCTO_for_UInt16_DoubleBitBinary_Group51Var1_in_HeaderWriter--------------------------------------------------------
////    template<class PrefixType, class WriteType, class CTOType>
////    PrefixedWriteIterator<PrefixType, WriteType> IterateOverCountWithPrefixAndCTO(
////        QualifierCode qc, const DNP3Serializer<WriteType>& serializer, const CTOType& cto);
PrefixedWriteIterator_for_UInt16_DoubleBitBinary IterateOverCountWithPrefixAndCTO_for_UInt16_DoubleBitBinary_Group51Var1_in_HeaderWriter(HeaderWriter *pHeaderWriter,
    QualifierCode_uint8_t qc,
    DNP3Serializer_for_DoubleBitBinary* serializer,
    Group51Var1* cto);
//--------------------------------IterateOverCountWithPrefixAndCTO_for_UInt16_DoubleBitBinary_Group51Var1_in_HeaderWriter--------------------------------------------------------
//--------------------------------IterateOverCountWithPrefixAndCTO_for_UInt16_DoubleBitBinary_Group51Var2_in_HeaderWriter--------------------------------------------------------
////    template<class PrefixType, class WriteType, class CTOType>
////    PrefixedWriteIterator<PrefixType, WriteType> IterateOverCountWithPrefixAndCTO(
////        QualifierCode qc, const DNP3Serializer<WriteType>& serializer, const CTOType& cto);
PrefixedWriteIterator_for_UInt16_DoubleBitBinary IterateOverCountWithPrefixAndCTO_for_UInt16_DoubleBitBinary_Group51Var2_in_HeaderWriter(HeaderWriter *pHeaderWriter,
    QualifierCode_uint8_t qc,
    DNP3Serializer_for_DoubleBitBinary* serializer,
    Group51Var2* cto);
//--------------------------------IterateOverCountWithPrefixAndCTO_for_UInt16_DoubleBitBinary_Group51Var2_in_HeaderWriter--------------------------------------------------------

//--------------------------------IterateOverRange_for_UInt8_DoubleBitBinary_in_HeaderWriter--------------------------------------------------------
////    template<class IndexType, class WriteType>
////    RangeWriteIterator<IndexType, WriteType> IterateOverRange(QualifierCode qc,
////                                                              const DNP3Serializer<WriteType>& serializer,
////                                                              typename IndexType::type_t start);
    RangeWriteIterator_for_UInt8_DoubleBitBinary IterateOverRange_for_UInt8_DoubleBitBinary_in_HeaderWriter(HeaderWriter *pHeaderWriter,
                                                   QualifierCode_uint8_t qc,
                                                   DNP3Serializer_for_DoubleBitBinary *serializer,
                                                   uint8_t start
                                                  );

//--------------------------------IterateOverRange_for_UInt8_DoubleBitBinary_in_HeaderWriter--------------------------------------------------------
//--------------------------------IterateOverRange_for_UInt16_DoubleBitBinary_in_HeaderWriter--------------------------------------------------------
////    template<class IndexType, class WriteType>
////    RangeWriteIterator<IndexType, WriteType> IterateOverRange(QualifierCode qc,
////                                                              const DNP3Serializer<WriteType>& serializer,
////                                                              typename IndexType::type_t start);
    RangeWriteIterator_for_UInt16_DoubleBitBinary IterateOverRange_for_UInt16_DoubleBitBinary_in_HeaderWriter(HeaderWriter *pHeaderWriter,
                                                   QualifierCode_uint8_t qc,
                                                   DNP3Serializer_for_DoubleBitBinary *serializer,
                                                   uint16_t start
                                                  );

//--------------------------------IterateOverRange_for_UInt16_DoubleBitBinary_in_HeaderWriter--------------------------------------------------------

//================================================DoubleBitBinary=================================================================
#endif
