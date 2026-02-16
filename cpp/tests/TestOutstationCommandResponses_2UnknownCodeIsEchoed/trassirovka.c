********SUITE('2UnknownCodeIsEchoed')********

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
*            *buffer->buffer_[i]=  3
*            *buffer->buffer_[i]=  c
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  17
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  3
*            *buffer->buffer_[i]=  aa
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  0
            ParseRequest_in_APDUHeaderParser_static3

            ProcessObjects_in_OContext1

                ProcessRequest_in_OContext1

                    OnReceiveSolRequest_in_OContext1
*                    *analyze this request to see how it compares to the last request
                    OnReceiveSolRequest_in_OContext8

                        ProcessNewRequest_in_OContext1

                            OnNewNonReadRequest_in_StateIdle_override1

                            RespondToNonReadRequest_in_OContext1

+                                HandleNonReadResponse_in_OContext1
*                                *header->function= 3
@@@@                                *FunctionCode_SELECT

                                    HandleSelect_in_OContext1
*                                    *buffer->buffer_[i]=  c
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  17
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  3
*                                    *buffer->buffer_[i]=  aa
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  1
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0
*                                    *buffer->buffer_[i]=  0

                                        CommandActionAdapter_in_CommandActionAdapter1

+                                        CommandResponseHandler_in_CommandResponseHandler1

                                        IAPDUHandler_in_IAPDUHandler1
*                                        *pIAPDUHandler= 6410036
                                    HandleSelect_in_OContext2

                                        Parse_in_APDUParser_static1
*                                        *buffer->buffer_[i]=  c
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  17
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  3
*                                        *buffer->buffer_[i]=  aa
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0

                                            ParseSinglePass_in_APDUParser_static1
*                                            *IAPDUHandler* pHandler=0
*                                            *IWhiteList* pWhiteList=6410036
*                                            *buffer->buffer_[i]=  c
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  17
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  3
*                                            *buffer->buffer_[i]=  aa
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *copy
*                                            *buffer->buffer_[i]=  c
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  17
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  3
*                                            *buffer->buffer_[i]=  aa
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0

                                                ParseHeader_in_APDUParser_static1
*                                                *buffer->buffer_[i]=  c
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  17
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  3
*                                                *buffer->buffer_[i]=  aa
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0

                                                    ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                    *buffer->buffer_[i]=  c
*                                                    *buffer->buffer_[i]=  1
*                                                    *buffer->buffer_[i]=  17
*                                                    *buffer->buffer_[i]=  1
*                                                    *buffer->buffer_[i]=  3
*                                                    *buffer->buffer_[i]=  aa
*                                                    *buffer->buffer_[i]=  1
*                                                    *buffer->buffer_[i]=  1
*                                                    *buffer->buffer_[i]=  0
*                                                    *buffer->buffer_[i]=  0
*                                                    *buffer->buffer_[i]=  0
*                                                    *buffer->buffer_[i]=  1
*                                                    *buffer->buffer_[i]=  0
*                                                    *buffer->buffer_[i]=  0
*                                                    *buffer->buffer_[i]=  0
*                                                    *buffer->buffer_[i]=  0
                                                ParseHeader_in_APDUParser_static2

                                                    GetRecord_in_GroupVariationRecord_static1
*                                                    *uint8_t group= 12
*                                                    *uint8_t variation= 1

                                                        GetEnumAndType_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 12
*                                                        *uint8_t variation= 1

                                                            GetType_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 12
*                                                            *uint8_t variation= 1
*                                                            *GroupVariationType_OTHER
*                                                        *GroupVariation_uint16_t enumeration= c01
                                                ParseHeader_in_APDUParser_static3
                                                ParseHeader_in_APDUParser_static4

                                                ParseQualifier_in_APDUParser_static1
*                                                *QualifierCode_uint8_t tmp =23
@@@@                                                *QualifierCode_UINT8_CNT_UINT8_INDEX*

                                                NumParser_in_NumParser1

                                                ParseHeader_in_CountIndexParser_static1
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  3
*                                                *buffer->buffer_[i]=  aa
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0

                                                    ParseCount_in_NumParser1
