********SUITE('9Class1TwoByteLimitedCount')********

DatabaseConfig_in_DatabaseConfig1
OutstationTestObject_in_OutstationTestObject1

+    OContext_in_OContext1

        EventLists_in_EventLists1
        TotalEvents_in_EventBufferConfig1
*        *pEventBufferConfig->maxBinaryEvents= 10
*        *pEventBufferConfig->maxDoubleBinaryEvents=10
*        *pEventBufferConfig->maxAnalogEvents= 10
*        *pEventBufferConfig->maxCounterEvents= 10
*        *pEventBufferConfig->maxBinaryOutputStatusEvents= 10
*        *pEventBufferConfig->maxAnalogOutputStatusEvents= 10
*        *pEventBufferConfig->maxOctetStringEvents= 10

        List_for_EventRecord_in_List_for_EventRecordOver2_1
*        *uint32_t maxSize= 80

        List_for_EventRecord_in_List_for_EventRecordOver1_1

        Database_in_Database1

        StaticDataMap_for_BinarySpec_in_StaticDataMap_for_BinarySpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_DoubleBitBinarySpec_in_StaticDataMap_for_DoubleBitBinarySpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_AnalogSpec_in_StaticDataMap_for_AnalogSpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_CounterSpec_in_StaticDataMap_for_CounterSpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_FrozenCounterSpec_in_StaticDataMap_for_FrozenCounterSpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_BinaryOutputStatusSpec_in_StaticDataMap_for_BinaryOutputStatusSpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_AnalogOutputStatusSpec_in_StaticDataMap_for_AnalogOutputStatusSpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_TimeAndIntervalSpec_in_StaticDataMap_for_TimeAndIntervalSpecOver2_1
*        *config.size()= 5

        StaticDataMap_for_OctetStringSpec_in_StaticDataMap_for_OctetStringSpecOver2_1
*        *config.size()= 5

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
LowerLayerUp_in_OutstationTestObject1

+    OnLowerLayerUp_in_OContext1

+        CheckForTaskStart_in_OContext1
+        CheckForTaskStart_in_OContext2

+            CheckForUnsolicitedNull_in_OContext1

                IsIdle_in_OutstationState1

                IsIdle_in_StateIdle_override1
+        CheckForTaskStart_in_OContext3

+            CheckForUnsolicited_in_OContext1

                IsIdle_in_OutstationState1

                IsIdle_in_StateIdle_override1
update_in_9Class1TwoByteLimitedCount

    update_in_StaticDataMap_for_BinarySpecOver2_1
*    *iter->second.config.eEventConfig.clazz= 2
+    ++++++int16_t nnn = iter->first=2

        convert_to_event_class_in_StaticDataMap_static1
*        *PointClass_uint8_t pc= 2
*        *PointClass_Class1= 2
*        *PointClass_Class2= 4
*        *PointClass_Class3= 8
    update_in_StaticDataMap_for_BinarySpecOver2_2

        UpdateAny_BinarySpec_in_EventBuffer1

            Update_BinarySpec_in_EventUpdate_static1

                Instance_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_static1

    update_in_StaticDataMap_for_BinarySpecOver2_1
*    *iter->second.config.eEventConfig.clazz= 2
+    ++++++int16_t nnn = iter->first=1

        convert_to_event_class_in_StaticDataMap_static1
*        *PointClass_uint8_t pc= 2
*        *PointClass_Class1= 2
*        *PointClass_Class2= 4
*        *PointClass_Class3= 8
    update_in_StaticDataMap_for_BinarySpecOver2_2

        UpdateAny_BinarySpec_in_EventBuffer1

            Update_BinarySpec_in_EventUpdate_static1

                Instance_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_static1

    update_in_StaticDataMap_for_BinarySpecOver2_1
*    *iter->second.config.eEventConfig.clazz= 2
+    ++++++int16_t nnn = iter->first=3

        convert_to_event_class_in_StaticDataMap_static1
*        *PointClass_uint8_t pc= 2
*        *PointClass_Class1= 2
*        *PointClass_Class2= 4
*        *PointClass_Class3= 8
    update_in_StaticDataMap_for_BinarySpecOver2_2

        UpdateAny_BinarySpec_in_EventBuffer1

            Update_BinarySpec_in_EventUpdate_static1

                Instance_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_static1

