
#include "log_info.h"

#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

////#include "utils/BufferHelpers.h"

////using namespace opendnp3;

///   void OContext_in_OContext(OContext *pOContext,
///             Addresses* addresses,
///             OutstationConfig* config,
///             DatabaseConfig* db_config,
//             const Logger& logger,
///             IExecutorExe4cpp* executor,
///             ILowerLayer* lower,
///             ICommandHandler* commandHandler,
///             IOutstationApplication* application);

void OutstationMrzsObject_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject, OutstationConfig* config, DatabaseConfig* db_config)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{OutstationMrzsObject_in_OutstationMrzsObject1"<<'\n';
#endif
////    : exe(std::make_shared<exe4cpp::MockExecutor>()),
  MrzsExecutor_in_MrzsExecutor(&(pOutstationMrzsObject->exe));

////      lower(std::make_shared<MockLowerLayer>()),
  MrzsLowerLayer_in_MrzsLowerLayer(&(pOutstationMrzsObject->lower));

////      cmdHandler(std::make_shared<MockCommandHandler>(CommandStatus::SUCCESS)),
  MrzsCommandHandler_in_MrzsCommandHandler(&(pOutstationMrzsObject->cmdHandler), CommandStatus_SUCCESS);

////      application(std::make_shared<MockOutstationApplication>()),
  MrzsOutstationApplication_in_MrzsOutstationApplication(&(pOutstationMrzsObject->application));

//  void Addresses_in_AddressesOver1(Addresses *pAddresses);
////      context(Addresses(), config, db_config, log.logger, exe, lower, cmdHandler, application)
  Addresses aAddresses;
//  Addresses_in_AddressesOver1(&aAddresses);
  Addresses_in_AddressesOver2(&aAddresses, 1, 2);

  OContext_in_OContext(&(pOutstationMrzsObject->context),
///             Addresses* addresses,
                       &aAddresses,
///             OutstationConfig* config,
                       config,
///             DatabaseConfig* db_config,
                       db_config,

//             const Logger& logger,
///             IExecutorExe4cpp* executor,
                       &(pOutstationMrzsObject->exe.iIExecutorExe4cpp),
///             ILowerLayer* lower,
                       &(pOutstationMrzsObject->lower.iILowerLayer),

///             ICommandHandler* commandHandler,
                       &(pOutstationMrzsObject->cmdHandler.sSimpleCommandHandler.iICommandHandler),

///             IOutstationApplication* application);
                       &(pOutstationMrzsObject->application.iIOutstationApplication));

//    void SetUpperLayer_in_HasUpperLayer(HasUpperLayer *pHasUpperLayer, IUpperLayer* upperLayer);
////    lower->SetUpperLayer(context);
  SetUpperLayer_in_HasUpperLayer(&(pOutstationMrzsObject->lower.hHasUpperLayer), &(pOutstationMrzsObject->context.iIUpperLayer));

#ifdef  LOG_INFO
  std::cout<<"}OutstationMrzsObject_in_OutstationMrzsObject_"<<'\n';
  decrement_stack_info();
#endif
}

void RepairCRC_in_DNPHelpers(RSeq_for_Uint16_t* rseq)
{
////    HexSequence hs(arData);
//  HexSequence hs;
//  HexSequence_in_HexSequence(&hs, arData);

  // validate the size of the data
//uint16_t Size_in_CopyableBuffer(CopyableBuffer *pCopyableBuffer);
////    REQUIRE(hs.Size() >= 10);
  uint16_t sz = rseq->hHasLength.m_length;//Size_in_CopyableBuffer(&(hs.bByteStr.cCopyableBuffer));
//  qDebug()<<"Size_in_CopyableBuffer= "<<sz;

////    REQUIRE(hs.Size() <= 292);
//  qDebug()<<"REQUIRE(hs.Size() >= 10)";
//  qDebug()<<"REQUIRE(hs.Size() <= 292)";

  // first determine how much user data is present
  uint16_t full_blocks = (/*hs.Size()*/sz - 10) / 18;
  uint16_t partial_size = (/*hs.Size()*/sz - 10) % 18;

  // can't have a partial size < 3 since even 1 byte requires 2 CRC bytes
  if (partial_size > 0)
  {
////        REQUIRE(partial_size >= 3);
#ifdef  LOG_INFO
    std::cout<<'\n';
    std::cout<<"partial_size= "<<partial_size<<'\n';
#endif
  }

  // repair the header crc
//void AddCrc_in_CRC_static(uint8_t* input, uint16_t length);
////    CRC::AddCrc(hs, 8);
  AddCrc_in_CRC_static(rseq->buffer_, 8);//hs.bByteStr.cCopyableBuffer.buffer, 8);

////    uint8_t* ptr = hs + 10;
  uint8_t* ptr = rseq->buffer_ + 10;//hs.bByteStr.cCopyableBuffer.buffer + 10;

  // repair the full blocks
  for (uint16_t i = 0; i < full_blocks; i++)
  {
////        CRC::AddCrc(ptr, 16);
    AddCrc_in_CRC_static(ptr, 16);
    ptr += 18;
  }

  // repair the partial block
  if (partial_size > 0)
////        CRC::AddCrc(ptr, partial_size - 2);
    AddCrc_in_CRC_static(ptr, partial_size - 2);

//RSeq_for_Uint16_t ToRSeq_in_CopyableBuffer(CopyableBuffer *pCopyableBuffer);
////    return HexConversions::to_hex(hs.ToRSeq(), true);
//  RSeq_for_Uint16_t rseq = ToRSeq_in_CopyableBuffer(&(hs.bByteStr.cCopyableBuffer));
//  return to_hex_in_HexConversionsOver2(&rseq, true);
}

uint16_t LowerLayerUp_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{LowerLayerUp_in_OutstationMrzsObject1"<<'\n';
#endif
//boolean OnLowerLayerUp_in_OContext(OContext*);
////    context.OnLowerLayerUp();
  OnLowerLayerUp_in_OContext(&(pOutstationMrzsObject->context));

#ifdef  LOG_INFO
  std::cout<<"}LowerLayerUp_in_OutstationMrzsObject_"<<'\n';
#endif
////    return exe->run_many();
  return 0;//run_many_in_MockExecutor(&(pOutstationTestObject->exe), 100);
}

uint16_t LowerLayerDown_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{LowerLayerDown_in_OutstationMrzsObject1"<<'\n';
#endif
//boolean OnLowerLayerDown_in_OContext(OContext*);
////    context.OnLowerLayerDown();
  OnLowerLayerDown_in_OContext(&(pOutstationMrzsObject->context));

#ifdef  LOG_INFO
  std::cout<<"}LowerLayerDown_in_OutstationMrzsObject_"<<'\n';
#endif
////    return exe->run_many();
  return 0;//run_many_in_MockExecutor(&(pOutstationTestObject->exe), 100);
}

////size_t OutstationTestObject::OnTxReady()
uint16_t OnTxReady_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{OnTxReady_in_OutstationMrzsObject1"<<'\n';
#endif
//boolean OnTxReady_in_OContext(OContext* pOContext)
////    context.OnTxReady();
   OnTxReady_in_OContext(&(pOutstationMrzsObject->context));
#ifdef  LOG_INFO
  std::cout<<"}OnTxReady_in_OutstationMrzsObject_"<<'\n';
#endif
////    return exe->run_many();
  return 0;//run_many_in_MockExecutor(&(pOutstationTestObject->exe), 100);
}
