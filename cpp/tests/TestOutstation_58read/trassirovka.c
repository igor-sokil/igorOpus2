******SUITE('58read g1v2 using qualifer 0x28')********

++++dfgfgfhghgf
OutstationTestObject_in_OutstationTestObject1

    OContext_in_OContext1

        EventLists_in_EventLists1
        TotalEvents_in_EventBufferConfig1
*        *pEventBufferConfig->maxBinaryEvents= 0
*        *pEventBufferConfig->maxDoubleBinaryEvents=0
*        *pEventBufferConfig->maxAnalogEvents= 0
*        *pEventBufferConfig->maxCounterEvents= 0
*        *pEventBufferConfig->maxBinaryOutputStatusEvents= 0
*        *pEventBufferConfig->maxAnalogOutputStatusEvents= 0
*        *pEventBufferConfig->maxOctetStringEvents= 0

        Database_in_Database1

        StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

        StaticDataMap_for_DoubleBitBinarySpec_in_StaticDataMap_for_DoubleBitBinarySpecOver2_1

        StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

+        kjkljklj
=       fdfg
       66dfghgdhg
@@@@ kkkkkk
+++++
     StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2_1
     StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2_1
     StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2_1
     

            StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2_1

    StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2_1

        StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2_1

        DeferredRequest_in_DeferredRequest1
*        *uint32_t maxAPDUSize =2048

        BufferSer4_in_BufferSer4Over2_1
*        *uint16_t length=2048

        TxBuffer_in_TxBuffer1
*        *uint32_t maxTxSize =2048

        BufferSer4_in_BufferSer4Over2_1
*        *uint16_t length=2048

        TxBuffer_in_TxBuffer1
*        *uint32_t maxTxSize =2048

        BufferSer4_in_BufferSer4Over2_1
*        *uint16_t length=2048

        StateIdle_in_StateIdle1

        OutstationState_in_OutstationState1

    CheckForTaskStart_in_OContext1

        CheckForUnsolicitedNull_in_OContext1

            IsIdle_in_OutstationState1

            IsIdle_in_StateIdle_override1

        CheckForUnsolicited_in_OContext1

            IsIdle_in_OutstationState1

            IsIdle_in_StateIdle_override1

    SendToOutstation_in_OutstationTestObject1

    OnReceive_in_OContext1

        ProcessMessage_in_OContext1
*        *FORMAT_HEX_BLOCK(this->logger, flags::APP_HEX_RX, message.payload, 18, 18)

            ParseRequest_in_APDUHeaderParser_static1
*            *buffer->buffer_[i]=  c0
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  2
*            *buffer->buffer_[i]=  28
*            *buffer->buffer_[i]=  2
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  2
*            *buffer->buffer_[i]=  0
            ParseRequest_in_APDUHeaderParser_static3

            ProcessObjects_in_OContext1

            ProcessRequest_in_OContext1

                OnReceiveSolRequest_in_OContext1
                OnReceiveSolRequest_in_OContext8

                ProcessNewRequest_in_OContext1
*                *FunctionCode_READ

                OnNewReadRequest_in_StateIdle_override1

                RespondToReadRequest_in_OContext1

                    HandleRead_in_OContext1
*                    *buffer->buffer_[i]=  1
*                    *buffer->buffer_[i]=  2
*                    *buffer->buffer_[i]=  28
*                    *buffer->buffer_[i]=  2
*                    *buffer->buffer_[i]=  0
*                    *buffer->buffer_[i]=  0
*                    *buffer->buffer_[i]=  0
*                    *buffer->buffer_[i]=  2
*                    *buffer->buffer_[i]=  0

                        ReadHandler_in_ReadHandler1

                        IAPDUHandler_in_IAPDUHandler1
*                        *pIAPDUHandler= 6410128

                        Parse_in_APDUParser_static1
*                        *buffer->buffer_[i]=  1
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  28
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  0

                            ParseSinglePass_in_APDUParser_static1
