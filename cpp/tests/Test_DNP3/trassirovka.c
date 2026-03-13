********SUITE('Test_DNP3')********
+***LinkLayerParser parser= 340
+***TransportLayerMrzs transport= 644
+***OutstationConfig config= 64
+***OutstationMrzsObject t= 17448
+***MrzsFrameSink  mMrzsFrameSink= 56
+***DatabaseConfig dDatabaseConfig= 768
{***START

{LinkLayerParser_in_LinkLayerParser1
**rxBuffer_in_LinkLayerParser[LPDU_MAX_FRAME_SIZE]=4299524
**sizeof(rxBuffer_in_LinkLayerParser)=292
}LinkLayerParser_in_LinkLayerParser_

    {TransportLayer_in_TransportLayer1

        {TransportTx_in_TransportTx1
*        *StaticBuffer_for_MAX_TPDU_LENGTH  *tpduBuffer=4299200
*        *sizeof(tpduBuffer)=250
        }TransportTx_in_TransportTx_

        {TransportRx_in_TransportRx1

            BufferSer4_292_in_BufferSer4_292Over2_1
*            *uint16_t length=292
*            *sizeof(BufferSer4_292)=292
*            *uint8_t bytes[SIZE_BufferSer4_292]=4298848

            BufferSer4_Core_in_BufferSer4_CoreOver2_1
        }TransportRx_in_TransportRx_
    }TransportLayer_in_TransportLayer_

    {OutstationMrzsObject_in_OutstationMrzsObject1

{MrzsExecutor_in_MrzsExecutor1
*MrzsExecutor *pMrzsExecutor= 4281280
}MrzsExecutor_in_MrzsExecutor_

        {MrzsOutstationApplication_in_MrzsOutstationApplication1

        }MrzsOutstationApplication_in_MrzsOutstationApplication_

        {OContext_in_OContext1

            EventLists_in_EventLists1

            List_for_EventRecord_in_List_for_EventRecordOver2_1
*            *uint32_t maxSize= 0

            List_for_EventRecord_in_List_for_EventRecordOver1_1

            {Database_in_Database1

                {StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1

                    {Range_in_RangeOver1_1*
                    }Range_in_RangeOver1__*

*                *StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_3
*                *pStaticDataMap->selected.start= 1
*                *pStaticDataMap->selected.stop= 0

*                *StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_2
*                **config->binary_input_count= 10

                }StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2__

                StaticDataMap_for_DoubleBitBinarySpec_in_StaticDataMap_for_DoubleBitBinarySpecOver2_1

                    {Range_in_RangeOver1_1*
                    }Range_in_RangeOver1__*

                {StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

                    {Range_in_RangeOver1_1*
                    }Range_in_RangeOver1__*

*                *StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_3
*                *pStaticDataMap->selected.start= 1
*                *pStaticDataMap->selected.stop= 0

*                *StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_2
*                **config->analog_input_count= 10
*                *pStaticDataMap->map[0].selection_in_StaticDataCell.variation= 0
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
*            *(pDatabase->analog_input).map[0].selection_in_StaticDataCell.variation= 0
            }Database_in_Database_

            DeferredRequest_in_DeferredRequest1
*            *uint32_t maxAPDUSize =292

            BufferSer4_in_BufferSer4Over2_1
*            *uint16_t length=292
*            *sizeof(BufferSer4)=300
*            *uint8_t bytes[SIZE_BufferSer4]=4297674

            {OutstationSolState_in_OutstationSolState1

                TxBuffer_in_TxBuffer1
*                *uint32_t maxTxSize =292

                BufferSer4_in_BufferSer4Over2_1
*                *uint16_t length=292
*                *sizeof(BufferSer4)=300
*                *uint8_t bytes[SIZE_BufferSer4]=4298058
            }OutstationSolState_in_OutstationSolState_

            {Inst_in_StateIdle_static1

                {StateIdle_in_StateIdle1

                    {OutstationState_in_OutstationState1

                    }OutstationState_in_OutstationState_
                }StateIdle_in_StateIdle_
            }Inst_in_StateIdle_static_
*        *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0
        }OContext_in_OContext_
}OutstationMrzsObject_in_OutstationMrzsObject_

{MrzsFrameSink_in_MrzsFrameSink1

}MrzsFrameSink_in_MrzsFrameSink_

    EventLists_in_EventLists1

    List_for_EventRecord_in_List_for_EventRecordOver2_1
*    *uint32_t maxSize= 6

    List_for_EventRecord_in_List_for_EventRecordOver1_1

{LowerLayerUp_in_OutstationMrzsObject1

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
}LowerLayerUp_in_OutstationMrzsObject_
}***START

BIT_KEY_DOWN
cleaned=  "*********************"
cleaned=  "*ResetBit"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c2_c2_02_50_01_00_07_07_00_f3_95"
cleaned=  "*LinkRESET"
cleaned=  "05_64_05_c0_01_00_02_00_74_e3"
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47532232<- 5 64 5 c0 1 0 2 0 74 e3

    {AddCrc_in_CRC_static1
*    *uint16_t length =8
@@@@    *write_in_UInt16_static = 47532240->58228
    }AddCrc_in_CRC_static_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47532232<- 5 64 5 c0 1 0 2 0 74 e3

{***Send_To_Outstation***
+***Send_To_Outstation***

{WriteData_in_LinkParserMrzsOver2_1

    {OnRead_in_LinkLayerParser1
*    *uint16_t numBytes= 10
*    *Complete_State_LinkLayerParser= 3

        {AdvanceWrite_in_ShiftableBuffer1
*        *uint16_t aNumBytes= 10
        }AdvanceWrite_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_

        {Sync_in_ShiftableBuffer1

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 10
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
            }NumBytesRead_in_ShiftableBuffer_

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 10
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
            }NumBytesRead_in_ShiftableBuffer_
        }Sync_in_ShiftableBuffer1_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299528<-1
@@@@    *read_from_in_UInt16_static = 4299530<-2

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299532<-58228

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_
*    ***FORMAT_HEX_BLOCK(logger, flags::LINK_RX_HEX, buffer.ReadBuffer().take(frameSize), 10, 18)***

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 10
        }NumBytesRead_in_ShiftableBuffer_

        {PushFrame_in_LinkLayerParser1

{OnFrame_in_MrzsFrameSink1
FinalDestination_in_MrzsFrameSink:
*        **inspect_LinkHeaderFields**
*        @*LinkFunction_uint8_t func= 64
*        @*boolean isFromMaster= 1
*        @*boolean fcb= 0
*        @*boolean fcvdfc= 0
*        @*Addresses addresses.source= 2
*        @*Addresses addresses.destination= 1

}OnFrame_in_MrzsFrameSink2_
        }PushFrame_in_LinkLayerParser_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 10
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 10
*        *pShiftableBuffer->readPos= 10
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_
    }OnRead_in_LinkLayerParser_
}WriteData_in_LinkParserMrzsOver2__

+***LinkFunction_PRI_RESET_LINK_STATES***

    {FormatHeader_in_LinkFrame_static1

        {ControlByte_in_LinkHeader_static1
*        *boolean aIsMaster= 0
*        *boolean aFcb= 0
*        *boolean aFcvDfc= 0
*        *LinkFunction_uint8_t aFunc= 0
        }ControlByte_in_LinkHeader_static_
*        *uint8_t ret= 0
    *FormatHeader_in_LinkFrame_static2
*    *LinkHeader header.ctrl= 0
*    ***FORMAT_LOGGER_BLOCK(pLogger, flags::LINK_TX, 'Function: %s Dest: %u Source: %u Length: %u')***

        {Write_in_LinkHeader1
@@@@        *write_to 6477652->5
@@@@        *write_to 6477653->100
@@@@        *write_to 6477654->5
@@@@        *write_in_UInt16_static = 6477656->2
@@@@        *write_in_UInt16_static = 6477658->1
@@@@        *write_to 6477655->0

            {AddCrc_in_CRC_static1
*            *uint16_t length =8
@@@@            *write_in_UInt16_static = 6477660->2128
            }AddCrc_in_CRC_static_
        }Write_in_LinkHeader_
    }FormatHeader_in_LinkFrame_static2_

}***Send_To_Outstation***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 5 0 2 0 1 0 50 8
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 5 0 2 0 1 0 50 8

{OnTxReady_in_OutstationMrzsObject1

    {OnTxReady_in_OContext1
*    *isOnline_in_OContext= 1
*    *isTransmitting_in_OContext= 0
    }OnTxReady_in_OContext1_
}OnTxReady_in_OutstationMrzsObject_
parser.Statistics().numBodyCrcError=  0
parser.Statistics().numHeaderCrcError=  0
BIT_KEY_DOWN
cleaned=  "*ResetBit"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c2_c2_02_50_01_00_07_07_00_f3_95"
cleaned=  "*ReadAnalogGrp30Var1[354,357]"
cleaned=  "*05_64_0f_c4_03_00_01_00_05_ab_c2_c0_01_1e_01_01_62_01_65_01_31_bb"
cleaned=  "*ReadEventClass1"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c2_c2_01_3C_02_06_f3_95"
cleaned=  "*ConfirmEventClass1"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c2_c2_00_f3_95"
cleaned=  "*ReadEventClass1"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c3_c3_01_3C_02_06_f3_95"
cleaned=  "*Read"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c2_c2_01_f3_95"
cleaned=  "*ConfirmEventClass1"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c3_c3_00_f3_95"
cleaned=  "*Read"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c4_c4_01_f3_95"
cleaned=  "*Read"
cleaned=  "05_64_0e_c4_01_00_02_00_e0_66_c4_c4_01_f3_95"
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47532992<- 5 64 e c4 1 0 2 0 e0 66 c4 c4 1 f3 95

