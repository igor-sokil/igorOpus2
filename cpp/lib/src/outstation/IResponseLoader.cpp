#include "header_dnp3.h"
#include "IResponseLoader.h"
#include "EventBuffer.h"
#include "Database.h"

boolean HasAnySelection_in_IResponseLoader(IResponseLoader *pIResponseLoader)
{
//  return (pIResponseLoader->pHasAnySelection_in_IResponseLoader)(pIResponseLoader);
  switch(pIResponseLoader->parentPointerSelector)
  {
    case IResponseLoaderSELECTOR_for_Database:
      return HasAnySelection_in_Database_override(pIResponseLoader);
    case IResponseLoaderSELECTOR_for_EventBuffer:
      return HasAnySelection_in_EventBuffer_override(pIResponseLoader);
  }
  return false;
}
boolean Load_in_IResponseLoader(IResponseLoader *pIResponseLoader, HeaderWriter* writer)
{
//  return (pIResponseLoader->pLoad_in_IResponseLoader)(pIResponseLoader, writer);
  switch(pIResponseLoader->parentPointerSelector)
  {
    case IResponseLoaderSELECTOR_for_Database:
     return Load_in_Database_override(pIResponseLoader, writer);
    case IResponseLoaderSELECTOR_for_EventBuffer:
     return Load_in_EventBuffer_override(pIResponseLoader, writer);
  }
  return false;
}

void* getParentPointer_in_IResponseLoader(IResponseLoader* pIResponseLoader)
{
  return pIResponseLoader->pParentPointer_in_IResponseLoader;
}

void  setParentPointer_in_IResponseLoader(IResponseLoader* pIResponseLoader, void* pParentPointer, uint16_t Selector)
{
  pIResponseLoader->pParentPointer_in_IResponseLoader = pParentPointer;
  pIResponseLoader->parentPointerSelector = Selector;
}
