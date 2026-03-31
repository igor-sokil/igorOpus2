
#include "log_info.h"

#include "header_dnp3.h"
#include "MrzsOutstationApplication.h"

////    MrzsOutstationApplication()
////        : currentTime(opendnp3::DNPTime(0, opendnp3::TimestampQuality::INVALID)),
////          supportsTimeWrite(true),
////          supportsAssignClass(false),
////          supportsWriteTimeAndInterval(false),
////          allowTimeWrite(true),
////          warmRestartSupport(opendnp3::RestartMode::UNSUPPORTED),
////          coldRestartSupport(opendnp3::RestartMode::UNSUPPORTED),
////          warmRestartTimeDelay(0),
////          coldRestartTimeDelay(0)
////    {
////    }

void MrzsOutstationApplication_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
#ifdef  LOG_INFO
  increment_stack_info();
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"{MrzsOutstationApplication_in_MrzsOutstationApplication1"<<'\n';
#endif
//  void DNPTime_in_DNPTimeOver2(DNPTime *pDNPTime, uint64_t value);
////        : currentTime(opendnp3::DNPTime(0, opendnp3::TimestampQuality::INVALID)),
  DNPTime_in_DNPTimeOver2(&(pMrzsOutstationApplication->currentTime), TimestampQuality_INVALID);

  ApplicationIIN_in_ApplicationIIN(&(pMrzsOutstationApplication->appIIN));
  IOutstationApplication_in_IOutstationApplication(&(pMrzsOutstationApplication->iIOutstationApplication));

  pMrzsOutstationApplication->supportsTimeWrite = true;
  pMrzsOutstationApplication->supportsAssignClass = false;
  pMrzsOutstationApplication->supportsWriteTimeAndInterval = false;
  pMrzsOutstationApplication->allowTimeWrite = true;
/*
  pMrzsOutstationApplication->warmRestartSupport = RestartMode_UNSUPPORTED;
  pMrzsOutstationApplication->coldRestartSupport = RestartMode_UNSUPPORTED;

  pMrzsOutstationApplication->warmRestartTimeDelay = 0;
  pMrzsOutstationApplication->coldRestartTimeDelay = 0;

  pMrzsOutstationApplication->iIOutstationApplication.iILinkListener.pOnStateChange_in_ILinkListener = OnStateChange_in_MrzsOutstationApplication_override;
*/
  pMrzsOutstationApplication->iIOutstationApplication.iIDnpTimeSource.pNow_in_IDnpTimeSource_static = Now_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pSupportsWriteAbsoluteTime_in_IOutstationApplication = SupportsWriteAbsoluteTime_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pWriteAbsoluteTime_in_IOutstationApplication = WriteAbsoluteTime_in_MrzsOutstationApplication_override;

  pMrzsOutstationApplication->iIOutstationApplication.pSupportsWriteTimeAndInterval_in_IOutstationApplication = SupportsWriteTimeAndInterval_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pWriteTimeAndInterval_in_IOutstationApplication = WriteTimeAndInterval_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pSupportsAssignClass_in_IOutstationApplication = SupportsAssignClass_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pRecordClassAssignment_in_IOutstationApplication = RecordClassAssignment_in_MrzsOutstationApplication_override;

  pMrzsOutstationApplication->iIOutstationApplication.pGetApplicationIIN_in_IOutstationApplication = GetApplicationIIN_in_MrzsOutstationApplication_override;
/*
  pMrzsOutstationApplication->iIOutstationApplication.pColdRestartSupport_in_IOutstationApplication = ColdRestartSupport_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pWarmRestartSupport_in_IOutstationApplication = WarmRestartSupport_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pColdRestart_in_IOutstationApplication = ColdRestart_in_MrzsOutstationApplication_override;
  pMrzsOutstationApplication->iIOutstationApplication.pWarmRestart_in_IOutstationApplication = WarmRestart_in_MrzsOutstationApplication_override;
*/
  pMrzsOutstationApplication->iIOutstationApplication.pOnConfirmProcessed_in_IOutstationApplication = OnConfirmProcessed_in_MrzsOutstationApplication_override;

  setParentPointer_in_IDnpTimeSource(&(pMrzsOutstationApplication->iIOutstationApplication.iIDnpTimeSource), pMrzsOutstationApplication);
//  setParentPointer_in_ILinkListener(&(pMrzsOutstationApplication->iIOutstationApplication.iILinkListener), pMrzsOutstationApplication);

  setParentPointer_in_IOutstationApplication(&(pMrzsOutstationApplication->iIOutstationApplication), pMrzsOutstationApplication);

