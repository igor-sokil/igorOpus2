********SUITE('36_1ReadGrp30Var0ViaIntegrity')********

OutstationTestObject_in_OutstationTestObject1

    OContext_in_OContext1

    EventLists_in_EventLists1
    TotalEvents_in_EventBufferConfig1
*    *pEventBufferConfig->maxBinaryEvents= 0
*    *pEventBufferConfig->maxDoubleBinaryEvents=0
*    *pEventBufferConfig->maxAnalogEvents= 0
*    *pEventBufferConfig->maxCounterEvents= 0
*    *pEventBufferConfig->maxBinaryOutputStatusEvents= 0
*    *pEventBufferConfig->maxAnalogOutputStatusEvents= 0
*    *pEventBufferConfig->maxOctetStringEvents= 0

    Database_in_Database1

    StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2_1

    StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

    DeferredRequest_in_DeferredRequest1
*    *uint32_t maxAPDUSize =2048

    BufferSer4_in_BufferSer4Over2_1
*    *uint16_t length=2048

    TxBuffer_in_TxBuffer1
*    *uint32_t maxTxSize =2048

    BufferSer4_in_BufferSer4Over2_1
*    *uint16_t length=2048

    TxBuffer_in_TxBuffer1
*    *uint32_t maxTxSize =2048

    BufferSer4_in_BufferSer4Over2_1
*    *uint16_t length=2048

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
*            *FORMAT_HEX_BLOCK(this->logger, flags::APP_HEX_RX, message.payload, 18, 18)

                ParseRequest_in_APDUHeaderParser_static1
*                *buffer->buffer_[i]=  c0
*                *buffer->buffer_[i]=  1
*                *buffer->buffer_[i]=  1e
*                *buffer->buffer_[i]=  0
*                *buffer->buffer_[i]=  6
                ParseRequest_in_APDUHeaderParser_static3

            ProcessObjects_in_OContext1

            ProcessRequest_in_OContext1

                OnReceiveSolRequest_in_OContext1
                OnReceiveSolRequest_in_OContext8

                ProcessNewRequest_in_OContext1

                OnNewReadRequest_in_StateIdle_override1

                RespondToReadRequest_in_OContext1

                HandleRead_in_OContext1
*                *buffer->buffer_[i]=  1e
*                *buffer->buffer_[i]=  0
*                *buffer->buffer_[i]=  6

                    ReadHandler_in_ReadHandler1

                    IAPDUHandler_in_IAPDUHandler1
*                    *pIAPDUHandler= 6410144

                    Parse_in_APDUParser_static1
*                    *buffer->buffer_[i]=  1e
*                    *buffer->buffer_[i]=  0
*                    *buffer->buffer_[i]=  6

                        ParseSinglePass_in_APDUParser_static1
*                        *IAPDUHandler* pHandler=0
*                        *IWhiteList* pWhiteList=6410144
*                        *buffer->buffer_[i]=  1e
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  6
*                        *buffer->buffer_[i]=  1e
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  6

                            ParseHeader_in_APDUParser_static1
*                            *buffer->buffer_[i]=  1e
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  6

                                ParseObjectHeader_in_ObjectHeaderParser_static1

                                GetRecord_in_GroupVariationRecord_static1
*                                *uint8_t group= 30
*                                *uint8_t variation= 0

                                GetEnumAndType_in_GroupVariationRecord_static1
*                                *uint8_t group= 30
*                                *uint8_t variation= 0

                                    GetType_in_GroupVariationRecord_static1
*                                    *uint8_t group= 30
*                                    *uint8_t variation= 0
*                                    *GroupVariationType_STATIC
*                                *GroupVariation_uint16_t enumeration= 1e00

                            ParseQualifier_in_APDUParser_static1
*                            *IAPDUHandler* pHandler= 0
*                            *QualifierCode_uint8_t tmp =6
*                            *QualifierCode_ALL_OBJECTS*

                            HandleAllObjectsHeader_in_APDUParser_static1
*                            ***FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u - %s - %s', record.group, record.variation***
*                            *record->gGroupVariationRecord.group=30
*                            *record->gGroupVariationRecord.variation=0
*                            *record->gGroupVariationRecord.enumeration=7680
*                            *pHandler=0
                    Parse_in_APDUParser_static2

                    ParseSinglePass_in_APDUParser_static1
