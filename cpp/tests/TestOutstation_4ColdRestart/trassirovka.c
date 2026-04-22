********SUITE('4ColdRestart')********

{OutstationTestObject_in_OutstationTestObject1

{MockExecutor_in_MockExecutor1
*MockExecutor *pMockExecutor= 6393632
}MockExecutor_in_MockExecutor_

    {MockOutstationApplication_in_MockOutstationApplication1

    }MockOutstationApplication_in_MockOutstationApplication_

    {OContext_in_OContext1

        EventLists_in_EventLists1

        List_for_EventRecord_in_List_for_EventRecordOver2_1
*        *uint32_t maxSize= 0

        List_for_EventRecord_in_List_for_EventRecordOver1_1

        {Database_in_Database1

            {StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

*            *StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_3
*            *pStaticDataMap->selected.start= 1
*            *pStaticDataMap->selected.stop= 0

*            *StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_2
*            **config->binary_input_count= 0

            }StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2__

            StaticDataMap_for_DoubleBitBinarySpec_in_StaticDataMap_for_DoubleBitBinarySpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

            {StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

*            *StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_3
*            *pStaticDataMap->selected.start= 1
*            *pStaticDataMap->selected.stop= 0

*            *StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_2
*            **config->analog_input_count= 2
*            *pStaticDataMap->map[0].selection_in_StaticDataCell.variation= 0
            }StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

            StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

            StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

            StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

            StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

            StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*

            StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2_1

                {Range_in_RangeOver1_1*
                }Range_in_RangeOver1__*
*        *(pDatabase->analog_input).map[0].selection_in_StaticDataCell.variation= 0
        }Database_in_Database_

        DeferredRequest_in_DeferredRequest1
*        *uint32_t maxAPDUSize =292

        BufferSer4_in_BufferSer4Over2_1
*        *uint16_t length=292
*        *sizeof(BufferSer4)=300
*        *uint8_t bytes[SIZE_BufferSer4]=6421138

        {OutstationSolState_in_OutstationSolState1

            TxBuffer_in_TxBuffer1
*            *uint32_t maxTxSize =292

            BufferSer4_in_BufferSer4Over2_1
*            *uint16_t length=292
*            *sizeof(BufferSer4)=300
*            *uint8_t bytes[SIZE_BufferSer4]=6421522
        }OutstationSolState_in_OutstationSolState_

        {Inst_in_StateIdle_static1

            {StateIdle_in_StateIdle1

                {OutstationState_in_OutstationState1

                }OutstationState_in_OutstationState_
            }StateIdle_in_StateIdle_
        }Inst_in_StateIdle_static_
*    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0
    }OContext_in_OContext_
}OutstationTestObject_in_OutstationTestObject_

