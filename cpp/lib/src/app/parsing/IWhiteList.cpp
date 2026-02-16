#include "header_dnp3.h"
#include "IWhiteList.h"
#include "CommandResponseHandler.h"
#include "FreezeRequestHandler.h"
#include "ReadHandler.h"
#include "WriteHandler.h"
#include "AssignClassHandler.h"
#include "ClassBasedRequestHandler.h"

boolean IsAllowed_in_IWhiteList(IWhiteList *pIWhiteList, uint32_t headerCount, GroupVariation_uint16_t gv, QualifierCode_uint8_t qc)
{
//  return (pIWhiteList->pIsAllowed_in_IWhiteList)(pIWhiteList, headerCount, gv, qc);
  switch(pIWhiteList->parentPointerSelector)
  {
    case IWhiteListSELECTOR_for_FreezeRequestHandler:
       return IsAllowed_in_FreezeRequestHandler_override(pIWhiteList, headerCount, gv, qc);
    case IWhiteListSELECTOR_for_ReadHandler:
       return IsAllowed_in_ReadHandler_override(pIWhiteList, headerCount, gv, qc);
    case IWhiteListSELECTOR_for_WriteHandler:
       return IsAllowed_in_WriteHandler_override(pIWhiteList, headerCount, gv, qc);
    case IWhiteListSELECTOR_for_CommandResponseHandler:
       return IsAllowed_in_CommandResponseHandler_override(pIWhiteList, headerCount, gv, qc);
    case IWhiteListSELECTOR_for_AssignClassHandler:
       return IsAllowed_in_AssignClassHandler_override(pIWhiteList, headerCount, gv, qc);
    case IWhiteListSELECTOR_for_ClassBasedRequestHandler:
       return IsAllowed_in_ClassBasedRequestHandler_override(pIWhiteList, headerCount, gv, qc);
  }
  return false;
}

void* getParentPointer_in_IWhiteList(IWhiteList* pIWhiteList)
{
  return pIWhiteList->pParentPointer_in_IWhiteList;
}

void  setParentPointer_in_IWhiteList(IWhiteList* pIWhiteList, void* pParentPointer, uint16_t parentPointerSelector)
{
  pIWhiteList->pParentPointer_in_IWhiteList = pParentPointer;
  pIWhiteList->parentPointerSelector = parentPointerSelector;
}
