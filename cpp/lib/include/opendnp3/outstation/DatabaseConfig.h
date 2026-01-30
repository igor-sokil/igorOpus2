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
#ifndef OPENDNP3_DATABASECONFIG_H
#define OPENDNP3_DATABASECONFIG_H

//#include "opendnp3/outstation/MeasurementConfig.h"
#include "StaticDataMapConfig.h"
#include "DataMapKeys.h"
#include "MeasurementConfig.h"

//#include <map>

////namespace opendnp3
////{

////struct DatabaseConfig
typedef struct
{
////    DatabaseConfig() = default;

////    DatabaseConfig(uint16_t all_types);

//  std::map<uint16_t, BinaryConfig> binary_input;
  BinaryConfig binary_input_config[SIZE_StaticDataMap_for_BinarySpec];
  uint16_t binary_input_count;

//  std::map<uint16_t, DoubleBitBinaryConfig> double_binary;
  DoubleBitBinaryConfig double_binary_config[SIZE_StaticDataMap_for_DoubleBitBinarySpec];
  uint16_t double_binary_count;

//  std::map<uint16_t, AnalogConfig> analog_input;
  AnalogConfig analog_input_config[SIZE_StaticDataMap_for_AnalogSpec];
  uint16_t analog_input_count;

//  std::map<uint16_t, CounterConfig> counter;
  CounterConfig counter_config[SIZE_StaticDataMap_for_CounterSpec];
  uint16_t counter_count;

//  std::map<uint16_t, FrozenCounterConfig> frozen_counter;
  FrozenCounterConfig frozen_counter_config[SIZE_StaticDataMap_for_FrozenCounterSpec];
  uint16_t frozen_counter_count;

//  std::map<uint16_t, BOStatusConfig> binary_output_status;
  BOStatusConfig binary_output_status_config[SIZE_StaticDataMap_for_BinaryOutputStatusSpec];
  uint16_t binary_output_status_count;

//  std::map<uint16_t, AOStatusConfig> analog_output_status;
  AOStatusConfig analog_output_status_config[SIZE_StaticDataMap_for_AnalogOutputStatusSpec];
  uint16_t analog_output_status_count;

//  std::map<uint16_t, TimeAndIntervalConfig> time_and_interval;
  TimeAndIntervalConfig time_and_interval_config[SIZE_StaticDataMap_for_TimeAndIntervalSpec];
  uint16_t time_and_interval_count;

//  std::map<uint16_t, OctetStringConfig> octet_string;
//  OctetStringConfig octet_string_config;
//  uint16_t octet_string_count;

} DatabaseConfig;

void DatabaseConfig_in_DatabaseConfig_default(DatabaseConfig *pDatabaseConfig);
void DatabaseConfig_in_DatabaseConfig(DatabaseConfig *pDatabaseConfig, uint16_t all_types);

void initialize_BinaryConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_DoubleBitBinaryConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_AnalogConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_CounterConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_FrozenCounterConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_BOStatusConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_AOStatusConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);
void initialize_TimeAndIntervalConfig(DatabaseConfig *pDatabaseConfig, uint16_t count);

uint16_t KeyMap2IndexMass_for_BinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_AnalogSpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_CounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_DoubleBitBinarySpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_FrozenCounterSpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_AnalogOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_BinaryOutputStatusSpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t KeyMap2IndexMass_for_TimeAndIntervalSpec(DatabaseConfig *pDatabaseConfig, uint16_t key);
uint16_t IndexMass2KeyMap_for_AnalogSpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_BinarySpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_CounterSpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_DoubleBitBinarySpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_FrozenCounterSpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_AnalogOutputStatusSpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_BinaryOutputStatusSpec(uint16_t index);
uint16_t IndexMass2KeyMap_for_TimeAndIntervalSpec(uint16_t index);

////} // namespace opendnp3

#endif