{LowerLayerUp_in_OutstationTestObject1

    {OnLowerLayerUp_in_OContext1

        {CheckForTaskStart_in_OContext1

            {CheckForDeferredRequest_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 0
*                *boolean ret= 1
                }CanTransmit_in_OContext_
            }CheckForDeferredRequest_in_OContext_
*        CheckForTaskStart_in_OContext2

            {CheckForUnsolicitedNull_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 0
*                *boolean ret= 1
                }CanTransmit_in_OContext_

                IsIdle_in_OutstationState1

                IsIdle_in_StateIdle_override1
            }CheckForUnsolicitedNull_in_OContext_
*        CheckForTaskStart_in_OContext3

            {CheckForUnsolicited_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 0
*                *boolean ret= 1
                }CanTransmit_in_OContext_
            }CheckForUnsolicited_in_OContext_
        }CheckForTaskStart_in_OContext_
    }OnLowerLayerUp_in_OContext_
}LowerLayerUp_in_OutstationTestObject_

    {SendToOutstation_in_OutstationTestObject1

        {OnReceive_in_OContext1
*        **inspect_Message**
*        **inspect_Addresses**
*        @*uint16_t source= 0
*        @*uint16_t destination= 0
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 6392683<- c0 d

            {ProcessMessage_in_OContext1

                {ParseRequest_in_APDUHeaderParser_static1
+                **inspect_RSeq**
+                @*buffer->buffer_[i]= 6392683<- c0 d
                }ParseRequest_in_APDUHeaderParser_static2_

                {ProcessObjects_in_OContext1
*                **inspect_ParsedRequest**
*                **inspect_Addresses**
*                @*uint16_t source= 0
*                @*uint16_t destination= 0
*                **inspect_APDUHeader**
*                **inspect_AppControlField**
*                @*boolean FIR= 1
*                @*boolean FIN= 1
*                @*boolean CON= 0
*                @*boolean UNS= 0
*                @*uint8_t SEQ= 0
*                @*FunctionCode_uint8_t function= 13
+                **inspect_RSeq**
+                @*buffer->buffer_[i]= 6392685<-

                    {ProcessRequest_in_OContext1

                        {OnReceiveSolRequest_in_OContext1

                            {ProcessNewRequest_in_OContext1

                                {OnNewNonReadRequest_in_StateIdle_override1

                                    {RespondToNonReadRequest_in_OContext1

                                        {RecordLastProcessedRequest_in_RequestHistory1

                                        }RecordLastProcessedRequest_in_RequestHistory_

                                        {Start_in_TxBuffer1

                                        }Start_in_TxBuffer_
@@@@                                        *length_in_HasLength_for_Uint16_t(&(temp.hHasLength))= 292

                                        {HeaderWriter_in_HeaderWriter1
*                                        *length_in_HasLength_for_Uint16_t(&(position_->hHasLength))= 288

                                        }HeaderWriter_in_HeaderWriter_

                                        {SetFunction_in_APDUWrapper1
@@@@                                        *write_uint8=6421523->129
                                        }SetFunction_in_APDUWrapper_

                                        {ToByte_in_AppControlField1
*                                        *ret |= AppControlField_FIR_MASK
*                                        *ret |= AppControlField_FIN_MASK
                                        *uint8_t ret =192
                                        *uint8_t seq =0
                                        }ToByte_in_AppControlField_

                                        {SetControl_in_APDUWrapper1
@@@@                                        *write_uint8=6421522->192
                                        }SetControl_in_APDUWrapper_

                                        {HandleNonReadResponse_in_OContext1
*                                        *FunctionCode_uint18_t function= 13
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 6392685<-
@@@@                                        *FunctionCode_COLD_RESTART

                                            {HandleRestart_in_OContext1
*                                            *boolean isWarmRestart= 0
*                                            *RestartMode_uint8_t mode =0
                                            }HandleRestart_in_OContext_
@@@@                                        *RestartMode_UNSUPPORTED
*                                        *IINBit_FUNC_NOT_SUPPORTED
                                        }HandleRestart_in_OContext_
                                    }HandleNonReadResponse_in_OContext5_

                                    {GetResponseIIN_in_OContext1
*                                    *LSBMask_BROADCAST = 0x01
*                                    *LSBMask_CLASS1_EVENTS = 0x02
*                                    *LSBMask_CLASS2_EVENTS = 0x04
*                                    *LSBMask_CLASS3_EVENTS = 0x08
*                                    *LSBMask_NEED_TIME = 0x10
*                                    *LSBMask_LOCAL_CONTROL = 0x20
*                                    *LSBMask_DEVICE_TROUBLE = 0x40
*                                    *LSBMask_DEVICE_RESTART = 0x80
*
*                                    *MSBMask_FUNC_NOT_SUPPORTED = 0x01
*                                    *MSBMask_OBJECT_UNKNOWN = 0x02
*                                    *MSBMask_PARAM_ERROR = 0x04
*                                    *MSBMask_EVENT_BUFFER_OVERFLOW = 0x08
*                                    *MSBMask_ALREADY_EXECUTING = 0x10
*                                    *MSBMask_CONFIG_CORRUPT = 0x20
*                                    *MSBMask_RESERVED1 = 0x40
*                                    *MSBMask_RESERVED2 = 0x80
*

                                        IsOverflown_in_EventBuffer1
*                                        *pEventBuffer->overflow= 0
                                    GetResponseIIN_in_OContext2
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext3
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 128
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext4
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext5
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 128
*                                    @*uint8_t MSB= 0
                                    }GetResponseIIN_in_OContext_
*                                *RespondToNonReadRequest_in_OContext2
*                                **inspect_IINField**
*                                @*uint8_t LSB= 0
*                                @*uint8_t MSB= 1
*                                *RespondToNonReadRequest_in_OContext3
*                                **inspect_IINField**
*                                @*uint8_t LSB= 128
*                                @*uint8_t MSB= 0
*                                *RespondToNonReadRequest_in_OContext4
*                                **inspect_IINField**
*                                @*uint8_t LSB= 128
*                                @*uint8_t MSB= 1

                                    {SetIIN_in_APDUResponse1
@@@@                                    *write_uint8=6421524->128
@@@@                                    *write_uint8=6421525->1
                                    }SetIIN_in_APDUResponse_

                                    {BeginResponseTx_in_OContext1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0
                                        }GetControl_in_APDUWrapper_

                                        {CheckForBroadcastConfirmation_in_OContext1
                                        }CheckForBroadcastConfirmation_in_OContext_
*                                    *BeginResponseTx_in_OContext2
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 6421522<- c0 81 80 1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext3
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 6421522<- c0 81 80 1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext4
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 6421522<- c0 81 80 1

                                        {BeginTx_in_OContext1

{BeginTransmit_in_MockLowerLayer1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 6421522<- c0 81 80 1
}BeginTransmit_in_MockLowerLayer_
*                                        **inspect_Message**
*                                        **inspect_Addresses**
*                                        @*uint16_t source= 0
*                                        @*uint16_t destination= 0
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 6421522<- c0 81 80 1
                                        }BeginTx_in_OContext_

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0
                                        }GetControl_in_APDUWrapper_

                                        {Inst_in_StateIdle_static1

                                            {StateIdle_in_StateIdle1

                                                {OutstationState_in_OutstationState1

                                                }OutstationState_in_OutstationState_
                                            }StateIdle_in_StateIdle_
                                        }Inst_in_StateIdle_static_
                                    }BeginResponseTx_in_OContext2_
                                }RespondToNonReadRequest_in_OContext_
                            }OnNewNonReadRequest_in_StateIdle_override_
                        }ProcessNewRequest_in_OContext2_
                    }OnReceiveSolRequest_in_OContext5_
                }ProcessRequest_in_OContext_
            }ProcessObjects_in_OContext5_
        }ProcessMessage_in_OContext6_

        {CheckForTaskStart_in_OContext1

            {CheckForDeferredRequest_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 1
*                *boolean ret= 0
                }CanTransmit_in_OContext_
            }CheckForDeferredRequest_in_OContext_