partial_size= 5

    {AddCrc_in_CRC_static1
*    *uint16_t length =8
@@@@    *write_in_UInt16_static = 47533000->3385
    }AddCrc_in_CRC_static_

    {AddCrc_in_CRC_static1
*    *uint16_t length =3
@@@@    *write_in_UInt16_static = 47533005->61767
    }AddCrc_in_CRC_static_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47532992<- 5 64 8 c4 1 0 2 0 39 d c4 c4 1 47 f1

{***Send_To_Outstation***
+***Send_To_Outstation***

{WriteData_in_LinkParserMrzsOver2_1

    {OnRead_in_LinkLayerParser1
*    *uint16_t numBytes= 15
*    *Complete_State_LinkLayerParser= 3

        {AdvanceWrite_in_ShiftableBuffer1
*        *uint16_t aNumBytes= 15
        }AdvanceWrite_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {Sync_in_ShiftableBuffer1

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 15
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
            }NumBytesRead_in_ShiftableBuffer_

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 15
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
            }NumBytesRead_in_ShiftableBuffer_
        }Sync_in_ShiftableBuffer1_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299528<-1
@@@@    *read_from_in_UInt16_static = 4299530<-2

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299532<-3385

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299537<-61767
*    ***FORMAT_HEX_BLOCK(logger, flags::LINK_RX_HEX, buffer.ReadBuffer().take(frameSize), 10, 18)***

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {PushFrame_in_LinkLayerParser1

{OnFrame_in_MrzsFrameSink1
FinalDestination_in_MrzsFrameSink:
*        **inspect_LinkHeaderFields**
*        @*LinkFunction_uint8_t func= 68
*        @*boolean isFromMaster= 1
*        @*boolean fcb= 0
*        @*boolean fcvdfc= 0
*        @*Addresses addresses.source= 2
*        @*Addresses addresses.destination= 1
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299524<- c4 c4 1

}OnFrame_in_MrzsFrameSink1_
        }PushFrame_in_LinkLayerParser_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 15
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 15
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_
    }OnRead_in_LinkLayerParser_
}WriteData_in_LinkParserMrzsOver2__