+                                                *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                                *record.group= 12
*                                                *record.variation= 1
*                                                *record.enumeration= 3073
*                                                *record.GetQualifierCode()= 23

                                                ParseCountOfObjects_in_CountIndexParser_static1
*                                                *temp= 3073
*                                                *GroupVariation_Group12Var1

                                                Process_in_CountIndexParser1
                                        Parse_in_APDUParser_static2

                                        ParseSinglePass_in_APDUParser_static1
*                                        *IAPDUHandler* pHandler=6410036
*                                        *IWhiteList* pWhiteList=0
*                                        *buffer->buffer_[i]=  c
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  17
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  3
*                                        *buffer->buffer_[i]=  aa
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *copy
*                                        *buffer->buffer_[i]=  c
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  17
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  3
*                                        *buffer->buffer_[i]=  aa
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  1
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0
*                                        *buffer->buffer_[i]=  0

                                            ParseHeader_in_APDUParser_static1
*                                            *buffer->buffer_[i]=  c
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  17
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  3
*                                            *buffer->buffer_[i]=  aa
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0

                                                ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                *buffer->buffer_[i]=  c
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  17
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  3
*                                                *buffer->buffer_[i]=  aa
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
                                            ParseHeader_in_APDUParser_static2

                                                GetRecord_in_GroupVariationRecord_static1
*                                                *uint8_t group= 12
*                                                *uint8_t variation= 1

                                                    GetEnumAndType_in_GroupVariationRecord_static1
*                                                    *uint8_t group= 12
*                                                    *uint8_t variation= 1

                                                        GetType_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 12
*                                                        *uint8_t variation= 1
*                                                        *GroupVariationType_OTHER
*                                                    *GroupVariation_uint16_t enumeration= c01
                                            ParseHeader_in_APDUParser_static3
                                            ParseHeader_in_APDUParser_static4

                                            ParseQualifier_in_APDUParser_static1
*                                            *QualifierCode_uint8_t tmp =23
@@@@                                            *QualifierCode_UINT8_CNT_UINT8_INDEX*

                                            NumParser_in_NumParser1

                                            ParseHeader_in_CountIndexParser_static1
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  3
*                                            *buffer->buffer_[i]=  aa
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  1
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0
*                                            *buffer->buffer_[i]=  0

                                                ParseCount_in_NumParser1
+                                            *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                            *record.group= 12
*                                            *record.variation= 1
*                                            *record.enumeration= 3073
*                                            *record.GetQualifierCode()= 23

                                            ParseCountOfObjects_in_CountIndexParser_static1
*                                            *temp= 3073
*                                            *GroupVariation_Group12Var1

                                            Process_in_CountIndexParser1

                                                InvokeCountOf_for_Group12Var1_in_CountIndexParser_static1
*                                                *buffer->buffer_[i]=  3
*                                                *buffer->buffer_[i]=  aa
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  1
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0
*                                                *buffer->buffer_[i]=  0

                                                    OnHeader_PrefixHeader_Indexed_for_ControlRelayOutputBlock_in_IAPDUHandler1

                                                    ProcessHeader_PrefixHeader_Indexed_for_ControlRelayOutputBlock_in_CommandResponseHandler_override1

                                                        ProcessAny_for_ControlRelayOutputBlock_in_CommandResponseHandler1

                                                            RespondToHeader_for_ControlRelayOutputBlock_UInt8_in_CommandResponseHandler1

                                                                IterateOverCountWithPrefix_for_UInt8_ControlRelayOutputBlock_in_HeaderWriter1

                                                                WriteHeaderWithReserve_in_HeaderWriter1
*                                                                *qc= 23
*                                                                *reserve= 13

                                                                WriteHeader_in_HeaderWriter1
*                                                                *id.group= 12
*                                                                *id.variation= 1
*                                                                *qc= 23

                                                                PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock_in_PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlockOver2_1

                                                            RespondToHeaderWithIterator_for_ControlRelayOutputBlock_UInt8_in_CommandResponseHandler1

                                                                readInvokeCountOf_for_ControlRelayOutputBlock_in_CountIndexParser1
