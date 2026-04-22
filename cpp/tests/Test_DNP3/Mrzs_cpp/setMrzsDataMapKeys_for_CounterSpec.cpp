#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

boolean  setMrzsDataMapKeys_for_CounterSpec(DatabaseConfig* pDatabaseConfig);

boolean  setMrzsDataMapKeys_for_CounterSpec(DatabaseConfig* pDatabaseConfig)
{
  uint16_t index = 0;
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10315);
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10316);
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10317);
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10318);
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10319);
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10320);
  setDataMapKeys_for_CounterSpec(pDatabaseConfig, index++, 10321);

  uint16_t iter_first = KeyMap2IndexMass_for_CounterSpec(pDatabaseConfig, 10315);
  if(iter_first < 0xFF00) pDatabaseConfig->counter_config[iter_first].dDeadbandConfig_for_CounterInfo.eEventConfig.evariation = EventCounterVariation_Group22Var5;

  return 0;
}

boolean  updateMrzsDataMapKeys_for_CounterSpec(Database* pDatabase);

boolean updateMrzsDataMapKeys_for_CounterSpec(Database* pDatabase)
{
//boolean Modify_in_IUpdateHandler(IUpdateHandler*, FlagsType_uint8_t type, uint16_t start, uint16_t stop, uint8_t flags);// = 0;
//  Modify_in_Database(pDatabase, FlagsType_Counter,       10315, 10315, 0x01);
//  Modify_in_Database(pDatabase, FlagsType_FrozenCounter, 10315, 10315, 0x01);

  Counter cCounter1;
  Counter_in_CounterOver2(&cCounter1, 2);
  boolean tmp = Update_for_Counter_in_Database(pDatabase, &cCounter1, 10315, EventMode_Suppress);
  tmp &= Update_for_Counter_in_Database(pDatabase, &cCounter1, 10316, EventMode_Suppress);
  return tmp;
}

