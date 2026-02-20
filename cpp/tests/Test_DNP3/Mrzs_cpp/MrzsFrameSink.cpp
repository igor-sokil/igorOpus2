
#include "log_info.h"
#ifdef  LOG_INFO
#include <iostream>
#endif

#include "header_dnp3.h"
#include "MrzsFrameSink.h"
#include <string.h>

////using namespace opendnp3;
////using namespace ser4cpp;

void MrzsFrameSink_in_MrzsFrameSink(MrzsFrameSink *pMrzsFrameSink)//, OutstationMrzsObject *t, TransportLayerMrzs* transport)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{MrzsFrameSink_in_MrzsFrameSink1"<<'\n';
#endif
  LinkHeaderFields_in_LinkHeaderFieldsOver1(&(pMrzsFrameSink->m_last_header));

  pMrzsFrameSink->m_num_frames = 0;
  pMrzsFrameSink->mLowerOnline = false;
  pMrzsFrameSink->userdata = NULL;
//  pMrzsFrameSink->iILinkSession.pOnTxReady_in_ILinkSession = OnTxReady_in_MockFrameSink_override;
//  pMockFrameSink->iILinkSession.pOnLowerLayerUp_in_ILinkSession = OnLowerLayerUp_in_MockFrameSink_override;
//  pMockFrameSink->iILinkSession.pOnLowerLayerDown_in_ILinkSession = OnLowerLayerDown_in_MockFrameSink_override;

  pMrzsFrameSink->iILinkSession.iIFrameSink.pOnFrame_in_IFrameSink = OnFrame_in_MrzsFrameSink_override;
