#include "log_info.h"

#include "header_dnp3.h"
#include "MrzsCommandHandler.h"

void  MrzsCommandHandler_in_MrzsCommandHandler(MrzsCommandHandler *pMrzsCommandHandler, CommandStatus_uint8_t status)/// = opendnp3::CommandStatus::SUCCESS)
{
//    void SimpleCommandHandler_in_SimpleCommandHandler(SimpleCommandHandler *pSimpleCommandHandler, CommandStatus_uint8_t status);
////        : opendnp3::SimpleCommandHandler(status)
  SimpleCommandHandler_in_SimpleCommandHandler(&(pMrzsCommandHandler->sSimpleCommandHandler), status);

  pMrzsCommandHandler->sSimpleCommandHandler.pDoOperate_ControlRelayOutputBlock_in_SimpleCommandHandler = DoOperate_ControlRelayOutputBlock_in_MrzsCommandHandler_override;
  pMrzsCommandHandler->sSimpleCommandHandler.pDoOperate_AnalogOutputInt16_in_SimpleCommandHandler = DoOperate_AnalogOutputInt16_in_MrzsCommandHandler_override;
  pMrzsCommandHandler->sSimpleCommandHandler.pDoOperate_AnalogOutputInt32_in_SimpleCommandHandler = DoOperate_AnalogOutputInt32_in_MrzsCommandHandler_override;
  pMrzsCommandHandler->sSimpleCommandHandler.pDoOperate_AnalogOutputFloat32_in_SimpleCommandHandler = DoOperate_AnalogOutputFloat32_in_MrzsCommandHandler_override;
  pMrzsCommandHandler->sSimpleCommandHandler.pDoOperate_AnalogOutputDouble64_in_SimpleCommandHandler = DoOperate_AnalogOutputDouble64_in_MrzsCommandHandler_override;

  setParentPointer_in_SimpleCommandHandler(&(pMrzsCommandHandler->sSimpleCommandHandler), pMrzsCommandHandler);
}

void DoOperate_ControlRelayOutputBlock_in_MrzsCommandHandler_override(void* pSimpleCommandHandler, ControlRelayOutputBlock* command, uint16_t index, OperateType_uint8_t opType)
{
  MrzsCommandHandler* parent = (MrzsCommandHandler*)getParentPointer_in_SimpleCommandHandler((SimpleCommandHandler*) pSimpleCommandHandler);
  DoOperate_ControlRelayOutputBlock_in_MrzsCommandHandler(parent, command, index, opType);
}
void DoOperate_AnalogOutputInt16_in_MrzsCommandHandler_override(void* pSimpleCommandHandler, AnalogOutputInt16* command, uint16_t index, OperateType_uint8_t opType)
{
  MrzsCommandHandler* parent = (MrzsCommandHandler*)getParentPointer_in_SimpleCommandHandler((SimpleCommandHandler*) pSimpleCommandHandler);
  DoOperate_AnalogOutputInt16_in_MrzsCommandHandler(parent, command, index, opType);
}
void DoOperate_AnalogOutputInt32_in_MrzsCommandHandler_override(void* pSimpleCommandHandler, AnalogOutputInt32* command, uint16_t index, OperateType_uint8_t opType)
{
  MrzsCommandHandler* parent = (MrzsCommandHandler*)getParentPointer_in_SimpleCommandHandler((SimpleCommandHandler*) pSimpleCommandHandler);
  DoOperate_AnalogOutputInt32_in_MrzsCommandHandler(parent, command, index, opType);
}
void DoOperate_AnalogOutputFloat32_in_MrzsCommandHandler_override(void* pSimpleCommandHandler, AnalogOutputFloat32* command, uint16_t index, OperateType_uint8_t opType)
{
  MrzsCommandHandler* parent = (MrzsCommandHandler*)getParentPointer_in_SimpleCommandHandler((SimpleCommandHandler*) pSimpleCommandHandler);
  DoOperate_AnalogOutputFloat32_in_MrzsCommandHandler(parent, command, index, opType);
}
void DoOperate_AnalogOutputDouble64_in_MrzsCommandHandler_override(void* pSimpleCommandHandler, AnalogOutputDouble64* command, uint16_t index, OperateType_uint8_t opType)
{
  MrzsCommandHandler* parent = (MrzsCommandHandler*)getParentPointer_in_SimpleCommandHandler((SimpleCommandHandler*) pSimpleCommandHandler);
  DoOperate_AnalogOutputDouble64_in_MrzsCommandHandler(parent, command, index, opType);
}