+***LinkFunction_PRI_UNCONFIRMED_USER_DATA***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299524<- c4 c4 1

    {OnReceive_in_TransportLayerMrzs1

        {ProcessReceive_in_TransportRx1
*        *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_RX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', header.fir, header.fin
*        *FIR: 1
*        *FIN: 1
*        *SEQ: 4
*        *LEN: 2
*        *pTransportRx->numBytesRead= 0

            {GetAvailable_in_TransportRx1
            }GetAvailable_in_TransportRx_
        }ProcessReceive_in_TransportRx6_
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c4 1
    }OnReceive_in_TransportLayerMrzs1_

    {OnReceive_in_OContext1
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c4 1

        {ProcessMessage_in_OContext1

            {ParseRequest_in_APDUHeaderParser_static1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298848<- c4 1
            }ParseRequest_in_APDUHeaderParser_static2_

            {ProcessObjects_in_OContext1
*            **inspect_ParsedRequest**
*            **inspect_Addresses**
*            @*uint16_t source= 0
*            @*uint16_t destination= 0
*            **inspect_APDUHeader**
*            **inspect_AppControlField**
*            @*boolean FIR= 1
*            @*boolean FIN= 1
*            @*boolean CON= 0
*            @*boolean UNS= 0
*            @*uint8_t SEQ= 4
*            @*FunctionCode_uint8_t function= 1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298850<-

                {ProcessRequest_in_OContext1

                    {OnReceiveSolRequest_in_OContext1

                        {ProcessNewRequest_in_OContext1
@@@@                        *FunctionCode_READ

                            {OnNewReadRequest_in_StateIdle_override1

                                {RespondToReadRequest_in_OContext1

                                    {RecordLastProcessedRequest_in_RequestHistory1

                                    }RecordLastProcessedRequest_in_RequestHistory_

                                    {Start_in_TxBuffer1

                                    }Start_in_TxBuffer_
@@@@                                    *length_in_HasLength_for_Uint16_t(&(temp.hHasLength))= 292

                                    {HeaderWriter_in_HeaderWriter1
*                                    *length_in_HasLength_for_Uint16_t(&(position_->hHasLength))= 288

                                    }HeaderWriter_in_HeaderWriter_

                                    {SetFunction_in_APDUWrapper1
@@@@                                    *write_uint8=4298059->129
                                    }SetFunction_in_APDUWrapper_

                                    {HandleRead_in_OContext1
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298850<-
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0
*                                    *HandleRead_in_OContext2

                                        {Unselect_in_EventStorage1

                                            Foreach_in_List_for_EventRecord1

                                                Iterate_in_List_for_EventRecord1
*                                                *pList_for_EventRecord->head= 0

                                                    From__in__Iterator_in_List_for_EventRecord_static1
*                                                    *Node_for_EventRecord* start= 0

                                                    Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                    *Node_for_EventRecord* start= 0
                                        }Unselect_in_EventStorage_

                                        {Unselect_in_Database1

                                            {clear_selection_in_StaticDataMap_for_BinarySpec1

                                                {Range_in_RangeOver1_1*
                                                }Range_in_RangeOver1__*
                                            }clear_selection_in_StaticDataMap_for_BinarySpec_

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {clear_selection_in_StaticDataMap_for_AnalogSpec1

                                                {Range_in_RangeOver1_1*
                                                }Range_in_RangeOver1__*
                                            }clear_selection_in_StaticDataMap_for_AnalogSpec_

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*
                                        }Unselect_in_Database_
*                                    *HandleRead_in_OContext3
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0

                                        {Parse_in_APDUParser_static1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298850<-

                                            {ParseSinglePass_in_APDUParser_static1
*                                            *IWhiteList* pWhiteList=6476572
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<-
                                            }ParseSinglePass_in_APDUParser_static2_

*                                        *Parse_in_APDUParser_static2
*                                        *ParseResult_uint8_t result= 0

                                            {ParseSinglePass_in_APDUParser_static1
*                                            *IWhiteList* pWhiteList=0
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<-
                                            }ParseSinglePass_in_APDUParser_static2_
*                                        *ParseResult_uint8_t tmp= 0
                                        }Parse_in_APDUParser_static_
                                    *HandleRead_in_OContext5
*                                    *ParseResult_uint8_t result =0
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0

                                        {LoadResponse_in_ResponseContext1
                                        *LoadResponse_in_ResponseContext2
*                                        *uint16_t startingSize= 288

                                            {Load_in_EventBuffer1

                                                {Write_in_EventWriting_static1

                                                    Iterate_in_List_for_EventRecord1
*                                                    *pList_for_EventRecord->head= 0

                                                        From__in__Iterator_in_List_for_EventRecord_static1
*                                                        *Node_for_EventRecord* start= 0

                                                        Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                        *Node_for_EventRecord* start= 0

                                                    WriteSome_in_EventWriting_static1
*                                                    *lists->counters.selected_in_EventClassCounters= 0
*                                                *uint16_t num_written =0
                                                }Write_in_EventWriting_static1_

                                                NumSelected_in_EventStorage1
*                                                *(pEventStorage->state).counters.selected_in_EventClassCounters= 0
                                            }Load_in_EventBuffer_
                                        *LoadResponse_in_ResponseContext3
*                                        *boolean someEventsWritten= 0

                                            {Load_in_Database_override1

                                                Load_in_Database1

                                                {load_type_for_Analog_in_Database_static1
*                                                *map->db_config->analog_input_count= 10
*                                                *map->map[0].selection_in_StaticDataCell.variation= 0
*                                                *uint16_t start= 1
*                                                *uint16_t stop= 0
                                                *load_type_for_Analog_in_Database_static2
*                                                *load_type_for_Analog_in_Database_static2a
                                                }load_type_for_Analog_in_Database_static1_

                                                {load_type_for_Binary_in_Database_static1
*                                                *map->db_config->binary_input_count= 10
*                                                *uint16_t start= 1
*                                                *uint16_t stop= 0
                                                *load_type_for_Binary_in_Database_static2
*                                                *load_type_for_Binary_in_Database_static2a
                                                }load_type_for_Binary_in_Database_static1_
*                                                *if (iter == map.end())

                                                load_type_for_BinaryOutputStatus_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_AnalogOutputStatus_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_DoubleBitBinary_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_Counter_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_FrozenCounter_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_TimeAndInterval_in_Database_static1
                                                load_type_for_TimeAndInterval_in_Database_static2
*                                                *if (iter == map.end())
                                            }Load_in_Database_override_
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0

                                        }LoadResponse_in_ResponseContext1_
                                    *HandleRead_in_OContext6
*                                    *ParseResult_uint8_t result =0
*                                    **inspect_AppControlField**
*                                    @*boolean FIR= 1
*                                    @*boolean FIN= 1
*                                    @*boolean CON= 0
*                                    @*boolean UNS= 0
*                                    @*uint8_t SEQ= 0
                                    }HandleRead_in_OContext1_
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0

                                    {ToByte_in_AppControlField1
*                                    *ret |= AppControlField_FIR_MASK
*                                    *ret |= AppControlField_FIN_MASK
                                    *uint8_t ret =192
                                    *uint8_t seq =4
                                    }ToByte_in_AppControlField_

                                    {SetControl_in_APDUWrapper1
@@@@                                    *write_uint8=4298058->196
                                    }SetControl_in_APDUWrapper_

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
*                                *RespondToReadRequest_in_OContext2
*                                **inspect_IINField**
*                                @*uint8_t LSB= 128
*                                @*uint8_t MSB= 0
*                                *RespondToReadRequest_in_OContext3
*                                **inspect_IINField**
*                                @*uint8_t LSB= 128
*                                @*uint8_t MSB= 0

                                    {SetIIN_in_APDUResponse1
@@@@                                    *write_uint8=4298060->128
@@@@                                    *write_uint8=4298061->0
                                    }SetIIN_in_APDUResponse_

                                    {BeginResponseTx_in_OContext1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 4
                                        }GetControl_in_APDUWrapper_

                                        {CheckForBroadcastConfirmation_in_OContext1
                                        }CheckForBroadcastConfirmation_in_OContext_
*                                    *BeginResponseTx_in_OContext2
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- c4 81 80 0

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 4
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext3
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- c4 81 80 0

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 4
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext4
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- c4 81 80 0

                                        {BeginTx_in_OContext1

{BeginTransmit_in_MrzsLowerLayer1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298058<- c4 81 80 0
}BeginTransmit_in_MrzsLowerLayer_
*                                        **inspect_Message**
*                                        **inspect_Addresses**
*                                        @*uint16_t source= 0
*                                        @*uint16_t destination= 0
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298058<- c4 81 80 0
                                        }BeginTx_in_OContext_

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 4
                                        }GetControl_in_APDUWrapper_

                                        {Inst_in_StateIdle_static1

                                            {StateIdle_in_StateIdle1

                                                {OutstationState_in_OutstationState1

                                                }OutstationState_in_OutstationState_
                                            }StateIdle_in_StateIdle_
                                        }Inst_in_StateIdle_static_
                                    }BeginResponseTx_in_OContext2_
                                }RespondToReadRequest_in_OContext_
                            }OnNewReadRequest_in_StateIdle_override_
                        }ProcessNewRequest_in_OContext1_
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
***inspect_Message**
***inspect_Addresses**
*@*uint16_t source= 0
*@*uint16_t destination= 0
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4298058<- c4 81 80 0
+transport.receiver.expectedSeq.seq= 5

    {BeginTransmit_in_TransportLayer1

        {Configure_in_TransportTx1
        }Configure_in_TransportTx_

{Send_in_MockLinkLayer1

        {GetSegment_in_TransportTx1
*        *GetSegment_in_TransportTx2
*        *uint16_t numToSend= 4
*        *GetSegment_in_TransportTx3
*        +        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4298058<- c4 81 80 0
@@@@        *write_in_UInt8_static = 4299200->197

*            *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_TX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', fir, fin, sequence.Get()
*            *FIR: 1
*            *FIN: 1
*            *SEQ: 5
*            *LEN: 4
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299200<- c5 c4 81 80 0
        *GetSegment_in_TransportTx2
        }GetSegment_in_TransportTx2_
}Send_in_MockLinkLayer_
    }BeginTransmit_in_TransportLayer5_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299200<- c5 c4 81 80 0

    {FormatHeader_in_LinkFrame_static1

        {ControlByte_in_LinkHeader_static1
*        *boolean aIsMaster= 0
*        *boolean aFcb= 0
*        *boolean aFcvDfc= 0
*        *LinkFunction_uint8_t aFunc= 68
        }ControlByte_in_LinkHeader_static_
*        *uint8_t ret= 68
    *FormatHeader_in_LinkFrame_static2
*    *LinkHeader header.ctrl= 68
*    ***FORMAT_LOGGER_BLOCK(pLogger, flags::LINK_TX, 'Function: %s Dest: %u Source: %u Length: %u')***

        {Write_in_LinkHeader1
@@@@        *write_to 6477652->5
@@@@        *write_to 6477653->100
@@@@        *write_to 6477654->10
@@@@        *write_in_UInt16_static = 6477656->2
@@@@        *write_in_UInt16_static = 6477658->1
@@@@        *write_to 6477655->68

            {AddCrc_in_CRC_static1
*            *uint16_t length =8
@@@@            *write_in_UInt16_static = 6477660->61456
            }AddCrc_in_CRC_static_
        }Write_in_LinkHeader_
    }FormatHeader_in_LinkFrame_static2_

    {WriteUserData_in_LinkFrame_static1
*    *uint16_t length= 5

        {AddCrc_in_CRC_static1
*        *uint16_t length =5
@@@@        *write_in_UInt16_static = 6477667->32902
        }AddCrc_in_CRC_static_
    }WriteUserData_in_LinkFrame_static_

}***Send_To_Outstation2***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 a 44 2 0 1 0 10 f0 c5 c4 81 80 0 86 80
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 a 44 2 0 1 0 10 f0 c5 c4 81 80 0 86 80

{OnTxReady_in_OutstationMrzsObject1

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
}OnTxReady_in_OutstationMrzsObject_
parser.Statistics().numBodyCrcError=  0
parser.Statistics().numHeaderCrcError=  0
BIT_KEY_DOWN
cleaned=  "*Update"
cleaned=  "06_01"

    {StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

        {Range_in_RangeOver1_1*
        }Range_in_RangeOver1__*

*    *StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_3
*    *pStaticDataMap->selected.start= 1
*    *pStaticDataMap->selected.stop= 0

*    *StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_2
*    **config->analog_input_count= 10
*    *pStaticDataMap->map[0].selection_in_StaticDataCell.variation= 0
    }StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1

    {StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1

        {Range_in_RangeOver1_1*
        }Range_in_RangeOver1__*

*    *StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_3
*    *pStaticDataMap->selected.start= 1
*    *pStaticDataMap->selected.stop= 0

*    *StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_2
*    **config->binary_input_count= 10

    }StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2__

    StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2_1

        {Range_in_RangeOver1_1*
        }Range_in_RangeOver1__*

    {update_in_StaticDataMap_for_BinarySpecOver2_1
*    *uint16_t keyMap= 50000
*    **inspect_Binary**
*    @*boolean value= 1
*    @*Flags flags.value= 129
*    @*DNPTime timeDNPTime.value= 0
*    @*DNPTime timeDNPTime.quality= 0

        convert_to_event_class_in_StaticDataMap_static1
*        *PointClass_uint8_t pc= 2
*        *PointClass_Class1= 2
*        *PointClass_Class2= 4
*        *PointClass_Class3= 8
*    *update_in_StaticDataMap_for_BinarySpecOver2_2
*    *update_in_StaticDataMap_for_BinarySpecOver2_3

        {Update_BinarySpec_in_EventBuffer_override1

            UpdateAny_BinarySpec_in_EventBuffer1

                Update_BinarySpec_in_EventUpdate_static1

                Instance_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_static1

        }Update_BinarySpec_in_EventBuffer_override_
    }update_in_StaticDataMap_for_BinarySpecOver2__

    {update_in_StaticDataMap_for_BinarySpecOver2_1
*    *uint16_t keyMap= 50001
*    **inspect_Binary**
*    @*boolean value= 1
*    @*Flags flags.value= 129
*    @*DNPTime timeDNPTime.value= 0
*    @*DNPTime timeDNPTime.quality= 0

        convert_to_event_class_in_StaticDataMap_static1
*        *PointClass_uint8_t pc= 2
*        *PointClass_Class1= 2
*        *PointClass_Class2= 4
*        *PointClass_Class3= 8
*    *update_in_StaticDataMap_for_BinarySpecOver2_2
*    *update_in_StaticDataMap_for_BinarySpecOver2_3

        {Update_BinarySpec_in_EventBuffer_override1

            UpdateAny_BinarySpec_in_EventBuffer1

                Update_BinarySpec_in_EventUpdate_static1

                Instance_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_static1

        }Update_BinarySpec_in_EventBuffer_override_
    }update_in_StaticDataMap_for_BinarySpecOver2__

    {update_in_StaticDataMap_for_AnalogSpecOver1_1

        {update_in_StaticDataMap_for_AnalogSpecOver2_1
*        int keyMap= 350
*        **inspect_Analog**
*        @*boolean value= 3
*        @*Flags flags.value= 1
*        @*DNPTime timeDNPTime.value= 0
*        @*DNPTime timeDNPTime.quality= 0

            convert_to_event_class_in_StaticDataMap_static1
*            *PointClass_uint8_t pc= 4
*            *PointClass_Class1= 2
*            *PointClass_Class2= 4
*            *PointClass_Class3= 8

            Update_AnalogSpec_in_EventUpdate_static1

            Instance_in_EventTypeImpl_TypedEventRecord_for_AnalogSpec_static1
        }update_in_StaticDataMap_for_AnalogSpecOver22_
    }update_in_StaticDataMap_for_AnalogSpecOver1__

    {Update_for_Counter_in_Database1
*    *EventMode_uint8_t mode= 0
*    **inspect_Counter**
*    @*boolean value= 23
*    @*Flags flags.value= 1
*    @*DNPTime timeDNPTime.value= 767026808
*    @*DNPTime timeDNPTime.quality= 1

        {update_in_StaticDataMap_for_CounterSpecOver2_1
*        **inspect_Counter**
*        @*boolean value= 23
*        @*Flags flags.value= 1
*        @*DNPTime timeDNPTime.value= 767026808
*        @*DNPTime timeDNPTime.quality= 1
        update_in_StaticDataMap_for_CounterSpecOver2_2
*        *inspect_Counter(&old_value)
*        **inspect_Counter**
*        @*boolean value= 0
*        @*Flags flags.value= 2
*        @*DNPTime timeDNPTime.value= 0
*        @*DNPTime timeDNPTime.quality= 0
        update_in_StaticDataMap_for_CounterSpecOver2_3
        update_in_StaticDataMap_for_CounterSpecOver2_4

            convert_to_event_class_in_StaticDataMap_static1
*            *PointClass_uint8_t pc= 8
*            *PointClass_Class1= 2
*            *PointClass_Class2= 4
*            *PointClass_Class3= 8

            Instance_in_EventTypeImpl_TypedEventRecord_for_CounterSpec_static1
        }update_in_StaticDataMap_for_CounterSpecOver2_2_
    }Update_for_Counter_in_Database_
BIT_KEY_DOWN
cleaned=  "*Read"
cleaned=  "05_64_0e_c4_01_00_02_00_e0_66_c5_c5_01_f3_95"
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47532192<- 5 64 e c4 1 0 2 0 e0 66 c5 c5 1 f3 95

partial_size= 5

    {AddCrc_in_CRC_static1
*    *uint16_t length =8
@@@@    *write_in_UInt16_static = 47532200->3385
    }AddCrc_in_CRC_static_

    {AddCrc_in_CRC_static1
*    *uint16_t length =3
@@@@    *write_in_UInt16_static = 47532205->17329
    }AddCrc_in_CRC_static_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47532192<- 5 64 8 c4 1 0 2 0 39 d c5 c5 1 b1 43

{***Send_To_Outstation***
+***Send_To_Outstation***

{WriteData_in_LinkParserMrzsOver2_1

    {OnRead_in_LinkLayerParser1
*    *uint16_t numBytes= 15
*    *Complete_State_LinkLayerParser= 3

        {AdvanceWrite_in_ShiftableBuffer1
*        *uint16_t aNumBytes= 15
        }AdvanceWrite_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {Sync_in_ShiftableBuffer1

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 15
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
            }NumBytesRead_in_ShiftableBuffer_

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 15
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
            }NumBytesRead_in_ShiftableBuffer_
        }Sync_in_ShiftableBuffer1_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299528<-1
@@@@    *read_from_in_UInt16_static = 4299530<-2

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299532<-3385

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299537<-17329
*    ***FORMAT_HEX_BLOCK(logger, flags::LINK_RX_HEX, buffer.ReadBuffer().take(frameSize), 10, 18)***

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {PushFrame_in_LinkLayerParser1

{OnFrame_in_MrzsFrameSink1
FinalDestination_in_MrzsFrameSink:
*        **inspect_LinkHeaderFields**
*        @*LinkFunction_uint8_t func= 68
*        @*boolean isFromMaster= 1
*        @*boolean fcb= 0
*        @*boolean fcvdfc= 0
*        @*Addresses addresses.source= 2
*        @*Addresses addresses.destination= 1
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299524<- c5 c5 1

}OnFrame_in_MrzsFrameSink1_
        }PushFrame_in_LinkLayerParser_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 15
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 15
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_
    }OnRead_in_LinkLayerParser_
}WriteData_in_LinkParserMrzsOver2__

+***LinkFunction_PRI_UNCONFIRMED_USER_DATA***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299524<- c5 c5 1

    {OnReceive_in_TransportLayerMrzs1

        {ProcessReceive_in_TransportRx1
*        *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_RX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', header.fir, header.fin
*        *FIR: 1
*        *FIN: 1
*        *SEQ: 5
*        *LEN: 2
*        *pTransportRx->numBytesRead= 0

            {GetAvailable_in_TransportRx1
            }GetAvailable_in_TransportRx_
        }ProcessReceive_in_TransportRx6_
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c5 1
    }OnReceive_in_TransportLayerMrzs1_

    {OnReceive_in_OContext1
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c5 1

        {ProcessMessage_in_OContext1

            {ParseRequest_in_APDUHeaderParser_static1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298848<- c5 1
            }ParseRequest_in_APDUHeaderParser_static2_

            {ProcessObjects_in_OContext1
*            **inspect_ParsedRequest**
*            **inspect_Addresses**
*            @*uint16_t source= 0
*            @*uint16_t destination= 0
*            **inspect_APDUHeader**
*            **inspect_AppControlField**
*            @*boolean FIR= 1
*            @*boolean FIN= 1
*            @*boolean CON= 0
*            @*boolean UNS= 0
*            @*uint8_t SEQ= 5
*            @*FunctionCode_uint8_t function= 1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298850<-

                {ProcessRequest_in_OContext1

                    {OnReceiveSolRequest_in_OContext1

                        {ProcessNewRequest_in_OContext1
@@@@                        *FunctionCode_READ

                            {OnNewReadRequest_in_StateIdle_override1

                                {RespondToReadRequest_in_OContext1

                                    {RecordLastProcessedRequest_in_RequestHistory1

                                    }RecordLastProcessedRequest_in_RequestHistory_

                                    {Start_in_TxBuffer1

                                    }Start_in_TxBuffer_
@@@@                                    *length_in_HasLength_for_Uint16_t(&(temp.hHasLength))= 292

                                    {HeaderWriter_in_HeaderWriter1
*                                    *length_in_HasLength_for_Uint16_t(&(position_->hHasLength))= 288

                                    }HeaderWriter_in_HeaderWriter_

                                    {SetFunction_in_APDUWrapper1
@@@@                                    *write_uint8=4298059->129
                                    }SetFunction_in_APDUWrapper_

                                    {HandleRead_in_OContext1
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298850<-
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0
*                                    *HandleRead_in_OContext2

                                        {Unselect_in_EventStorage1

                                            Foreach_in_List_for_EventRecord1

                                                Iterate_in_List_for_EventRecord1
*                                                *pList_for_EventRecord->head= 4281616

                                                    From__in__Iterator_in_List_for_EventRecord_static1
*                                                    *Node_for_EventRecord* start= 4281616

                                                    Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                    *Node_for_EventRecord* start= 4281616
                                        }Unselect_in_EventStorage_

                                        {Unselect_in_Database1

                                            {clear_selection_in_StaticDataMap_for_BinarySpec1

                                                {Range_in_RangeOver1_1*
                                                }Range_in_RangeOver1__*
                                            }clear_selection_in_StaticDataMap_for_BinarySpec_

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {clear_selection_in_StaticDataMap_for_AnalogSpec1

                                                {Range_in_RangeOver1_1*
                                                }Range_in_RangeOver1__*
                                            }clear_selection_in_StaticDataMap_for_AnalogSpec_

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*
                                        }Unselect_in_Database_
*                                    *HandleRead_in_OContext3
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0

                                        {Parse_in_APDUParser_static1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298850<-

                                            {ParseSinglePass_in_APDUParser_static1
*                                            *IWhiteList* pWhiteList=6476572
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<-
                                            }ParseSinglePass_in_APDUParser_static2_

*                                        *Parse_in_APDUParser_static2
*                                        *ParseResult_uint8_t result= 0

                                            {ParseSinglePass_in_APDUParser_static1
*                                            *IWhiteList* pWhiteList=0
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<-
                                            }ParseSinglePass_in_APDUParser_static2_
*                                        *ParseResult_uint8_t tmp= 0
                                        }Parse_in_APDUParser_static_
                                    *HandleRead_in_OContext5
*                                    *ParseResult_uint8_t result =0
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0

                                        {LoadResponse_in_ResponseContext1
                                        *LoadResponse_in_ResponseContext2
*                                        *uint16_t startingSize= 288

                                            {Load_in_EventBuffer1

                                                {Write_in_EventWriting_static1

                                                    Iterate_in_List_for_EventRecord1
*                                                    *pList_for_EventRecord->head= 4281616

                                                        From__in__Iterator_in_List_for_EventRecord_static1
*                                                        *Node_for_EventRecord* start= 4281616

                                                        Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                        *Node_for_EventRecord* start= 4281616

                                                    WriteSome_in_EventWriting_static1
*                                                    *lists->counters.selected_in_EventClassCounters= 0
*                                                *uint16_t num_written =0
                                                }Write_in_EventWriting_static1_

                                                NumSelected_in_EventStorage1
*                                                *(pEventStorage->state).counters.selected_in_EventClassCounters= 0
                                            }Load_in_EventBuffer_
                                        *LoadResponse_in_ResponseContext3
*                                        *boolean someEventsWritten= 0

                                            {Load_in_Database_override1

                                                Load_in_Database1

                                                {load_type_for_Analog_in_Database_static1
*                                                *map->db_config->analog_input_count= 10
*                                                *map->map[0].selection_in_StaticDataCell.variation= 0
*                                                *uint16_t start= 1
*                                                *uint16_t stop= 0
                                                *load_type_for_Analog_in_Database_static2
*                                                *load_type_for_Analog_in_Database_static2a
                                                }load_type_for_Analog_in_Database_static1_

                                                {load_type_for_Binary_in_Database_static1
*                                                *map->db_config->binary_input_count= 10
*                                                *uint16_t start= 1
*                                                *uint16_t stop= 0
                                                *load_type_for_Binary_in_Database_static2
*                                                *load_type_for_Binary_in_Database_static2a
                                                }load_type_for_Binary_in_Database_static1_
*                                                *if (iter == map.end())

                                                load_type_for_BinaryOutputStatus_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_AnalogOutputStatus_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_DoubleBitBinary_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_Counter_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_FrozenCounter_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_TimeAndInterval_in_Database_static1
                                                load_type_for_TimeAndInterval_in_Database_static2
*                                                *if (iter == map.end())
                                            }Load_in_Database_override_
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0

                                        }LoadResponse_in_ResponseContext1_
                                    *HandleRead_in_OContext6
*                                    *ParseResult_uint8_t result =0
*                                    **inspect_AppControlField**
*                                    @*boolean FIR= 1
*                                    @*boolean FIN= 1
*                                    @*boolean CON= 0
*                                    @*boolean UNS= 0
*                                    @*uint8_t SEQ= 0
                                    }HandleRead_in_OContext1_
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0

                                    {ToByte_in_AppControlField1
*                                    *ret |= AppControlField_FIR_MASK
*                                    *ret |= AppControlField_FIN_MASK
                                    *uint8_t ret =192
                                    *uint8_t seq =5
                                    }ToByte_in_AppControlField_

                                    {SetControl_in_APDUWrapper1
@@@@                                    *write_uint8=4298058->197
                                    }SetControl_in_APDUWrapper_

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
*                                    @*uint8_t LSB= 14
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext3
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 142
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext4
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext5
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 142
*                                    @*uint8_t MSB= 0
                                    }GetResponseIIN_in_OContext_
*                                *RespondToReadRequest_in_OContext2
*                                **inspect_IINField**
*                                @*uint8_t LSB= 142
*                                @*uint8_t MSB= 0
*                                *RespondToReadRequest_in_OContext3
*                                **inspect_IINField**
*                                @*uint8_t LSB= 142
*                                @*uint8_t MSB= 0

                                    {SetIIN_in_APDUResponse1
@@@@                                    *write_uint8=4298060->142
@@@@                                    *write_uint8=4298061->0
                                    }SetIIN_in_APDUResponse_

                                    {BeginResponseTx_in_OContext1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 5
                                        }GetControl_in_APDUWrapper_

                                        {CheckForBroadcastConfirmation_in_OContext1
                                        }CheckForBroadcastConfirmation_in_OContext_
*                                    *BeginResponseTx_in_OContext2
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- c5 81 8e 0

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 5
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext3
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- c5 81 8e 0

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 5
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext4
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- c5 81 8e 0

                                        {BeginTx_in_OContext1

{BeginTransmit_in_MrzsLowerLayer1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298058<- c5 81 8e 0
}BeginTransmit_in_MrzsLowerLayer_
*                                        **inspect_Message**
*                                        **inspect_Addresses**
*                                        @*uint16_t source= 0
*                                        @*uint16_t destination= 0
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298058<- c5 81 8e 0
                                        }BeginTx_in_OContext_

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 0
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 5
                                        }GetControl_in_APDUWrapper_

                                        {Inst_in_StateIdle_static1

                                            {StateIdle_in_StateIdle1

                                                {OutstationState_in_OutstationState1

                                                }OutstationState_in_OutstationState_
                                            }StateIdle_in_StateIdle_
                                        }Inst_in_StateIdle_static_
                                    }BeginResponseTx_in_OContext2_
                                }RespondToReadRequest_in_OContext_
                            }OnNewReadRequest_in_StateIdle_override_
                        }ProcessNewRequest_in_OContext1_
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
***inspect_Message**
***inspect_Addresses**
*@*uint16_t source= 0
*@*uint16_t destination= 0
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4298058<- c5 81 8e 0
+transport.receiver.expectedSeq.seq= 6

    {BeginTransmit_in_TransportLayer1

        {Configure_in_TransportTx1
        }Configure_in_TransportTx_

{Send_in_MockLinkLayer1

        {GetSegment_in_TransportTx1
*        *GetSegment_in_TransportTx2
*        *uint16_t numToSend= 4
*        *GetSegment_in_TransportTx3
*        +        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4298058<- c5 81 8e 0
@@@@        *write_in_UInt8_static = 4299200->198

*            *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_TX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', fir, fin, sequence.Get()
*            *FIR: 1
*            *FIN: 1
*            *SEQ: 6
*            *LEN: 4
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299200<- c6 c5 81 8e 0
        *GetSegment_in_TransportTx2
        }GetSegment_in_TransportTx2_
}Send_in_MockLinkLayer_
    }BeginTransmit_in_TransportLayer5_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299200<- c6 c5 81 8e 0

    {FormatHeader_in_LinkFrame_static1

        {ControlByte_in_LinkHeader_static1
*        *boolean aIsMaster= 0
*        *boolean aFcb= 0
*        *boolean aFcvDfc= 0
*        *LinkFunction_uint8_t aFunc= 68
        }ControlByte_in_LinkHeader_static_
*        *uint8_t ret= 68
    *FormatHeader_in_LinkFrame_static2
*    *LinkHeader header.ctrl= 68
*    ***FORMAT_LOGGER_BLOCK(pLogger, flags::LINK_TX, 'Function: %s Dest: %u Source: %u Length: %u')***

        {Write_in_LinkHeader1
@@@@        *write_to 6477652->5
@@@@        *write_to 6477653->100
@@@@        *write_to 6477654->10
@@@@        *write_in_UInt16_static = 6477656->2
@@@@        *write_in_UInt16_static = 6477658->1
@@@@        *write_to 6477655->68

            {AddCrc_in_CRC_static1
*            *uint16_t length =8
@@@@            *write_in_UInt16_static = 6477660->61456
            }AddCrc_in_CRC_static_
        }Write_in_LinkHeader_
    }FormatHeader_in_LinkFrame_static2_

    {WriteUserData_in_LinkFrame_static1
*    *uint16_t length= 5

        {AddCrc_in_CRC_static1
*        *uint16_t length =5
@@@@        *write_in_UInt16_static = 6477667->25823
        }AddCrc_in_CRC_static_
    }WriteUserData_in_LinkFrame_static_

}***Send_To_Outstation2***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 a 44 2 0 1 0 10 f0 c6 c5 81 8e 0 df 64
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 a 44 2 0 1 0 10 f0 c6 c5 81 8e 0 df 64

{OnTxReady_in_OutstationMrzsObject1

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
}OnTxReady_in_OutstationMrzsObject_
parser.Statistics().numBodyCrcError=  0
parser.Statistics().numHeaderCrcError=  0
BIT_KEY_DOWN
cleaned=  "*ReadEventClass1Class21Event"
cleaned=  "*05_64_0e_c4_01_00_02_00_e0_66_c2_c2_01_3C_02_07_01_3C_03_07_01_f3_95"
cleaned=  "*ConfirmEventClass1"
cleaned=  "05_64_0e_c4_01_00_02_00_e0_66_c3_c2_00_f3_95"
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47533312<- 5 64 e c4 1 0 2 0 e0 66 c3 c2 0 f3 95

partial_size= 5

    {AddCrc_in_CRC_static1
*    *uint16_t length =8
@@@@    *write_in_UInt16_static = 47533320->3385
    }AddCrc_in_CRC_static_

    {AddCrc_in_CRC_static1
*    *uint16_t length =3
@@@@    *write_in_UInt16_static = 47533325->42782
    }AddCrc_in_CRC_static_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47533312<- 5 64 8 c4 1 0 2 0 39 d c3 c2 0 1e a7

{***Send_To_Outstation***
+***Send_To_Outstation***

{WriteData_in_LinkParserMrzsOver2_1

    {OnRead_in_LinkLayerParser1
*    *uint16_t numBytes= 15
*    *Complete_State_LinkLayerParser= 3

        {AdvanceWrite_in_ShiftableBuffer1
*        *uint16_t aNumBytes= 15
        }AdvanceWrite_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {Sync_in_ShiftableBuffer1

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 15
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
            }NumBytesRead_in_ShiftableBuffer_

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 15
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
            }NumBytesRead_in_ShiftableBuffer_
        }Sync_in_ShiftableBuffer1_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299528<-1
@@@@    *read_from_in_UInt16_static = 4299530<-2

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299532<-3385

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299537<-42782
*    ***FORMAT_HEX_BLOCK(logger, flags::LINK_RX_HEX, buffer.ReadBuffer().take(frameSize), 10, 18)***

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 15
        }NumBytesRead_in_ShiftableBuffer_

        {PushFrame_in_LinkLayerParser1

{OnFrame_in_MrzsFrameSink1
FinalDestination_in_MrzsFrameSink:
*        **inspect_LinkHeaderFields**
*        @*LinkFunction_uint8_t func= 68
*        @*boolean isFromMaster= 1
*        @*boolean fcb= 0
*        @*boolean fcvdfc= 0
*        @*Addresses addresses.source= 2
*        @*Addresses addresses.destination= 1
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299524<- c3 c2 0

}OnFrame_in_MrzsFrameSink1_
        }PushFrame_in_LinkLayerParser_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 15
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 15
*        *pShiftableBuffer->readPos= 15
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_
    }OnRead_in_LinkLayerParser_
}WriteData_in_LinkParserMrzsOver2__

