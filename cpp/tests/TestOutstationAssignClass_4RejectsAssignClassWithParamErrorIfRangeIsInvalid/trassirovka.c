********SUITE('4RejectsAssignClassWithParamErrorIfRangeIsInvalid')********

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

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver2_1

        StaticDataCell_for_Binary_in_StaticDataCell_for_BinaryOver1_1

        StaticDataMap_for_DoubleBitBinarySpec_in_StaticDataMap_for_DoubleBitBinarySpecOver2_1

        StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

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
*            *buffer->buffer_[i]=  16
*            *buffer->buffer_[i]=  3c
*            *buffer->buffer_[i]=  3
*            *buffer->buffer_[i]=  6
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  5
*            *buffer->buffer_[i]=  0
            ParseRequest_in_APDUHeaderParser_static3

            ProcessObjects_in_OContext1

            ProcessRequest_in_OContext1

                OnReceiveSolRequest_in_OContext1
                OnReceiveSolRequest_in_OContext8

                ProcessNewRequest_in_OContext1

                OnNewNonReadRequest_in_StateIdle_override1

                RespondToNonReadRequest_in_OContext1

+                    HandleNonReadResponse_in_OContext1
@@@@                    *FunctionCode_ASSIGN_CLASS

                        HandleAssignClass_in_OContext1

                            IAPDUHandler_in_IAPDUHandler1
*                            *pIAPDUHandler= 6410040

                            Parse_in_APDUParser_static1
*                            *buffer->buffer_[i]=  3c
*                            *buffer->buffer_[i]=  3
*                            *buffer->buffer_[i]=  6
*                            *buffer->buffer_[i]=  1
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  1
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  0
*                            *buffer->buffer_[i]=  5
*                            *buffer->buffer_[i]=  0

                                ParseSinglePass_in_APDUParser_static1
*                                *IAPDUHandler* pHandler=0
*                                *IWhiteList* pWhiteList=6410040
*                                *buffer->buffer_[i]=  3c
*                                *buffer->buffer_[i]=  3
*                                *buffer->buffer_[i]=  6
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  5
*                                *buffer->buffer_[i]=  0
*                                *copy
*                                *buffer->buffer_[i]=  3c
*                                *buffer->buffer_[i]=  3
*                                *buffer->buffer_[i]=  6
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  5
*                                *buffer->buffer_[i]=  0

                                    ParseHeader_in_APDUParser_static1
*                                    *buffer->buffer_[i]=  3c
*                                    *buffer->buffer_[i]=  3
*                                    *buffer->buffer_[i]=  6
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  5
*                                    *buffer->buffer_[i]=  0

                                        ParseObjectHeader_in_ObjectHeaderParser_static1

                                        GetRecord_in_GroupVariationRecord_static1
*                                        *uint8_t group= 60
*                                        *uint8_t variation= 3

                                        GetEnumAndType_in_GroupVariationRecord_static1
*                                        *uint8_t group= 60
*                                        *uint8_t variation= 3

                                            GetType_in_GroupVariationRecord_static1
*                                            *uint8_t group= 60
*                                            *uint8_t variation= 3
*                                            *GroupVariationType_EVENT
*                                        *GroupVariation_uint16_t enumeration= 3c03

                                    ParseQualifier_in_APDUParser_static1
*                                    *QualifierCode_uint8_t tmp =6
@@@@                                    *QualifierCode_ALL_OBJECTS*

                                    HandleAllObjectsHeader_in_APDUParser_static1
*                                    ***FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u - %s - %s', record.group, record.variation***
*                                    *record->gGroupVariationRecord.group=60
*                                    *record->gGroupVariationRecord.variation=3
*                                    *record->gGroupVariationRecord.enumeration=3c03
*                                *copy
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  5
*                                *buffer->buffer_[i]=  0

                                    ParseHeader_in_APDUParser_static1
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  5
*                                    *buffer->buffer_[i]=  0

                                        ParseObjectHeader_in_ObjectHeaderParser_static1

                                        GetRecord_in_GroupVariationRecord_static1
*                                        *uint8_t group= 1
*                                        *uint8_t variation= 0

                                        GetEnumAndType_in_GroupVariationRecord_static1
*                                        *uint8_t group= 1
*                                        *uint8_t variation= 0

                                            GetType_in_GroupVariationRecord_static1
*                                            *uint8_t group= 1
*                                            *uint8_t variation= 0
*                                            *GroupVariationType_STATIC
*                                        *GroupVariation_uint16_t enumeration= 100

                                    ParseQualifier_in_APDUParser_static1
*                                    *QualifierCode_uint8_t tmp =1
@@@@                                    *QualifierCode_UINT16_START_STOP*

                                    NumParser_in_NumParser1

                                    ParseHeader_in_RangeParser_static1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  5
*                                    *buffer->buffer_[i]=  0

                                        ParseRange_in_NumParser1
*                                        *ParseResult_uint8_t res = 0
*                                        *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                        *record.group= 1
*                                        *record.variation= 0
*                                        *record.enumeration= 256
*                                        *record.GetQualifierCode()= 1
*                                        *range.start= 0
*                                        *range.stop= 5
                                Parse_in_APDUParser_static2

                                ParseSinglePass_in_APDUParser_static1