void DoOperate_ControlRelayOutputBlock_in_MrzsCommandHandler(MrzsCommandHandler* pMrzsCommandHandler, ControlRelayOutputBlock* command, uint16_t index, OperateType_uint8_t opType)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"DoOperate_ControlRelayOutputBlock_in_MrzsCommandHandler1"<<'\n';
   std::cout<<"uint16_t index= "<<index<<'\n';
   std::cout<<"OperateType_uint8_t opType= "<<(uint16_t)opType<<'\n';
   std::cout<<"CommandStatus_uint8_t commandStatus= "<<(uint16_t)pMrzsCommandHandler->sSimpleCommandHandler.status_in_SimpleCommandHandler<<'\n';
#else
  UNUSED(pMrzsCommandHandler);
#endif
// void Operation_for_ControlRelayOutputBlock_in_Operation_for_ControlRelayOutputBlock(Operation_for_ControlRelayOutputBlock *pOperation_for_ControlRelayOutputBlock,
//                                           ControlRelayOutputBlock value,
//                                           uint16_t index,
//                                           OperateType_uint8_t opType_
//                                           );
////        this->crobOps.push_back(Operation<opendnp3::ControlRelayOutputBlock>(command, index, opType));
  Operation_for_ControlRelayOutputBlock temp;
  Operation_for_ControlRelayOutputBlock_in_Operation_for_ControlRelayOutputBlock(&temp,
      *command,
      index,
      opType);
//  pMrzsCommandHandler->crobOps.push_back(temp);
}
void DoOperate_AnalogOutputInt16_in_MrzsCommandHandler(MrzsCommandHandler* pMrzsCommandHandler, AnalogOutputInt16* command, uint16_t index, OperateType_uint8_t opType)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"DoOperate_AnalogOutputInt16_in_MrzsCommandHandler1"<<'\n';
   std::cout<<"uint16_t index= "<<index<<'\n';
   std::cout<<"OperateType_uint8_t opType= "<<(uint16_t)opType<<'\n';
   std::cout<<"CommandStatus_uint8_t commandStatus= "<<(uint16_t)pMrzsCommandHandler->sSimpleCommandHandler.status_in_SimpleCommandHandler<<'\n';
#else
  UNUSED(pMrzsCommandHandler);
#endif
// void Operation_for_AnalogOutputInt16_in_Operation_for_AnalogOutputInt16(Operation_for_AnalogOutputInt16 *pOperation_for_AnalogOutputInt16,
//                                           AnalogOutputInt16 value,
//                                           uint16_t index,
//                                           OperateType_uint8_t opType_
//                                           );
////        this->aoInt16Ops.push_back(Operation<opendnp3::AnalogOutputInt16>(command, index, opType));
  Operation_for_AnalogOutputInt16 temp;
  Operation_for_AnalogOutputInt16_in_Operation_for_AnalogOutputInt16(&temp,
      *command,
      index,
      opType);
//  pMrzsCommandHandler->aoInt16Ops.push_back(temp);
}
void DoOperate_AnalogOutputInt32_in_MrzsCommandHandler(MrzsCommandHandler* pMrzsCommandHandler, AnalogOutputInt32* command, uint16_t index, OperateType_uint8_t opType)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"DoOperate_AnalogOutputInt32_in_MrzsCommandHandler1"<<'\n';
   std::cout<<"uint16_t index= "<<index<<'\n';
   std::cout<<"OperateType_uint8_t opType= "<<(uint16_t)opType<<'\n';
   std::cout<<"CommandStatus_uint8_t commandStatus= "<<(uint16_t)pMrzsCommandHandler->sSimpleCommandHandler.status_in_SimpleCommandHandler<<'\n';
#else
  UNUSED(pMrzsCommandHandler);
#endif
// void Operation_for_AnalogOutputInt32_in_Operation_for_AnalogOutputInt32(Operation_for_AnalogOutputInt32 *pOperation_for_AnalogOutputInt32,
//                                           AnalogOutputInt32 value,
//                                           uint16_t index,
//                                           OperateType_uint8_t opType_
//                                           );
////        this->aoInt32Ops.push_back(Operation<opendnp3::AnalogOutputInt32>(command, index, opType));
  Operation_for_AnalogOutputInt32 temp;
  Operation_for_AnalogOutputInt32_in_Operation_for_AnalogOutputInt32(&temp,
      *command,
      index,
      opType);