+***LinkFunction_PRI_UNCONFIRMED_USER_DATA***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299524<- c3 c2 0

    {OnReceive_in_TransportLayerMrzs1

        {ProcessReceive_in_TransportRx1
*        *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_RX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', header.fir, header.fin
*        *FIR: 1
*        *FIN: 1
*        *SEQ: 3
*        *LEN: 2
*        *pTransportRx->numBytesRead= 0

            {GetAvailable_in_TransportRx1
            }GetAvailable_in_TransportRx_
        }ProcessReceive_in_TransportRx6_
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c2 0
    }OnReceive_in_TransportLayerMrzs1_

    {OnReceive_in_OContext1
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c2 0

        {ProcessMessage_in_OContext1

            {ParseRequest_in_APDUHeaderParser_static1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298848<- c2 0
            }ParseRequest_in_APDUHeaderParser_static2_

            {ProcessObjects_in_OContext1
*            **inspect_ParsedRequest**
*            **inspect_Addresses**
*            @*uint16_t source= 0
*            @*uint16_t destination= 0
*            **inspect_APDUHeader**
*            **inspect_AppControlField**
*            @*boolean FIR= 1
*            @*boolean FIN= 1
*            @*boolean CON= 0
*            @*boolean UNS= 0
*            @*uint8_t SEQ= 2
*            @*FunctionCode_uint8_t function= 0
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298850<-
*            *FunctionCode_CONFIRM

                {ProcessConfirm_in_OContext1
*                *FORMAT_LOG_BLOCK(ctx.logger, flags::WARN, 'unexpected confirm while IDLE with sequence: %u'
*                *request.header.control.SEQ= 2

                    {Inst_in_StateIdle_static1

                        {StateIdle_in_StateIdle1

                            {OutstationState_in_OutstationState1

                            }OutstationState_in_OutstationState_
                        }StateIdle_in_StateIdle_
                    }Inst_in_StateIdle_static_
                }ProcessConfirm_in_OContext_
            }ProcessObjects_in_OContext4_
        }ProcessMessage_in_OContext6_

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
    }OnReceive_in_OContext_

***Empty output***
}***Send_To_Outstation1***
parser.Statistics().numBodyCrcError=  0
parser.Statistics().numHeaderCrcError=  0
BIT_KEY_DOWN
cleaned=  "*ReadEventClass11Event"
cleaned=  "05_64_0e_c4_01_00_02_00_e0_66_c2_c2_01_3C_04_07_01_f3_95"
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47919384<- 5 64 e c4 1 0 2 0 e0 66 c2 c2 1 3c 4 7 1 f3 95

