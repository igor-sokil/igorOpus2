
#include "header_dnp3.h"
#include "IEventType.h"
#include "EventTypeImpl.h"

void IEventType_in_IEventType(IEventType *pIEventType, EventType_uint16_t value)
{
  pIEventType->value = value;
}

boolean IsEqual_in_IEventType(IEventType* pIEventType, EventType_uint16_t type)
{
  return type == pIEventType->value;
}

boolean IsNotEqual_in_IEventType(IEventType* pIEventType, EventType_uint16_t type)
{
  return type != pIEventType->value;
}

void SelectDefaultVariation_in_IEventType(IEventType *pIEventType, EventRecord* record)
{
//  (pIEventType->pSelectDefaultVariation_in_IEventType)(pIEventType, record);
  switch(pIEventType->parentPointerSelector)
  {
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_AnalogSpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_AnalogSpec_override(pIEventType, record);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_BinarySpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_override(pIEventType, record);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_DoubleBitBinarySpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_DoubleBitBinarySpec_override(pIEventType, record);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_AnalogOutputStatusSpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_AnalogOutputStatusSpec_override(pIEventType, record);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_BinaryOutputStatusSpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_BinaryOutputStatusSpec_override(pIEventType, record);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_CounterSpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_CounterSpec_override(pIEventType, record);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_FrozenCounterSpec:
      SelectDefaultVariation_in_EventTypeImpl_TypedEventRecord_for_FrozenCounterSpec_override(pIEventType, record);
      break;
  }
}
uint16_t WriteSome_in_IEventType(IEventType *pIEventType,
                                 Iterator_in_List_for_EventRecord* iterator,
                                 EventLists* lists,
                                 IEventWriteHandler* handler)
{
//  return (pIEventType->pWriteSome_in_IEventType)(pIEventType, iterator, lists, handler);
  switch(pIEventType->parentPointerSelector)
  {
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_AnalogSpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_AnalogSpec_override(pIEventType, iterator, lists, handler);
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_BinarySpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_override(pIEventType, iterator, lists, handler);
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_DoubleBitBinarySpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_DoubleBitBinarySpec_override(pIEventType, iterator, lists, handler);
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_AnalogOutputStatusSpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_AnalogOutputStatusSpec_override(pIEventType, iterator, lists, handler);
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_BinaryOutputStatusSpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_BinaryOutputStatusSpec_override(pIEventType, iterator, lists, handler);
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_CounterSpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_CounterSpec_override(pIEventType, iterator, lists, handler);
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_FrozenCounterSpec:
       return WriteSome_in_EventTypeImpl_TypedEventRecord_for_FrozenCounterSpec_override(pIEventType, iterator, lists, handler);
  }
  return 0;
}

void RemoveTypeFromStorage_in_IEventType(IEventType *pIEventType, EventRecord* record, EventLists* lists)
{
//  (pIEventType->pRemoveTypeFromStorage_in_IEventType)(pIEventType, record, lists);
  switch(pIEventType->parentPointerSelector)
  {
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_AnalogSpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_AnalogSpec_override(pIEventType, record, lists);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_BinarySpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_BinarySpec_override(pIEventType, record, lists);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_DoubleBitBinarySpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_DoubleBitBinarySpec_override(pIEventType, record, lists);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_AnalogOutputStatusSpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_AnalogOutputStatusSpec_override(pIEventType, record, lists);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_BinaryOutputStatusSpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_BinaryOutputStatusSpec_override(pIEventType, record, lists);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_CounterSpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_CounterSpec_override(pIEventType, record, lists);
      break;
    case IEventTypeSELECTOR_for_EventTypeImpl_TypedEventRecord_for_FrozenCounterSpec:
      RemoveTypeFromStorage_in_EventTypeImpl_TypedEventRecord_for_FrozenCounterSpec_override(pIEventType, record, lists);
      break;
  }
}

void* getParentPointer_in_IEventType(IEventType* pIEventType)
{
  return pIEventType->pParentPointer_in_IEventType;
}

void  setParentPointer_in_IEventType(IEventType* pIEventType, void* pParentPointer, uint16_t parentPointerSelector)
{
  pIEventType->pParentPointer_in_IEventType = pParentPointer;
  pIEventType->parentPointerSelector = parentPointerSelector;
}