*                            *IAPDUHandler* pHandler=0
*                            *IWhiteList* pWhiteList=6410128
*                            *buffer->buffer_[i]=  1
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  28
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0
*                            *copy=6410128
*                            *buffer->buffer_[i]=  1
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  28
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0

                                ParseHeader_in_APDUParser_static1
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  28
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  0

                                    ParseObjectHeader_in_ObjectHeaderParser_static1

                                    GetRecord_in_GroupVariationRecord_static1
*                                    *uint8_t group= 1
*                                    *uint8_t variation= 2

                                    GetEnumAndType_in_GroupVariationRecord_static1
*                                    *uint8_t group= 1
*                                    *uint8_t variation= 2

                                        GetType_in_GroupVariationRecord_static1
*                                        *uint8_t group= 1
*                                        *uint8_t variation= 2
*                                        *GroupVariationType_STATIC
*                                    *GroupVariation_uint16_t enumeration= 102

                                ParseQualifier_in_APDUParser_static1
*                                *IAPDUHandler* pHandler= 0
*                                *QualifierCode_uint8_t tmp =40
*                                *QualifierCode_UINT16_CNT_UINT16_INDEX*

                                NumParser_in_NumParser1

                                ParseHeader_in_CountIndexParser_static1
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  0

                                    ParseCount_in_NumParser1
*                                *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                *record.group= 1
*                                *record.variation= 2
*                                *record.enumeration= 258
*                                *record.GetQualifierCode()= 40

                                ParseCountOfIndices_in_CountIndexParser_static1
                        Parse_in_APDUParser_static2

                        ParseSinglePass_in_APDUParser_static1
*                        *IAPDUHandler* pHandler=6410128
*                        *IWhiteList* pWhiteList=0
*                        *buffer->buffer_[i]=  1
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  28
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  0
*                        *copy=0
*                        *buffer->buffer_[i]=  1
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  28
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  2
*                        *buffer->buffer_[i]=  0

                            ParseHeader_in_APDUParser_static1
*                            *buffer->buffer_[i]=  1
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  28
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0

                                ParseObjectHeader_in_ObjectHeaderParser_static1

                                GetRecord_in_GroupVariationRecord_static1
*                                *uint8_t group= 1
*                                *uint8_t variation= 2

                                GetEnumAndType_in_GroupVariationRecord_static1
*                                *uint8_t group= 1
*                                *uint8_t variation= 2

                                    GetType_in_GroupVariationRecord_static1
*                                    *uint8_t group= 1
*                                    *uint8_t variation= 2
*                                    *GroupVariationType_STATIC
*                                *GroupVariation_uint16_t enumeration= 102

                            ParseQualifier_in_APDUParser_static1
*                            *IAPDUHandler* pHandler= 6410128
*                            *QualifierCode_uint8_t tmp =40
*                            *QualifierCode_UINT16_CNT_UINT16_INDEX*

                            NumParser_in_NumParser1

                            ParseHeader_in_CountIndexParser_static1
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  2
*                            *buffer->buffer_[i]=  0

                                ParseCount_in_NumParser1
*                            *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                            *record.group= 1
*                            *record.variation= 2
*                            *record.enumeration= 258
*                            *record.GetQualifierCode()= 40

                            ParseCountOfIndices_in_CountIndexParser_static1

                                BufferedCollection_uint16_in_BufferedCollection_uint16_1

                                OnHeader_PrefixHeader_for_uint16_in_IAPDUHandler1

                                SelectIndices_in_Database1
*                                *GroupVariation_Group1Var2

                                select_indices_for_BinarySpec_in_Database_staticOver1_1

                                ForeachItem_in_ICollection_for_uint16_1
                                ForeachItem_in_ICollection_for_uint16_2

                                    Foreach_in_BufferedCollection_uint16_1
                                    Foreach_in_BufferedCollection_uint16_2

                                        select_for_BinarySpec_in_DatabaseOver1

                                        select_in_StaticDataMap_for_BinarySpecOver5_1

                                            check_for_promotion_for_BinarySpec_static1
