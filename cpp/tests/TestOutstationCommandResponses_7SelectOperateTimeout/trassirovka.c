********SUITE('7SelectOperateTimeout')********

DatabaseConfig_in_DatabaseConfig1

{OutstationTestObject_in_OutstationTestObject1

{MockExecutor_in_MockExecutor1
*MockExecutor *pMockExecutor= 6405064
}MockExecutor_in_MockExecutor_

    {OContext_in_OContext1

        EventLists_in_EventLists1
        TotalEvents_in_EventBufferConfig1
*        *pEventBufferConfig->maxBinaryEvents= 0
*        *pEventBufferConfig->maxDoubleBinaryEvents=0
*        *pEventBufferConfig->maxAnalogEvents= 0
*        *pEventBufferConfig->maxCounterEvents= 0
*        *pEventBufferConfig->maxBinaryOutputStatusEvents= 0
*        *pEventBufferConfig->maxAnalogOutputStatusEvents= 0
*        *pEventBufferConfig->maxOctetStringEvents= 0

        List_for_EventRecord_in_List_for_EventRecordOver2_1
*        *uint32_t maxSize= 0

        List_for_EventRecord_in_List_for_EventRecordOver1_1

        {Database_in_Database1

            {StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

*            *pStaticDataMap->selected.start= 1
*            *pStaticDataMap->selected.stop= 0
            }StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2__

            StaticDataMap_for_DoubleBitBinarySpec_in_StaticDataMap_for_DoubleBitBinarySpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

            StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1
*            *config.size()= 0

                {StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver1

                    {Range_in_RangeOver1_1
                    }Range_in_RangeOver1__
                }StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver_

            StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

            StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

            StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

            StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

            StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__

            StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2_1
*            *config.size()= 0

                {Range_in_RangeOver1_1
                }Range_in_RangeOver1__
        }Database_in_Database_

        DeferredRequest_in_DeferredRequest1
*        *uint32_t maxAPDUSize =292

        BufferSer4_in_BufferSer4Over2_1
*        *uint16_t length=292
*        *sizeof(BufferSer4)=2048
*        *uint8_t bytes[SIZE_BufferSer4]=6415886

        {OutstationSolState_in_OutstationSolState1

            TxBuffer_in_TxBuffer1
*            *uint32_t maxTxSize =292

            BufferSer4_in_BufferSer4Over2_1
*            *uint16_t length=292
*            *sizeof(BufferSer4)=2048
*            *uint8_t bytes[SIZE_BufferSer4]=6418026
        }OutstationSolState_in_OutstationSolState_

        {OutstationUnsolState_in_OutstationUnsolState1

            TxBuffer_in_TxBuffer1
*            *uint32_t maxTxSize =292

            BufferSer4_in_BufferSer4Over2_1
*            *uint16_t length=292
*            *sizeof(BufferSer4)=2048
*            *uint8_t bytes[SIZE_BufferSer4]=6420114
        }OutstationUnsolState_in_OutstationUnsolState_

        {Inst_in_StateIdle_static1

            StateIdle_in_StateIdle1

                OutstationState_in_OutstationState1
        }Inst_in_StateIdle_static_
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

        {ProcessMessage_in_OContext1
*        *FORMAT_HEX_BLOCK(this->logger, flags::APP_HEX_RX, message.payload, 18, 18)
*        **inspect_RSeq**
*        @*buffer->buffer_[i]= 6402494<-c0
*        @*buffer->buffer_[i]= 6402495<-3
*        @*buffer->buffer_[i]= 6402496<-c
*        @*buffer->buffer_[i]= 6402497<-1
*        @*buffer->buffer_[i]= 6402498<-17
*        @*buffer->buffer_[i]= 6402499<-1
*        @*buffer->buffer_[i]= 6402500<-3
*        @*buffer->buffer_[i]= 6402501<-1
*        @*buffer->buffer_[i]= 6402502<-1
*        @*buffer->buffer_[i]= 6402503<-1
*        @*buffer->buffer_[i]= 6402504<-0
*        @*buffer->buffer_[i]= 6402505<-0
*        @*buffer->buffer_[i]= 6402506<-0
*        @*buffer->buffer_[i]= 6402507<-1
*        @*buffer->buffer_[i]= 6402508<-0
*        @*buffer->buffer_[i]= 6402509<-0
*        @*buffer->buffer_[i]= 6402510<-0
*        @*buffer->buffer_[i]= 6402511<-0

            {ParseRequest_in_APDUHeaderParser_static1
*            **inspect_RSeq**
*            @*buffer->buffer_[i]= 6402494<-c0
*            @*buffer->buffer_[i]= 6402495<-3
*            @*buffer->buffer_[i]= 6402496<-c
*            @*buffer->buffer_[i]= 6402497<-1
*            @*buffer->buffer_[i]= 6402498<-17
*            @*buffer->buffer_[i]= 6402499<-1
*            @*buffer->buffer_[i]= 6402500<-3
*            @*buffer->buffer_[i]= 6402501<-1
*            @*buffer->buffer_[i]= 6402502<-1
*            @*buffer->buffer_[i]= 6402503<-1
*            @*buffer->buffer_[i]= 6402504<-0
*            @*buffer->buffer_[i]= 6402505<-0
*            @*buffer->buffer_[i]= 6402506<-0
*            @*buffer->buffer_[i]= 6402507<-1
*            @*buffer->buffer_[i]= 6402508<-0
*            @*buffer->buffer_[i]= 6402509<-0
*            @*buffer->buffer_[i]= 6402510<-0
*            @*buffer->buffer_[i]= 6402511<-0
            }ParseRequest_in_APDUHeaderParser_static2_

            {ProcessObjects_in_OContext1

                {ProcessRequest_in_OContext1

                    {OnReceiveSolRequest_in_OContext1

                        {ProcessNewRequest_in_OContext1

                            {OnNewNonReadRequest_in_StateIdle_override1

                                {RespondToNonReadRequest_in_OContext1

                                    {SetFunction_in_APDUWrapper1
@@@@                                    *write_uint8=6418027->129
                                    }SetFunction_in_APDUWrapper_

                                    {ToByte_in_AppControlField1
*                                    *ret |= AppControlField_FIR_MASK
*                                    *ret |= AppControlField_FIN_MASK
                                    }ToByte_in_AppControlField_
                                    *uint8_t ret =192
                                    *uint8_t seq =0

                                    {SetControl_in_APDUWrapper1
@@@@                                    *write_uint8=6418026->192
                                    }SetControl_in_APDUWrapper_

                                    {HandleNonReadResponse_in_OContext1
*                                    *FunctionCode_uint18_t function= 3
*                                    **inspect_RSeq**
*                                    @*buffer->buffer_[i]= 6402496<-c
*                                    @*buffer->buffer_[i]= 6402497<-1
*                                    @*buffer->buffer_[i]= 6402498<-17
*                                    @*buffer->buffer_[i]= 6402499<-1
*                                    @*buffer->buffer_[i]= 6402500<-3
*                                    @*buffer->buffer_[i]= 6402501<-1
*                                    @*buffer->buffer_[i]= 6402502<-1
*                                    @*buffer->buffer_[i]= 6402503<-1
*                                    @*buffer->buffer_[i]= 6402504<-0
*                                    @*buffer->buffer_[i]= 6402505<-0
*                                    @*buffer->buffer_[i]= 6402506<-0
*                                    @*buffer->buffer_[i]= 6402507<-1
*                                    @*buffer->buffer_[i]= 6402508<-0
*                                    @*buffer->buffer_[i]= 6402509<-0
*                                    @*buffer->buffer_[i]= 6402510<-0
*                                    @*buffer->buffer_[i]= 6402511<-0
@@@@                                    *FunctionCode_SELECT

                                        {HandleSelect_in_OContext1
*                                        **inspect_RSeq**
*                                        @*buffer->buffer_[i]= 6402496<-c
*                                        @*buffer->buffer_[i]= 6402497<-1
*                                        @*buffer->buffer_[i]= 6402498<-17
*                                        @*buffer->buffer_[i]= 6402499<-1
*                                        @*buffer->buffer_[i]= 6402500<-3
*                                        @*buffer->buffer_[i]= 6402501<-1
*                                        @*buffer->buffer_[i]= 6402502<-1
*                                        @*buffer->buffer_[i]= 6402503<-1
*                                        @*buffer->buffer_[i]= 6402504<-0
*                                        @*buffer->buffer_[i]= 6402505<-0
*                                        @*buffer->buffer_[i]= 6402506<-0
*                                        @*buffer->buffer_[i]= 6402507<-1
*                                        @*buffer->buffer_[i]= 6402508<-0
*                                        @*buffer->buffer_[i]= 6402509<-0
*                                        @*buffer->buffer_[i]= 6402510<-0
*                                        @*buffer->buffer_[i]= 6402511<-0

                                            CommandActionAdapter_in_CommandActionAdapter1

                                            CommandResponseHandler_in_CommandResponseHandler1

                                            IAPDUHandler_in_IAPDUHandler1
*                                            *pIAPDUHandler= 6401296
                                        *HandleSelect_in_OContext2

                                            @@@@ParseResult_uint8_t Parse_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler *handler)
                                            {Parse_in_APDUParser_static1
*                                            **inspect_RSeq**
*                                            @*buffer->buffer_[i]= 6402496<-c
*                                            @*buffer->buffer_[i]= 6402497<-1
*                                            @*buffer->buffer_[i]= 6402498<-17
*                                            @*buffer->buffer_[i]= 6402499<-1
*                                            @*buffer->buffer_[i]= 6402500<-3
*                                            @*buffer->buffer_[i]= 6402501<-1
*                                            @*buffer->buffer_[i]= 6402502<-1
*                                            @*buffer->buffer_[i]= 6402503<-1
*                                            @*buffer->buffer_[i]= 6402504<-0
*                                            @*buffer->buffer_[i]= 6402505<-0
*                                            @*buffer->buffer_[i]= 6402506<-0
*                                            @*buffer->buffer_[i]= 6402507<-1
*                                            @*buffer->buffer_[i]= 6402508<-0
*                                            @*buffer->buffer_[i]= 6402509<-0
*                                            @*buffer->buffer_[i]= 6402510<-0
*                                            @*buffer->buffer_[i]= 6402511<-0

                                                @@@@ParseResult_uint8_t ParseSinglePass_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                {ParseSinglePass_in_APDUParser_static1
*                                                *IAPDUHandler* pHandler=0
*                                                *IWhiteList* pWhiteList=6401296
*                                                **inspect_RSeq**
*                                                @*buffer->buffer_[i]= 6402496<-c
*                                                @*buffer->buffer_[i]= 6402497<-1
*                                                @*buffer->buffer_[i]= 6402498<-17
*                                                @*buffer->buffer_[i]= 6402499<-1
*                                                @*buffer->buffer_[i]= 6402500<-3
*                                                @*buffer->buffer_[i]= 6402501<-1
*                                                @*buffer->buffer_[i]= 6402502<-1
*                                                @*buffer->buffer_[i]= 6402503<-1
*                                                @*buffer->buffer_[i]= 6402504<-0
*                                                @*buffer->buffer_[i]= 6402505<-0
*                                                @*buffer->buffer_[i]= 6402506<-0
*                                                @*buffer->buffer_[i]= 6402507<-1
*                                                @*buffer->buffer_[i]= 6402508<-0
*                                                @*buffer->buffer_[i]= 6402509<-0
*                                                @*buffer->buffer_[i]= 6402510<-0
*                                                @*buffer->buffer_[i]= 6402511<-0
*                                                *copy
*                                                **inspect_RSeq**
*                                                @*buffer->buffer_[i]= 6402496<-c
*                                                @*buffer->buffer_[i]= 6402497<-1
*                                                @*buffer->buffer_[i]= 6402498<-17
*                                                @*buffer->buffer_[i]= 6402499<-1
*                                                @*buffer->buffer_[i]= 6402500<-3
*                                                @*buffer->buffer_[i]= 6402501<-1
*                                                @*buffer->buffer_[i]= 6402502<-1
*                                                @*buffer->buffer_[i]= 6402503<-1
*                                                @*buffer->buffer_[i]= 6402504<-0
*                                                @*buffer->buffer_[i]= 6402505<-0
*                                                @*buffer->buffer_[i]= 6402506<-0
*                                                @*buffer->buffer_[i]= 6402507<-1
*                                                @*buffer->buffer_[i]= 6402508<-0
*                                                @*buffer->buffer_[i]= 6402509<-0
*                                                @*buffer->buffer_[i]= 6402510<-0
*                                                @*buffer->buffer_[i]= 6402511<-0

                                                    @@@@ParseResult_uint8_t ParseHeader_in_APDUParser_static(RSeq_for_Uint16_t *buffer, uint32_t count, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                    {ParseHeader_in_APDUParser_static1
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402496<-c
*                                                    @*buffer->buffer_[i]= 6402497<-1
*                                                    @*buffer->buffer_[i]= 6402498<-17
*                                                    @*buffer->buffer_[i]= 6402499<-1
*                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                    @*buffer->buffer_[i]= 6402511<-0

                                                        ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                        **inspect_RSeq**
*                                                        @*buffer->buffer_[i]= 6402496<-c
*                                                        @*buffer->buffer_[i]= 6402497<-1
*                                                        @*buffer->buffer_[i]= 6402498<-17
*                                                        @*buffer->buffer_[i]= 6402499<-1
*                                                        @*buffer->buffer_[i]= 6402500<-3
*                                                        @*buffer->buffer_[i]= 6402501<-1
*                                                        @*buffer->buffer_[i]= 6402502<-1
*                                                        @*buffer->buffer_[i]= 6402503<-1
*                                                        @*buffer->buffer_[i]= 6402504<-0
*                                                        @*buffer->buffer_[i]= 6402505<-0
*                                                        @*buffer->buffer_[i]= 6402506<-0
*                                                        @*buffer->buffer_[i]= 6402507<-1
*                                                        @*buffer->buffer_[i]= 6402508<-0
*                                                        @*buffer->buffer_[i]= 6402509<-0
*                                                        @*buffer->buffer_[i]= 6402510<-0
*                                                        @*buffer->buffer_[i]= 6402511<-0
@@@@                                                        *read_in_UInt8_static = 6402496<-12
@@@@                                                        *read_in_UInt8_static = 6402497<-1
@@@@                                                        *read_in_UInt8_static = 6402498<-23

                                                        GetRecord_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 12
*                                                        *uint8_t variation= 1

                                                            GetEnumAndType_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 12
*                                                            *uint8_t variation= 1

                                                                GetType_in_GroupVariationRecord_static1
*                                                                *uint8_t group= 12
*                                                                *uint8_t variation= 1
*                                                                *GroupVariationType_OTHER
*                                                            *GroupVariation_uint16_t enumeration= c01

                                                        @@@@ParseResult_uint8_t ParseQualifier_in_APDUParser_static(RSeq_for_Uint16_t *buffer, HeaderRecord *record, IAPDUHandler* pHandler)
                                                        {ParseQualifier_in_APDUParser_static1
*                                                        *QualifierCode_uint8_t tmp =23
@@@@                                                        *QualifierCode_UINT8_CNT_UINT8_INDEX*

                                                            NumParser_in_NumParser1

                                                            ParseHeader_in_CountIndexParser_static1
*                                                            **inspect_RSeq**
*                                                            @*buffer->buffer_[i]= 6402499<-1
*                                                            @*buffer->buffer_[i]= 6402500<-3
*                                                            @*buffer->buffer_[i]= 6402501<-1
*                                                            @*buffer->buffer_[i]= 6402502<-1
*                                                            @*buffer->buffer_[i]= 6402503<-1
*                                                            @*buffer->buffer_[i]= 6402504<-0
*                                                            @*buffer->buffer_[i]= 6402505<-0
*                                                            @*buffer->buffer_[i]= 6402506<-0
*                                                            @*buffer->buffer_[i]= 6402507<-1
*                                                            @*buffer->buffer_[i]= 6402508<-0
*                                                            @*buffer->buffer_[i]= 6402509<-0
*                                                            @*buffer->buffer_[i]= 6402510<-0
*                                                            @*buffer->buffer_[i]= 6402511<-0

                                                                ParseCount_in_NumParser1
@@@@                                                                *read_in_UInt8_static = 6402499<-1
*                                                            *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                                            *record.group= 12
*                                                            *record.variation= 1
*                                                            *record.enumeration= 3073
*                                                            *record.GetQualifierCode()= 23

                                                            ParseCountOfObjects_in_CountIndexParser_static1
*                                                            *record->gGroupVariationRecord.enumeration= c01
@@@@                                                            *GroupVariation_Group12Var1

                                                            Process_in_CountIndexParser1
                                                        }ParseQualifier_in_APDUParser_static6_
*                                                        *ParseResult_uint8_t tmp= 0
                                                    }ParseHeader_in_APDUParser_static4_
*                                                    *ParseResult_uint8_t tmp= 0
                                                }ParseSinglePass_in_APDUParser_static2_

                                                @@@@ParseResult_uint8_t ParseSinglePass_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                {ParseSinglePass_in_APDUParser_static1
*                                                *IAPDUHandler* pHandler=6401296
*                                                *IWhiteList* pWhiteList=0
*                                                **inspect_RSeq**
*                                                @*buffer->buffer_[i]= 6402496<-c
*                                                @*buffer->buffer_[i]= 6402497<-1
*                                                @*buffer->buffer_[i]= 6402498<-17
*                                                @*buffer->buffer_[i]= 6402499<-1
*                                                @*buffer->buffer_[i]= 6402500<-3
*                                                @*buffer->buffer_[i]= 6402501<-1
*                                                @*buffer->buffer_[i]= 6402502<-1
*                                                @*buffer->buffer_[i]= 6402503<-1
*                                                @*buffer->buffer_[i]= 6402504<-0
*                                                @*buffer->buffer_[i]= 6402505<-0
*                                                @*buffer->buffer_[i]= 6402506<-0
*                                                @*buffer->buffer_[i]= 6402507<-1
*                                                @*buffer->buffer_[i]= 6402508<-0
*                                                @*buffer->buffer_[i]= 6402509<-0
*                                                @*buffer->buffer_[i]= 6402510<-0
*                                                @*buffer->buffer_[i]= 6402511<-0
*                                                *copy
*                                                **inspect_RSeq**
*                                                @*buffer->buffer_[i]= 6402496<-c
*                                                @*buffer->buffer_[i]= 6402497<-1
*                                                @*buffer->buffer_[i]= 6402498<-17
*                                                @*buffer->buffer_[i]= 6402499<-1
*                                                @*buffer->buffer_[i]= 6402500<-3
*                                                @*buffer->buffer_[i]= 6402501<-1
*                                                @*buffer->buffer_[i]= 6402502<-1
*                                                @*buffer->buffer_[i]= 6402503<-1
*                                                @*buffer->buffer_[i]= 6402504<-0
*                                                @*buffer->buffer_[i]= 6402505<-0
*                                                @*buffer->buffer_[i]= 6402506<-0
*                                                @*buffer->buffer_[i]= 6402507<-1
*                                                @*buffer->buffer_[i]= 6402508<-0
*                                                @*buffer->buffer_[i]= 6402509<-0
*                                                @*buffer->buffer_[i]= 6402510<-0
*                                                @*buffer->buffer_[i]= 6402511<-0

                                                    @@@@ParseResult_uint8_t ParseHeader_in_APDUParser_static(RSeq_for_Uint16_t *buffer, uint32_t count, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                    {ParseHeader_in_APDUParser_static1
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402496<-c
*                                                    @*buffer->buffer_[i]= 6402497<-1
*                                                    @*buffer->buffer_[i]= 6402498<-17
*                                                    @*buffer->buffer_[i]= 6402499<-1
*                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                    @*buffer->buffer_[i]= 6402511<-0

                                                        ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                        **inspect_RSeq**
*                                                        @*buffer->buffer_[i]= 6402496<-c
*                                                        @*buffer->buffer_[i]= 6402497<-1
*                                                        @*buffer->buffer_[i]= 6402498<-17
*                                                        @*buffer->buffer_[i]= 6402499<-1
*                                                        @*buffer->buffer_[i]= 6402500<-3
*                                                        @*buffer->buffer_[i]= 6402501<-1
*                                                        @*buffer->buffer_[i]= 6402502<-1
*                                                        @*buffer->buffer_[i]= 6402503<-1
*                                                        @*buffer->buffer_[i]= 6402504<-0
*                                                        @*buffer->buffer_[i]= 6402505<-0
*                                                        @*buffer->buffer_[i]= 6402506<-0
*                                                        @*buffer->buffer_[i]= 6402507<-1
*                                                        @*buffer->buffer_[i]= 6402508<-0
*                                                        @*buffer->buffer_[i]= 6402509<-0
*                                                        @*buffer->buffer_[i]= 6402510<-0
*                                                        @*buffer->buffer_[i]= 6402511<-0
@@@@                                                        *read_in_UInt8_static = 6402496<-12
@@@@                                                        *read_in_UInt8_static = 6402497<-1
@@@@                                                        *read_in_UInt8_static = 6402498<-23

                                                        GetRecord_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 12
*                                                        *uint8_t variation= 1

                                                            GetEnumAndType_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 12
*                                                            *uint8_t variation= 1

                                                                GetType_in_GroupVariationRecord_static1
*                                                                *uint8_t group= 12
*                                                                *uint8_t variation= 1
*                                                                *GroupVariationType_OTHER
*                                                            *GroupVariation_uint16_t enumeration= c01

                                                        @@@@ParseResult_uint8_t ParseQualifier_in_APDUParser_static(RSeq_for_Uint16_t *buffer, HeaderRecord *record, IAPDUHandler* pHandler)
                                                        {ParseQualifier_in_APDUParser_static1
*                                                        *QualifierCode_uint8_t tmp =23
@@@@                                                        *QualifierCode_UINT8_CNT_UINT8_INDEX*

                                                            NumParser_in_NumParser1

                                                            ParseHeader_in_CountIndexParser_static1
*                                                            **inspect_RSeq**
*                                                            @*buffer->buffer_[i]= 6402499<-1
*                                                            @*buffer->buffer_[i]= 6402500<-3
*                                                            @*buffer->buffer_[i]= 6402501<-1
*                                                            @*buffer->buffer_[i]= 6402502<-1
*                                                            @*buffer->buffer_[i]= 6402503<-1
*                                                            @*buffer->buffer_[i]= 6402504<-0
*                                                            @*buffer->buffer_[i]= 6402505<-0
*                                                            @*buffer->buffer_[i]= 6402506<-0
*                                                            @*buffer->buffer_[i]= 6402507<-1
*                                                            @*buffer->buffer_[i]= 6402508<-0
*                                                            @*buffer->buffer_[i]= 6402509<-0
*                                                            @*buffer->buffer_[i]= 6402510<-0
*                                                            @*buffer->buffer_[i]= 6402511<-0

                                                                ParseCount_in_NumParser1
@@@@                                                                *read_in_UInt8_static = 6402499<-1
*                                                            *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                                            *record.group= 12
*                                                            *record.variation= 1
*                                                            *record.enumeration= 3073
*                                                            *record.GetQualifierCode()= 23

                                                            ParseCountOfObjects_in_CountIndexParser_static1
*                                                            *record->gGroupVariationRecord.enumeration= c01
@@@@                                                            *GroupVariation_Group12Var1

                                                            Process_in_CountIndexParser1

                                                                InvokeCountOf_for_Group12Var1_in_CountIndexParser_static1
*                                                                **inspect_RSeq**
*                                                                @*buffer->buffer_[i]= 6402500<-3
*                                                                @*buffer->buffer_[i]= 6402501<-1
*                                                                @*buffer->buffer_[i]= 6402502<-1
*                                                                @*buffer->buffer_[i]= 6402503<-1
*                                                                @*buffer->buffer_[i]= 6402504<-0
*                                                                @*buffer->buffer_[i]= 6402505<-0
*                                                                @*buffer->buffer_[i]= 6402506<-0
*                                                                @*buffer->buffer_[i]= 6402507<-1
*                                                                @*buffer->buffer_[i]= 6402508<-0
*                                                                @*buffer->buffer_[i]= 6402509<-0
*                                                                @*buffer->buffer_[i]= 6402510<-0
*                                                                @*buffer->buffer_[i]= 6402511<-0

                                                                    OnHeader_PrefixHeader_Indexed_for_ControlRelayOutputBlock_in_IAPDUHandler1

                                                                    ProcessHeader_PrefixHeader_Indexed_for_ControlRelayOutputBlock_in_CommandResponseHandler_override1

                                                                        ProcessAny_for_ControlRelayOutputBlock_in_CommandResponseHandler1

                                                                            RespondToHeader_for_ControlRelayOutputBlock_UInt8_in_CommandResponseHandler1

                                                                                IterateOverCountWithPrefix_for_UInt8_ControlRelayOutputBlock_in_HeaderWriter1

                                                                                WriteHeaderWithReserve_in_HeaderWriter1
*                                                                                *qc= 23
*                                                                                *reserve= 13

                                                                                WriteHeader_in_HeaderWriter1
*                                                                                *id.group= 12
*                                                                                *id.variation= 1
*                                                                                *qc= 23
@@@@                                                                                *write_in_UInt8_static = 6418030->12
@@@@                                                                                *write_in_UInt8_static = 6418031->1
@@@@                                                                                *write_in_UInt8_static = 6418032->23

                                                                                PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock_in_PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlockOver2_1

                                                                            RespondToHeaderWithIterator_for_ControlRelayOutputBlock_UInt8_in_CommandResponseHandler1

                                                                                readInvokeCountOf_for_ControlRelayOutputBlock_in_CountIndexParser1
*                                                                                **inspect_RSeq**
*                                                                                @*buffer->buffer_[i]= 6402500<-3
*                                                                                @*buffer->buffer_[i]= 6402501<-1
*                                                                                @*buffer->buffer_[i]= 6402502<-1
*                                                                                @*buffer->buffer_[i]= 6402503<-1
*                                                                                @*buffer->buffer_[i]= 6402504<-0
*                                                                                @*buffer->buffer_[i]= 6402505<-0
*                                                                                @*buffer->buffer_[i]= 6402506<-0
*                                                                                @*buffer->buffer_[i]= 6402507<-1
*                                                                                @*buffer->buffer_[i]= 6402508<-0
*                                                                                @*buffer->buffer_[i]= 6402509<-0
*                                                                                @*buffer->buffer_[i]= 6402510<-0
*                                                                                @*buffer->buffer_[i]= 6402511<-0

                                                                                Indexed_for_ControlRelayOutputBlock_in_Indexed_for_ControlRelayOutputBlockOver1_1

                                                                                ControlRelayOutputBlock_in_ControlRelayOutputBlockOver1_1
*                                                                            *pControlRelayOutputBlock->rawCode =3
@@@@                                                                            *read_in_UInt8_static = 6402500<-3

                                                                                Read_in_Group12Var1_static1
*                                                                                *crob->rawCode= 0
*                                                                                *crob->count= 0
*                                                                                *crob->onTimeMS= 0
*                                                                                *crob->offTimeMS= 0
*                                                                                *crob->status= 0
@@@@                                                                            *read_in_UInt8_static = 6402501<-1
@@@@                                                                            *read_in_UInt8_static = 6402502<-1
@@@@                                                                            *read_from_in_UInt32_static = 6402503<-1
@@@@                                                                            *read_from_in_UInt32_static = 6402507<-1
@@@@                                                                            *read_in_UInt8_static = 6402511<-0

                                                                                From_in_ControlRelayOutputBlock_static1

                                                                                ControlRelayOutputBlock_in_ControlRelayOutputBlockOver2_1
*                                                                                *pControlRelayOutputBlock->rawCode =1

                                                                                process_for_UInt8_ControlRelayOutputBlock_in_CommandResponseHandler1

                                                                                    ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler1
                                                                                    ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler2

                                                                                        Action_ControlRelayOutputBlock_in_CommandActionAdapter_override1

                                                                                            ActionT_ControlRelayOutputBlock_in_CommandActionAdapter1

                                                                                            CheckStart_in_CommandActionAdapter1
*                                                                                            *pCommandActionAdapter->is_started= 0

                                                                                            Select_ControlRelayOutputBlock_in_SimpleCommandHandler1
*                                                                                        *CommandStatus_uint8_t tmp =0
                                                                                    ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler3
*                                                                                    *CommandStatus_uint8_t tmp = 0
*                                                                                *response.status =0
@@@@                                                                                *write_in_UInt8_static = 6418034->3

                                                                                    Apply_in_ConvertGroup12Var1_static1
*                                                                                    *crob->rawCode= 1
*                                                                                    *crob->count= 1
*                                                                                    *crob->onTimeMS= 1
*                                                                                    *crob->offTimeMS= 1
*                                                                                    *crob->status= 0

                                                                                    Write_in_Group12Var1_static1
*                                                                                    *crob->rawCode= 1
*                                                                                    *crob->count= 1
*                                                                                    *crob->onTimeMS= 1
*                                                                                    *crob->offTimeMS= 1
*                                                                                    *crob->status= 0
@@@@                                                                                *write_in_UInt8_static = 6418035->1
@@@@                                                                                *write_in_UInt8_static = 6418036->1
@@@@                                                                                *write_in_UInt32_static = 6418037->1
@@@@                                                                                *write_in_UInt32_static = 6418041->1
@@@@                                                                                *write_in_UInt8_static = 6418045->0

                                                                            PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock_destr_PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock1
@@@@                                                                        *write_in_UInt8_static = 6418033->1

                                                                {Record_in_IAPDUHandler1
                                                                *Record_in_IAPDUHandler2
*                                                                **inspect_IINField**
*                                                                @*uint8_t LSB= 0
*                                                                @*uint8_t MSB= 0
                                                                *Record_in_IAPDUHandler3

                                                                    {OnHeaderResult_in_IAPDUHandler1
                                                                    }OnHeaderResult_in_IAPDUHandler_
                                                                }Record_in_IAPDUHandler_
*                                                                **inspect_IINField**
*                                                                @*uint8_t LSB= 0
*                                                                @*uint8_t MSB= 0
                                                    }ParseQualifier_in_APDUParser_static6_
*                                                    *ParseResult_uint8_t tmp= 0
                                                }ParseHeader_in_APDUParser_static4_
*                                                *ParseResult_uint8_t tmp= 0
                                            }ParseSinglePass_in_APDUParser_static2_
                                        }Parse_in_APDUParser_static_

                                        CommandActionAdapter_destr_CommandActionAdapter1
*                                        *pCommandActionAdapter->is_started= 1
                                        CommandActionAdapter_destr_CommandActionAdapter2
                                        CommandActionAdapter_destr_CommandActionAdapter3
                                        CommandActionAdapter_destr_CommandActionAdapter4
                                    HandleSelect_in_OContext3
*                                    *ParseResult_uint8_t result =0
                                    HandleSelect_in_OContext4
                                    HandleSelect_in_OContext5
                                    }HandleSelect_in_OContext2_
                                }HandleNonReadResponse_in_OContext2_

                                {GetResponseIIN_in_OContext1
*                                *LSBMask_BROADCAST = 0x01
*                                *LSBMask_CLASS1_EVENTS = 0x02
*                                *LSBMask_CLASS2_EVENTS = 0x04
*                                *LSBMask_CLASS3_EVENTS = 0x08
*                                *LSBMask_NEED_TIME = 0x10
*                                *LSBMask_LOCAL_CONTROL = 0x20
*                                *LSBMask_DEVICE_TROUBLE = 0x40
*                                *LSBMask_DEVICE_RESTART = 0x80
*
*                                *MSBMask_FUNC_NOT_SUPPORTED = 0x01
*                                *MSBMask_OBJECT_UNKNOWN = 0x02
*                                *MSBMask_PARAM_ERROR = 0x04
*                                *MSBMask_EVENT_BUFFER_OVERFLOW = 0x08
*                                *MSBMask_ALREADY_EXECUTING = 0x10
*                                *MSBMask_CONFIG_CORRUPT = 0x20
*                                *MSBMask_RESERVED1 = 0x40
*                                *MSBMask_RESERVED2 = 0x80
*

                                    IsOverflown_in_EventBuffer1
*                                    *pEventBuffer->overflow= 0
*                                IINField temp1 = GetDynamicIIN_in_OContext(pOContext)
*                                *uint8_t LSB=0
*                                *uint8_t MSB=0
*                                IINField temp3 = ToIIN_in_ApplicationIIN(&temp)
*                                *uint8_t LSB=0
*                                *uint8_t MSB=0
*                                IINField temp4 = operatorOR_in_IINField(&temp2, &temp3)
*                                *uint8_t LSB=80
*                                *uint8_t MSB=0
                                }GetResponseIIN_in_OContext_
*                            *RespondToNonReadRequest_in_OContext2
*                            *temp.LSB= 128
*                            *temp.MSB= 0
*                            *iin.LSB= 0
*                            *iin.MSB= 0

                                {SetIIN_in_APDUResponse1
@@@@                                *write_uint8=6418028->128
@@@@                                *write_uint8=6418029->0
                                }SetIIN_in_APDUResponse_

                                {BeginResponseTx_in_OContext1

                                    {CheckForBroadcastConfirmation_in_OContext1
                                    }CheckForBroadcastConfirmation_in_OContext_
*                                *BeginResponseTx_in_OContext2
*                                **inspect_RSeq**
*                                @*buffer->buffer_[i]= 6418026<-c0
*                                @*buffer->buffer_[i]= 6418027<-81
*                                @*buffer->buffer_[i]= 6418028<-80
*                                @*buffer->buffer_[i]= 6418029<-0
*                                @*buffer->buffer_[i]= 6418030<-c
*                                @*buffer->buffer_[i]= 6418031<-1
*                                @*buffer->buffer_[i]= 6418032<-17
*                                @*buffer->buffer_[i]= 6418033<-1
*                                @*buffer->buffer_[i]= 6418034<-3
*                                @*buffer->buffer_[i]= 6418035<-1
*                                @*buffer->buffer_[i]= 6418036<-1
*                                @*buffer->buffer_[i]= 6418037<-1
*                                @*buffer->buffer_[i]= 6418038<-0
*                                @*buffer->buffer_[i]= 6418039<-0
*                                @*buffer->buffer_[i]= 6418040<-0
*                                @*buffer->buffer_[i]= 6418041<-1
*                                @*buffer->buffer_[i]= 6418042<-0
*                                @*buffer->buffer_[i]= 6418043<-0
*                                @*buffer->buffer_[i]= 6418044<-0
*                                @*buffer->buffer_[i]= 6418045<-0
*                                *BeginResponseTx_in_OContext3
*                                **inspect_RSeq**
*                                @*buffer->buffer_[i]= 6418026<-c0
*                                @*buffer->buffer_[i]= 6418027<-81
*                                @*buffer->buffer_[i]= 6418028<-80
*                                @*buffer->buffer_[i]= 6418029<-0
*                                @*buffer->buffer_[i]= 6418030<-c
*                                @*buffer->buffer_[i]= 6418031<-1
*                                @*buffer->buffer_[i]= 6418032<-17
*                                @*buffer->buffer_[i]= 6418033<-1
*                                @*buffer->buffer_[i]= 6418034<-3
*                                @*buffer->buffer_[i]= 6418035<-1
*                                @*buffer->buffer_[i]= 6418036<-1
*                                @*buffer->buffer_[i]= 6418037<-1
*                                @*buffer->buffer_[i]= 6418038<-0
*                                @*buffer->buffer_[i]= 6418039<-0
*                                @*buffer->buffer_[i]= 6418040<-0
*                                @*buffer->buffer_[i]= 6418041<-1
*                                @*buffer->buffer_[i]= 6418042<-0
*                                @*buffer->buffer_[i]= 6418043<-0
*                                @*buffer->buffer_[i]= 6418044<-0
*                                @*buffer->buffer_[i]= 6418045<-0
*                                *BeginResponseTx_in_OContext4
*                                **inspect_RSeq**
*                                @*buffer->buffer_[i]= 6418026<-c0
*                                @*buffer->buffer_[i]= 6418027<-81
*                                @*buffer->buffer_[i]= 6418028<-80
*                                @*buffer->buffer_[i]= 6418029<-0
*                                @*buffer->buffer_[i]= 6418030<-c
*                                @*buffer->buffer_[i]= 6418031<-1
*                                @*buffer->buffer_[i]= 6418032<-17
*                                @*buffer->buffer_[i]= 6418033<-1
*                                @*buffer->buffer_[i]= 6418034<-3
*                                @*buffer->buffer_[i]= 6418035<-1
*                                @*buffer->buffer_[i]= 6418036<-1
*                                @*buffer->buffer_[i]= 6418037<-1
*                                @*buffer->buffer_[i]= 6418038<-0
*                                @*buffer->buffer_[i]= 6418039<-0
*                                @*buffer->buffer_[i]= 6418040<-0
*                                @*buffer->buffer_[i]= 6418041<-1
*                                @*buffer->buffer_[i]= 6418042<-0
*                                @*buffer->buffer_[i]= 6418043<-0
*                                @*buffer->buffer_[i]= 6418044<-0
*                                @*buffer->buffer_[i]= 6418045<-0

                                    {BeginTx_in_OContext1
*                                    **inspect_RSeq**
*                                    @*buffer->buffer_[i]= 6418026<-c0
*                                    @*buffer->buffer_[i]= 6418027<-81
*                                    @*buffer->buffer_[i]= 6418028<-80
*                                    @*buffer->buffer_[i]= 6418029<-0
*                                    @*buffer->buffer_[i]= 6418030<-c
*                                    @*buffer->buffer_[i]= 6418031<-1
*                                    @*buffer->buffer_[i]= 6418032<-17
*                                    @*buffer->buffer_[i]= 6418033<-1
*                                    @*buffer->buffer_[i]= 6418034<-3
*                                    @*buffer->buffer_[i]= 6418035<-1
*                                    @*buffer->buffer_[i]= 6418036<-1
*                                    @*buffer->buffer_[i]= 6418037<-1
*                                    @*buffer->buffer_[i]= 6418038<-0
*                                    @*buffer->buffer_[i]= 6418039<-0
*                                    @*buffer->buffer_[i]= 6418040<-0
*                                    @*buffer->buffer_[i]= 6418041<-1
*                                    @*buffer->buffer_[i]= 6418042<-0
*                                    @*buffer->buffer_[i]= 6418043<-0
*                                    @*buffer->buffer_[i]= 6418044<-0
*                                    @*buffer->buffer_[i]= 6418045<-0

{BeginTransmit_in_MockLowerLayer1
*                                    **inspect_RSeq**
*                                    @*buffer->buffer_[i]= 6418026<-c0
*                                    @*buffer->buffer_[i]= 6418027<-81
*                                    @*buffer->buffer_[i]= 6418028<-80
*                                    @*buffer->buffer_[i]= 6418029<-0
*                                    @*buffer->buffer_[i]= 6418030<-c
*                                    @*buffer->buffer_[i]= 6418031<-1
*                                    @*buffer->buffer_[i]= 6418032<-17
*                                    @*buffer->buffer_[i]= 6418033<-1
*                                    @*buffer->buffer_[i]= 6418034<-3
*                                    @*buffer->buffer_[i]= 6418035<-1
*                                    @*buffer->buffer_[i]= 6418036<-1
*                                    @*buffer->buffer_[i]= 6418037<-1
*                                    @*buffer->buffer_[i]= 6418038<-0
*                                    @*buffer->buffer_[i]= 6418039<-0
*                                    @*buffer->buffer_[i]= 6418040<-0
*                                    @*buffer->buffer_[i]= 6418041<-1
*                                    @*buffer->buffer_[i]= 6418042<-0
*                                    @*buffer->buffer_[i]= 6418043<-0
*                                    @*buffer->buffer_[i]= 6418044<-0
*                                    @*buffer->buffer_[i]= 6418045<-0
}BeginTransmit_in_MockLowerLayer_
                                    }BeginTx_in_OContext_

                                    {Inst_in_StateIdle_static1

                                        StateIdle_in_StateIdle1

                                            OutstationState_in_OutstationState1
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

        {CheckForDeferredRequest_in_OContext1

            {CanTransmit_in_OContext1
*            *pOContext->isOnline= 1
*            *pOContext->isTransmitting= 1
*            *boolean ret= 0
            }CanTransmit_in_OContext_
        }CheckForDeferredRequest_in_OContext_
*    CheckForTaskStart_in_OContext2

        {CheckForUnsolicitedNull_in_OContext1

            {CanTransmit_in_OContext1
*            *pOContext->isOnline= 1
*            *pOContext->isTransmitting= 1
*            *boolean ret= 0
            }CanTransmit_in_OContext_
        }CheckForUnsolicitedNull_in_OContext_
*    CheckForTaskStart_in_OContext3

        {CheckForUnsolicited_in_OContext1

            {CanTransmit_in_OContext1
*            *pOContext->isOnline= 1
*            *pOContext->isTransmitting= 1
*            *boolean ret= 0
            }CanTransmit_in_OContext_
        }CheckForUnsolicited_in_OContext_
    }CheckForTaskStart_in_OContext_
}OnReceive_in_OContext_
}SendToOutstation_in_OutstationTestObject_

{PopWriteAsHex_in_MockLowerLayer1
}PopWriteAsHex_in_MockLowerLayer2_
REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 00 0C 01 17 01 03 01 01 01 00 00 00 01 00 00 00 00')
temp= C0 81 80 00 0C 01 17 01 03 01 01 01 00 00 00 01 00 00 00 00

t.cmdHandler->numStart= 1

t.cmdHandler->numEnd= 1
t.cmdHandler->NumInvocations()= 1

{OnTxReady_in_OutstationTestObject1

    {OnTxReady_in_OContext1

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

{SendToOutstation_in_OutstationTestObject1

    {OnReceive_in_OContext1

        {ProcessMessage_in_OContext1
*        *FORMAT_HEX_BLOCK(this->logger, flags::APP_HEX_RX, message.payload, 18, 18)
*        **inspect_RSeq**
*        @*buffer->buffer_[i]= 6402494<-c1
*        @*buffer->buffer_[i]= 6402495<-4
*        @*buffer->buffer_[i]= 6402496<-c
*        @*buffer->buffer_[i]= 6402497<-1
*        @*buffer->buffer_[i]= 6402498<-17
*        @*buffer->buffer_[i]= 6402499<-1
*        @*buffer->buffer_[i]= 6402500<-3
*        @*buffer->buffer_[i]= 6402501<-1
*        @*buffer->buffer_[i]= 6402502<-1
*        @*buffer->buffer_[i]= 6402503<-1
*        @*buffer->buffer_[i]= 6402504<-0
*        @*buffer->buffer_[i]= 6402505<-0
*        @*buffer->buffer_[i]= 6402506<-0
*        @*buffer->buffer_[i]= 6402507<-1
*        @*buffer->buffer_[i]= 6402508<-0
*        @*buffer->buffer_[i]= 6402509<-0
*        @*buffer->buffer_[i]= 6402510<-0
*        @*buffer->buffer_[i]= 6402511<-0

            {ParseRequest_in_APDUHeaderParser_static1
*            **inspect_RSeq**
*            @*buffer->buffer_[i]= 6402494<-c1
*            @*buffer->buffer_[i]= 6402495<-4
*            @*buffer->buffer_[i]= 6402496<-c
*            @*buffer->buffer_[i]= 6402497<-1
*            @*buffer->buffer_[i]= 6402498<-17
*            @*buffer->buffer_[i]= 6402499<-1
*            @*buffer->buffer_[i]= 6402500<-3
*            @*buffer->buffer_[i]= 6402501<-1
*            @*buffer->buffer_[i]= 6402502<-1
*            @*buffer->buffer_[i]= 6402503<-1
*            @*buffer->buffer_[i]= 6402504<-0
*            @*buffer->buffer_[i]= 6402505<-0
*            @*buffer->buffer_[i]= 6402506<-0
*            @*buffer->buffer_[i]= 6402507<-1
*            @*buffer->buffer_[i]= 6402508<-0
*            @*buffer->buffer_[i]= 6402509<-0
*            @*buffer->buffer_[i]= 6402510<-0
*            @*buffer->buffer_[i]= 6402511<-0
            }ParseRequest_in_APDUHeaderParser_static2_

            {ProcessObjects_in_OContext1

                {ProcessRequest_in_OContext1

                    {OnReceiveSolRequest_in_OContext1

                        {ProcessNewRequest_in_OContext1

                            {OnNewNonReadRequest_in_StateIdle_override1

                                {RespondToNonReadRequest_in_OContext1

                                    {SetFunction_in_APDUWrapper1
@@@@                                    *write_uint8=6418027->129
                                    }SetFunction_in_APDUWrapper_

                                    {ToByte_in_AppControlField1
*                                    *ret |= AppControlField_FIR_MASK
*                                    *ret |= AppControlField_FIN_MASK
                                    }ToByte_in_AppControlField_
                                    *uint8_t ret =192
                                    *uint8_t seq =1

                                    {SetControl_in_APDUWrapper1
@@@@                                    *write_uint8=6418026->193
                                    }SetControl_in_APDUWrapper_

                                    {HandleNonReadResponse_in_OContext1
*                                    *FunctionCode_uint18_t function= 4
*                                    **inspect_RSeq**
*                                    @*buffer->buffer_[i]= 6402496<-c
*                                    @*buffer->buffer_[i]= 6402497<-1
*                                    @*buffer->buffer_[i]= 6402498<-17
*                                    @*buffer->buffer_[i]= 6402499<-1
*                                    @*buffer->buffer_[i]= 6402500<-3
*                                    @*buffer->buffer_[i]= 6402501<-1
*                                    @*buffer->buffer_[i]= 6402502<-1
*                                    @*buffer->buffer_[i]= 6402503<-1
*                                    @*buffer->buffer_[i]= 6402504<-0
*                                    @*buffer->buffer_[i]= 6402505<-0
*                                    @*buffer->buffer_[i]= 6402506<-0
*                                    @*buffer->buffer_[i]= 6402507<-1
*                                    @*buffer->buffer_[i]= 6402508<-0
*                                    @*buffer->buffer_[i]= 6402509<-0
*                                    @*buffer->buffer_[i]= 6402510<-0
*                                    @*buffer->buffer_[i]= 6402511<-0
@@@@                                    *FunctionCode_OPERATE

                                        {HandleOperate_in_OContext1
                                        *HandleOperate_in_OContext2
                                        *HandleOperate_in_OContext3
*                                        *CommandStatus_uint8_t result =1
*                                        *CommandStatus_SUCCESS =0
                                        HandleOperate_in_OContext6
                                        HandleOperate_in_OContext7

                                            {HandleCommandWithConstant_in_OContext1

                                                CommandResponseHandler_in_CommandResponseHandler1

                                                IAPDUHandler_in_IAPDUHandler1
*                                                *pIAPDUHandler= 6400960

                                                @@@@ParseResult_uint8_t Parse_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler *handler)
                                                {Parse_in_APDUParser_static1
*                                                **inspect_RSeq**
*                                                @*buffer->buffer_[i]= 6402496<-c
*                                                @*buffer->buffer_[i]= 6402497<-1
*                                                @*buffer->buffer_[i]= 6402498<-17
*                                                @*buffer->buffer_[i]= 6402499<-1
*                                                @*buffer->buffer_[i]= 6402500<-3
*                                                @*buffer->buffer_[i]= 6402501<-1
*                                                @*buffer->buffer_[i]= 6402502<-1
*                                                @*buffer->buffer_[i]= 6402503<-1
*                                                @*buffer->buffer_[i]= 6402504<-0
*                                                @*buffer->buffer_[i]= 6402505<-0
*                                                @*buffer->buffer_[i]= 6402506<-0
*                                                @*buffer->buffer_[i]= 6402507<-1
*                                                @*buffer->buffer_[i]= 6402508<-0
*                                                @*buffer->buffer_[i]= 6402509<-0
*                                                @*buffer->buffer_[i]= 6402510<-0
*                                                @*buffer->buffer_[i]= 6402511<-0

                                                    @@@@ParseResult_uint8_t ParseSinglePass_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                    {ParseSinglePass_in_APDUParser_static1
*                                                    *IAPDUHandler* pHandler=0
*                                                    *IWhiteList* pWhiteList=6400960
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402496<-c
*                                                    @*buffer->buffer_[i]= 6402497<-1
*                                                    @*buffer->buffer_[i]= 6402498<-17
*                                                    @*buffer->buffer_[i]= 6402499<-1
*                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                    @*buffer->buffer_[i]= 6402511<-0
*                                                    *copy
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402496<-c
*                                                    @*buffer->buffer_[i]= 6402497<-1
*                                                    @*buffer->buffer_[i]= 6402498<-17
*                                                    @*buffer->buffer_[i]= 6402499<-1
*                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                    @*buffer->buffer_[i]= 6402511<-0

                                                        @@@@ParseResult_uint8_t ParseHeader_in_APDUParser_static(RSeq_for_Uint16_t *buffer, uint32_t count, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                        {ParseHeader_in_APDUParser_static1
*                                                        **inspect_RSeq**
*                                                        @*buffer->buffer_[i]= 6402496<-c
*                                                        @*buffer->buffer_[i]= 6402497<-1
*                                                        @*buffer->buffer_[i]= 6402498<-17
*                                                        @*buffer->buffer_[i]= 6402499<-1
*                                                        @*buffer->buffer_[i]= 6402500<-3
*                                                        @*buffer->buffer_[i]= 6402501<-1
*                                                        @*buffer->buffer_[i]= 6402502<-1
*                                                        @*buffer->buffer_[i]= 6402503<-1
*                                                        @*buffer->buffer_[i]= 6402504<-0
*                                                        @*buffer->buffer_[i]= 6402505<-0
*                                                        @*buffer->buffer_[i]= 6402506<-0
*                                                        @*buffer->buffer_[i]= 6402507<-1
*                                                        @*buffer->buffer_[i]= 6402508<-0
*                                                        @*buffer->buffer_[i]= 6402509<-0
*                                                        @*buffer->buffer_[i]= 6402510<-0
*                                                        @*buffer->buffer_[i]= 6402511<-0

                                                            ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                            **inspect_RSeq**
*                                                            @*buffer->buffer_[i]= 6402496<-c
*                                                            @*buffer->buffer_[i]= 6402497<-1
*                                                            @*buffer->buffer_[i]= 6402498<-17
*                                                            @*buffer->buffer_[i]= 6402499<-1
*                                                            @*buffer->buffer_[i]= 6402500<-3
*                                                            @*buffer->buffer_[i]= 6402501<-1
*                                                            @*buffer->buffer_[i]= 6402502<-1
*                                                            @*buffer->buffer_[i]= 6402503<-1
*                                                            @*buffer->buffer_[i]= 6402504<-0
*                                                            @*buffer->buffer_[i]= 6402505<-0
*                                                            @*buffer->buffer_[i]= 6402506<-0
*                                                            @*buffer->buffer_[i]= 6402507<-1
*                                                            @*buffer->buffer_[i]= 6402508<-0
*                                                            @*buffer->buffer_[i]= 6402509<-0
*                                                            @*buffer->buffer_[i]= 6402510<-0
*                                                            @*buffer->buffer_[i]= 6402511<-0
@@@@                                                            *read_in_UInt8_static = 6402496<-12
@@@@                                                            *read_in_UInt8_static = 6402497<-1
@@@@                                                            *read_in_UInt8_static = 6402498<-23

                                                            GetRecord_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 12
*                                                            *uint8_t variation= 1

                                                                GetEnumAndType_in_GroupVariationRecord_static1
*                                                                *uint8_t group= 12
*                                                                *uint8_t variation= 1

                                                                    GetType_in_GroupVariationRecord_static1
*                                                                    *uint8_t group= 12
*                                                                    *uint8_t variation= 1
*                                                                    *GroupVariationType_OTHER
*                                                                *GroupVariation_uint16_t enumeration= c01

                                                            @@@@ParseResult_uint8_t ParseQualifier_in_APDUParser_static(RSeq_for_Uint16_t *buffer, HeaderRecord *record, IAPDUHandler* pHandler)
                                                            {ParseQualifier_in_APDUParser_static1
*                                                            *QualifierCode_uint8_t tmp =23
@@@@                                                            *QualifierCode_UINT8_CNT_UINT8_INDEX*

                                                                NumParser_in_NumParser1

                                                                ParseHeader_in_CountIndexParser_static1
*                                                                **inspect_RSeq**
*                                                                @*buffer->buffer_[i]= 6402499<-1
*                                                                @*buffer->buffer_[i]= 6402500<-3
*                                                                @*buffer->buffer_[i]= 6402501<-1
*                                                                @*buffer->buffer_[i]= 6402502<-1
*                                                                @*buffer->buffer_[i]= 6402503<-1
*                                                                @*buffer->buffer_[i]= 6402504<-0
*                                                                @*buffer->buffer_[i]= 6402505<-0
*                                                                @*buffer->buffer_[i]= 6402506<-0
*                                                                @*buffer->buffer_[i]= 6402507<-1
*                                                                @*buffer->buffer_[i]= 6402508<-0
*                                                                @*buffer->buffer_[i]= 6402509<-0
*                                                                @*buffer->buffer_[i]= 6402510<-0
*                                                                @*buffer->buffer_[i]= 6402511<-0

                                                                    ParseCount_in_NumParser1
@@@@                                                                    *read_in_UInt8_static = 6402499<-1
*                                                                *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                                                *record.group= 12
*                                                                *record.variation= 1
*                                                                *record.enumeration= 3073
*                                                                *record.GetQualifierCode()= 23

                                                                ParseCountOfObjects_in_CountIndexParser_static1
*                                                                *record->gGroupVariationRecord.enumeration= c01
@@@@                                                                *GroupVariation_Group12Var1

                                                                Process_in_CountIndexParser1
                                                            }ParseQualifier_in_APDUParser_static6_
*                                                            *ParseResult_uint8_t tmp= 0
                                                        }ParseHeader_in_APDUParser_static4_
*                                                        *ParseResult_uint8_t tmp= 0
                                                    }ParseSinglePass_in_APDUParser_static2_

                                                    @@@@ParseResult_uint8_t ParseSinglePass_in_APDUParser_static(RSeq_for_Uint16_t *buffer, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                    {ParseSinglePass_in_APDUParser_static1
*                                                    *IAPDUHandler* pHandler=6400960
*                                                    *IWhiteList* pWhiteList=0
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402496<-c
*                                                    @*buffer->buffer_[i]= 6402497<-1
*                                                    @*buffer->buffer_[i]= 6402498<-17
*                                                    @*buffer->buffer_[i]= 6402499<-1
*                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                    @*buffer->buffer_[i]= 6402511<-0
*                                                    *copy
*                                                    **inspect_RSeq**
*                                                    @*buffer->buffer_[i]= 6402496<-c
*                                                    @*buffer->buffer_[i]= 6402497<-1
*                                                    @*buffer->buffer_[i]= 6402498<-17
*                                                    @*buffer->buffer_[i]= 6402499<-1
*                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                    @*buffer->buffer_[i]= 6402511<-0

                                                        @@@@ParseResult_uint8_t ParseHeader_in_APDUParser_static(RSeq_for_Uint16_t *buffer, uint32_t count, IAPDUHandler* pHandler, IWhiteList* pWhiteList)
                                                        {ParseHeader_in_APDUParser_static1
*                                                        **inspect_RSeq**
*                                                        @*buffer->buffer_[i]= 6402496<-c
*                                                        @*buffer->buffer_[i]= 6402497<-1
*                                                        @*buffer->buffer_[i]= 6402498<-17
*                                                        @*buffer->buffer_[i]= 6402499<-1
*                                                        @*buffer->buffer_[i]= 6402500<-3
*                                                        @*buffer->buffer_[i]= 6402501<-1
*                                                        @*buffer->buffer_[i]= 6402502<-1
*                                                        @*buffer->buffer_[i]= 6402503<-1
*                                                        @*buffer->buffer_[i]= 6402504<-0
*                                                        @*buffer->buffer_[i]= 6402505<-0
*                                                        @*buffer->buffer_[i]= 6402506<-0
*                                                        @*buffer->buffer_[i]= 6402507<-1
*                                                        @*buffer->buffer_[i]= 6402508<-0
*                                                        @*buffer->buffer_[i]= 6402509<-0
*                                                        @*buffer->buffer_[i]= 6402510<-0
*                                                        @*buffer->buffer_[i]= 6402511<-0

                                                            ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                            **inspect_RSeq**
*                                                            @*buffer->buffer_[i]= 6402496<-c
*                                                            @*buffer->buffer_[i]= 6402497<-1
*                                                            @*buffer->buffer_[i]= 6402498<-17
*                                                            @*buffer->buffer_[i]= 6402499<-1
*                                                            @*buffer->buffer_[i]= 6402500<-3
*                                                            @*buffer->buffer_[i]= 6402501<-1
*                                                            @*buffer->buffer_[i]= 6402502<-1
*                                                            @*buffer->buffer_[i]= 6402503<-1
*                                                            @*buffer->buffer_[i]= 6402504<-0
*                                                            @*buffer->buffer_[i]= 6402505<-0
*                                                            @*buffer->buffer_[i]= 6402506<-0
*                                                            @*buffer->buffer_[i]= 6402507<-1
*                                                            @*buffer->buffer_[i]= 6402508<-0
*                                                            @*buffer->buffer_[i]= 6402509<-0
*                                                            @*buffer->buffer_[i]= 6402510<-0
*                                                            @*buffer->buffer_[i]= 6402511<-0
@@@@                                                            *read_in_UInt8_static = 6402496<-12
@@@@                                                            *read_in_UInt8_static = 6402497<-1
@@@@                                                            *read_in_UInt8_static = 6402498<-23

                                                            GetRecord_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 12
*                                                            *uint8_t variation= 1

                                                                GetEnumAndType_in_GroupVariationRecord_static1
*                                                                *uint8_t group= 12
*                                                                *uint8_t variation= 1

                                                                    GetType_in_GroupVariationRecord_static1
*                                                                    *uint8_t group= 12
*                                                                    *uint8_t variation= 1
*                                                                    *GroupVariationType_OTHER
*                                                                *GroupVariation_uint16_t enumeration= c01

                                                            @@@@ParseResult_uint8_t ParseQualifier_in_APDUParser_static(RSeq_for_Uint16_t *buffer, HeaderRecord *record, IAPDUHandler* pHandler)
                                                            {ParseQualifier_in_APDUParser_static1
*                                                            *QualifierCode_uint8_t tmp =23
@@@@                                                            *QualifierCode_UINT8_CNT_UINT8_INDEX*

                                                                NumParser_in_NumParser1

                                                                ParseHeader_in_CountIndexParser_static1
*                                                                **inspect_RSeq**
*                                                                @*buffer->buffer_[i]= 6402499<-1
*                                                                @*buffer->buffer_[i]= 6402500<-3
*                                                                @*buffer->buffer_[i]= 6402501<-1
*                                                                @*buffer->buffer_[i]= 6402502<-1
*                                                                @*buffer->buffer_[i]= 6402503<-1
*                                                                @*buffer->buffer_[i]= 6402504<-0
*                                                                @*buffer->buffer_[i]= 6402505<-0
*                                                                @*buffer->buffer_[i]= 6402506<-0
*                                                                @*buffer->buffer_[i]= 6402507<-1
*                                                                @*buffer->buffer_[i]= 6402508<-0
*                                                                @*buffer->buffer_[i]= 6402509<-0
*                                                                @*buffer->buffer_[i]= 6402510<-0
*                                                                @*buffer->buffer_[i]= 6402511<-0

                                                                    ParseCount_in_NumParser1
@@@@                                                                    *read_in_UInt8_static = 6402499<-1
*                                                                *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u, %u]', record.group, record.variation,*
*                                                                *record.group= 12
*                                                                *record.variation= 1
*                                                                *record.enumeration= 3073
*                                                                *record.GetQualifierCode()= 23

                                                                ParseCountOfObjects_in_CountIndexParser_static1
*                                                                *record->gGroupVariationRecord.enumeration= c01
@@@@                                                                *GroupVariation_Group12Var1

                                                                Process_in_CountIndexParser1

                                                                    InvokeCountOf_for_Group12Var1_in_CountIndexParser_static1
*                                                                    **inspect_RSeq**
*                                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                                    @*buffer->buffer_[i]= 6402511<-0

                                                                        OnHeader_PrefixHeader_Indexed_for_ControlRelayOutputBlock_in_IAPDUHandler1

                                                                        ProcessHeader_PrefixHeader_Indexed_for_ControlRelayOutputBlock_in_CommandResponseHandler_override1

                                                                            ProcessAny_for_ControlRelayOutputBlock_in_CommandResponseHandler1

                                                                                RespondToHeader_for_ControlRelayOutputBlock_UInt8_in_CommandResponseHandler1

                                                                                    IterateOverCountWithPrefix_for_UInt8_ControlRelayOutputBlock_in_HeaderWriter1

                                                                                    WriteHeaderWithReserve_in_HeaderWriter1
*                                                                                    *qc= 23
*                                                                                    *reserve= 13

                                                                                    WriteHeader_in_HeaderWriter1
*                                                                                    *id.group= 12
*                                                                                    *id.variation= 1
*                                                                                    *qc= 23
@@@@                                                                                    *write_in_UInt8_static = 6418030->12
@@@@                                                                                    *write_in_UInt8_static = 6418031->1
@@@@                                                                                    *write_in_UInt8_static = 6418032->23

                                                                                    PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock_in_PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlockOver2_1

                                                                                RespondToHeaderWithIterator_for_ControlRelayOutputBlock_UInt8_in_CommandResponseHandler1

                                                                                    readInvokeCountOf_for_ControlRelayOutputBlock_in_CountIndexParser1
*                                                                                    **inspect_RSeq**
*                                                                                    @*buffer->buffer_[i]= 6402500<-3
*                                                                                    @*buffer->buffer_[i]= 6402501<-1
*                                                                                    @*buffer->buffer_[i]= 6402502<-1
*                                                                                    @*buffer->buffer_[i]= 6402503<-1
*                                                                                    @*buffer->buffer_[i]= 6402504<-0
*                                                                                    @*buffer->buffer_[i]= 6402505<-0
*                                                                                    @*buffer->buffer_[i]= 6402506<-0
*                                                                                    @*buffer->buffer_[i]= 6402507<-1
*                                                                                    @*buffer->buffer_[i]= 6402508<-0
*                                                                                    @*buffer->buffer_[i]= 6402509<-0
*                                                                                    @*buffer->buffer_[i]= 6402510<-0
*                                                                                    @*buffer->buffer_[i]= 6402511<-0

                                                                                    Indexed_for_ControlRelayOutputBlock_in_Indexed_for_ControlRelayOutputBlockOver1_1

                                                                                    ControlRelayOutputBlock_in_ControlRelayOutputBlockOver1_1
*                                                                                *pControlRelayOutputBlock->rawCode =3
@@@@                                                                                *read_in_UInt8_static = 6402500<-3

                                                                                    Read_in_Group12Var1_static1
*                                                                                    *crob->rawCode= 0
*                                                                                    *crob->count= 0
*                                                                                    *crob->onTimeMS= 0
*                                                                                    *crob->offTimeMS= 0
*                                                                                    *crob->status= 0
@@@@                                                                                *read_in_UInt8_static = 6402501<-1
@@@@                                                                                *read_in_UInt8_static = 6402502<-1
@@@@                                                                                *read_from_in_UInt32_static = 6402503<-1
@@@@                                                                                *read_from_in_UInt32_static = 6402507<-1
@@@@                                                                                *read_in_UInt8_static = 6402511<-0

                                                                                    From_in_ControlRelayOutputBlock_static1

                                                                                    ControlRelayOutputBlock_in_ControlRelayOutputBlockOver2_1
*                                                                                    *pControlRelayOutputBlock->rawCode =1

                                                                                    process_for_UInt8_ControlRelayOutputBlock_in_CommandResponseHandler1

                                                                                        ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler1
                                                                                        ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler2
                                                                                        ProcessCommand_for_ControlRelayOutputBlock_in_CommandResponseHandler3
*                                                                                        *CommandStatus_uint8_t tmp = 1
*                                                                                    *response.status =1
@@@@                                                                                    *write_in_UInt8_static = 6418034->3

                                                                                        Apply_in_ConvertGroup12Var1_static1
*                                                                                        *crob->rawCode= 1
*                                                                                        *crob->count= 1
*                                                                                        *crob->onTimeMS= 1
*                                                                                        *crob->offTimeMS= 1
*                                                                                        *crob->status= 1

                                                                                        Write_in_Group12Var1_static1
*                                                                                        *crob->rawCode= 1
*                                                                                        *crob->count= 1
*                                                                                        *crob->onTimeMS= 1
*                                                                                        *crob->offTimeMS= 1
*                                                                                        *crob->status= 1
@@@@                                                                                    *write_in_UInt8_static = 6418035->1
@@@@                                                                                    *write_in_UInt8_static = 6418036->1
@@@@                                                                                    *write_in_UInt32_static = 6418037->1
@@@@                                                                                    *write_in_UInt32_static = 6418041->1
@@@@                                                                                    *write_in_UInt8_static = 6418045->1

                                                                                PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock_destr_PrefixedWriteIterator_for_UInt8_ControlRelayOutputBlock1
@@@@                                                                            *write_in_UInt8_static = 6418033->1

                                                                    {Record_in_IAPDUHandler1
                                                                    *Record_in_IAPDUHandler2
*                                                                    **inspect_IINField**
*                                                                    @*uint8_t LSB= 0
*                                                                    @*uint8_t MSB= 0
                                                                    *Record_in_IAPDUHandler3

                                                                        {OnHeaderResult_in_IAPDUHandler1
                                                                        }OnHeaderResult_in_IAPDUHandler_
                                                                    }Record_in_IAPDUHandler_
*                                                                    **inspect_IINField**
*                                                                    @*uint8_t LSB= 0
*                                                                    @*uint8_t MSB= 0
                                                        }ParseQualifier_in_APDUParser_static6_
*                                                        *ParseResult_uint8_t tmp= 0
                                                    }ParseHeader_in_APDUParser_static4_
*                                                    *ParseResult_uint8_t tmp= 0
                                                }ParseSinglePass_in_APDUParser_static2_
                                            }Parse_in_APDUParser_static_
                                        }HandleCommandWithConstant_in_OContext_
                                    }HandleOperate_in_OContext_
                                }HandleNonReadResponse_in_OContext3_

                                {GetResponseIIN_in_OContext1
*                                *LSBMask_BROADCAST = 0x01
*                                *LSBMask_CLASS1_EVENTS = 0x02
*                                *LSBMask_CLASS2_EVENTS = 0x04
*                                *LSBMask_CLASS3_EVENTS = 0x08
*                                *LSBMask_NEED_TIME = 0x10
*                                *LSBMask_LOCAL_CONTROL = 0x20
*                                *LSBMask_DEVICE_TROUBLE = 0x40
*                                *LSBMask_DEVICE_RESTART = 0x80
*
*                                *MSBMask_FUNC_NOT_SUPPORTED = 0x01
*                                *MSBMask_OBJECT_UNKNOWN = 0x02
*                                *MSBMask_PARAM_ERROR = 0x04
*                                *MSBMask_EVENT_BUFFER_OVERFLOW = 0x08
*                                *MSBMask_ALREADY_EXECUTING = 0x10
*                                *MSBMask_CONFIG_CORRUPT = 0x20
*                                *MSBMask_RESERVED1 = 0x40
*                                *MSBMask_RESERVED2 = 0x80
*

                                    IsOverflown_in_EventBuffer1
*                                    *pEventBuffer->overflow= 0
*                                IINField temp1 = GetDynamicIIN_in_OContext(pOContext)
*                                *uint8_t LSB=0
*                                *uint8_t MSB=0
*                                IINField temp3 = ToIIN_in_ApplicationIIN(&temp)
*                                *uint8_t LSB=0
*                                *uint8_t MSB=0
*                                IINField temp4 = operatorOR_in_IINField(&temp2, &temp3)
*                                *uint8_t LSB=80
*                                *uint8_t MSB=0
                                }GetResponseIIN_in_OContext_
*                            *RespondToNonReadRequest_in_OContext2
*                            *temp.LSB= 128
*                            *temp.MSB= 0
*                            *iin.LSB= 0
*                            *iin.MSB= 0

                                {SetIIN_in_APDUResponse1
@@@@                                *write_uint8=6418028->128
@@@@                                *write_uint8=6418029->0
                                }SetIIN_in_APDUResponse_

                                {BeginResponseTx_in_OContext1

                                    {CheckForBroadcastConfirmation_in_OContext1
                                    }CheckForBroadcastConfirmation_in_OContext_
*                                *BeginResponseTx_in_OContext2
*                                **inspect_RSeq**
*                                @*buffer->buffer_[i]= 6418026<-c1
*                                @*buffer->buffer_[i]= 6418027<-81
*                                @*buffer->buffer_[i]= 6418028<-80
*                                @*buffer->buffer_[i]= 6418029<-0
*                                @*buffer->buffer_[i]= 6418030<-c
*                                @*buffer->buffer_[i]= 6418031<-1
*                                @*buffer->buffer_[i]= 6418032<-17
*                                @*buffer->buffer_[i]= 6418033<-1
*                                @*buffer->buffer_[i]= 6418034<-3
*                                @*buffer->buffer_[i]= 6418035<-1
*                                @*buffer->buffer_[i]= 6418036<-1
*                                @*buffer->buffer_[i]= 6418037<-1
*                                @*buffer->buffer_[i]= 6418038<-0
*                                @*buffer->buffer_[i]= 6418039<-0
*                                @*buffer->buffer_[i]= 6418040<-0
*                                @*buffer->buffer_[i]= 6418041<-1
*                                @*buffer->buffer_[i]= 6418042<-0
*                                @*buffer->buffer_[i]= 6418043<-0
*                                @*buffer->buffer_[i]= 6418044<-0
*                                @*buffer->buffer_[i]= 6418045<-1
*                                *BeginResponseTx_in_OContext3
*                                **inspect_RSeq**
*                                @*buffer->buffer_[i]= 6418026<-c1
*                                @*buffer->buffer_[i]= 6418027<-81
*                                @*buffer->buffer_[i]= 6418028<-80
*                                @*buffer->buffer_[i]= 6418029<-0
*                                @*buffer->buffer_[i]= 6418030<-c
*                                @*buffer->buffer_[i]= 6418031<-1
*                                @*buffer->buffer_[i]= 6418032<-17
*                                @*buffer->buffer_[i]= 6418033<-1
*                                @*buffer->buffer_[i]= 6418034<-3
*                                @*buffer->buffer_[i]= 6418035<-1
*                                @*buffer->buffer_[i]= 6418036<-1
*                                @*buffer->buffer_[i]= 6418037<-1
*                                @*buffer->buffer_[i]= 6418038<-0
*                                @*buffer->buffer_[i]= 6418039<-0
*                                @*buffer->buffer_[i]= 6418040<-0
*                                @*buffer->buffer_[i]= 6418041<-1
*                                @*buffer->buffer_[i]= 6418042<-0
*                                @*buffer->buffer_[i]= 6418043<-0
*                                @*buffer->buffer_[i]= 6418044<-0
*                                @*buffer->buffer_[i]= 6418045<-1
*                                *BeginResponseTx_in_OContext4
*                                **inspect_RSeq**
*                                @*buffer->buffer_[i]= 6418026<-c1
*                                @*buffer->buffer_[i]= 6418027<-81
*                                @*buffer->buffer_[i]= 6418028<-80
*                                @*buffer->buffer_[i]= 6418029<-0
*                                @*buffer->buffer_[i]= 6418030<-c
*                                @*buffer->buffer_[i]= 6418031<-1
*                                @*buffer->buffer_[i]= 6418032<-17
*                                @*buffer->buffer_[i]= 6418033<-1
*                                @*buffer->buffer_[i]= 6418034<-3
*                                @*buffer->buffer_[i]= 6418035<-1
*                                @*buffer->buffer_[i]= 6418036<-1
*                                @*buffer->buffer_[i]= 6418037<-1
*                                @*buffer->buffer_[i]= 6418038<-0
*                                @*buffer->buffer_[i]= 6418039<-0
*                                @*buffer->buffer_[i]= 6418040<-0
*                                @*buffer->buffer_[i]= 6418041<-1
*                                @*buffer->buffer_[i]= 6418042<-0
*                                @*buffer->buffer_[i]= 6418043<-0
*                                @*buffer->buffer_[i]= 6418044<-0
*                                @*buffer->buffer_[i]= 6418045<-1

                                    {BeginTx_in_OContext1
*                                    **inspect_RSeq**
*                                    @*buffer->buffer_[i]= 6418026<-c1
*                                    @*buffer->buffer_[i]= 6418027<-81
*                                    @*buffer->buffer_[i]= 6418028<-80
*                                    @*buffer->buffer_[i]= 6418029<-0
*                                    @*buffer->buffer_[i]= 6418030<-c
*                                    @*buffer->buffer_[i]= 6418031<-1
*                                    @*buffer->buffer_[i]= 6418032<-17
*                                    @*buffer->buffer_[i]= 6418033<-1
*                                    @*buffer->buffer_[i]= 6418034<-3
*                                    @*buffer->buffer_[i]= 6418035<-1
*                                    @*buffer->buffer_[i]= 6418036<-1
*                                    @*buffer->buffer_[i]= 6418037<-1
*                                    @*buffer->buffer_[i]= 6418038<-0
*                                    @*buffer->buffer_[i]= 6418039<-0
*                                    @*buffer->buffer_[i]= 6418040<-0
*                                    @*buffer->buffer_[i]= 6418041<-1
*                                    @*buffer->buffer_[i]= 6418042<-0
*                                    @*buffer->buffer_[i]= 6418043<-0
*                                    @*buffer->buffer_[i]= 6418044<-0
*                                    @*buffer->buffer_[i]= 6418045<-1

{BeginTransmit_in_MockLowerLayer1
*                                    **inspect_RSeq**
*                                    @*buffer->buffer_[i]= 6418026<-c1
*                                    @*buffer->buffer_[i]= 6418027<-81
*                                    @*buffer->buffer_[i]= 6418028<-80
*                                    @*buffer->buffer_[i]= 6418029<-0
*                                    @*buffer->buffer_[i]= 6418030<-c
*                                    @*buffer->buffer_[i]= 6418031<-1
*                                    @*buffer->buffer_[i]= 6418032<-17
*                                    @*buffer->buffer_[i]= 6418033<-1
*                                    @*buffer->buffer_[i]= 6418034<-3
*                                    @*buffer->buffer_[i]= 6418035<-1
*                                    @*buffer->buffer_[i]= 6418036<-1
*                                    @*buffer->buffer_[i]= 6418037<-1
*                                    @*buffer->buffer_[i]= 6418038<-0
*                                    @*buffer->buffer_[i]= 6418039<-0
*                                    @*buffer->buffer_[i]= 6418040<-0
*                                    @*buffer->buffer_[i]= 6418041<-1
*                                    @*buffer->buffer_[i]= 6418042<-0
*                                    @*buffer->buffer_[i]= 6418043<-0
*                                    @*buffer->buffer_[i]= 6418044<-0
*                                    @*buffer->buffer_[i]= 6418045<-1
}BeginTransmit_in_MockLowerLayer_
                                    }BeginTx_in_OContext_

                                    {Inst_in_StateIdle_static1

                                        StateIdle_in_StateIdle1

                                            OutstationState_in_OutstationState1
                                    }Inst_in_StateIdle_static_
                                }BeginResponseTx_in_OContext_
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
*            *pOContext->isOnline= 1
*            *pOContext->isTransmitting= 1
*            *boolean ret= 0
            }CanTransmit_in_OContext_
        }CheckForDeferredRequest_in_OContext_
*    CheckForTaskStart_in_OContext2

        {CheckForUnsolicitedNull_in_OContext1

            {CanTransmit_in_OContext1
*            *pOContext->isOnline= 1
*            *pOContext->isTransmitting= 1
*            *boolean ret= 0
            }CanTransmit_in_OContext_
        }CheckForUnsolicitedNull_in_OContext_
*    CheckForTaskStart_in_OContext3

        {CheckForUnsolicited_in_OContext1

            {CanTransmit_in_OContext1
*            *pOContext->isOnline= 1
*            *pOContext->isTransmitting= 1
*            *boolean ret= 0
            }CanTransmit_in_OContext_
        }CheckForUnsolicited_in_OContext_
    }CheckForTaskStart_in_OContext_
}OnReceive_in_OContext_
}SendToOutstation_in_OutstationTestObject_

{PopWriteAsHex_in_MockLowerLayer1
}PopWriteAsHex_in_MockLowerLayer2_
REQUIRE(t.lower->PopWriteAsHex() == 'C1 81 80 00 0C 01 17 01 03 01 01 01 00 00 00 01 00 00 00 01')
temp= C1 81 80 00 0C 01 17 01 03 01 01 01 00 00 00 01 00 00 00 01

t.cmdHandler->numStart= 1

t.cmdHandler->numEnd= 1
t.cmdHandler->NumInvocations()= 1

{OnTxReady_in_OutstationTestObject1

    {OnTxReady_in_OContext1

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
