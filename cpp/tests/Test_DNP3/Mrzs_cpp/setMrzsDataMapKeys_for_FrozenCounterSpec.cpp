#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

boolean  setMrzsDataMapKeys_for_FrozenCounterSpec(DatabaseConfig* pDatabaseConfig);

boolean  setMrzsDataMapKeys_for_FrozenCounterSpec(DatabaseConfig* pDatabaseConfig)
{
  uint16_t index = 0;
  setDataMapKeys_for_FrozenCounterSpec(pDatabaseConfig, index++, 10315);
  setDataMapKeys_for_FrozenCounterSpec(pDatabaseConfig, index++, 10316);

//  uint16_t iter_first = KeyMap2IndexMass_for_FrozenCounterSpec(pDatabaseConfig, 10315);
//  if(iter_first < 0xFF00) pDatabaseConfig->frozen_counter_config[iter_first].dDeadbandConfig_for_FrozenCounterInfo.eEventConfig.svariation = StaticFrozenCounterVariation_Group21Var5;

  return 0;
}
