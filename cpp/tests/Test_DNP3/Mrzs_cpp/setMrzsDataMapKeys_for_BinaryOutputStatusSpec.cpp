#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

boolean  setMrzsDataMapKeys_for_BinaryOutputStatusSpec(DatabaseConfig* pDatabaseConfig);

boolean  setMrzsDataMapKeys_for_BinaryOutputStatusSpec(DatabaseConfig* pDatabaseConfig)
{
  uint16_t index = 0;
  setDataMapKeys_for_BinaryOutputStatusSpec(pDatabaseConfig, index++, 3);
  setDataMapKeys_for_BinaryOutputStatusSpec(pDatabaseConfig, index++, 4);

  return 0;
}

