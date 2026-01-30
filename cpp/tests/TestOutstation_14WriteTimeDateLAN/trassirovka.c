********SUITE('14WriteTimeDateLAN')********

EventBuffer_in_EventBufferOver11
pEventBufferConfig->maxBinaryEvents=  0
;; pEventBufferConfig->maxDoubleBinaryEvents= 0
;; pEventBufferConfig->maxAnalogEvents=  0
;; pEventBufferConfig->maxCounterEvents=  0
;; pEventBufferConfig->maxBinaryOutputStatusEvents=  0
;; pEventBufferConfig->maxAnalogOutputStatusEvents=  0
;; pEventBufferConfig->maxOctetStringEvents=  0
StateIdle_in_StateIdle1

EventBuffer_in_EventBufferOver11

SendToOutstation_in_OutstationTestObject1
SendToOutstation_in_OutstationTestObject2

OnReceive_in_OContext1

ProcessMessage_in_OContext1
FORMAT_HEX_BLOCK(this->logger, flags::APP_HEX_RX, message.payload, 18, 18)
ProcessMessage_in_OContext2

ParseRequest_in_APDUHeaderParser_static1
ParseRequest_in_APDUHeaderParser_static3
ProcessMessage_in_OContext3
ProcessMessage_in_OContext4

ProcessObjects_in_OContext1
ProcessObjects_in_OContext2
ProcessObjects_in_OContext3
ProcessObjects_in_OContext4
ProcessObjects_in_OContext5

ProcessRequest_in_OContext1
ProcessRequest_in_OContext2

OnReceiveSolRequest_in_OContext1
OnReceiveSolRequest_in_OContext8

ProcessNewRequest_in_OContext1
ProcessNewRequest_in_OContext3

OnNewNonReadRequest_in_StateIdle_override1

RespondToNonReadRequest_in_OContext1

HandleNonReadResponse_in_OContext1
*FunctionCode_WRITE

HandleWrite_in_OContext1

HandleWrite_in_OContext2

WriteHandler_in_WriteHandler1

Parse_in_APDUParser_static1
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0

ParseSinglePass_in_APDUParser_static1
*IAPDUHandler* pHandler=0
*IWhiteList* pWhiteList=6410392
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
ParseSinglePass_in_APDUParser_static2
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0

ParseHeader_in_APDUParser_static1
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0

ParseObjectHeader_in_ObjectHeaderParser_static1
ParseHeader_in_APDUParser_static2

GetRecord_in_GroupVariationRecord_static1
*uint8_t group= 50
*uint8_t variation= 3

GetEnumAndType_in_GroupVariationRecord_static1
*uint8_t group= 50
*uint8_t variation= 3

GetType_in_GroupVariationRecord_static1
*uint8_t group= 50
*uint8_t variation= 3
*GroupVariationType_OTHER
ParseHeader_in_APDUParser_static3
ParseHeader_in_APDUParser_static4

ParseQualifier_in_APDUParser_static1
*IAPDUHandler* pHandler= 0
*QualifierCode_uint8_t tmp =7
*QualifierCode_UINT8_CNT*

NumParser_in_NumParser1

ParseHeader_in_CountParser_static1

ParseCount_in_NumParser1
*FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*record.group= 50
*record.variation= 3
*GroupVariation_Group50Var3

Process_in_CountParser1
ParseSinglePass_in_APDUParser_static3
*ParseResult_uint8_t result =0
Parse_in_APDUParser_static2
*ParseResult_uint8_t result =0

ParseSinglePass_in_APDUParser_static1
*IAPDUHandler* pHandler=6410392
*IWhiteList* pWhiteList=0
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
ParseSinglePass_in_APDUParser_static2
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0

ParseHeader_in_APDUParser_static1
*buffer->buffer_[i]=  32
*buffer->buffer_[i]=  3
*buffer->buffer_[i]=  7
*buffer->buffer_[i]=  1
*buffer->buffer_[i]=  d2
*buffer->buffer_[i]=  4
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0
*buffer->buffer_[i]=  0

ParseObjectHeader_in_ObjectHeaderParser_static1
ParseHeader_in_APDUParser_static2

GetRecord_in_GroupVariationRecord_static1
*uint8_t group= 50
*uint8_t variation= 3

GetEnumAndType_in_GroupVariationRecord_static1
*uint8_t group= 50
*uint8_t variation= 3

GetType_in_GroupVariationRecord_static1
*uint8_t group= 50
*uint8_t variation= 3
*GroupVariationType_OTHER
ParseHeader_in_APDUParser_static3
ParseHeader_in_APDUParser_static4

ParseQualifier_in_APDUParser_static1
*IAPDUHandler* pHandler= 6410392
*QualifierCode_uint8_t tmp =7
*QualifierCode_UINT8_CNT*

NumParser_in_NumParser1

ParseHeader_in_CountParser_static1

ParseCount_in_NumParser1
*FORMAT_LOGGER_BLOCK(pLogger, settings.LoggingLevel(), '%03u,%03u %s, %s [%u]', record.group, record.variation
*record.group= 50
*record.variation= 3
*GroupVariation_Group50Var3

Process_in_CountParser1

OnHeader_CountHeader_for_Group50Var3_in_IAPDUHandler1

ProcessHeader_CountHeader_for_Group50Var3_in_WriteHandler_override1

Record_in_IAPDUHandler1
ParseSinglePass_in_APDUParser_static3
*ParseResult_uint8_t result =0

GetResponseIIN_in_OContext1
RespondToNonReadRequest_in_OContext2
BeginResponseTx_in_OContext1

CheckForBroadcastConfirmation_in_OContext1
BeginResponseTx_in_OContext2
BeginResponseTx_in_OContext3
StateIdle_in_StateIdle1
SendToOutstation_in_OutstationTestObject3
REQUIRE(t.lower->PopWriteAsHex() == 'C1 81 80 04')
temp= C1 81 80 04