partial_size= 9

    {AddCrc_in_CRC_static1
*    *uint16_t length =8
@@@@    *write_in_UInt16_static = 47919392->16471
    }AddCrc_in_CRC_static_

    {AddCrc_in_CRC_static1
*    *uint16_t length =7
@@@@    *write_in_UInt16_static = 47919401->34155
    }AddCrc_in_CRC_static_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 47919384<- 5 64 c c4 1 0 2 0 57 40 c2 c2 1 3c 4 7 1 6b 85

{***Send_To_Outstation***
+***Send_To_Outstation***

{WriteData_in_LinkParserMrzsOver2_1

    {OnRead_in_LinkLayerParser1
*    *uint16_t numBytes= 19
*    *Complete_State_LinkLayerParser= 3

        {AdvanceWrite_in_ShiftableBuffer1
*        *uint16_t aNumBytes= 19
        }AdvanceWrite_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_

        {Sync_in_ShiftableBuffer1

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 19
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
            }NumBytesRead_in_ShiftableBuffer_

            {NumBytesRead_in_ShiftableBuffer1
*            *pShiftableBuffer->writePos= 19
*            *pShiftableBuffer->readPos= 0
*            *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
            }NumBytesRead_in_ShiftableBuffer_
        }Sync_in_ShiftableBuffer1_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299528<-1
@@@@    *read_from_in_UInt16_static = 4299530<-2

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299532<-16471

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_
@@@@    *read_from_in_UInt16_static = 4299541<-34155
*    ***FORMAT_HEX_BLOCK(logger, flags::LINK_RX_HEX, buffer.ReadBuffer().take(frameSize), 10, 18)***

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 0
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 19
        }NumBytesRead_in_ShiftableBuffer_

        {PushFrame_in_LinkLayerParser1

{OnFrame_in_MrzsFrameSink1
FinalDestination_in_MrzsFrameSink:
*        **inspect_LinkHeaderFields**
*        @*LinkFunction_uint8_t func= 68
*        @*boolean isFromMaster= 1
*        @*boolean fcb= 0
*        @*boolean fcvdfc= 0
*        @*Addresses addresses.source= 2
*        @*Addresses addresses.destination= 1
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299524<- c2 c2 1 3c 4 7 1

}OnFrame_in_MrzsFrameSink1_
        }PushFrame_in_LinkLayerParser_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 19
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_

        {NumBytesRead_in_ShiftableBuffer1
*        *pShiftableBuffer->writePos= 19
*        *pShiftableBuffer->readPos= 19
*        *return pShiftableBuffer->writePos - pShiftableBuffer->readPos= 0
        }NumBytesRead_in_ShiftableBuffer_
    }OnRead_in_LinkLayerParser_
}WriteData_in_LinkParserMrzsOver2__