//  pMrzsCommandHandler->aoInt32Ops.push_back(temp);
}
void DoOperate_AnalogOutputFloat32_in_MrzsCommandHandler(MrzsCommandHandler* pMrzsCommandHandler, AnalogOutputFloat32* command, uint16_t index, OperateType_uint8_t opType)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"DoOperate_AnalogOutputFloat32_in_MrzsCommandHandler1"<<'\n';
   std::cout<<"uint16_t index= "<<index<<'\n';
   std::cout<<"OperateType_uint8_t opType= "<<(uint16_t)opType<<'\n';
   std::cout<<"CommandStatus_uint8_t commandStatus= "<<(uint16_t)pMrzsCommandHandler->sSimpleCommandHandler.status_in_SimpleCommandHandler<<'\n';
#else
  UNUSED(pMrzsCommandHandler);
#endif
// void Operation_for_AnalogOutputFloat32_in_Operation_for_AnalogOutputFloat32(Operation_for_AnalogOutputFloat32 *pOperation_for_AnalogOutputFloat32,
//                                           AnalogOutputFloat32 value,
//                                           uint16_t index,
//                                           OperateType_uint8_t opType_
//                                           );
////        this->aoFloat32Ops.push_back(Operation<opendnp3::AnalogOutputFloat32>(command, index, opType));
  Operation_for_AnalogOutputFloat32 temp;
  Operation_for_AnalogOutputFloat32_in_Operation_for_AnalogOutputFloat32(&temp,
      *command,
      index,
      opType);
//  pMrzsCommandHandler->aoFloat32Ops.push_back(temp);
}
void DoOperate_AnalogOutputDouble64_in_MrzsCommandHandler(MrzsCommandHandler* pMrzsCommandHandler, AnalogOutputDouble64* command, uint16_t index, OperateType_uint8_t opType)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"DoOperate_AnalogOutputDouble64_in_MrzsCommandHandler1"<<'\n';
   std::cout<<"uint16_t index= "<<index<<'\n';
   std::cout<<"OperateType_uint8_t opType= "<<(uint16_t)opType<<'\n';
   std::cout<<"CommandStatus_uint8_t commandStatus= "<<(uint16_t)pMrzsCommandHandler->sSimpleCommandHandler.status_in_SimpleCommandHandler<<'\n';
#else
  UNUSED(pMrzsCommandHandler);
#endif
// void Operation_for_AnalogOutputDouble64_in_Operation_for_AnalogOutputDouble64(Operation_for_AnalogOutputDouble64 *pOperation_for_AnalogOutputDouble64,
//                                           AnalogOutputDouble64 value,
//                                           uint16_t index,
//                                           OperateType_uint8_t opType_
//                                           );
////        this->aoDouble64Ops.push_back(Operation<opendnp3::AnalogOutputDouble64>(command, index, opType));
  Operation_for_AnalogOutputDouble64 temp;
  Operation_for_AnalogOutputDouble64_in_Operation_for_AnalogOutputDouble64(&temp,
      *command,
      index,
      opType);
//  pMrzsCommandHandler->aoDouble64Ops.push_back(temp);
}

//-------------------ControlRelayOutputBlock--------------------------------

void Operation_for_ControlRelayOutputBlock_in_Operation_for_ControlRelayOutputBlock(Operation_for_ControlRelayOutputBlock *pOperation_for_ControlRelayOutputBlock,
    ControlRelayOutputBlock value,
    uint16_t index,
    OperateType_uint8_t opType_
                                                                                   )
{
//   void Indexed_for_ControlRelayOutputBlock_in_Indexed_for_ControlRelayOutputBlockOver2(Indexed_for_ControlRelayOutputBlock *pIndexed_for_ControlRelayOutputBlock,
//                                   ControlRelayOutputBlock* value_, uint16_t index_);
  Indexed_for_ControlRelayOutputBlock_in_Indexed_for_ControlRelayOutputBlockOver2(
    &(pOperation_for_ControlRelayOutputBlock->iIndexed_for_ControlRelayOutputBlock),
    &value, index);
  pOperation_for_ControlRelayOutputBlock->opType = opType_;
}
//-------------------ControlRelayOutputBlock--------------------------------
//-------------------AnalogOutputInt16--------------------------------

