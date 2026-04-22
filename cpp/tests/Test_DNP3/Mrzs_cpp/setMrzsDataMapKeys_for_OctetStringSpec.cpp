#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

boolean  setMrzsDataMapKeys_for_OctetStringSpec(DatabaseConfig* pDatabaseConfig);

boolean  setMrzsDataMapKeys_for_OctetStringSpec(DatabaseConfig* pDatabaseConfig)
{
  uint16_t index = 0;
  setDataMapKeys_for_OctetStringSpec(pDatabaseConfig, index++, 1);
  setDataMapKeys_for_OctetStringSpec(pDatabaseConfig, index++, 2);

  return 0;
}