+***LinkFunction_PRI_UNCONFIRMED_USER_DATA***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299524<- c2 c2 1 3c 4 7 1

    {OnReceive_in_TransportLayerMrzs1

        {ProcessReceive_in_TransportRx1
*        *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_RX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', header.fir, header.fin
*        *FIR: 1
*        *FIN: 1
*        *SEQ: 2
*        *LEN: 6
*        *pTransportRx->numBytesRead= 0

            {GetAvailable_in_TransportRx1
            }GetAvailable_in_TransportRx_
        }ProcessReceive_in_TransportRx6_
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c2 1 3c 4 7 1
    }OnReceive_in_TransportLayerMrzs1_

    {OnReceive_in_OContext1
*    **inspect_Message**
*    **inspect_Addresses**
*    @*uint16_t source= 0
*    @*uint16_t destination= 0
+    **inspect_RSeq**
+    @*buffer->buffer_[i]= 4298848<- c2 1 3c 4 7 1

        {ProcessMessage_in_OContext1

            {ParseRequest_in_APDUHeaderParser_static1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298848<- c2 1 3c 4 7 1
            }ParseRequest_in_APDUHeaderParser_static2_

            {ProcessObjects_in_OContext1
*            **inspect_ParsedRequest**
*            **inspect_Addresses**
*            @*uint16_t source= 0
*            @*uint16_t destination= 0
*            **inspect_APDUHeader**
*            **inspect_AppControlField**
*            @*boolean FIR= 1
*            @*boolean FIN= 1
*            @*boolean CON= 0
*            @*boolean UNS= 0
*            @*uint8_t SEQ= 2
*            @*FunctionCode_uint8_t function= 1
+            **inspect_RSeq**
+            @*buffer->buffer_[i]= 4298850<- 3c 4 7 1

                {ProcessRequest_in_OContext1

                    {OnReceiveSolRequest_in_OContext1

                        {ProcessNewRequest_in_OContext1
@@@@                        *FunctionCode_READ

                            {OnNewReadRequest_in_StateIdle_override1

                                {RespondToReadRequest_in_OContext1

                                    {RecordLastProcessedRequest_in_RequestHistory1

                                    }RecordLastProcessedRequest_in_RequestHistory_

                                    {Start_in_TxBuffer1

                                    }Start_in_TxBuffer_
@@@@                                    *length_in_HasLength_for_Uint16_t(&(temp.hHasLength))= 292

                                    {HeaderWriter_in_HeaderWriter1
*                                    *length_in_HasLength_for_Uint16_t(&(position_->hHasLength))= 288

                                    }HeaderWriter_in_HeaderWriter_

                                    {SetFunction_in_APDUWrapper1
@@@@                                    *write_uint8=4298059->129
                                    }SetFunction_in_APDUWrapper_

                                    {HandleRead_in_OContext1
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298850<- 3c 4 7 1
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0
*                                    *HandleRead_in_OContext2

                                        {Unselect_in_EventStorage1

                                            Foreach_in_List_for_EventRecord1

                                                Iterate_in_List_for_EventRecord1
*                                                *pList_for_EventRecord->head= 4281616

                                                    From__in__Iterator_in_List_for_EventRecord_static1
*                                                    *Node_for_EventRecord* start= 4281616

                                                    Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                    *Node_for_EventRecord* start= 4281616
                                        }Unselect_in_EventStorage_

                                        {Unselect_in_Database1

                                            {clear_selection_in_StaticDataMap_for_BinarySpec1

                                                {Range_in_RangeOver1_1*
                                                }Range_in_RangeOver1__*
                                            }clear_selection_in_StaticDataMap_for_BinarySpec_

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {clear_selection_in_StaticDataMap_for_AnalogSpec1

                                                {Range_in_RangeOver1_1*
                                                }Range_in_RangeOver1__*
                                            }clear_selection_in_StaticDataMap_for_AnalogSpec_

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*

                                            {Range_in_RangeOver1_1*
                                            }Range_in_RangeOver1__*
                                        }Unselect_in_Database_
*                                    *HandleRead_in_OContext3
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0

                                        {Parse_in_APDUParser_static1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298850<- 3c 4 7 1

                                            {ParseSinglePass_in_APDUParser_static1
*                                            *IWhiteList* pWhiteList=6476572
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<- 3c 4 7 1
*                                            *copy1
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<- 3c 4 7 1

                                                {ParseHeader_in_APDUParser_static1
+                                                **inspect_RSeq**
+                                                @*buffer->buffer_[i]= 4298850<- 3c 4 7 1

                                                    {ParseObjectHeader_in_ObjectHeaderParser_static1
+                                                    **inspect_RSeq**
+                                                    @*buffer->buffer_[i]= 4298850<- 3c 4 7 1
@@@@                                                    *read_in_UInt8_static = 4298850<-60
@@@@                                                    *read_in_UInt8_static = 4298851<-4
@@@@                                                    *read_in_UInt8_static = 4298852<-7
                                                    }ParseObjectHeader_in_ObjectHeaderParser_static2_

                                                    {GetRecord_in_GroupVariationRecord_static1
*                                                    *uint8_t group= 60
*                                                    *uint8_t variation= 4

                                                        {GetEnumAndType_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 60
*                                                        *uint8_t variation= 4

                                                            {GetType_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 60
*                                                            *uint8_t variation= 4
*                                                            *GroupVariationType_EVENT
                                                            }GetType_in_GroupVariationRecord_static21_
*                                                        *GroupVariation_uint16_t enumeration= 3c04
                                                        GetEnumAndType_in_GroupVariationRecord_static2

                                                        }GetEnumAndType_in_GroupVariationRecord_static_
                                                    }GetRecord_in_GroupVariationRecord_static_

                                                    {ParseQualifier_in_APDUParser_static1
*                                                    *QualifierCode_uint8_t tmp =7
@@@@                                                    *QualifierCode_UINT8_CNT*

                                                        NumParser_in_NumParser1

                                                        {ParseHeader_in_CountParser_static1
+                                                        **inspect_RSeq**
+                                                        @*buffer->buffer_[i]= 4298853<- 1

                                                            {ParseCount_in_NumParser1
@@@@                                                            *read_in_UInt8_static = 4298853<-1
                                                            }ParseCount_in_NumParser2_
*                                                        *ParseHeader_in_CountParser_static2
*                                                        *ParseResult_uint8_t result =0
*                                                        *uint16_t count =1
*                                                        *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*                                                        *record.group= 60
*                                                        *record.variation= 4
*                                                        *IAPDUHandler* pHandler =0
                                                        }ParseHeader_in_CountParser_static2_
                                                    }ParseQualifier_in_APDUParser_static2_
*                                                    *ParseResult_uint8_t tmp= 0
                                                }ParseHeader_in_APDUParser_static4_
*                                                *ParseResult_uint8_t tmp= 0
                                            }ParseSinglePass_in_APDUParser_static2_

*                                        *Parse_in_APDUParser_static2
*                                        *ParseResult_uint8_t result= 0

                                            {ParseSinglePass_in_APDUParser_static1
*                                            *IWhiteList* pWhiteList=0
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<- 3c 4 7 1
*                                            *copy1
+                                            **inspect_RSeq**
+                                            @*buffer->buffer_[i]= 4298850<- 3c 4 7 1

                                                {ParseHeader_in_APDUParser_static1
+                                                **inspect_RSeq**
+                                                @*buffer->buffer_[i]= 4298850<- 3c 4 7 1

                                                    {ParseObjectHeader_in_ObjectHeaderParser_static1
+                                                    **inspect_RSeq**
+                                                    @*buffer->buffer_[i]= 4298850<- 3c 4 7 1
@@@@                                                    *read_in_UInt8_static = 4298850<-60
@@@@                                                    *read_in_UInt8_static = 4298851<-4
@@@@                                                    *read_in_UInt8_static = 4298852<-7
                                                    }ParseObjectHeader_in_ObjectHeaderParser_static2_

                                                    {GetRecord_in_GroupVariationRecord_static1
*                                                    *uint8_t group= 60
*                                                    *uint8_t variation= 4

                                                        {GetEnumAndType_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 60
*                                                        *uint8_t variation= 4

                                                            {GetType_in_GroupVariationRecord_static1
*                                                            *uint8_t group= 60
*                                                            *uint8_t variation= 4
*                                                            *GroupVariationType_EVENT
                                                            }GetType_in_GroupVariationRecord_static21_
*                                                        *GroupVariation_uint16_t enumeration= 3c04
                                                        GetEnumAndType_in_GroupVariationRecord_static2

                                                        }GetEnumAndType_in_GroupVariationRecord_static_
                                                    }GetRecord_in_GroupVariationRecord_static_

                                                    {ParseQualifier_in_APDUParser_static1
*                                                    *QualifierCode_uint8_t tmp =7
@@@@                                                    *QualifierCode_UINT8_CNT*

                                                        NumParser_in_NumParser1

                                                        {ParseHeader_in_CountParser_static1
+                                                        **inspect_RSeq**
+                                                        @*buffer->buffer_[i]= 4298853<- 1

                                                            {ParseCount_in_NumParser1
@@@@                                                            *read_in_UInt8_static = 4298853<-1
                                                            }ParseCount_in_NumParser2_
*                                                        *ParseHeader_in_CountParser_static2
*                                                        *ParseResult_uint8_t result =0
*                                                        *uint16_t count =1
*                                                        *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*                                                        *record.group= 60
*                                                        *record.variation= 4
*                                                        *IAPDUHandler* pHandler =6476572
*                                                        *ParseHeader_in_CountParser_static4
*                                                        *uint16_t count =1

                                                            {OnHeader_CountHeader_in_IAPDUHandler1

                                                                ProcessHeader_CountHeader_in_ReadHandler_override1

                                                                    SelectCount_in_EventBuffer1
*                                                                    *uint16_t count= 1

                                                                        SelectMaxCount_in_EventBuffer1
*                                                                        *uint32_t maximum= 1
*                                                                        *GroupVariation_uint16_t gv= 3c04
*                                                                        *GroupVariation_Group60Var4

                                                                        SelectByClass_EventClass_in_EventBuffer1
*                                                                        *uint32_t max= 1
*                                                                        *EventClass_uint8_t clazz= 2

                                                                        SelectByClass_in_EventStorageOver2_1
*                                                                        *EventClass_uint8_t clazz= 2
*                                                                        *uint32_t max= 1

                                                                            SelectByClass_in_EventSelection_static1
*                                                                            *uint32_t max= 1

                                                                                Iterate_in_List_for_EventRecord1
*                                                                                *pList_for_EventRecord->head= 4281616

                                                                                    From__in__Iterator_in_List_for_EventRecord_static1
*                                                                                    *Node_for_EventRecord* start= 4281616

                                                                                    Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                                                    *Node_for_EventRecord* start= 4281616
*                                                                            *SelectByClass_in_EventSelection_static2
*                                                                            *node->value_in_Node_for_EventRecord.state_in_EventRecord= 0
*                                                                            *EventState_unselected= 0
*                                                                            *SelectByClass_in_EventSelection_static2
*                                                                            *node->value_in_Node_for_EventRecord.state_in_EventRecord= 0
*                                                                            *EventState_unselected= 0
*                                                                            *SelectByClass_in_EventSelection_static2
*                                                                            *node->value_in_Node_for_EventRecord.state_in_EventRecord= 0
*                                                                            *EventState_unselected= 0
*                                                                            *SelectByClass_in_EventSelection_static2
*                                                                            *node->value_in_Node_for_EventRecord.state_in_EventRecord= 0
*                                                                            *EventState_unselected= 0

                                                                                OnSelect_in_EventClassCounters1
*                                                                        *uint32_t tmp= 1

                                                                {Record_in_IAPDUHandler1
*                                                                **inspect_IINField**
*                                                                @*uint8_t LSB= 0
*                                                                @*uint8_t MSB= 0
                                                                *Record_in_IAPDUHandler2
*                                                                **inspect_IINField**
*                                                                @*uint8_t LSB= 0
*                                                                @*uint8_t MSB= 0
                                                                *Record_in_IAPDUHandler3
                                                                }Record_in_IAPDUHandler_
                                                            }OnHeader_CountHeader_in_IAPDUHandler_
*                                                            **inspect_IINField**
*                                                            @*uint8_t LSB= 0
*                                                            @*uint8_t MSB= 0
                                                        }ParseHeader_in_CountParser_static2_
                                                    }ParseQualifier_in_APDUParser_static2_
*                                                    *ParseResult_uint8_t tmp= 0
                                                }ParseHeader_in_APDUParser_static4_
*                                                *ParseResult_uint8_t tmp= 0
                                            }ParseSinglePass_in_APDUParser_static2_
*                                        *ParseResult_uint8_t tmp= 0
                                        }Parse_in_APDUParser_static_
                                    *HandleRead_in_OContext5
*                                    *ParseResult_uint8_t result =0
*                                    *((pOContext->database_in_OContext).analog_input).map[0].selection_in_StaticDataCell.variation= 0

                                        {LoadResponse_in_ResponseContext1
                                        *LoadResponse_in_ResponseContext2
*                                        *uint16_t startingSize= 288

                                            {Load_in_EventBuffer1

                                                {Write_in_EventWriting_static1

                                                    Iterate_in_List_for_EventRecord1
*                                                    *pList_for_EventRecord->head= 4281616

                                                        From__in__Iterator_in_List_for_EventRecord_static1
*                                                        *Node_for_EventRecord* start= 4281616

                                                        Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                        *Node_for_EventRecord* start= 4281616

                                                    WriteSome_in_EventWriting_static1
*                                                    *lists->counters.selected_in_EventClassCounters= 1
                                                    WriteSome_in_EventWriting_static2
                                                    WriteSome_in_EventWriting_static3

                                                        WriteHeaderWithReserve_in_HeaderWriter1
*                                                        *qc= 40
*                                                        *reserve= 15

                                                        {WriteHeader_in_HeaderWriter1
*                                                        *id.group= 22
*                                                        *id.variation= 5
*                                                        *qc= 40
*                                                        *length_in_HasLength_for_Uint16_t(&(pHeaderWriter->position->hHasLength)= 288
@@@@                                                        *write_in_UInt8_static = 4298062->22
@@@@                                                        *write_in_UInt8_static = 4298063->5
@@@@                                                        *write_in_UInt8_static = 4298064->40

                                                        }WriteHeader_in_HeaderWriter2_

                                                        PrefixedWriteIterator_for_UInt16_Counter_in_PrefixedWriteIterator_for_UInt16_CounterOver2_1

                                                        FindNextSelected_in_EventWriting_static1
                                                        FindNextSelected_in_EventWriting_static3
@@@@                                                    *write_in_UInt16_static = 4298067->10315
@@@@                                                    *write_in_UInt8_static = 4298069->1
@@@@                                                    *write_in_UInt32_static = 4298070->23
@@@@                                                    *write_in_UInt48_static = 4298074->1512595515000

                                                        PrefixedWriteIterator_for_UInt16_Counter_destr_PrefixedWriteIterator_for_UInt16_Counter1
@@@@                                                    *write_in_UInt16_static = 4298065->1
*                                                *uint16_t num_written =1

                                                    WriteSome_in_EventWriting_static1
*                                                    *lists->counters.selected_in_EventClassCounters= 0
*                                                *uint16_t num_written =0
                                                }Write_in_EventWriting_static1_

                                                NumSelected_in_EventStorage1
*                                                *(pEventStorage->state).counters.selected_in_EventClassCounters= 0
                                            }Load_in_EventBuffer_
                                        *LoadResponse_in_ResponseContext3
*                                        *boolean someEventsWritten= 1

                                            {Load_in_Database_override1

                                                Load_in_Database1

                                                {load_type_for_Analog_in_Database_static1
*                                                *map->db_config->analog_input_count= 10
*                                                *map->map[0].selection_in_StaticDataCell.variation= 0
*                                                *uint16_t start= 1
*                                                *uint16_t stop= 0
                                                *load_type_for_Analog_in_Database_static2
*                                                *load_type_for_Analog_in_Database_static2a
                                                }load_type_for_Analog_in_Database_static1_

                                                {load_type_for_Binary_in_Database_static1
*                                                *map->db_config->binary_input_count= 10
*                                                *uint16_t start= 1
*                                                *uint16_t stop= 0
                                                *load_type_for_Binary_in_Database_static2
*                                                *load_type_for_Binary_in_Database_static2a
                                                }load_type_for_Binary_in_Database_static1_
*                                                *if (iter == map.end())

                                                load_type_for_BinaryOutputStatus_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_AnalogOutputStatus_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_DoubleBitBinary_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_Counter_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_FrozenCounter_in_Database_static1
*                                                *if (iter == map.end())

                                                load_type_for_TimeAndInterval_in_Database_static1
                                                load_type_for_TimeAndInterval_in_Database_static2
*                                                *if (iter == map.end())
                                            }Load_in_Database_override_
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 1
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 0

                                        }LoadResponse_in_ResponseContext1_
                                    *HandleRead_in_OContext6
*                                    *ParseResult_uint8_t result =0
*                                    **inspect_AppControlField**
*                                    @*boolean FIR= 1
*                                    @*boolean FIN= 1
*                                    @*boolean CON= 1
*                                    @*boolean UNS= 0
*                                    @*uint8_t SEQ= 0
                                    }HandleRead_in_OContext1_
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0

                                    {ToByte_in_AppControlField1
*                                    *ret |= AppControlField_FIR_MASK
*                                    *ret |= AppControlField_FIN_MASK
*                                    *ret |= AppControlField_CON_MASK
                                    *uint8_t ret =224
                                    *uint8_t seq =2
                                    }ToByte_in_AppControlField_

                                    {SetControl_in_APDUWrapper1
@@@@                                    *write_uint8=4298058->226
                                    }SetControl_in_APDUWrapper_

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
*                                    @*uint8_t LSB= 6
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext3
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 134
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext4
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 0
*                                    @*uint8_t MSB= 0
                                    GetResponseIIN_in_OContext5
*                                    **inspect_IINField**
*                                    @*uint8_t LSB= 134
*                                    @*uint8_t MSB= 0
                                    }GetResponseIIN_in_OContext_
*                                *RespondToReadRequest_in_OContext2
*                                **inspect_IINField**
*                                @*uint8_t LSB= 134
*                                @*uint8_t MSB= 0
*                                *RespondToReadRequest_in_OContext3
*                                **inspect_IINField**
*                                @*uint8_t LSB= 134
*                                @*uint8_t MSB= 0

                                    {SetIIN_in_APDUResponse1
@@@@                                    *write_uint8=4298060->134
@@@@                                    *write_uint8=4298061->0
                                    }SetIIN_in_APDUResponse_

                                    {BeginResponseTx_in_OContext1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 1
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 2
                                        }GetControl_in_APDUWrapper_

                                        {CheckForBroadcastConfirmation_in_OContext1
                                        }CheckForBroadcastConfirmation_in_OContext_
*                                    *BeginResponseTx_in_OContext2
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 1
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 2
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext3
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 1
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 2
                                        }GetControl_in_APDUWrapper_
*                                    *BeginResponseTx_in_OContext4
+                                    **inspect_RSeq**
+                                    @*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1

                                        {BeginTx_in_OContext1

{BeginTransmit_in_MrzsLowerLayer1
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1
}BeginTransmit_in_MrzsLowerLayer_
*                                        **inspect_Message**
*                                        **inspect_Addresses**
*                                        @*uint16_t source= 0
*                                        @*uint16_t destination= 0
+                                        **inspect_RSeq**
+                                        @*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1
                                        }BeginTx_in_OContext_

                                        {GetControl_in_APDUWrapper1
*                                        **inspect_AppControlField**
*                                        @*boolean FIR= 1
*                                        @*boolean FIN= 1
*                                        @*boolean CON= 1
*                                        @*boolean UNS= 0
*                                        @*uint8_t SEQ= 2
                                        }GetControl_in_APDUWrapper_

                                        {RestartSolConfirmTimer_in_OContext1

                                            {cancel_in_TimerExe4cpp1
                                            *TimerExe4cpp *pTimerExe4cpp= 4297584
                                            *pTimerExe4cpp->timerExe4cpp.psource_in_ITimer= 0
                                            }cancel_in_TimerExe4cpp1_

{Start_in_MrzsExecutor_override1
*MrzsExecutor *pMrzsExecutor= 4281280

{Start_in_MrzsExecutorOver2_1
*uint32_t duration= 5333
*MrzsExecutor *pMrzsExecutor= 4281280

{MrzsTimer_in_MrzsTimer1
*cancel_in_MrzsTimer_override=4234336
}MrzsTimer_in_MrzsTimer_
*tTimerExe4cpp.iITimer.psource_in_ITimer=4281280
}Start_in_MrzsExecutorOver2__
}Start_in_MrzsExecutor_override_
                                        }RestartSolConfirmTimer_in_OContext_

                                        {Inst_in_StateSolicitedConfirmWait_static1

                                            StateSolicitedConfirmWait_in_StateSolicitedConfirmWait1

                                                {OutstationState_in_OutstationState1

                                                }OutstationState_in_OutstationState_
                                        }Inst_in_StateSolicitedConfirmWait_static_
                                    }BeginResponseTx_in_OContext1_
                                }RespondToReadRequest_in_OContext_
                            }OnNewReadRequest_in_StateIdle_override_
                        }ProcessNewRequest_in_OContext1_
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
***inspect_Message**
***inspect_Addresses**
*@*uint16_t source= 0
*@*uint16_t destination= 0
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1
+transport.receiver.expectedSeq.seq= 3

    {BeginTransmit_in_TransportLayer1

        {Configure_in_TransportTx1
        }Configure_in_TransportTx_

{Send_in_MockLinkLayer1

        {GetSegment_in_TransportTx1
*        *GetSegment_in_TransportTx2
*        *uint16_t numToSend= 22
*        *GetSegment_in_TransportTx3
*        +        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4298058<- e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1
@@@@        *write_in_UInt8_static = 4299200->195

*            *FORMAT_LOG_BLOCK(logger, flags::TRANSPORT_TX, 'FIR: %d FIN: %d SEQ: %u LEN: %zu', fir, fin, sequence.Get()
*            *FIR: 1
*            *FIN: 1
*            *SEQ: 3
*            *LEN: 22
+        **inspect_RSeq**
+        @*buffer->buffer_[i]= 4299200<- c3 e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1
        *GetSegment_in_TransportTx2
        }GetSegment_in_TransportTx2_
}Send_in_MockLinkLayer_
    }BeginTransmit_in_TransportLayer5_
+**inspect_RSeq**
+@*buffer->buffer_[i]= 4299200<- c3 e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 0 78 e6 b7 2d 60 1

    {FormatHeader_in_LinkFrame_static1

        {ControlByte_in_LinkHeader_static1
*        *boolean aIsMaster= 0
*        *boolean aFcb= 0
*        *boolean aFcvDfc= 0
*        *LinkFunction_uint8_t aFunc= 68
        }ControlByte_in_LinkHeader_static_
*        *uint8_t ret= 68
    *FormatHeader_in_LinkFrame_static2
*    *LinkHeader header.ctrl= 68
*    ***FORMAT_LOGGER_BLOCK(pLogger, flags::LINK_TX, 'Function: %s Dest: %u Source: %u Length: %u')***

        {Write_in_LinkHeader1
@@@@        *write_to 6477652->5
@@@@        *write_to 6477653->100
@@@@        *write_to 6477654->28
@@@@        *write_in_UInt16_static = 6477656->2
@@@@        *write_in_UInt16_static = 6477658->1
@@@@        *write_to 6477655->68

            {AddCrc_in_CRC_static1
*            *uint16_t length =8
@@@@            *write_in_UInt16_static = 6477660->58120
            }AddCrc_in_CRC_static_
        }Write_in_LinkHeader_
    }FormatHeader_in_LinkFrame_static2_

    {WriteUserData_in_LinkFrame_static1
*    *uint16_t length= 23

        {AddCrc_in_CRC_static1
*        *uint16_t length =16
@@@@        *write_in_UInt16_static = 6477678->36063
        }AddCrc_in_CRC_static_

        {AddCrc_in_CRC_static1
*        *uint16_t length =7
@@@@        *write_in_UInt16_static = 6477687->33651
        }AddCrc_in_CRC_static_
    }WriteUserData_in_LinkFrame_static_

}***Send_To_Outstation2***
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 1c 44 2 0 1 0 8 e3 c3 e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 df 8c 0 78 e6 b7 2d 60 1 73 83
+**inspect_RSeq**
+@*buffer->buffer_[i]= 6477652<- 5 64 1c 44 2 0 1 0 8 e3 c3 e2 81 86 0 16 5 28 1 0 4b 28 1 17 0 0 df 8c 0 78 e6 b7 2d 60 1 73 83

{OnTxReady_in_OutstationMrzsObject1

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

                IsIdle_in_OutstationState_override1
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
}OnTxReady_in_OutstationMrzsObject_
parser.Statistics().numBodyCrcError=  0
parser.Statistics().numHeaderCrcError=  0
