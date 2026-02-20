#include "header_dnp3.h"
#include "IClassAssigner.h"
#include "Database.h"

Range AssignClassToAll_in_IClassAssigner(IClassAssigner *pIClassAssigner, AssignClassType_uint8_t type, PointClass_uint8_t clazz)
{
//  return (pIClassAssigner->pAssignClassToAll_in_IClassAssigner)(pIClassAssigner, type, clazz);
  return AssignClassToAll_in_Database_override(pIClassAssigner, type, clazz);
}

Range AssignClassToRange_in_IClassAssigner(IClassAssigner *pIClassAssigner, AssignClassType_uint8_t type, PointClass_uint8_t clazz, Range* range)
{
//  return (pIClassAssigner->pAssignClassToRange_in_IClassAssigner)(pIClassAssigner, type, clazz, range);
  return AssignClassToRange_in_Database_override(pIClassAssigner, type, clazz, range);
}

void* getParentPointer_in_IClassAssigner(IClassAssigner* pIClassAssigner)
{
  return pIClassAssigner->pParentPointer_in_IClassAssigner;
}

void  setParentPointer_in_IClassAssigner(IClassAssigner* pIClassAssigner, void* pParentPointer)
{
  pIClassAssigner->pParentPointer_in_IClassAssigner = pParentPointer;
}