*                                            *StaticBinaryVariation_uint8_t variation= 1
*                                            *StaticBinaryVariation_Group1Var1= 0
*                                        *start->first= 0
*                                        *stop= 0
*                                        *rRange.start= 0
*                                        *rRange.stop= 0
*                                        *pStaticDataMap_for_BinarySpec->selected.start= 1
*                                        *pStaticDataMap_for_BinarySpec->selected.stop= 0
*                                        *pStaticDataMap_for_BinarySpec->selected.start= 0
*                                        *pStaticDataMap_for_BinarySpec->selected.stop= 0
                                    Foreach_in_BufferedCollection_uint16_3
                                    Foreach_in_BufferedCollection_uint16_2

                                        select_for_BinarySpec_in_DatabaseOver1

                                        select_in_StaticDataMap_for_BinarySpecOver5_1

                                            check_for_promotion_for_BinarySpec_static1
*                                            *StaticBinaryVariation_uint8_t variation= 1
*                                            *StaticBinaryVariation_Group1Var1= 0
*                                        *start->first= 2
*                                        *stop= 2
*                                        *rRange.start= 2
*                                        *rRange.stop= 2
*                                        *pStaticDataMap_for_BinarySpec->selected.start= 0
*                                        *pStaticDataMap_for_BinarySpec->selected.stop= 0
*                                        *pStaticDataMap_for_BinarySpec->selected.start= 0
*                                        *pStaticDataMap_for_BinarySpec->selected.stop= 2
                                    Foreach_in_BufferedCollection_uint16_3
                                ForeachItem_in_ICollection_for_uint16_3

                                Record_in_IAPDUHandler1

                        Load_in_Database1

                        load_type_for_Analog_in_Database_static1
*                        *map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_Binary_in_Database_static1
*                        *map.map.size()= 3

                            WriteHeaderWithReserve_in_HeaderWriter1
*                            *qc= 0
*                            *reserve= 3

                            WriteHeader_in_HeaderWriter1
*                            *id.group= 1
*                            *id.variation= 2
*                            *qc= 0

                            RangeWriteIterator_for_UInt8_Binary_in_RangeWriteIterator_for_UInt8_BinaryOver2_1

                            RangeWriteIterator_for_UInt8_Binary_destr_RangeWriteIterator_for_UInt8_Binary1

                            WriteHeaderWithReserve_in_HeaderWriter1
*                            *qc= 0
*                            *reserve= 3

                            WriteHeader_in_HeaderWriter1
*                            *id.group= 1
*                            *id.variation= 2
*                            *qc= 0

                            RangeWriteIterator_for_UInt8_Binary_in_RangeWriteIterator_for_UInt8_BinaryOver2_1

                            RangeWriteIterator_for_UInt8_Binary_destr_RangeWriteIterator_for_UInt8_Binary1
*                        *if (iter == map.end())

                        load_type_for_BinaryOutputStatus_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_AnalogOutputStatus_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_DoubleBitBinary_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_Counter_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_FrozenCounter_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_OctetString_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                        load_type_for_TimeAndInterval_in_Database_static1
*                        *map.map.size()= 0
*                        *if (iter == map.end())

                    GetResponseIIN_in_OContext1

                    BeginResponseTx_in_OContext1

                        CheckForBroadcastConfirmation_in_OContext1

                    StateIdle_in_StateIdle1

                    OutstationState_in_OutstationState1

        CheckForTaskStart_in_OContext1

            CheckForUnsolicitedNull_in_OContext1

            CheckForUnsolicited_in_OContext1
REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 00 01 02 00 00 00 02 01 02 00 02 02 02')
temp=                                C0 81 80 00 01 02 00 00 00 02 01 02 00 02 02 02
