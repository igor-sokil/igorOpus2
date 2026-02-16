********SUITE('13WriteTimeDate')********

DatabaseConfig_in_DatabaseConfig1

    {OutstationTestObject_in_OutstationTestObject1

        {MockOutstationApplication_in_MockOutstationApplication1

        }MockOutstationApplication_in_MockOutstationApplication_

        {OContext_in_OContext1

            {Database_in_Database1

                {StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1
*                *3config->analog_input_count= 0
                }StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1
            }Database_in_Database_

            {OutstationSolState_in_OutstationSolState1

                TxBuffer_in_TxBuffer1
*                *uint32_t maxTxSize =292

                BufferSer4_in_BufferSer4Over2_1
*                *uint16_t length=292
*                *sizeof(BufferSer4)=2048
*                *uint8_t bytes[SIZE_BufferSer4]=6418034
            }OutstationSolState_in_OutstationSolState_

            {Inst_in_StateIdle_static1

                {StateIdle_in_StateIdle1

                    {OutstationState_in_OutstationState1

                    }OutstationState_in_OutstationState_
                }StateIdle_in_StateIdle_
            }Inst_in_StateIdle_static_
        }OContext_in_OContext_
}OutstationTestObject_in_OutstationTestObject_

    {SendToOutstation_in_OutstationTestObject1

        {OnReceive_in_OContext1
*        **inspect_Message**
*        **inspect_Addresses**
*        @*uint16_t source= 0
*        @*uint16_t destination= 0
*        **inspect_RSeq**
*        @*buffer->buffer_[i]= 6402060<- c1 2 32 1 7 1 d2 4 0 0 0 0

            {ProcessMessage_in_OContext1

                {ParseRequest_in_APDUHeaderParser_static1
*                **inspect_RSeq**
*                @*buffer->buffer_[i]= 6402060<- c1 2 32 1 7 1 d2 4 0 0 0 0
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
*                @*FunctionCode_uint8_t function= 2
*                **inspect_RSeq**
*                @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0

                    {ProcessRequest_in_OContext1

                        {OnReceiveSolRequest_in_OContext1

                            {ProcessNewRequest_in_OContext1

                                {OnNewNonReadRequest_in_StateIdle_override1

                                    {RespondToNonReadRequest_in_OContext1

                                        {Start_in_TxBuffer1

                                        }Start_in_TxBuffer_
@@@@                                        *length_in_HasLength_for_Uint16_t(&(temp.hHasLength))= 292

                                        {HeaderWriter_in_HeaderWriter1
*                                        *length_in_HasLength_for_Uint16_t(&(position_->hHasLength))= 288

                                        }HeaderWriter_in_HeaderWriter_

                                        {SetFunction_in_APDUWrapper1
@@@@                                        *write_uint8=6418035->129
                                        }SetFunction_in_APDUWrapper_

                                        {ToByte_in_AppControlField1
*                                        *ret |= AppControlField_FIR_MASK
*                                        *ret |= AppControlField_FIN_MASK
                                        }ToByte_in_AppControlField_
                                        *uint8_t ret =192
                                        *uint8_t seq =1

                                        {SetControl_in_APDUWrapper1
@@@@                                        *write_uint8=6418034->193
                                        }SetControl_in_APDUWrapper_

                                        {HandleNonReadResponse_in_OContext1
*                                        *FunctionCode_uint18_t function= 2
*                                        **inspect_RSeq**
*                                        @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0
@@@@                                        *FunctionCode_WRITE

                                            {HandleWrite_in_OContext1

                                                {WriteHandler_in_WriteHandler1

                                                    IAPDUHandler_in_IAPDUHandler1
*                                                    *pIAPDUHandler= 6400824

                                                }WriteHandler_in_WriteHandler_
                                            *HandleWrite_in_OContext2

                                                @@@@ParseResult_uint8_t Parse_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler *handler)
                                                {Parse_in_APDUParser_static1
*                                                **inspect_RSeq**
*                                                @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0

                                                    @@@@ParseResult_uint8_t ParseSinglePass_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                    {ParseSinglePass_in_APDUParser_static1
*                                                    *IAPDUHandler* pHandler=0
*                                                    *IWhiteList* pWhiteList=6400824
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0
*                                                    *copy
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0

                                                        @@@@ParseResult_uint8_t ParseHeader_in_APDUParser_static(RSeq_for_Uint16_t *buffer, uint32_t count, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                        {ParseHeader_in_APDUParser_static1
*                                                        **inspect_RSeq**
*                                                        @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0

                                                            {ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                            **inspect_RSeq**
*                                                            @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0
                                                            }ParseObjectHeader_in_ObjectHeaderParser_static2_

                                                            {GetRecord_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 50
*                                                            *uint8_t variation= 1

                                                                {GetEnumAndType_in_GroupVariationRecord_static1
*                                                                *uint8_t group= 50
*                                                                *uint8_t variation= 1

                                                                    {GetType_in_GroupVariationRecord_static1
*                                                                    *uint8_t group= 50
*                                                                    *uint8_t variation= 1
*                                                                    *GroupVariationType_OTHER
                                                                    }GetType_in_GroupVariationRecord_static19_
*                                                                *GroupVariation_uint16_t enumeration= 3201
                                                                GetEnumAndType_in_GroupVariationRecord_static2

                                                                }GetEnumAndType_in_GroupVariationRecord_static_
                                                            }GetRecord_in_GroupVariationRecord_static_

                                                            {IsAllowed_in_WriteHandler_override1
                                                            }IsAllowed_in_WriteHandler_override_

                                                            @@@@ParseResult_uint8_t ParseQualifier_in_APDUParser_static(RSeq_for_Uint16_t *buffer, HeaderRecord *record, IAPDUHandler* pHandler)
                                                            {ParseQualifier_in_APDUParser_static1
*                                                            *QualifierCode_uint8_t tmp =7
@@@@                                                            *QualifierCode_UINT8_CNT*

                                                                NumParser_in_NumParser1

                                                                {ParseHeader_in_CountParser_static1
*                                                                **inspect_RSeq**
*                                                                @*buffer->buffer_[i]= 6402065<- 1 d2 4 0 0 0 0

                                                                    {ParseCount_in_NumParser1
                                                                    }ParseCount_in_NumParser2_
*                                                                *ParseHeader_in_CountParser_static2
*                                                                *ParseResult_uint8_t result =0
*                                                                *uint16_t count =1
*                                                                *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*                                                                *record.group= 50
*                                                                *record.variation= 1
*                                                                *IAPDUHandler* pHandler =0

                                                                    {ParseCountOfObjects_in_CountParser_static1
@@@@                                                                    *GroupVariation_Group50Var1

                                                                        {From_for_Group50Var1_in_CountParser_static1
                                                                        }From_for_Group50Var1_in_CountParser_static_

                                                                        {Process_in_CountParser1
                                                                        }Process_in_CountParser_
                                                                    }ParseCountOfObjects_in_CountParser_static1_
*                                                                *ParseHeader_in_CountParser_static3
*                                                                *ParseResult_uint8_t temp =0
                                                                }ParseHeader_in_CountParser_static1_
                                                            }ParseQualifier_in_APDUParser_static2_
*                                                            *ParseResult_uint8_t tmp= 0
                                                        }ParseHeader_in_APDUParser_static4_
*                                                        *ParseResult_uint8_t tmp= 0
                                                    }ParseSinglePass_in_APDUParser_static2_

*                                                *Parse_in_APDUParser_static2
*                                                *ParseResult_uint8_t result= 0

                                                    @@@@ParseResult_uint8_t ParseSinglePass_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                    {ParseSinglePass_in_APDUParser_static1
*                                                    *IAPDUHandler* pHandler=6400824
*                                                    *IWhiteList* pWhiteList=0
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0
*                                                    *copy
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0

                                                        @@@@ParseResult_uint8_t ParseHeader_in_APDUParser_static(RSeq_for_Uint16_t *buffer, uint32_t count, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                        {ParseHeader_in_APDUParser_static1
*                                                        **inspect_RSeq**
*                                                        @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0

                                                            {ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                            **inspect_RSeq**
*                                                            @*buffer->buffer_[i]= 6402062<- 32 1 7 1 d2 4 0 0 0 0
                                                            }ParseObjectHeader_in_ObjectHeaderParser_static2_

                                                            {GetRecord_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 50
*                                                            *uint8_t variation= 1

                                                                {GetEnumAndType_in_GroupVariationRecord_static1
*                                                                *uint8_t group= 50
*                                                                *uint8_t variation= 1

                                                                    {GetType_in_GroupVariationRecord_static1
*                                                                    *uint8_t group= 50
*                                                                    *uint8_t variation= 1
*                                                                    *GroupVariationType_OTHER
                                                                    }GetType_in_GroupVariationRecord_static19_
*                                                                *GroupVariation_uint16_t enumeration= 3201
                                                                GetEnumAndType_in_GroupVariationRecord_static2

                                                                }GetEnumAndType_in_GroupVariationRecord_static_
                                                            }GetRecord_in_GroupVariationRecord_static_

                                                            @@@@ParseResult_uint8_t ParseQualifier_in_APDUParser_static(RSeq_for_Uint16_t *buffer, HeaderRecord *record, IAPDUHandler* pHandler)
                                                            {ParseQualifier_in_APDUParser_static1
*                                                            *QualifierCode_uint8_t tmp =7
@@@@                                                            *QualifierCode_UINT8_CNT*

                                                                NumParser_in_NumParser1

                                                                {ParseHeader_in_CountParser_static1
*                                                                **inspect_RSeq**
*                                                                @*buffer->buffer_[i]= 6402065<- 1 d2 4 0 0 0 0

                                                                    {ParseCount_in_NumParser1
                                                                    }ParseCount_in_NumParser2_
*                                                                *ParseHeader_in_CountParser_static2
*                                                                *ParseResult_uint8_t result =0
*                                                                *uint16_t count =1
*                                                                *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*                                                                *record.group= 50
*                                                                *record.variation= 1
*                                                                *IAPDUHandler* pHandler =6400824

                                                                    {ParseCountOfObjects_in_CountParser_static1
@@@@                                                                    *GroupVariation_Group50Var1

                                                                        {From_for_Group50Var1_in_CountParser_static1
                                                                        }From_for_Group50Var1_in_CountParser_static_

                                                                        {Process_in_CountParser1

                                                                            {InvokeCountOf_for_Group50Var1_in_CountParser_static1

                                                                                {OnHeader_CountHeader_for_Group50Var1_in_IAPDUHandler1

                                                                                    {ProcessHeader_CountHeader_for_Group50Var1_in_WriteHandler_override1

                                                                                    *ProcessHeader_CountHeader_for_Group50Var1_in_WriteHandler_override2

                                                                                    *ProcessHeader_CountHeader_for_Group50Var1_in_WriteHandler_override3

                                                                                    *ProcessHeader_CountHeader_for_Group50Var1_in_WriteHandler_override4

{WriteAbsoluteTime_in_MockOutstationApplication1
*UTCTimestamp.msSinceEpoch= 4d2
}WriteAbsoluteTime_in_MockOutstationApplication1_
                                                                                    }ProcessHeader_CountHeader_for_Group50Var1_in_WriteHandler_override4_

                                                                                    {Record_in_IAPDUHandler1
*                                                                                    **inspect_IINField**
*                                                                                    @*uint8_t LSB= 0
*                                                                                    @*uint8_t MSB= 0
                                                                                    *Record_in_IAPDUHandler2
                                                                                    *Record_in_IAPDUHandler3

                                                                                        {OnHeaderResult_in_IAPDUHandler1
                                                                                        }OnHeaderResult_in_IAPDUHandler_
                                                                                    }Record_in_IAPDUHandler_
                                                                                }OnHeader_CountHeader_for_Group50Var1_in_IAPDUHandler_
                                                                            }InvokeCountOf_for_Group50Var1_in_CountParser_static_
                                                                        }Process_in_CountParser_
                                                                    }ParseCountOfObjects_in_CountParser_static1_
*                                                                *ParseHeader_in_CountParser_static3
*                                                                *ParseResult_uint8_t temp =0
                                                                }ParseHeader_in_CountParser_static1_
                                                            }ParseQualifier_in_APDUParser_static2_
*                                                            *ParseResult_uint8_t tmp= 0
                                                        }ParseHeader_in_APDUParser_static4_
*                                                        *ParseResult_uint8_t tmp= 0
                                                    }ParseSinglePass_in_APDUParser_static2_
*                                                *ParseResult_uint8_t tmp= 0
                                                }Parse_in_APDUParser_static_
                                            *HandleWrite_in_OContext3
*                                            *ParseResult_uint8_t result =0
*                                            **inspect_IINField**
*                                            @*uint8_t LSB= 0
*                                            @*uint8_t MSB= 0
                                            }HandleWrite_in_OContext_
*                                        **inspect_IINField**
*                                        @*uint8_t LSB= 0
*                                        @*uint8_t MSB= 0
                                        }HandleNonReadResponse_in_OContext1_

                                        {GetResponseIIN_in_OContext1
*                                        *LSBMask_BROADCAST = 0x01
*                                        *LSBMask_CLASS1_EVENTS = 0x02
*                                        *LSBMask_CLASS2_EVENTS = 0x04
*                                        *LSBMask_CLASS3_EVENTS = 0x08
*                                        *LSBMask_NEED_TIME = 0x10
*                                        *LSBMask_LOCAL_CONTROL = 0x20
*                                        *LSBMask_DEVICE_TROUBLE = 0x40
*                                        *LSBMask_DEVICE_RESTART = 0x80
*
*                                        *MSBMask_FUNC_NOT_SUPPORTED = 0x01
*                                        *MSBMask_OBJECT_UNKNOWN = 0x02
*                                        *MSBMask_PARAM_ERROR = 0x04
*                                        *MSBMask_EVENT_BUFFER_OVERFLOW = 0x08
*                                        *MSBMask_ALREADY_EXECUTING = 0x10
*                                        *MSBMask_CONFIG_CORRUPT = 0x20
*                                        *MSBMask_RESERVED1 = 0x40
*                                        *MSBMask_RESERVED2 = 0x80
*

                                            IsOverflown_in_EventBuffer1
*                                            *pEventBuffer->overflow= 0
                                        GetResponseIIN_in_OContext2
*                                        **inspect_IINField**
*                                        @*uint8_t LSB= 0
*                                        @*uint8_t MSB= 0
                                        GetResponseIIN_in_OContext3
*                                        **inspect_IINField**
*                                        @*uint8_t LSB= 128
*                                        @*uint8_t MSB= 0
                                        GetResponseIIN_in_OContext4
*                                        **inspect_IINField**
*                                        @*uint8_t LSB= 0
*                                        @*uint8_t MSB= 0
                                        GetResponseIIN_in_OContext5
*                                        **inspect_IINField**
*                                        @*uint8_t LSB= 128
*                                        @*uint8_t MSB= 0
                                        }GetResponseIIN_in_OContext_
*                                    *RespondToNonReadRequest_in_OContext2
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
*                                    *RespondToNonReadRequest_in_OContext3
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 128
*                                    @*uint8_t MSB= 0
*                                    *RespondToNonReadRequest_in_OContext4
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 128
*                                    @*uint8_t MSB= 0

                                        {SetIIN_in_APDUResponse1
@@@@                                        *write_uint8=6418036->128
@@@@                                        *write_uint8=6418037->0
                                        }SetIIN_in_APDUResponse_

                                        {BeginResponseTx_in_OContext1
*                                        *BeginResponseTx_in_OContext2
*                                        **inspect_RSeq**
*                                        @*buffer->buffer_[i]= 6418034<- c1 81 80 0
*                                        *BeginResponseTx_in_OContext3
*                                        **inspect_RSeq**
*                                        @*buffer->buffer_[i]= 6418034<- c1 81 80 0
*                                        *BeginResponseTx_in_OContext4
*                                        **inspect_RSeq**
*                                        @*buffer->buffer_[i]= 6418034<- c1 81 80 0

                                            {BeginTx_in_OContext1
*                                            **inspect_Message**
*                                            **inspect_Addresses**
*                                            @*uint16_t source= 0
*                                            @*uint16_t destination= 0
*                                            **inspect_RSeq**
*                                            @*buffer->buffer_[i]= 6418034<- c1 81 80 0
                                            }BeginTx_in_OContext_

                                            {Inst_in_StateIdle_static1

                                                {StateIdle_in_StateIdle1

                                                    {OutstationState_in_OutstationState1

                                                    }OutstationState_in_OutstationState_
                                                }StateIdle_in_StateIdle_
                                            }Inst_in_StateIdle_static_
                                        }BeginResponseTx_in_OContext_
                                    }RespondToNonReadRequest_in_OContext_
                                }OnNewNonReadRequest_in_StateIdle_override_
                            }ProcessNewRequest_in_OContext2_
                        }OnReceiveSolRequest_in_OContext5_
                    }ProcessRequest_in_OContext_
                }ProcessObjects_in_OContext5_
            }ProcessMessage_in_OContext6_

            {CheckForTaskStart_in_OContext1
            }CheckForTaskStart_in_OContext_
        }OnReceive_in_OContext_
}SendToOutstation_in_OutstationTestObject_
REQUIRE(t.lower->PopWriteAsHex() == 'C1 81 80 00')
REQUIRE(t.application->timestamps.size() == 1)
REQUIRE(t.application->timestamps.front().msSinceEpoch == 1234)