*        CheckForTaskStart_in_OContext2

            {CheckForUnsolicitedNull_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 1
*                *boolean ret= 0
                }CanTransmit_in_OContext_
            }CheckForUnsolicitedNull_in_OContext_
*        CheckForTaskStart_in_OContext3

            {CheckForUnsolicited_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 1
*                *boolean ret= 0
                }CanTransmit_in_OContext_
            }CheckForUnsolicited_in_OContext_
        }CheckForTaskStart_in_OContext_
    }OnReceive_in_OContext_
}SendToOutstation_in_OutstationTestObject_
REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 01')
***step1***

{OnTxReady_in_OutstationTestObject1

    {OnTxReady_in_OContext1
*    *isOnline_in_OContext= 1
*    *isTransmitting_in_OContext= 1

        {CheckForTaskStart_in_OContext1

            {CheckForDeferredRequest_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 0
*                *boolean ret= 1
                }CanTransmit_in_OContext_
            }CheckForDeferredRequest_in_OContext_
*        CheckForTaskStart_in_OContext2

            {CheckForUnsolicitedNull_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 0
*                *boolean ret= 1
                }CanTransmit_in_OContext_

                IsIdle_in_OutstationState1

                IsIdle_in_StateIdle_override1
            }CheckForUnsolicitedNull_in_OContext_
*        CheckForTaskStart_in_OContext3

            {CheckForUnsolicited_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 0
*                *boolean ret= 1
                }CanTransmit_in_OContext_
            }CheckForUnsolicited_in_OContext_
        }CheckForTaskStart_in_OContext_

    }OnTxReady_in_OContext2_
}OnTxReady_in_OutstationTestObject_
l=  0

    {SendToOutstation_in_OutstationTestObject1

        {OnReceive_in_OContext1
*        **inspect_Message**
*        **inspect_Addresses**
*        @*uint16_t source= 0
*        @*uint16_t destination= 0
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 6392686<- c1 d

            {ProcessMessage_in_OContext1

                {ParseRequest_in_APDUHeaderParser_static1
+                **inspect_RSeq**
+                @*buffer->buffer_[i]= 6392686<- c1 d
                }ParseRequest_in_APDUHeaderParser_static2_

                {ProcessObjects_in_OContext1
*                **inspect_ParsedRequest**
*                **inspect_Addresses**
*                @*uint16_t source= 0
*                @*uint16_t destination= 0
*                **inspect_APDUHeader**
*                **inspect_AppControlField**
*                @*boolean FIR= 1
*                @*boolean FIN= 1
*                @*boolean CON= 0
*                @*boolean UNS= 0
*                @*uint8_t SEQ= 1
*                @*FunctionCode_uint8_t function= 13
+                **inspect_RSeq**
+                @*buffer->buffer_[i]= 6392688<-

                    {ProcessRequest_in_OContext1

                        {OnReceiveSolRequest_in_OContext1

                            {ProcessNewRequest_in_OContext1

                                {OnNewNonReadRequest_in_StateIdle_override1

                                    {RespondToNonReadRequest_in_OContext1

                                        {RecordLastProcessedRequest_in_RequestHistory1

                                        }RecordLastProcessedRequest_in_RequestHistory_

                                        {Start_in_TxBuffer1

                                        }Start_in_TxBuffer_
@@@@                                        *length_in_HasLength_for_Uint16_t(&(temp.hHasLength))= 292

                                        {HeaderWriter_in_HeaderWriter1
*                                        *length_in_HasLength_for_Uint16_t(&(position_->hHasLength))= 288

                                        }HeaderWriter_in_HeaderWriter_

                                        {SetFunction_in_APDUWrapper1
@@@@                                        *write_uint8=6421523->129
                                        }SetFunction_in_APDUWrapper_

                                        {ToByte_in_AppControlField1
*                                        *ret |= AppControlField_FIR_MASK
*                                        *ret |= AppControlField_FIN_MASK
                                        *uint8_t ret =192
                                        *uint8_t seq =1
                                        }ToByte_in_AppControlField_

                                        {SetControl_in_APDUWrapper1
@@@@                                        *write_uint8=6421522->193
                                        }SetControl_in_APDUWrapper_

                                        {HandleNonReadResponse_in_OContext1
*                                        *FunctionCode_uint18_t function= 13
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 6392688<-
@@@@                                        *FunctionCode_COLD_RESTART

                                            {HandleRestart_in_OContext1
*                                            *boolean isWarmRestart= 0
*                                            *RestartMode_uint8_t mode =1
                                            }HandleRestart_in_OContext_

                                            {WriteSingleValue_for_UInt8_Group52Var2_in_HeaderWriter1
*                                            *QualifierCode_uint8_t qc= 7
*                                            *length_in_HasLength_for_Uint16_t(&(pHeaderWriter->position->hHasLength)= 288

                                                WriteHeaderWithReserve_in_HeaderWriter1
*                                                *qc= 7
*                                                *reserve= 3

                                                {WriteHeader_in_HeaderWriter1
*                                                *id.group= 52
*                                                *id.variation= 2
*                                                *qc= 7
*                                                *length_in_HasLength_for_Uint16_t(&(pHeaderWriter->position->hHasLength)= 288
@@@@                                                *write_in_UInt8_static = 6421526->52
@@@@                                                *write_in_UInt8_static = 6421527->2
@@@@                                                *write_in_UInt8_static = 6421528->7

                                                }WriteHeader_in_HeaderWriter2_
@@@@                                            *write_in_UInt8_static = 6421529->1
@@@@                                            *write_in_UInt16_static = 6421530->1
                                            }WriteSingleValue_for_UInt8_Group52Var2_in_HeaderWriter1_
                                        }HandleRestart_in_OContext_
                                    }HandleNonReadResponse_in_OContext5_

                                    {GetResponseIIN_in_OContext1
*                                    *LSBMask_BROADCAST = 0x01
*                                    *LSBMask_CLASS1_EVENTS = 0x02
*                                    *LSBMask_CLASS2_EVENTS = 0x04
*                                    *LSBMask_CLASS3_EVENTS = 0x08
*                                    *LSBMask_NEED_TIME = 0x10
*                                    *LSBMask_LOCAL_CONTROL = 0x20
*                                    *LSBMask_DEVICE_TROUBLE = 0x40
*                                    *LSBMask_DEVICE_RESTART = 0x80
*
*                                    *MSBMask_FUNC_NOT_SUPPORTED = 0x01
*                                    *MSBMask_OBJECT_UNKNOWN = 0x02
*                                    *MSBMask_PARAM_ERROR = 0x04
*                                    *MSBMask_EVENT_BUFFER_OVERFLOW = 0x08
*                                    *MSBMask_ALREADY_EXECUTING = 0x10
*                                    *MSBMask_CONFIG_CORRUPT = 0x20
*                                    *MSBMask_RESERVED1 = 0x40
*                                    *MSBMask_RESERVED2 = 0x80
*

                                        IsOverflown_in_EventBuffer1
*                                        *pEventBuffer->overflow= 0
                                    GetResponseIIN_in_OContext2
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext3
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 128
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext4
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext5
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 128
*                                    @*uint8_t MSB= 0
                                    }GetResponseIIN_in_OContext_
*                                *RespondToNonReadRequest_in_OContext2
*                                **inspect_IINField**
*                                @*uint8_t LSB= 0
*                                @*uint8_t MSB= 0
*                                *RespondToNonReadRequest_in_OContext3
*                                **inspect_IINField**
*                                @*uint8_t LSB= 128
*                                @*uint8_t MSB= 0
*                                *RespondToNonReadRequest_in_OContext4
*                                **inspect_IINField**
*                                @*uint8_t LSB= 128
*                                @*uint8_t MSB= 0

                                    {SetIIN_in_APDUResponse1
@@@@                                    *write_uint8=6421524->128
@@@@                                    *write_uint8=6421525->0
                                    }SetIIN_in_APDUResponse_

                                    {BeginResponseTx_in_OContext1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 1
                                        }GetControl_in_APDUWrapper_

                                        {CheckForBroadcastConfirmation_in_OContext1
                                        }CheckForBroadcastConfirmation_in_OContext_
*                                    *BeginResponseTx_in_OContext2
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 6421522<- c1 81 80 0 34 2 7 1 1 0

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 1
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext3
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 6421522<- c1 81 80 0 34 2 7 1 1 0

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 1
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext4
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 6421522<- c1 81 80 0 34 2 7 1 1 0

                                        {BeginTx_in_OContext1

{BeginTransmit_in_MockLowerLayer1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 6421522<- c1 81 80 0 34 2 7 1 1 0
}BeginTransmit_in_MockLowerLayer_
*                                        **inspect_Message**
*                                        **inspect_Addresses**
*                                        @*uint16_t source= 0
*                                        @*uint16_t destination= 0
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 6421522<- c1 81 80 0 34 2 7 1 1 0
                                        }BeginTx_in_OContext_

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 1
                                        }GetControl_in_APDUWrapper_

                                        {Inst_in_StateIdle_static1

                                            {StateIdle_in_StateIdle1

                                                {OutstationState_in_OutstationState1

                                                }OutstationState_in_OutstationState_
                                            }StateIdle_in_StateIdle_
                                        }Inst_in_StateIdle_static_
                                    }BeginResponseTx_in_OContext2_
                                }RespondToNonReadRequest_in_OContext_
                            }OnNewNonReadRequest_in_StateIdle_override_
                        }ProcessNewRequest_in_OContext2_
                    }OnReceiveSolRequest_in_OContext4_
                }ProcessRequest_in_OContext_
            }ProcessObjects_in_OContext5_
        }ProcessMessage_in_OContext6_

        {CheckForTaskStart_in_OContext1

            {CheckForDeferredRequest_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 1
*                *boolean ret= 0
                }CanTransmit_in_OContext_
            }CheckForDeferredRequest_in_OContext_
*        CheckForTaskStart_in_OContext2

            {CheckForUnsolicitedNull_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 1
*                *boolean ret= 0
                }CanTransmit_in_OContext_
            }CheckForUnsolicitedNull_in_OContext_
*        CheckForTaskStart_in_OContext3

            {CheckForUnsolicited_in_OContext1

                {CanTransmit_in_OContext1
*                *pOContext->isOnline= 1
*                *pOContext->isTransmitting= 1
*                *boolean ret= 0
                }CanTransmit_in_OContext_
            }CheckForUnsolicited_in_OContext_
        }CheckForTaskStart_in_OContext_
    }OnReceive_in_OContext_
}SendToOutstation_in_OutstationTestObject_
REQUIRE(t.lower->PopWriteAsHex() == 'C1 81 80 00 34 02 07 01 01 00')