*                                *IAPDUHandler* pHandler=6410040
*                                *IWhiteList* pWhiteList=0
*                                *buffer->buffer_[i]=  3c
*                                *buffer->buffer_[i]=  3
*                                *buffer->buffer_[i]=  6
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  5
*                                *buffer->buffer_[i]=  0
*                                *copy
*                                *buffer->buffer_[i]=  3c
*                                *buffer->buffer_[i]=  3
*                                *buffer->buffer_[i]=  6
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  5
*                                *buffer->buffer_[i]=  0

                                    ParseHeader_in_APDUParser_static1
*                                    *buffer->buffer_[i]=  3c
*                                    *buffer->buffer_[i]=  3
*                                    *buffer->buffer_[i]=  6
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  5
*                                    *buffer->buffer_[i]=  0

                                        ParseObjectHeader_in_ObjectHeaderParser_static1

                                        GetRecord_in_GroupVariationRecord_static1
*                                        *uint8_t group= 60
*                                        *uint8_t variation= 3

                                        GetEnumAndType_in_GroupVariationRecord_static1
*                                        *uint8_t group= 60
*                                        *uint8_t variation= 3

                                            GetType_in_GroupVariationRecord_static1
*                                            *uint8_t group= 60
*                                            *uint8_t variation= 3
*                                            *GroupVariationType_EVENT
*                                        *GroupVariation_uint16_t enumeration= 3c03

                                    ParseQualifier_in_APDUParser_static1
*                                    *QualifierCode_uint8_t tmp =6
@@@@                                    *QualifierCode_ALL_OBJECTS*

                                    HandleAllObjectsHeader_in_APDUParser_static1
*                                    ***FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u - %s - %s', record.group, record.variation***
*                                    *record->gGroupVariationRecord.group=60
*                                    *record->gGroupVariationRecord.variation=3
*                                    *record->gGroupVariationRecord.enumeration=3c03
                                    HandleAllObjectsHeader_in_APDUParser_static2

                                        OnHeader_AllObjectsHeader_in_IAPDUHandler1

                                        ProcessHeader_AllObjectsHeader_in_AssignClassHandler_override1

                                        RecordClass_in_AssignClassHandler1
*                                        *GroupVariation_Group60Var3

                                        Record_in_IAPDUHandler1
*                                *copy
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  1
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  0
*                                *buffer->buffer_[i]=  5
*                                *buffer->buffer_[i]=  0

                                    ParseHeader_in_APDUParser_static1
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  5
*                                    *buffer->buffer_[i]=  0

                                        ParseObjectHeader_in_ObjectHeaderParser_static1

                                        GetRecord_in_GroupVariationRecord_static1
*                                        *uint8_t group= 1
*                                        *uint8_t variation= 0

                                        GetEnumAndType_in_GroupVariationRecord_static1
*                                        *uint8_t group= 1
*                                        *uint8_t variation= 0

                                            GetType_in_GroupVariationRecord_static1
*                                            *uint8_t group= 1
*                                            *uint8_t variation= 0
*                                            *GroupVariationType_STATIC
*                                        *GroupVariation_uint16_t enumeration= 100

                                    ParseQualifier_in_APDUParser_static1
*                                    *QualifierCode_uint8_t tmp =1
@@@@                                    *QualifierCode_UINT16_START_STOP*

                                    NumParser_in_NumParser1

                                    ParseHeader_in_RangeParser_static1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  5
*                                    *buffer->buffer_[i]=  0

                                        ParseRange_in_NumParser1
*                                        *ParseResult_uint8_t res = 0
*                                        *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                        *record.group= 1
*                                        *record.variation= 0
*                                        *record.enumeration= 256
*                                        *record.GetQualifierCode()= 1
*                                        *range.start= 0
*                                        *range.stop= 5

                                            OnHeader_RangeHeader_in_IAPDUHandler1

+                                            ProcessHeader_RangeHeader_in_AssignClassHandler_override1
*                                            *GroupVariation_Group1Var0

                                            ProcessAssignRange_in_AssignClassHandler1

                                                AssignClassToRange_in_Database1
@@@@                                                *AssignClassType_BinaryInput
*                                            *Range actual.start =0
*                                            *Range actual.stop =4

                                                NotifyApplicationOfAssignment_in_AssignClassHandler1
*                                                *AssignClassType_uint8_t type= 0
*                                                *PointClass_uint8_t clazz= 4
*                                                *range->start= 0
*                                                *range->stop= 4

RecordClassAssignment_in_MockOutstationApplication1
*AssignClassType_uint8_t type= 0
*PointClass_uint8_t clazz= 4
*uint16_t start= 0
*uint16_t stop= 4
*                                                *Range actual.start =0
*                                                *Range actual.stop =4
*                                                *range.start =0
*                                                *range.stop =5
*                                                *IINBit_PARAM_ERROR

                                                Record_in_IAPDUHandler1

                                GetResponseIIN_in_OContext1

                                BeginResponseTx_in_OContext1

                                    CheckForBroadcastConfirmation_in_OContext1

                                StateIdle_in_StateIdle1

                                OutstationState_in_OutstationState1

                    CheckForTaskStart_in_OContext1

                        CheckForUnsolicitedNull_in_OContext1

                        CheckForUnsolicited_in_OContext1
REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 04')
temp= C0 81 80 04
REQUIRE(t.application->classAssignments.size() == 1)
temp= 1
