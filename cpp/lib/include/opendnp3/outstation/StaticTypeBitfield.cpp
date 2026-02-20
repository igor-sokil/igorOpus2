#include "header_dnp3.h"
#include "StaticTypeBitfield.h"

void StaticTypeBitField_in_StaticTypeBitFieldOver1(StaticTypeBitField *pStaticTypeBitField)
{
  pStaticTypeBitField->mask = 0;
}

void StaticTypeBitField_in_StaticTypeBitFieldOver2(StaticTypeBitField *pStaticTypeBitField, uint16_t mask)
{
  pStaticTypeBitField->mask = mask;
}

StaticTypeBitField AllTypes_in_StaticTypeBitField_static(void)
{
  StaticTypeBitField sStaticTypeBitField;
//void StaticTypeBitField_in_StaticTypeBitFieldOver2(StaticTypeBitField *pStaticTypeBitField, uint16_t mask);
  StaticTypeBitField_in_StaticTypeBitFieldOver2(&sStaticTypeBitField, (uint16_t)(~0));
////        return StaticTypeBitField(~0);
  return sStaticTypeBitField;
}

boolean IsSet_in_StaticTypeBitField(StaticTypeBitField *pStaticTypeBitField, StaticTypeBitmask_uint16_t type)
{
  return (pStaticTypeBitField->mask & (uint16_t)(type)) != 0;
}

StaticTypeBitField Except_in_StaticTypeBitField(StaticTypeBitField *pStaticTypeBitField, StaticTypeBitmask_uint16_t type)
{
  StaticTypeBitField sStaticTypeBitField;
  uint16_t tmp = ~(int)type;
  StaticTypeBitField_in_StaticTypeBitFieldOver2(&sStaticTypeBitField, (uint16_t)(pStaticTypeBitField->mask) & tmp); 
////        return StaticTypeBitField(mask & ~static_cast<uint16_t>(type));
  return sStaticTypeBitField;
}