//  pMrzsFrameSink->transportMrzs = transport;
//  pMrzsFrameSink->mrzsObject = t;

  setParentPointer_in_ILinkSession(&(pMrzsFrameSink->iILinkSession), pMrzsFrameSink);
  setParentPointer_in_IFrameSink(&(pMrzsFrameSink->iILinkSession.iIFrameSink), pMrzsFrameSink);
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"}MrzsFrameSink_in_MrzsFrameSink_"<<'\n';
#endif
}
/*
boolean OnLowerLayerUp_in_MockFrameSink_override(void *pILinkSession)
{
  MockFrameSink* parent =  (MockFrameSink*) getParentPointer_in_ILinkSession((ILinkSession*) pILinkSession);
  return OnLowerLayerUp_in_MockFrameSink(parent);
}
boolean OnLowerLayerDown_in_MockFrameSink_override(void *pILinkSession)
{
  MockFrameSink* parent =  (MockFrameSink*) getParentPointer_in_ILinkSession((ILinkSession*) pILinkSession);
  return OnLowerLayerDown_in_MockFrameSink(parent);
}
boolean OnTxReady_in_MockFrameSink_override(void *pILinkSession)
{
  MockFrameSink* parent =  (MockFrameSink*) getParentPointer_in_ILinkSession((ILinkSession*) pILinkSession);
  return OnTxReady_in_MockFrameSink(parent);
}
*/
boolean OnFrame_in_MrzsFrameSink_override(void* pIFrameSink, LinkHeaderFields* header, RSeq_for_Uint16_t* userdata)
{
  MrzsFrameSink* parent =  (MrzsFrameSink*) getParentPointer_in_IFrameSink((IFrameSink*) pIFrameSink);
  return OnFrame_in_MrzsFrameSink(parent, header, userdata);
}
/*
////boolean MockFrameSink::OnLowerLayerUp()
boolean OnLowerLayerUp_in_MockFrameSink(MockFrameSink *pMockFrameSink)
{
  pMockFrameSink->mLowerOnline = true;
  return true;
}

////bool MockFrameSink::OnLowerLayerDown()
boolean OnLowerLayerDown_in_MockFrameSink(MockFrameSink *pMockFrameSink)
{
  pMockFrameSink->mLowerOnline = false;
  return true;
}

void Reset_in_MockFrameSink(MockFrameSink *pMockFrameSink)
{
//   void Clear_in_DataSink(DataSink *pDataSink);
////    this->received.Clear();
  Clear_in_DataSink(&(pMockFrameSink->received));
  pMockFrameSink->m_num_frames = 0;
}

boolean CheckLast_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t func, boolean isMaster, uint16_t dest, uint16_t src)
{
  return (pMockFrameSink->m_last_header.func == func) && (isMaster == pMockFrameSink->m_last_header.isFromMaster)
         && (pMockFrameSink->m_last_header.addresses.source == src) && (pMockFrameSink->m_last_header.addresses.destination == dest);
}

boolean CheckLastWithFCB_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t func, boolean isMaster, boolean aFcb, uint16_t dest, uint16_t src)
{
//boolean CheckLast_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t func, boolean isMaster, uint16_t dest, uint16_t src)
  return (pMockFrameSink->m_last_header.fcb == aFcb) && CheckLast_in_MockFrameSink(pMockFrameSink, func, isMaster, dest, src);
}

boolean CheckLastWithDFC_in_MockFrameSink(MockFrameSink *pMockFrameSink, LinkFunction_uint8_t func, boolean isMaster, boolean aIsRcvBuffFull, uint16_t dest, uint16_t src)
{
  return (pMockFrameSink->m_last_header.fcvdfc == aIsRcvBuffFull) && CheckLast_in_MockFrameSink(pMockFrameSink, func, isMaster, dest, src);
}

////bool MockFrameSink::OnTxReady()
boolean OnTxReady_in_MockFrameSink(MockFrameSink *pMockFrameSink)
{
  UNUSED(pMockFrameSink);
  return true;
}
*/
////bool MockFrameSink::OnFrame(const LinkHeaderFields& header, const rseq_t& userdata)
boolean OnFrame_in_MrzsFrameSink(MrzsFrameSink *pMrzsFrameSink, LinkHeaderFields* header, RSeq_for_Uint16_t* userdata)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{OnFrame_in_MrzsFrameSink1"<<'\n';
  std::cout<<"FinalDestination_in_MrzsFrameSink:"<<'\n';
  inspect_LinkHeaderFields(header);
#endif

  ++(pMrzsFrameSink->m_num_frames);

  pMrzsFrameSink->m_last_header = *header;

//    boolean is_not_empty_in_HasLength_for_Uint16_t(HasLength_for_Uint16_t *pHasLength);
////    if (userdata.is_not_empty())
  if (is_not_empty_in_HasLength_for_Uint16_t(&(userdata->hHasLength)))
  {
//    void Write_in_DataSink(DataSink *pDataSink, RSeq_for_Uint16_t* data);
////        this->received.Write(userdata);
//    Write_in_DataSink(&(pMockFrameSink->received), userdata);
    pMrzsFrameSink->userdata = userdata;
#ifdef  LOG_INFO
  inspect_RSeq(userdata);
#endif
//boolean OnReceive_in_TransportLayer(TransportLayer *pTransportLayer, Message* message)
//  Message mMessage;
//  Addresses aAddresses;
//  Addresses_in_AddressesOver1(&aAddresses);
//  Message_in_Message(&mMessage, &aAddresses, userdata);
//  boolean tmp = OnReceive_in_TransportLayerMrzs(pMrzsFrameSink->transportMrzs, &mMessage);
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"}OnFrame_in_MrzsFrameSink1_"<<'\n';
#endif
  return true;
  }

#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"}OnFrame_in_MrzsFrameSink2_"<<'\n';
#endif
  return false;
}
/*
void AddAction_in_MockFrameSink(MockFrameSink *pMockFrameSink, const std::function<void()>& fun)
{
  pMockFrameSink->m_actions.push_back(fun);
}

void ExecuteAction_in_MockFrameSink(MockFrameSink *pMockFrameSink)
{
  if (!pMockFrameSink->m_actions.empty())
  {
    auto f = pMockFrameSink->m_actions.front();
    pMockFrameSink->m_actions.pop_front();
    f();
  }
}
*/
