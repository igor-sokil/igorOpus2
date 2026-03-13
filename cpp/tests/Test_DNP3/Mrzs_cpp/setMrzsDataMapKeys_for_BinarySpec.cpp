#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

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
  return 0;
}