*                    *IAPDUHandler* pHandler=6410144
*                    *IWhiteList* pWhiteList=0
*                    *buffer->buffer_[i]=  1e
*                    *buffer->buffer_[i]=  0
*                    *buffer->buffer_[i]=  6
*                    *buffer->buffer_[i]=  1e
*                    *buffer->buffer_[i]=  0
*                    *buffer->buffer_[i]=  6

                        ParseHeader_in_APDUParser_static1
*                        *buffer->buffer_[i]=  1e
*                        *buffer->buffer_[i]=  0
*                        *buffer->buffer_[i]=  6

                            ParseObjectHeader_in_ObjectHeaderParser_static1

                            GetRecord_in_GroupVariationRecord_static1
*                            *uint8_t group= 30
*                            *uint8_t variation= 0

                            GetEnumAndType_in_GroupVariationRecord_static1
*                            *uint8_t group= 30
*                            *uint8_t variation= 0

                                GetType_in_GroupVariationRecord_static1
*                                *uint8_t group= 30
*                                *uint8_t variation= 0
*                                *GroupVariationType_STATIC
*                            *GroupVariation_uint16_t enumeration= 1e00

                        ParseQualifier_in_APDUParser_static1
*                        *IAPDUHandler* pHandler= 6410144
*                        *QualifierCode_uint8_t tmp =6
*                        *QualifierCode_ALL_OBJECTS*

                        HandleAllObjectsHeader_in_APDUParser_static1
*                        ***FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u - %s - %s', record.group, record.variation***
*                        *record->gGroupVariationRecord.group=30
*                        *record->gGroupVariationRecord.variation=0
*                        *record->gGroupVariationRecord.enumeration=7680
*                        *pHandler=6410144
                        HandleAllObjectsHeader_in_APDUParser_static2

                            OnHeader_AllObjectsHeader_in_IAPDUHandler1

                            ProcessHeader_AllObjectsHeader_in_ReadHandler_override1
*                            *GroupVariationType_STATIC

                            SelectAll_in_Database1
*                            *GroupVariation_Group30Var0

                            Record_in_IAPDUHandler1

                    Load_in_Database1

                    load_type_for_Analog_in_Database_static1
*                    *map.size()= 1
*                    *StaticAnalogVariation_uint8_t variation= 0

                        get_for_AnalogSpec_in_StaticWriters_static1
*                        *StaticAnalogVariation_uint8_t variation= 0
*                        *StaticAnalogVariation_Group30Var1

                        WriteWithSerializer_AnalogSpec_for_Group30Var1_in_StaticWriters_static1
*                        *range.start= 0
*                        *range.stop= 0

                        WriteHeaderWithReserve_in_HeaderWriter1
*                        *qc= 0
*                        *reserve= 7

                        WriteHeader_in_HeaderWriter1
*                        *id.group= 30
*                        *id.variation= 1
*                        *qc= 0

                        RangeWriteIterator_for_UInt8_Analog_in_RangeWriteIterator_for_UInt8_AnalogOver2_1

                        LoadWithRangeIterator_AnalogSpec_for_UInt8_in_StaticWriters1
*                        *map.size()= 1
*                        *for_in_8

                        Write_in_RangeWriteIterator_for_UInt8_Analog1

                        Apply_in_ConvertGroup30Var1_static1
*                        *src.value= 0
*                        *target.value= 0

                        Write_in_Group30Var1_static
*                        *arg->flags= 2
*                        *arg->value= 0

                        RangeWriteIterator_for_UInt8_Analog_destr_RangeWriteIterator_for_UInt8_Analog1
*                    *if (iter == map.end())

                    load_type_for_Binary_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_BinaryOutputStatus_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_AnalogOutputStatus_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_DoubleBitBinary_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_Counter_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_FrozenCounter_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_OctetString_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                    load_type_for_TimeAndInterval_in_Database_static1
*                    *map.map.size()= 1
*                    *if (iter == map.end())

                GetResponseIIN_in_OContext1

                BeginResponseTx_in_OContext1

                    CheckForBroadcastConfirmation_in_OContext1

                StateIdle_in_StateIdle1

                OutstationState_in_OutstationState1

            CheckForTaskStart_in_OContext1

            CheckForUnsolicitedNull_in_OContext1

            CheckForUnsolicited_in_OContext1
REQUIRE(t.lower->PopWriteAsHex() == response)
response= C0 81 80 00 1E 01 00 00 00 02 00 00 00 00
temp= C0 81 80 00 1E 01 00 00 00 02 00 00 00 00