#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}MrzsOutstationApplication_in_MrzsOutstationApplication_"<<'\n';
  decrement_stack_info();
#endif
}

DNPTime Now_in_MrzsOutstationApplication_override(void *pIDnpTimeSource)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IDnpTimeSource((IDnpTimeSource*)pIDnpTimeSource);
  return Now_in_MrzsOutstationApplication(parent);
}
/*
void OnStateChange_in_MrzsOutstationApplication_override(void *pILinkListener, LinkStatus_uint8_t value)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_ILinkListener((ILinkListener*)pILinkListener);
  OnStateChange_in_MrzsOutstationApplication(parent, value);
}
*/
boolean SupportsWriteAbsoluteTime_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return SupportsWriteAbsoluteTime_in_MrzsOutstationApplication(parent);
}

boolean WriteAbsoluteTime_in_MrzsOutstationApplication_override(void *pIOutstationApplication, UTCTimestamp* timestamp)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return WriteAbsoluteTime_in_MrzsOutstationApplication(parent, timestamp);
}

boolean SupportsWriteTimeAndInterval_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return SupportsWriteTimeAndInterval_in_MrzsOutstationApplication(parent);
}

/*
WriteTimeAndInterval_in_MrzsOutstationApplication
`WriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication*, ICollection_Indexed_for_TimeAndInterval*)
*/

boolean WriteTimeAndInterval_in_MrzsOutstationApplication_override(void *pIOutstationApplication,
    ICollection_Indexed_for_TimeAndInterval* meas)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return __WriteTimeAndInterval_in_MrzsOutstationApplication(parent, meas);
}

boolean SupportsAssignClass_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return SupportsAssignClass_in_MrzsOutstationApplication(parent);
}

void RecordClassAssignment_in_MrzsOutstationApplication_override(void *pIOutstationApplication,
    AssignClassType_uint8_t type,
    PointClass_uint8_t clazz,
    uint16_t start,
    uint16_t stop)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  RecordClassAssignment_in_MrzsOutstationApplication(parent,
      type,
      clazz,
      start,
      stop);
}

ApplicationIIN GetApplicationIIN_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return GetApplicationIIN_in_MrzsOutstationApplication(parent);
}
/*
RestartMode_uint8_t ColdRestartSupport_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return ColdRestartSupport_in_MrzsOutstationApplication(parent);
}

RestartMode_uint8_t WarmRestartSupport_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return WarmRestartSupport_in_MrzsOutstationApplication(parent);
}

uint16_t ColdRestart_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return ColdRestart_in_MrzsOutstationApplication(parent);
}

uint16_t WarmRestart_in_MrzsOutstationApplication_override(void *pIOutstationApplication)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  return WarmRestart_in_MrzsOutstationApplication(parent);
}
*/
void OnConfirmProcessed_in_MrzsOutstationApplication_override(void *pIOutstationApplication,
    boolean is_unsolicited, uint32_t num_class1, uint32_t num_class2, uint32_t num_class3)
{
  MrzsOutstationApplication* parent = (MrzsOutstationApplication*)getParentPointer_in_IOutstationApplication((IOutstationApplication*)pIOutstationApplication);
  OnConfirmProcessed_in_MrzsOutstationApplication(parent,
      is_unsolicited, num_class1, num_class2, num_class3);
}

DNPTime Now_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->currentTime;
}
/*
void OnStateChange_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication, LinkStatus_uint8_t value)
{
  UNUSED(pMrzsOutstationApplication);
  UNUSED(value);
}
*/
boolean SupportsWriteAbsoluteTime_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->supportsTimeWrite;
}

boolean WriteAbsoluteTime_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication, UTCTimestamp* timestamp)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{WriteAbsoluteTime_in_MrzsOutstationApplication1"<<'\n';
#endif
  if (pMrzsOutstationApplication->allowTimeWrite)
  {
//    UTCTimestamp Timestamp;
//    Timestamp = *timestamp;

//  std::cout<<"*UTCTimestamp.msSinceEpoch= "<<std::hex<<Timestamp.msSinceEpoch<<std::dec<<'\n';

//    pMrzsOutstationApplication->timestamps.push_back(Timestamp);
#ifdef  LOG_INFO
  std::cout<<"}WriteAbsoluteTime_in_MrzsOutstationApplication1_"<<'\n';
#endif
    return true;
  }
  else
  {
#ifdef  LOG_INFO
  std::cout<<"}WriteAbsoluteTime_in_MrzsOutstationApplication2_"<<'\n';
#endif
    return false;
  }
}

