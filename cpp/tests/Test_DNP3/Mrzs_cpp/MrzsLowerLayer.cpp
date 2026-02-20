
#include "log_info.h"
#ifdef  LOG_INFO
#include <iostream>
#endif

#include "header_dnp3.h"
#include "MrzsLowerLayer.h"

//uint8_t Message_in_MrzsLowerLayer[100];
////#include <ser4cpp/util/HexConversions.h>

////#include <cassert>

////using namespace opendnp3;
////using namespace ser4cpp;

void MrzsLowerLayer_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
  HasUpperLayer_in_HasUpperLayer(&(pMrzsLowerLayer->hHasUpperLayer));

  pMrzsLowerLayer->iILowerLayer.pBeginTransmit_in_ILowerLayer = BeginTransmit_in_MrzsLowerLayer_override;
  setParentPointer_in_ILowerLayer(&(pMrzsLowerLayer->iILowerLayer), pMrzsLowerLayer);

  pMrzsLowerLayer->isResponse_in_MrzsLowerLayer = false;
}

////bool MrzsLowerLayer::HasNoData() const
boolean HasNoData_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{HasNoData_in_MrzsLowerLayer1"<<'\n';

  std::cout<<"}HasNoData_in_MrzsLowerLayer_"<<'\n';
#endif
  return true;//pMrzsLowerLayer->sendQueue.empty();
}

////size_t MrzsLowerLayer::NumWrites() const
uint16_t NumWrites_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
  return 0;//pMrzsLowerLayer->sendQueue.size();
}
/*
//Message mMessage1_global_in_MrzsLowerLayer;
////std::string MrzsLowerLayer::PopWriteAsHex()
std::string  PopWriteAsHex_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{PopWriteAsHex_in_MrzsLowerLayer1"<<'\n';
#endif

  if (pMrzsLowerLayer->sendQueue.empty())
  {
#ifdef  LOG_INFO
  std::cout<<"}PopWriteAsHex_in_MrzsLowerLayer1_"<<'\n';
#endif
        return "";
  }

  Message ret = pMrzsLowerLayer->sendQueue.front();
//inspect_RSeq(&(ret.payload));

  pMrzsLowerLayer->sendQueue.pop();

#ifdef  LOG_INFO
  std::cout<<"}PopWriteAsHex_in_MrzsLowerLayer2_"<<'\n';
#endif
//std::string to_hex_in_HexConversionsOver2(RSeq_for_Uint16_t* buffer, bool spaced = true);
////    return HexConversions::to_hex(ret.payload);
  return "";//to_hex_in_HexConversionsOver2(&(ret.payload), true);
}
*/
////bool MrzsLowerLayer::BeginTransmit(const Message& message)
boolean BeginTransmit_in_MrzsLowerLayer_override(void* pILowerLayer, Message* message)
{
  MrzsLowerLayer* parent = (MrzsLowerLayer*) getParentPointer_in_ILowerLayer((ILowerLayer*)pILowerLayer);
  return BeginTransmit_in_MrzsLowerLayer(parent, message);
}

boolean BeginTransmit_in_MrzsLowerLayer(MrzsLowerLayer* pMrzsLowerLayer, Message* message)
{
  Message temp = *message;
#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{BeginTransmit_in_MrzsLowerLayer1"<<'\n';
  inspect_RSeq(&(temp.payload));
#endif

//  pMrzsLowerLayer->sendQueue.push(temp);////message);
  pMrzsLowerLayer->mMessage = *message;
  pMrzsLowerLayer->isResponse_in_MrzsLowerLayer = true;
#ifdef  LOG_INFO
  std::cout<<"}BeginTransmit_in_MrzsLowerLayer_"<<'\n';
#endif
  return true;
}

////void MrzsLowerLayer::SendUp(const rseq_t& data, const Addresses& addresses)
void SendUp_in_MrzsLowerLayerOver1(MrzsLowerLayer *pMrzsLowerLayer, RSeq_for_Uint16_t* data, Addresses* addresses)//// = opendnp3::Addresses());
{
////    if (pUpperLayer)
  if(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer)
  {
//boolean OnReceive_in_IUpperLayer(IUpperLayer *, Message* message);
//  void  Message_in_Message(Message *pMessage, Addresses *addresses, RSeq_for_Uint16_t* payload);
////        pUpperLayer->OnReceive(Message(addresses, data));
    Message mMessage;
    Message_in_Message(&mMessage, addresses, data);
    OnReceive_in_IUpperLayer(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer, &mMessage);
  }
}

////void MrzsLowerLayer::SendUp(const std::string& arHexData, const Addresses& addresses)
////{
////    const auto buffer = HexConversions::from_hex(arHexData);
////    this->SendUp(buffer->as_rslice(), addresses);
////}

////void MrzsLowerLayer::SendComplete()
void SendComplete_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
////    if (pUpperLayer)
  if(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer)
  {
//boolean OnTxReady_in_IUpperLayer(IUpperLayer *);
////        pUpperLayer->OnTxReady();
    OnTxReady_in_IUpperLayer(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer);
  }
}

////void MrzsLowerLayer::ThisLayerUp()
void ThisLayerUp_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
////    if (pUpperLayer)
  if(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer)
  {
//boolean OnLowerLayerDown_in_IUpDown(IUpDown *);
////        pUpperLayer->OnLowerLayerUp();
    OnLowerLayerUp_in_IUpDown(&(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer->iIUpDown));
  }
}

////void MrzsLowerLayer::ThisLayerDown()
void ThisLayerDown_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer)
{
////    if (pUpperLayer)
  if(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer)
  {
//boolean OnLowerLayerDown_in_IUpDown(IUpDown *);
////        pUpperLayer->OnLowerLayerDown();
    OnLowerLayerDown_in_IUpDown(&(pMrzsLowerLayer->hHasUpperLayer.pUpperLayer->iIUpDown));
  }
}
