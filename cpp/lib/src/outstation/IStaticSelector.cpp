#include "header_dnp3.h"
#include "IStaticSelector.h"
#include "Database.h"

IINField SelectAll_in_IStaticSelector(IStaticSelector *pIStaticSelector, GroupVariation_uint16_t gv)
{
//  return (pIStaticSelector->pSelectAll_in_IStaticSelector)(pIStaticSelector, gv);
  return SelectAll_in_Database_override(pIStaticSelector, gv);
}
IINField SelectRange_in_IStaticSelector(IStaticSelector *pIStaticSelector, GroupVariation_uint16_t gv,  Range* range)
{
//  return (pIStaticSelector->pSelectRange_in_IStaticSelector)(pIStaticSelector, gv, range);
  return SelectRange_in_Database_override(pIStaticSelector, gv, range);
}
IINField SelectIndices_in_IStaticSelector(IStaticSelector *pIStaticSelector, GroupVariation_uint16_t gv, ICollection_for_uint16* indices)
{
//  return (pIStaticSelector->pSelectIndices_in_IStaticSelector)(pIStaticSelector, gv, indices);
  return SelectIndices_in_Database_override(pIStaticSelector, gv, indices);
}

void Unselect_in_IStaticSelector(IStaticSelector *pIStaticSelector)
{
//  (pIStaticSelector->pUnselect_in_IStaticSelector)(pIStaticSelector);
   Unselect_in_Database_override(pIStaticSelector);
}

void* getParentPointer_in_IStaticSelector(IStaticSelector* pIStaticSelector)
{
  return pIStaticSelector->pParentPointer_in_IStaticSelector;
}

void  setParentPointer_in_IStaticSelector(IStaticSelector* pIStaticSelector, void* pParentPointer)
{
  pIStaticSelector->pParentPointer_in_IStaticSelector = pParentPointer;
}
