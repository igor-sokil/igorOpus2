#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

boolean  setMrzsDataMapKeys_for_BinarySpec(DatabaseConfig* pDatabaseConfig);

boolean  setMrzsDataMapKeys_for_BinarySpec(DatabaseConfig* pDatabaseConfig)
{
  uint16_t index = 0;
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50000);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50001);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50002);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50003);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50004);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50005);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50006);
  setDataMapKeys_for_BinarySpec(pDatabaseConfig, index++, 50007);

  uint16_t iter_first = KeyMap2IndexMass_for_BinarySpec(pDatabaseConfig, 50000);
  if(iter_first < 0xFF00) pDatabaseConfig->binary_input_config[iter_first].eEventConfig.clazz = PointClass_Class1;
  return 0;
}

boolean  updateMrzsDataMapKeys_for_BinarySpec(Database* pDatabase);

boolean  updateMrzsDataMapKeys_for_BinarySpec(Database* pDatabase)
{
  Flags fFlags;
  Flags_In_FlagsOver2(&fFlags, 1);
  Binary bBinary1;
  Binary_in_BinaryOver5(&bBinary1, true, fFlags);
  boolean tmp = Update_for_Binary_in_Database(pDatabase, &bBinary1, 50000, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50001, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50002, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50003, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50004, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50005, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50006, EventMode_Suppress);
  tmp &= Update_for_Binary_in_Database(pDatabase, &bBinary1, 50007, EventMode_Suppress);
  return tmp;
}