boolean SupportsWriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->supportsWriteTimeAndInterval;
}

void __push_in_MrzsOutstationApplication(Indexed_for_TimeAndInterval value);

//            void (*fun)(ICollection_Indexed_for_TimeAndInterval *pICollection_Indexed_for_TimeAndInterval,
//            Indexed_for_TimeAndInterval* item));
////        auto push = [this](const opendnp3::Indexed<opendnp3::TimeAndInterval>& value)
void __push_in_MrzsOutstationApplication(Indexed_for_TimeAndInterval value)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{__push_in_MrzsOutstationApplication1"<<'\n';
#endif
//  pPointerGlobal1 = pMrzsOutstationApplication;
  Indexed_for_TimeAndInterval iIndexed_for_TimeAndInterval;
  iIndexed_for_TimeAndInterval = value;
////            this->timeAndIntervals.push_back(value);
//  ((MrzsOutstationApplication*)pPointerGlobal1)->timeAndIntervals.push_back(iIndexed_for_TimeAndInterval);
#ifdef  LOG_INFO
  std::cout<<"}__push_in_MrzsOutstationApplication_"<<'\n';
#endif
}

//boolean __WriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
//    ICollection_Indexed_for_TimeAndInterval* meas);

/*
__WriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication*, ICollection_Indexed_for_TimeAndInterval*)
*/

boolean __WriteTimeAndInterval_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
    ICollection_Indexed_for_TimeAndInterval* meas)
{
////        auto push = [this](const opendnp3::Indexed<opendnp3::TimeAndInterval>& value) {
////            this->timeAndIntervals.push_back(value);
////        };

//void ForeachItem_in_ICollection_Indexed_for_TimeAndInterval(
//            ICollection_Indexed_for_TimeAndInterval *pICollection_Indexed_for_TimeAndInterval,
//            void (*fun)(ICollection_Indexed_for_TimeAndInterval *pICollection_Indexed_for_TimeAndInterval,
//            Indexed_for_TimeAndInterval* item));
////        meas.ForeachItem(push);
  pPointerGlobal1 = pMrzsOutstationApplication;
  ForeachItem_in_ICollection_Indexed_for_TimeAndInterval(meas, __push_in_MrzsOutstationApplication);
  return true;
}


boolean SupportsAssignClass_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->supportsAssignClass;
}

void RecordClassAssignment_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
    AssignClassType_uint8_t type,
    PointClass_uint8_t clazz,
    uint16_t start,
    uint16_t stop)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"RecordClassAssignment_in_MrzsOutstationApplication1"<<'\n';
   std::cout<<"*AssignClassType_uint8_t type= "<<(uint16_t)type<<'\n';
   std::cout<<"*PointClass_uint8_t clazz= "<<(uint16_t)clazz<<'\n';
   std::cout<<"*uint16_t start= "<<(uint16_t)start<<'\n';
   std::cout<<"*uint16_t stop= "<<(uint16_t)stop<<'\n';
//  pMrzsOutstationApplication->classAssignments.push_back(std::make_tuple(type, clazz, start, stop));
#endif
}

ApplicationIIN GetApplicationIIN_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->appIIN;
}
/*
RestartMode_uint8_t ColdRestartSupport_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->coldRestartSupport;
}

RestartMode_uint8_t WarmRestartSupport_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->warmRestartSupport;
}

uint16_t ColdRestart_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->coldRestartTimeDelay;
}

uint16_t WarmRestart_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication)
{
  return pMrzsOutstationApplication->warmRestartTimeDelay;
}
*/
void OnConfirmProcessed_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication,
    boolean is_unsolicited, uint32_t num_class1, uint32_t num_class2, uint32_t num_class3)
{
#ifdef  LOG_INFO
   std::cout<<'\n';
   std::cout<<"OnConfirmProcessed_in_MrzsOutstationApplication1"<<'\n';
  ConfirmResult confirm;
  confirm.is_unsolicited = is_unsolicited;
  confirm.num_class1 = num_class1;
  confirm.num_class2 = num_class2;
  confirm.num_class3 = num_class3;
//  pMrzsOutstationApplication->confirms.push_back(confirm);
#endif  
}

////    void SetTime(opendnp3::DNPTime time)
void SetTime_in_MrzsOutstationApplication(MrzsOutstationApplication *pMrzsOutstationApplication, DNPTime timeDNPTime)
{
////        this->currentTime = time;
   pMrzsOutstationApplication->currentTime = timeDNPTime;
}

