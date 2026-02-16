
#ifndef OPENDNP3_UNITTESTS_MRZS_OUTSTATION_APPLICATION_H
#define OPENDNP3_UNITTESTS_MRZS_OUTSTATION_APPLICATION_H

#include <IOutstationApplication.h>

//#include "ICollection.h"

//#include <deque>
//#include <tuple>

struct ConfirmResult
{
  boolean is_unsolicited;
  uint32_t num_class1;
  uint32_t num_class2;
  uint32_t num_class3;
};

////class MrzsOutstationApplication : public opendnp3::IOutstationApplication
typedef struct
{
  IOutstationApplication iIOutstationApplication;

  DNPTime currentTime;

  boolean supportsTimeWrite;
  boolean supportsAssignClass;
  boolean supportsWriteTimeAndInterval;

  boolean allowTimeWrite;

//  RestartMode_uint8_t warmRestartSupport;
//  RestartMode_uint8_t coldRestartSupport;

//  uint16_t warmRestartTimeDelay;
//  uint16_t coldRestartTimeDelay;

  ApplicationIIN appIIN;

//  std::deque<UTCTimestamp> timestamps;
//  std::deque<std::tuple<AssignClassType_uint8_t, PointClass_uint8_t, uint16_t, uint16_t>> classAssignments;
//  std::deque<Indexed_for_TimeAndInterval> timeAndIntervals;
//  std::deque<ConfirmResult> confirms;
} MrzsOutstationApplication;

void MrzsOutstationApplication_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);


DNPTime Now_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
DNPTime Now_in_MrzsOutstationApplication_override(void *pIDnpTimeSource);

//void OnStateChange_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication, LinkStatus_uint8_t value);
//void OnStateChange_in_MrzsOutstationApplication_override(void *pILinkListener, LinkStatus_uint8_t value);

boolean SupportsWriteAbsoluteTime_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
boolean SupportsWriteAbsoluteTime_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

boolean WriteAbsoluteTime_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication, UTCTimestamp* timestamp);
boolean WriteAbsoluteTime_in_MrzsOutstationApplication_override(void *pIOutstationApplication, UTCTimestamp* timestamp);

boolean SupportsWriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
boolean SupportsWriteTimeAndInterval_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

boolean __WriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
    ICollection_Indexed_for_TimeAndInterval* meas);
boolean WriteTimeAndInterval_in_MrzsOutstationApplication_override(void *pIOutstationApplication,
    ICollection_Indexed_for_TimeAndInterval* meas);

boolean SupportsAssignClass_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
boolean SupportsAssignClass_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

void RecordClassAssignment_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
    AssignClassType_uint8_t type,
    PointClass_uint8_t clazz,
    uint16_t start,
    uint16_t stop);
void RecordClassAssignment_in_MrzsOutstationApplication_override(void *pIOutstationApplication,
    AssignClassType_uint8_t type,
    PointClass_uint8_t clazz,
    uint16_t start,
    uint16_t stop);

ApplicationIIN GetApplicationIIN_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
ApplicationIIN GetApplicationIIN_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

//RestartMode_uint8_t ColdRestartSupport_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
//RestartMode_uint8_t ColdRestartSupport_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

//RestartMode_uint8_t WarmRestartSupport_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
//RestartMode_uint8_t WarmRestartSupport_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

//uint16_t ColdRestart_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
//uint16_t ColdRestart_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

//uint16_t WarmRestart_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication);
//uint16_t WarmRestart_in_MrzsOutstationApplication_override(void *pIOutstationApplication);

void OnConfirmProcessed_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
    boolean is_unsolicited, uint32_t num_class1, uint32_t num_class2, uint32_t num_class3);
void OnConfirmProcessed_in_MrzsOutstationApplication_override(void *pIOutstationApplication,
    boolean is_unsolicited, uint32_t num_class1, uint32_t num_class2, uint32_t num_class3);

void SetTime_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication, DNPTime timeDNPTime);


#endif