+    HandleNewEvents_in_OContext1

+        CheckForTaskStart_in_OContext1
+        CheckForTaskStart_in_OContext2

+            CheckForUnsolicitedNull_in_OContext1

                IsIdle_in_OutstationState1

                IsIdle_in_StateIdle_override1
+        CheckForTaskStart_in_OContext3

+            CheckForUnsolicited_in_OContext1

                IsIdle_in_OutstationState1

                IsIdle_in_StateIdle_override1
SendToOutstation_in_OutstationTestObject1

+    OnReceive_in_OContext1

+        ProcessMessage_in_OContext1
*        *FORMAT_HEX_BLOCK(this->logger, flags::APP_HEX_RX, message.payload, 18, 18)

            ParseRequest_in_APDUHeaderParser_static1
*            *buffer->buffer_[i]=  c0
*            *buffer->buffer_[i]=  1
*            *buffer->buffer_[i]=  3c
*            *buffer->buffer_[i]=  2
*            *buffer->buffer_[i]=  8
*            *buffer->buffer_[i]=  2
*            *buffer->buffer_[i]=  0
            ParseRequest_in_APDUHeaderParser_static3

+            ProcessObjects_in_OContext1

+                ProcessRequest_in_OContext1

+                    OnReceiveSolRequest_in_OContext1
*                    *analyze this request to see how it compares to the last request
                    OnReceiveSolRequest_in_OContext8

+                        ProcessNewRequest_in_OContext1
@@@@                        *FunctionCode_READ

                            OnNewReadRequest_in_StateIdle_override1

+                            RespondToReadRequest_in_OContext1

+                                HandleRead_in_OContext1
*                                *buffer->buffer_[i]=  3c
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  8
*                                *buffer->buffer_[i]=  2
*                                *buffer->buffer_[i]=  0
                                HandleRead_in_OContext2

                                    Unselect_in_EventStorage1

                                        Foreach_in_List_for_EventRecord1

                                            Iterate_in_List_for_EventRecord1
*                                            *pList_for_EventRecord->head= 6412496

                                                From__in__Iterator_in_List_for_EventRecord_static1
*                                                *Node_for_EventRecord* start= 6412496

                                                Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                *Node_for_EventRecord* start= 6412496
                                HandleRead_in_OContext3
                                HandleRead_in_OContext4

                                    ReadHandler_in_ReadHandler1

                                    IAPDUHandler_in_IAPDUHandler1
*                                    *pIAPDUHandler= 6410044

                                    Parse_in_APDUParser_static1
*                                    *buffer->buffer_[i]=  3c
*                                    *buffer->buffer_[i]=  2
*                                    *buffer->buffer_[i]=  8
*                                    *buffer->buffer_[i]=  2
*                                    *buffer->buffer_[i]=  0

                                        ParseSinglePass_in_APDUParser_static1
*                                        *IAPDUHandler* pHandler=0
*                                        *IWhiteList* pWhiteList=6410044
*                                        *buffer->buffer_[i]=  3c
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  8
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  0
*                                        *copy
*                                        *buffer->buffer_[i]=  3c
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  8
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  0

                                            ParseHeader_in_APDUParser_static1
*                                            *buffer->buffer_[i]=  3c
*                                            *buffer->buffer_[i]=  2
*                                            *buffer->buffer_[i]=  8
*                                            *buffer->buffer_[i]=  2
*                                            *buffer->buffer_[i]=  0

                                                ParseObjectHeader_in_ObjectHeaderParser_static1
*                                                *buffer->buffer_[i]=  3c
*                                                *buffer->buffer_[i]=  2
*                                                *buffer->buffer_[i]=  8
*                                                *buffer->buffer_[i]=  2
*                                                *buffer->buffer_[i]=  0
                                            ParseHeader_in_APDUParser_static2

                                                GetRecord_in_GroupVariationRecord_static1
*                                                *uint8_t group= 60
*                                                *uint8_t variation= 2

                                                    GetEnumAndType_in_GroupVariationRecord_static1
*                                                    *uint8_t group= 60
*                                                    *uint8_t variation= 2

                                                        GetType_in_GroupVariationRecord_static1
