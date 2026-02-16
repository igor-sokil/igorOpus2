#include "header_dnp3.h"
#include "ICommandHandler.h"
#include "SimpleCommandHandler.h"

void* getParentPointer_in_ICommandHandler(ICommandHandler* pICommandHandler)
{
  return pICommandHandler->pParentPointer_in_ICommandHandler;
}
void  setParentPointer_in_ICommandHandler(ICommandHandler* pICommandHandler, void* pParentPointer)
{
  pICommandHandler->pParentPointer_in_ICommandHandler = pParentPointer;
}

void Begin_in_ICommandHandler(ICommandHandler* pICommandHandler)
{
//  (pICommandHandler->pBegin_in_ICommandHandler)(pICommandHandler);
  Begin_in_SimpleCommandHandler_override(pICommandHandler);
}

void End_in_ICommandHandler(ICommandHandler* pICommandHandler)
{
//  (pICommandHandler->pEnd_in_ICommandHandler)(pICommandHandler);
  End_in_SimpleCommandHandler_override(pICommandHandler);
}

CommandStatus_uint8_t Select_ControlRelayOutputBlock_in_ICommandHandler(ICommandHandler* pICommandHandler, ControlRelayOutputBlock* command, uint16_t index)
{
//  return (pICommandHandler->pSelect_ControlRelayOutputBlock_in_ICommandHandler)(pICommandHandler, command, index);
  return Select_ControlRelayOutputBlock_in_SimpleCommandHandler_override(pICommandHandler, command, index);
}

CommandStatus_uint8_t Operate_ControlRelayOutputBlock_in_ICommandHandler(ICommandHandler* pICommandHandler, ControlRelayOutputBlock* command,
    uint16_t index,
    IUpdateHandler* handler,
    OperateType_uint8_t opType)
{
//  return (pICommandHandler->pOperate_ControlRelayOutputBlock_in_ICommandHandler)(pICommandHandler, command, index, handler, opType);
  return Operate_ControlRelayOutputBlock_in_SimpleCommandHandler_override(pICommandHandler, command, index, handler, opType);
}

CommandStatus_uint8_t Select_AnalogOutputInt16_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputInt16* command, uint16_t index)
{
//  return (pICommandHandler->pSelect_AnalogOutputInt16_in_ICommandHandler)(pICommandHandler, command, index);
  return Select_AnalogOutputInt16_in_SimpleCommandHandler_override(pICommandHandler, command, index);
}

CommandStatus_uint8_t Operate_AnalogOutputInt16_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputInt16* command,
    uint16_t index,
    IUpdateHandler* handler,
    OperateType_uint8_t opType)
{
//  return (pICommandHandler->pOperate_AnalogOutputInt16_in_ICommandHandler)(pICommandHandler, command, index, handler, opType);
   return Operate_AnalogOutputInt16_in_SimpleCommandHandler_override(pICommandHandler, command, index, handler, opType);
}

CommandStatus_uint8_t Select_AnalogOutputInt32_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputInt32* command, uint16_t index)
{
//  return (pICommandHandler->pSelect_AnalogOutputInt32_in_ICommandHandler)(pICommandHandler, command, index);
  return Select_AnalogOutputInt32_in_SimpleCommandHandler_override(pICommandHandler, command, index);
}

CommandStatus_uint8_t Operate_AnalogOutputInt32_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputInt32* command,
    uint16_t index,
    IUpdateHandler* handler,
    OperateType_uint8_t opType)
{
//  return (pICommandHandler->pOperate_AnalogOutputInt32_in_ICommandHandler)(pICommandHandler, command, index, handler, opType);
  return Operate_AnalogOutputInt32_in_SimpleCommandHandler_override(pICommandHandler, command, index, handler, opType);
}

CommandStatus_uint8_t Select_AnalogOutputFloat32_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputFloat32* command, uint16_t index)
{
//  return (pICommandHandler->pSelect_AnalogOutputFloat32_in_ICommandHandler)(pICommandHandler, command, index);
  return Select_AnalogOutputFloat32_in_SimpleCommandHandler_override(pICommandHandler, command, index);
}

CommandStatus_uint8_t Operate_AnalogOutputFloat32_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputFloat32* command,
    uint16_t index,
    IUpdateHandler* handler,
    OperateType_uint8_t opType)
{
//  return (pICommandHandler->pOperate_AnalogOutputFloat32_in_ICommandHandler)(pICommandHandler, command, index, handler, opType);
  return Operate_AnalogOutputFloat32_in_SimpleCommandHandler_override(pICommandHandler, command, index, handler, opType);
}

CommandStatus_uint8_t Select_AnalogOutputDouble64_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputDouble64* command, uint16_t index)
{
//  return (pICommandHandler->pSelect_AnalogOutputDouble64_in_ICommandHandler)(pICommandHandler, command, index);
  return Select_AnalogOutputDouble64_in_SimpleCommandHandler_override(pICommandHandler, command, index);
}

CommandStatus_uint8_t Operate_AnalogOutputDouble64_in_ICommandHandler(ICommandHandler* pICommandHandler, AnalogOutputDouble64* command,
    uint16_t index,
    IUpdateHandler* handler,
    OperateType_uint8_t opType)
{
//  return (pICommandHandler->pOperate_AnalogOutputDouble64_in_ICommandHandler)(pICommandHandler, command, index, handler, opType);
  return Operate_AnalogOutputDouble64_in_SimpleCommandHandler_override(pICommandHandler, command, index, handler, opType);
}
