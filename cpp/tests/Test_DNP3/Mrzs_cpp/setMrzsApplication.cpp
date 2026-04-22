#include "header_dnp3.h"
#include "OutstationMrzsObject.h"

void setMrzsApplication(MrzsOutstationApplication *application);
void setMrzsApplication(MrzsOutstationApplication *application)
{
  application -> supportsAssignClass = true;

  application -> appIIN.deviceTrouble = true;
  application -> appIIN.localControl = true;
  application -> appIIN.configCorrupt = true;
  application -> appIIN.needTime = true;

  application -> allowTimeWrite = true;
  application -> supportsAssignClass = true;

  application -> warmRestartSupport = RestartMode_SUPPORTED_DELAY_COARSE;
  application -> warmRestartTimeDelay = 65535;

  application -> coldRestartSupport = RestartMode_SUPPORTED_DELAY_FINE;
  application -> coldRestartTimeDelay = 1;

}

