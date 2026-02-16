
#include "../../../../log_info.h"
#ifdef  LOG_INFO
#include <iostream>
#endif

#include "../../../../header_dnp3.h"
//#include "BufferHelpers.h"
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
  Addresses_in_AddressesOver1(&aAddresses);

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
/*
//Message mMessage1_global_in_OutstationTestObject;
////size_t OutstationTestObject::SendToOutstation(const std::string& hex)
uint16_t SendToOutstation_in_OutstationMrzsObject(OutstationTestObject *pOutstationTestObject, uint8_t* input_packet)//std::string& hex)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"{SendToOutstation_in_OutstationTestObject1"<<'\n';
#endif
//   void HexSequence_in_HexSequence(HexSequence *pHexSequence, std::string& hex);
////    HexSequence hs(hex);
//  HexSequence hs;
//  HexSequence_in_HexSequence(&hs, hex);

//RSeq_for_Uint16_t ToRSeq_in_CopyableBuffer(CopyableBuffer *pCopyableBuffer);
//&(hs.bByteStr.cCopyableBuffer)
//boolean OnReceive_in_OContext(OContext*, Message* message);
//void  Message_in_Message(Message *pMessage, Addresses *addresses, RSeq_for_Uint16_t* payload);
////    context.OnReceive(Message(Addresses(), hs.ToRSeq()));
//  RSeq_for_Uint16_t temp = //ToRSeq_in_CopyableBuffer(&(hs.bByteStr.cCopyableBuffer));
 RSeq_for_Uint16_t temp;
 RSeq_for_Uint16_t_in_RSeq_for_Uint16_tOver2(&temp, &input_packet[1], input_packet[0]);

  Addresses aAddresses;
  Addresses_in_AddressesOver1(&aAddresses);
  Message mMessage;
  Message_in_Message(&mMessage, &aAddresses, &temp);

   OnReceive_in_OContext(&(pOutstationTestObject->context), &mMessage);

////    return exe->run_many();
#ifdef  LOG_INFO
  std::cout<<"}SendToOutstation_in_OutstationTestObject_"<<'\n';
  decrement_stack_info();
#endif
//  return run_many_in_MockExecutor(&(pOutstationTestObject->exe), 100);
  return 0;
}

void Transaction_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject, void (*apply)(IUpdateHandler*))//std::function<void(opendnp3::IUpdateHandler&)>& apply)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{Transaction_in_OutstationTestObject1"<<'\n';
#endif
  // auto& handler = context.GetUpdateHandler();
//IUpdateHandler* GetUpdateHandler_in_OContext(OContext *pOContext);
////        apply(context.GetUpdateHandler());
  apply(GetUpdateHandler_in_OContext(&(pOutstationTestObject->context)));

//void HandleNewEvents_in_OContext(OContext *pOContext);
////        context.HandleNewEvents();
  HandleNewEvents_in_OContext(&(pOutstationTestObject->context));
#ifdef  LOG_INFO
  std::cout<<"}Transaction_in_OutstationTestObject_"<<'\n';
#endif
}
*/

uint16_t AdvanceTime_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject, TimeDuration* td)
{
//uint16_t advance_time_in_MockExecutor(MockExecutor *pMockExecutor, uint32_t duration);
////    exe->advance_time(td.value);
//  advance_time_in_MrzsExecutor(&(pOutstationMrzsObject->exe), td->duration_value);
////    return exe->run_many();
  return 0;//run_many_in_MockExecutor(&(pOutstationTestObject->exe), 100);
}