*                                                                *buffer->buffer_[i]=  3
*                                                                *buffer->buffer_[i]=  aa
*                                                                *buffer->buffer_[i]=  1
*                                                                *buffer->buffer_[i]=  1
*                                                                *buffer->buffer_[i]=  0
*                                                                *buffer->buffer_[i]=  0
*                                                                *buffer->buffer_[i]=  0
*                                                                *buffer->buffer_[i]=  1
*                                                                *buffer->buffer_[i]=  0
*                                                                *buffer->buffer_[i]=  0
*                                                                *buffer->buffer_[i]=  0
*                                                                *buffer->buffer_[i]=  0

                                                                Indexed_for_ControlRelayOutputBlock_in_Indexed_for_ControlRelayOutputBlockOver1_1

                                                                ControlRelayOutputBlock_in_ControlRelayOutputBlockOver1_1
*                                                            *pControlRelayOutputBlock->rawCode =3

                                                                Read_in_Group12Var1_static1
*                                                                *crob->rawCode= 0
*                                                                *crob->count= 0
*                                                                *crob->onTimeMS= 0
*                                                                *crob->offTimeMS= 0
*                                                                *crob->status= 0

                                                                From_in_ControlRelayOutputBlock_static1

                                                                ControlRelayOutputBlock_in_ControlRelayOutputBlockOver2_1
*                                                                *pControlRelayOutputBlock->rawCode =170

                                                                process_for_UInt8_ControlRelayOutputBlock_in_CommandResponseHandler1

                                                                    ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler1
                                                                    ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler2
*                                                                    *pCommandResponseHandler->pCommandAction= 6409992

                                                                        Action_ControlRelayOutputBlock_in_CommandActionAdapter_override1

                                                                            ActionT_ControlRelayOutputBlock_in_CommandActionAdapter1

                                                                            CheckStart_in_CommandActionAdapter1
*                                                                            *pCommandActionAdapter->is_started= 0
*                                                                        *CommandStatus_uint8_t tmp =4
*                                                                    *CommandStatus_uint8_t tmp = 4
*                                                                *response.status =4

                                                                    Apply_in_ConvertGroup12Var1_static1
*                                                                    *crob->rawCode= 170
*                                                                    *crob->count= 1
*                                                                    *crob->onTimeMS= 1
*                                                                    *crob->offTimeMS= 1
*                                                                    *crob->status= 4

                                                                    Write_in_Group12Var1_static1
*                                                                    *crob->rawCode= 170
*                                                                    *crob->count= 1
*                                                                    *crob->onTimeMS= 1
*                                                                    *crob->offTimeMS= 1
*                                                                    *crob->status= 4

                                                            PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock_destr_PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock1

                                                Record_in_IAPDUHandler1

                                    CommandActionAdapter_destr_CommandActionAdapter1
*                                    *pCommandActionAdapter->is_started= 1
                                    CommandActionAdapter_destr_CommandActionAdapter2
                                    CommandActionAdapter_destr_CommandActionAdapter3
                                    CommandActionAdapter_destr_CommandActionAdapter4
                                HandleSelect_in_OContext3
*                                *ParseResult_uint8_t result =0
                                HandleSelect_in_OContext4
                                HandleSelect_in_OContext6

                            GetResponseIIN_in_OContext1

                            BeginResponseTx_in_OContext1

                                CheckForBroadcastConfirmation_in_OContext1

                            StateIdle_in_StateIdle1

                            OutstationState_in_OutstationState1

    CheckForTaskStart_in_OContext1

        CheckForUnsolicitedNull_in_OContext1

        CheckForUnsolicited_in_OContext1
REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 04 0C 01 17 01 03 AA 01 01 00 00 00 01 00 00 00 04')
temp= C0 81 80 04 0C 01 17 01 03 AA 01 01 00 00 00 01 00 00 00 04

REQUIRE(t.cmdHandler->numStart == 1)
t.cmdHandler->numStart= 1

REQUIRE(t.cmdHandler->numEnd == 1)
t.cmdHandler->numEnd= 1