*                                                        *uint8_t group= 60
*                                                        *uint8_t variation= 2
*                                                        *GroupVariationType_EVENT
*                                                    *GroupVariation_uint16_t enumeration= 3c02
                                            ParseHeader_in_APDUParser_static3
                                            ParseHeader_in_APDUParser_static4

                                            ParseQualifier_in_APDUParser_static1
*                                            *QualifierCode_uint8_t tmp =8
@@@@                                            *QualifierCode_UINT16_CNT*

                                            NumParser_in_NumParser1

                                            ParseHeader_in_CountParser_static1
*                                            *buffer->buffer_[i]=  2
*                                            *buffer->buffer_[i]=  0

                                                ParseCount_in_NumParser1
                                            ParseHeader_in_CountParser_static2
*                                            *ParseResult_uint8_t result =0
*                                            *uint16_t count =2
*                                            *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*                                            *record.group= 60
*                                            *record.variation= 2
*                                            *IAPDUHandler* pHandler =0
                                    Parse_in_APDUParser_static2

                                    ParseSinglePass_in_APDUParser_static1
*                                    *IAPDUHandler* pHandler=6410044
*                                    *IWhiteList* pWhiteList=0
*                                    *buffer->buffer_[i]=  3c
*                                    *buffer->buffer_[i]=  2
*                                    *buffer->buffer_[i]=  8
*                                    *buffer->buffer_[i]=  2
*                                    *buffer->buffer_[i]=  0
*                                    *copy
*                                    *buffer->buffer_[i]=  3c
*                                    *buffer->buffer_[i]=  2
*                                    *buffer->buffer_[i]=  8
*                                    *buffer->buffer_[i]=  2
*                                    *buffer->buffer_[i]=  0

                                        ParseHeader_in_APDUParser_static1
*                                        *buffer->buffer_[i]=  3c
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  8
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  0

                                            ParseObjectHeader_in_ObjectHeaderParser_static1
*                                            *buffer->buffer_[i]=  3c
*                                            *buffer->buffer_[i]=  2
*                                            *buffer->buffer_[i]=  8
*                                            *buffer->buffer_[i]=  2
*                                            *buffer->buffer_[i]=  0
                                        ParseHeader_in_APDUParser_static2

                                            GetRecord_in_GroupVariationRecord_static1
*                                            *uint8_t group= 60
*                                            *uint8_t variation= 2

                                                GetEnumAndType_in_GroupVariationRecord_static1
*                                                *uint8_t group= 60
*                                                *uint8_t variation= 2

                                                    GetType_in_GroupVariationRecord_static1
*                                                    *uint8_t group= 60
*                                                    *uint8_t variation= 2
*                                                    *GroupVariationType_EVENT
*                                                *GroupVariation_uint16_t enumeration= 3c02
                                        ParseHeader_in_APDUParser_static3
                                        ParseHeader_in_APDUParser_static4

                                        ParseQualifier_in_APDUParser_static1
*                                        *QualifierCode_uint8_t tmp =8
@@@@                                        *QualifierCode_UINT16_CNT*

                                        NumParser_in_NumParser1

                                        ParseHeader_in_CountParser_static1
*                                        *buffer->buffer_[i]=  2
*                                        *buffer->buffer_[i]=  0

                                            ParseCount_in_NumParser1
                                        ParseHeader_in_CountParser_static2
*                                        *ParseResult_uint8_t result =0
*                                        *uint16_t count =2
*                                        *FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*                                        *record.group= 60
*                                        *record.variation= 2
*                                        *IAPDUHandler* pHandler =6410044
                                        ParseHeader_in_CountParser_static4
*                                        *uint16_t count =2

                                            OnHeader_CountHeader_in_IAPDUHandler1

                                                ProcessHeader_CountHeader_in_ReadHandler_override1

                                                    SelectCount_in_EventBuffer1
*                                                    *uint16_t count= 2

                                                        SelectMaxCount_in_EventBuffer1
*                                                        *uint32_t maximum= 2
@@@@                                                        *GroupVariation_Group60Var2

                                                            SelectByClass_EventClass_in_EventBuffer1
