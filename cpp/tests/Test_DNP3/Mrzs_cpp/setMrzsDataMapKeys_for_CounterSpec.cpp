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
  return 0;
}

boolean  updateMrzsDataMapKeys_for_CounterSpec(Database* pDatabase);

boolean updateMrzsDataMapKeys_for_CounterSpec(Database* pDatabase)
{
  Counter cCounter1;
  Counter_in_CounterOver2(&cCounter1, 2);
  boolean tmp = Update_for_Counter_in_Database(pDatabase, &cCounter1, 10315, EventMode_Suppress);
  tmp &= Update_for_Counter_in_Database(pDatabase, &cCounter1, 10316, EventMode_Suppress);
  return tmp;
}