void Operation_for_AnalogOutputInt16_in_Operation_for_AnalogOutputInt16(Operation_for_AnalogOutputInt16 *pOperation_for_AnalogOutputInt16,
    AnalogOutputInt16 value,
    uint16_t index,
    OperateType_uint8_t opType_
                                                                       )
{
//   void Indexed_for_AnalogOutputInt16_in_Indexed_for_AnalogOutputInt16Over2(Indexed_for_AnalogOutputInt16 *pIndexed_for_AnalogOutputInt16,
//                                   AnalogOutputInt16* value_, uint16_t index_);
  Indexed_for_AnalogOutputInt16_in_Indexed_for_AnalogOutputInt16Over2(
    &(pOperation_for_AnalogOutputInt16->iIndexed_for_AnalogOutputInt16),
    &value, index);
  pOperation_for_AnalogOutputInt16->opType = opType_;
}
//-------------------AnalogOutputInt16--------------------------------
//-------------------AnalogOutputInt32--------------------------------

void Operation_for_AnalogOutputInt32_in_Operation_for_AnalogOutputInt32(Operation_for_AnalogOutputInt32 *pOperation_for_AnalogOutputInt32,
    AnalogOutputInt32 value,
    uint16_t index,
    OperateType_uint8_t opType_
                                                                       )
{
//   void Indexed_for_AnalogOutputInt32_in_Indexed_for_AnalogOutputInt32Over2(Indexed_for_AnalogOutputInt32 *pIndexed_for_AnalogOutputInt32,
//                                   AnalogOutputInt32* value_, uint16_t index_);
  Indexed_for_AnalogOutputInt32_in_Indexed_for_AnalogOutputInt32Over2(
    &(pOperation_for_AnalogOutputInt32->iIndexed_for_AnalogOutputInt32),
    &value, index);
  pOperation_for_AnalogOutputInt32->opType = opType_;
}
//-------------------AnalogOutputInt32--------------------------------
//-------------------AnalogOutputFloat32--------------------------------

void Operation_for_AnalogOutputFloat32_in_Operation_for_AnalogOutputFloat32(Operation_for_AnalogOutputFloat32 *pOperation_for_AnalogOutputFloat32,
    AnalogOutputFloat32 value,
    uint16_t index,
    OperateType_uint8_t opType_
                                                                           )
{
//   void Indexed_for_AnalogOutputFloat32_in_Indexed_for_AnalogOutputFloat32Over2(Indexed_for_AnalogOutputFloat32 *pIndexed_for_AnalogOutputFloat32,
//                                   AnalogOutputFloat32* value_, uint16_t index_);
  Indexed_for_AnalogOutputFloat32_in_Indexed_for_AnalogOutputFloat32Over2(
    &(pOperation_for_AnalogOutputFloat32->iIndexed_for_AnalogOutputFloat32),
    &value, index);
  pOperation_for_AnalogOutputFloat32->opType = opType_;
}
//-------------------AnalogOutputFloat32--------------------------------
//-------------------AnalogOutputDouble64--------------------------------

void Operation_for_AnalogOutputDouble64_in_Operation_for_AnalogOutputDouble64(Operation_for_AnalogOutputDouble64 *pOperation_for_AnalogOutputDouble64,
    AnalogOutputDouble64 value,
    uint16_t index,
    OperateType_uint8_t opType_
                                                                             )
{
//   void Indexed_for_AnalogOutputDouble64_in_Indexed_for_AnalogOutputDouble64Over2(Indexed_for_AnalogOutputDouble64 *pIndexed_for_AnalogOutputDouble64,
//                                   AnalogOutputDouble64* value_, uint16_t index_);
  Indexed_for_AnalogOutputDouble64_in_Indexed_for_AnalogOutputDouble64Over2(
    &(pOperation_for_AnalogOutputDouble64->iIndexed_for_AnalogOutputDouble64),
    &value, index);
  pOperation_for_AnalogOutputDouble64->opType = opType_;
}
//-------------------AnalogOutputDouble64--------------------------------

void SetResponse_in_MrzsCommandHandler(MrzsCommandHandler *pMrzsCommandHandler, CommandStatus_uint8_t status_)
{
  pMrzsCommandHandler->sSimpleCommandHandler.status_in_SimpleCommandHandler = status_;
}

uint32_t NumInvocations_in_MrzsCommandHandler(MrzsCommandHandler *pMrzsCommandHandler)
{
  return pMrzsCommandHandler->sSimpleCommandHandler.numSelect + pMrzsCommandHandler->sSimpleCommandHandler.numOperate;
}

uint32_t NumSelect_in_MrzsCommandHandler(MrzsCommandHandler *pMrzsCommandHandler)
{
  return pMrzsCommandHandler->sSimpleCommandHandler.numSelect;
}

uint32_t NumOperate_in_MrzsCommandHandler(MrzsCommandHandler *pMrzsCommandHandler)
{
  return pMrzsCommandHandler->sSimpleCommandHandler.numOperate;
}

