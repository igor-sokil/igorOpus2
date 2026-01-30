********SUITE('1rejects with FuncNotSupported if assign class not supported')********

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
*            *buffer->buffer_[i]=  16
*            *buffer->buffer_[i]=  3c
*            *buffer->buffer_[i]=  3
*            *buffer->buffer_[i]=  6
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  0
*            *buffer->buffer_[i]=  6
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
*                        *IINBit_FUNC_NOT_SUPPORTED

                    GetResponseIIN_in_OContext1

                    BeginResponseTx_in_OContext1

                        CheckForBroadcastConfirmation_in_OContext1

                    StateIdle_in_StateIdle1

                    OutstationState_in_OutstationState1

        CheckForTaskStart_in_OContext1

            CheckForUnsolicitedNull_in_OContext1

            CheckForUnsolicited_in_OContext1
REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 01')
temp= C0 81 80 01