*                                                            *uint32_t max= 2
*                                                            *EventClass_uint8_t clazz= 0

                                                            SelectByClass_in_EventStorageOver2_1
*                                                            *EventClass_uint8_t clazz= 0
*                                                            *uint32_t max= 2

                                                                SelectByClass_in_EventSelection_static1
*                                                                *uint32_t max= 2

                                                                    Iterate_in_List_for_EventRecord1
*                                                                    *pList_for_EventRecord->head= 6412496

                                                                        From__in__Iterator_in_List_for_EventRecord_static1
*                                                                        *Node_for_EventRecord* start= 6412496

                                                                        Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                                        *Node_for_EventRecord* start= 6412496
                                                                SelectByClass_in_EventSelection_static2
                                                                SelectByClass_in_EventSelection_static2
*                                                            *uint32_t tmp= 2

                                                Record_in_IAPDUHandler1
                                HandleRead_in_OContext5
*                                *ParseResult_uint8_t result =0

                                    Load_in_EventBuffer1

                                        Write_in_EventWriting_static1

                                            Iterate_in_List_for_EventRecord1
*                                            *pList_for_EventRecord->head= 6412496

                                                From__in__Iterator_in_List_for_EventRecord_static1
*                                                *Node_for_EventRecord* start= 6412496

                                                Iterator_in_List_for_EventRecord__in__Iterator_in_List_for_EventRecord1
*                                                *Node_for_EventRecord* start= 6412496

                                            WriteSome_in_EventWriting_static1
                                            WriteSome_in_EventWriting_static2

                                                WriteSome_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_override1

                                                WriteHeaderWithReserve_in_HeaderWriter1
*                                                *qc= 40
*                                                *reserve= 5

                                                WriteHeader_in_HeaderWriter1
*                                                *id.group= 2
*                                                *id.variation= 1
*                                                *qc= 40

                                                PrefixedWriteIterator_for_UInt16_Binary_in_PrefixedWriteIterator_for_UInt16_BinaryOver2_1

                                                PrefixedWriteIterator_for_UInt16_Binary_destr_PrefixedWriteIterator_for_UInt16_Binary1
*                                        *uint16_t num_written =2

                                            WriteSome_in_EventWriting_static1
*                                        *uint16_t num_written =0

                                            NumSelected_in_EventStorage1
*                                            *(pEventStorage->state).counters.selected= 0
*                                        *boolean tmp= 1

                                        Load_in_Database1

                                        load_type_for_Analog_in_Database_static1
*                                        *map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_Binary_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_BinaryOutputStatus_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_AnalogOutputStatus_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_DoubleBitBinary_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_Counter_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_FrozenCounter_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_OctetString_in_Database_static1
*                                        *map.map.size()= 5
*                                        *if (iter == map.end())

                                        load_type_for_TimeAndInterval_in_Database_static1
*                                        *map.map.size()= 5
                                        load_type_for_TimeAndInterval_in_Database_static2
*                                        *if (iter == map.end())

+                                    GetResponseIIN_in_OContext1
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
*                                    IINField temp1 = GetDynamicIIN_in_OContext(pOContext)
*                                    *uint8_t LSB=2
*                                    *uint8_t MSB=0
*                                    IINField temp3 = ToIIN_in_ApplicationIIN(&temp)
*                                    *uint8_t LSB=0
*                                    *uint8_t MSB=0
*                                    IINField temp4 = operatorOR_in_IINField(&temp2, &temp3)
*                                    *uint8_t LSB=82
*                                    *uint8_t MSB=0

+                                    BeginResponseTx_in_OContext1

+                                        CheckForBroadcastConfirmation_in_OContext1

                                    StateSolicitedConfirmWait_in_StateSolicitedConfirmWait1

                                    OutstationState_in_OutstationState1

+        CheckForTaskStart_in_OContext1
+        CheckForTaskStart_in_OContext2

+            CheckForUnsolicitedNull_in_OContext1
+        CheckForTaskStart_in_OContext3

+            CheckForUnsolicited_in_OContext1
temp=     E0 81 82 00 02 01 28 02 00 02 00 00 01 00 81
response= E0 81 82 00 02 01 28 02 00 02 00 01 01 00 81
