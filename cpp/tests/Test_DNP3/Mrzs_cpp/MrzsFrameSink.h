
#ifndef OPENDNP3_UNITTESTS_MRZSFRAMESINK_H
#define OPENDNP3_UNITTESTS_MRZSFRAMESINK_H

////#include <opendnp3/gen/LinkFunction.h>

////#include "dnp3mocks/DataSink.h"

////#include <link/ILinkSession.h>
////#include <link/LinkLayerConstants.h>

//#include "LinkFunction.h"

//#include "DataSink.h"

#include "ILinkSession.h"
//#include "LinkLayerConstants.h"

//#include <functional>
//#include <queue>
//#include "TransportLayerMrzs.h"
//#include "OutstationConfig.h"
//#include "OutstationMrzsObject.h"

////class MockFrameSink : public opendnp3::ILinkSession
typedef struct
{
  ILinkSession iILinkSession;

////public:
////    MockFrameSink();

  // ILinkSession members
////    bool OnLowerLayerUp() override;
////    bool OnLowerLayerDown() override;
////    bool OnTxReady() override;

////    bool OnFrame(const opendnp3::LinkHeaderFields& header, const ser4cpp::rseq_t& userdata) final;

////    void Reset();

////    bool CheckLast(opendnp3::LinkFunction func, bool aIsMaster, uint16_t aDest, uint16_t aSrc);
////    bool CheckLastWithFCB(opendnp3::LinkFunction func, bool aIsMaster, bool aFcb, uint16_t aDest, uint16_t aSrc);
////    bool CheckLastWithDFC(
////        opendnp3::LinkFunction func, bool aIsMaster, bool aIsRcvBuffFull, uint16_t aDest, uint16_t aSrc);

  // Last frame information
  uint16_t m_num_frames;
  LinkHeaderFields m_last_header;

  boolean mLowerOnline;
  RSeq_for_Uint16_t* userdata;
//  TransportLayerMrzs* transportMrzs;
//  OutstationMrzsObject* mrzsObject;

  // Add a function to execute the next time a frame is received
  // This allows us to test re-entrant behaviors
// Добавляем функцию, которая будет выполняться при следующем получении кадра
   // Это позволяет нам тестировать поведение повторного входа
////    void AddAction(const std::function<void()>& fun);

//  DataSink received;

////private:
  // Executes one action, if one is available
////    void ExecuteAction();

//  std::deque<std::function<void()>> m_actions;

////    void Update(opendnp3::LinkFunction aCode, bool aIsMaster, uint16_t aSrc, uint16_t aDest);
} MrzsFrameSink;

void MrzsFrameSink_in_MrzsFrameSink(MrzsFrameSink *pMrzsFrameSink);//, OutstationMrzsObject *t, TransportLayerMrzs* transportMrzs);
/*
boolean OnLowerLayerUp_in_MockFrameSink_override(void *pILinkSession);
boolean OnLowerLayerDown_in_MockFrameSink_override(void *pILinkSession);
boolean OnTxReady_in_MockFrameSink_override(void *pILinkSession);
*/
boolean OnFrame_in_MrzsFrameSink_override(void* pIFrameSink, LinkHeaderFields* header, RSeq_for_Uint16_t* userdata);
/*
boolean OnLowerLayerUp_in_MockFrameSink(MockFrameSink *pMockFrameSink);
boolean OnLowerLayerDown_in_MockFrameSink(MockFrameSink *pMockFrameSink);
boolean OnTxReady_in_MockFrameSink(MockFrameSink *pMockFrameSink);
*/
boolean OnFrame_in_MrzsFrameSink(MrzsFrameSink *pMrzsFrameSink, LinkHeaderFields* header, RSeq_for_Uint16_t* userdata);
/*
void Update_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t aCode, boolean aIsMaster, uint16_t aSrc, uint16_t aDest);
void AddAction_in_MockFrameSink(MockFrameSink *pMockFrameSink, const std::function<void()>& fun);

boolean CheckLast_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t func, boolean aIsMaster, uint16_t aDest, uint16_t aSrc);
boolean CheckLastWithFCB_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t func, boolean aIsMaster, boolean aFcb, uint16_t aDest, uint16_t aSrc);
boolean CheckLastWithDFC_in_MockFrameSink(MockFrameSink *pMockFrameSink,
    LinkFunction_uint8_t func, boolean aIsMaster, boolean aIsRcvBuffFull, uint16_t aDest, uint16_t aSrc);
*/
#endif
