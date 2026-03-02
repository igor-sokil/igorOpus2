/*
 * Copyright 2013-2022 Step Function I/O, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Step Function I/O
 * LLC (https://stepfunc.io) under one or more contributor license agreements.
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Step Function I/O LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "log_info.h"

#include "header_dnp3.h"
#include "DatabaseConfig.h"

////namespace opendnp3
////{
////template<class T>
//void initialize_BinaryConfig(std::map<uint16_t, BinaryConfig>& map, uint16_t count)
void initialize_BinaryConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  BinaryConfig bBinaryConfig;
  BinaryConfig_in_BinaryConfig(&bBinaryConfig);
  if(count > SIZE_StaticDataMap_for_BinarySpec) count = SIZE_StaticDataMap_for_BinarySpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->binary_input_config[i] = bBinaryConfig;
  pDatabaseConfig->binary_input_count = count;
}
////template<class T>
void initialize_DoubleBitBinaryConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  DoubleBitBinaryConfig dDoubleBitBinaryConfig;
  DoubleBitBinaryConfig_in_DoubleBitBinaryConfig(&dDoubleBitBinaryConfig);
  if(count > SIZE_StaticDataMap_for_DoubleBitBinarySpec) count = SIZE_StaticDataMap_for_DoubleBitBinarySpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->double_binary_config[i] = dDoubleBitBinaryConfig;
  pDatabaseConfig->double_binary_count = count;
}
////template<class T>
void initialize_AnalogConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  AnalogConfig aAnalogConfig;
  AnalogConfig_in_AnalogConfig(&aAnalogConfig);
  if(count > SIZE_StaticDataMap_for_AnalogSpec) count = SIZE_StaticDataMap_for_AnalogSpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->analog_input_config[i] = aAnalogConfig;
  pDatabaseConfig->analog_input_count = count;
}
////template<class T>
void initialize_CounterConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  CounterConfig cCounterConfig;
  CounterConfig_in_CounterConfig(&cCounterConfig);
  if(count > SIZE_StaticDataMap_for_CounterSpec) count = SIZE_StaticDataMap_for_CounterSpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->counter_config[i] = cCounterConfig;
  pDatabaseConfig->counter_count = count;
}
////template<class T>
void initialize_FrozenCounterConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  FrozenCounterConfig fFrozenCounterConfig;
  FrozenCounterConfig_in_FrozenCounterConfig(&fFrozenCounterConfig);
  if(count > SIZE_StaticDataMap_for_FrozenCounterSpec) count = SIZE_StaticDataMap_for_FrozenCounterSpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->frozen_counter_config[i] = fFrozenCounterConfig;
  pDatabaseConfig->frozen_counter_count = count;
}
void initialize_BOStatusConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  BOStatusConfig bBOStatusConfig;
  BOStatusConfig_in_BOStatusConfig(&bBOStatusConfig);
  if(count > SIZE_StaticDataMap_for_BinaryOutputStatusSpec) count = SIZE_StaticDataMap_for_BinaryOutputStatusSpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->binary_output_status_config[i] = bBOStatusConfig;
  pDatabaseConfig->binary_output_status_count = count;
}
void initialize_AOStatusConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  AOStatusConfig aAOStatusConfig;
  AOStatusConfig_in_AOStatusConfig(&aAOStatusConfig);
  if(count > SIZE_StaticDataMap_for_AnalogOutputStatusSpec) count = SIZE_StaticDataMap_for_AnalogOutputStatusSpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->analog_output_status_config[i] = aAOStatusConfig;
  pDatabaseConfig->analog_output_status_count = count;
}
void initialize_TimeAndIntervalConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
{
  TimeAndIntervalConfig tTimeAndIntervalConfig;
  TimeAndIntervalConfig_in_TimeAndIntervalConfig(&tTimeAndIntervalConfig);
  if(count > SIZE_StaticDataMap_for_TimeAndIntervalSpec) count = SIZE_StaticDataMap_for_TimeAndIntervalSpec;
  for(int i = 0; i < count; i++) pDatabaseConfig->time_and_interval_config[i] = tTimeAndIntervalConfig;
  pDatabaseConfig->time_and_interval_count = count;
}
//void initialize_OctetStringConfig(DatabaseConfig *pDatabaseConfig, uint16_t count)
//{
//  OctetStringConfig oOctetStringConfig;
//  OctetStringConfig_in_OctetStringConfig(&oOctetStringConfig);
//  pDatabaseConfig->binary_input_config = bBinaryConfig;
//  pDatabaseConfig->binary_input_count = all_types;
//}

uint16_t KeyMap2IndexMass_for_AnalogSpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->analog_input_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_AnalogSpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_AnalogOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->analog_output_status_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_AnalogOutputStatusSpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_BinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->binary_input_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_BinarySpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_DoubleBitBinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->double_binary_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_DoubleBitBinarySpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_BinaryOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->binary_output_status_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_BinaryOutputStatusSpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_CounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->counter_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_CounterSpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_FrozenCounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->frozen_counter_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_FrozenCounterSpec[i] == key) return i;
  }
  return 0xFFFF;
}
uint16_t KeyMap2IndexMass_for_TimeAndIntervalSpec(DatabaseConfig *pDatabaseConfig, uint16_t key)
{
  for(uint16_t i=0; i<pDatabaseConfig->time_and_interval_count; i++)
  {
   if(pDatabaseConfig->DataMapKeys_for_TimeAndIntervalSpec[i] == key) return i;
  }
  return 0xFFFF;
}

void DatabaseConfig_in_DatabaseConfig_default(DatabaseConfig *pDatabaseConfig)
{
 UNUSED(pDatabaseConfig);
}

void DatabaseConfig_in_DatabaseConfig(DatabaseConfig *pDatabaseConfig, uint16_t all_types)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  increment_stack_info();
  std::cout<<getString_stack_info();
  std::cout<<"DatabaseConfig_in_DatabaseConfig1"<<'\n';
  decrement_stack_info();
#endif
////  initialize(this->binary_input, all_types);
  initialize_BinaryConfig(pDatabaseConfig, all_types);

////  initialize(this->double_binary, all_types);
  initialize_DoubleBitBinaryConfig(pDatabaseConfig, all_types);

////  initialize(this->analog_input, all_types);
  initialize_AnalogConfig(pDatabaseConfig, all_types);

////  initialize(this->counter, all_types);
  initialize_CounterConfig(pDatabaseConfig, all_types);

////  initialize(this->frozen_counter, all_types);
  initialize_FrozenCounterConfig(pDatabaseConfig, all_types);

////  initialize(this->binary_output_status, all_types);
  initialize_BOStatusConfig(pDatabaseConfig, all_types);

////  initialize(this->analog_output_status, all_types);
  initialize_AOStatusConfig(pDatabaseConfig, all_types);

////  initialize(this->time_and_interval, all_types);
  initialize_TimeAndIntervalConfig(pDatabaseConfig, all_types);

////  initialize(this->octet_string, all_types);
//  initialize_OctetStringConfig(pDatabaseConfig, all_types);
}

boolean setDataMapKeys_for_AnalogSpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_AnalogSpec) return 0;
  pDatabaseConfig->DataMapKeys_for_AnalogSpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_AnalogOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_AnalogOutputStatusSpec) return 0;
  pDatabaseConfig->DataMapKeys_for_AnalogOutputStatusSpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_BinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_BinarySpec) return 0;
  pDatabaseConfig->DataMapKeys_for_BinarySpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_DoubleBitBinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_DoubleBitBinarySpec) return 0;
  pDatabaseConfig->DataMapKeys_for_DoubleBitBinarySpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_BinaryOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_BinaryOutputStatusSpec) return 0;
  pDatabaseConfig->DataMapKeys_for_BinaryOutputStatusSpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_CounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_CounterSpec) return 0;
  pDatabaseConfig->DataMapKeys_for_CounterSpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_FrozenCounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_FrozenCounterSpec) return 0;
  pDatabaseConfig->DataMapKeys_for_FrozenCounterSpec[index] = data;
  return 1;
}

//const 
boolean setDataMapKeys_for_TimeAndIntervalSpec(DatabaseConfig *pDatabaseConfig, uint16_t index, uint16_t data)
{
  if(index >= SIZE_StaticDataMap_for_TimeAndIntervalSpec) return 0;
  pDatabaseConfig->DataMapKeys_for_TimeAndIntervalSpec[index] = data;
  return 1;
}

uint16_t IndexMass2KeyMap_for_AnalogSpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_AnalogSpec[index];
}
uint16_t IndexMass2KeyMap_for_AnalogOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_AnalogOutputStatusSpec[index];
}
uint16_t IndexMass2KeyMap_for_BinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_BinarySpec[index];
}
uint16_t IndexMass2KeyMap_for_DoubleBitBinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_DoubleBitBinarySpec[index];
}
uint16_t IndexMass2KeyMap_for_BinaryOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_BinaryOutputStatusSpec[index];
}

uint16_t IndexMass2KeyMap_for_CounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_CounterSpec[index];
}
uint16_t IndexMass2KeyMap_for_FrozenCounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_FrozenCounterSpec[index];
}
uint16_t IndexMass2KeyMap_for_TimeAndIntervalSpec(DatabaseConfig *pDatabaseConfig, uint16_t index)
{
  return pDatabaseConfig->DataMapKeys_for_TimeAndIntervalSpec[index];
}

////} // namespace opendnp3
