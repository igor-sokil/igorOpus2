#include "header.h"
#include "StaticDataMapConfig.h"
#include "DataMapKeys.h"

void* pPointerGlobal1;
void* pPointerGlobal2;
void* pPointerGlobal3;
void* pPointerGlobal4;
boolean expectsContents;

//static const
 uint16_t DataMapKeys_for_AnalogSpec[SIZE_StaticDataMap_for_AnalogSpec] = 
  {300,  301,  302,  303,  304,
   305, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_AnalogOutputStatusSpec[SIZE_StaticDataMap_for_AnalogOutputStatusSpec] = 
  {300,  301,  302,  303,  304,
   305, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_BinarySpec[SIZE_StaticDataMap_for_BinarySpec] = 
  {20,  21,  22,  3,  4,
   5, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_BinaryOutputStatusSpec[SIZE_StaticDataMap_for_BinaryOutputStatusSpec] = 
  {300,  301,  302,  303,  304,
   305, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_DoubleBitBinarySpec[SIZE_StaticDataMap_for_DoubleBitBinarySpec] = 
  {300,  301,  302,  303,  304,
   305, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_CounterSpec[SIZE_StaticDataMap_for_CounterSpec] = 
  {20,  21,  2,  3,  4,
   5, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_FrozenCounterSpec[SIZE_StaticDataMap_for_FrozenCounterSpec] = 
  {20,  21,  2,  3,  4,
   5, 6, 7, 8, 9,
  };

//static const 
uint16_t DataMapKeys_for_TimeAndIntervalSpec[SIZE_StaticDataMap_for_TimeAndIntervalSpec] = 
  {20,  21,  2,  3,  4,
   5, 6, 7, 8, 9,
  };

//const 
uint16_t* getDataMapKeys_for_AnalogSpec(void)
{
  return DataMapKeys_for_AnalogSpec;
}

//const 
uint16_t* getDataMapKeys_for_AnalogOutputStatusSpec(void)
{
  return DataMapKeys_for_AnalogOutputStatusSpec;
}

//const 
uint16_t* getDataMapKeys_for_BinarySpec(void)
{
  return DataMapKeys_for_BinarySpec;
}

//const 
uint16_t* getDataMapKeys_for_DoubleBitBinarySpec(void)
{
  return DataMapKeys_for_DoubleBitBinarySpec;
}

//const 
uint16_t* getDataMapKeys_for_BinaryOutputStatusSpec(void)
{
  return DataMapKeys_for_BinaryOutputStatusSpec;
}

//const 
uint16_t* getDataMapKeys_for_CounterSpec(void)
{
  return DataMapKeys_for_CounterSpec;
}

//const 
uint16_t* getDataMapKeys_for_FrozenCounterSpec(void)
{
  return DataMapKeys_for_FrozenCounterSpec;
}

//const 
uint16_t* getDataMapKeys_for_TimeAndIntervalSpec(void)
{
  return DataMapKeys_for_TimeAndIntervalSpec;
}

uint16_t IndexMass2KeyMap_for_AnalogSpec(uint16_t index)
{
  return DataMapKeys_for_AnalogSpec[index];
}
uint16_t IndexMass2KeyMap_for_AnalogOutputStatusSpec(uint16_t index)
{
  return DataMapKeys_for_AnalogOutputStatusSpec[index];
}
uint16_t IndexMass2KeyMap_for_BinarySpec(uint16_t index)
{
  return DataMapKeys_for_BinarySpec[index];
}
uint16_t IndexMass2KeyMap_for_DoubleBitBinarySpec(uint16_t index)
{
  return DataMapKeys_for_DoubleBitBinarySpec[index];
}
uint16_t IndexMass2KeyMap_for_BinaryOutputStatusSpec(uint16_t index)
{
  return DataMapKeys_for_BinaryOutputStatusSpec[index];
}

uint16_t IndexMass2KeyMap_for_CounterSpec(uint16_t index)
{
  return DataMapKeys_for_CounterSpec[index];
}
uint16_t IndexMass2KeyMap_for_FrozenCounterSpec(uint16_t index)
{
  return DataMapKeys_for_FrozenCounterSpec[index];
}
uint16_t IndexMass2KeyMap_for_TimeAndIntervalSpec(uint16_t index)
{
  return DataMapKeys_for_TimeAndIntervalSpec[index];
}

