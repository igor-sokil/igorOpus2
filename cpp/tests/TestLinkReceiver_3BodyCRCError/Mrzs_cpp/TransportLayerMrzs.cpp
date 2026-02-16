
#include "../../../../log_info.h"
#ifdef  LOG_INFO
#include <iostream>
#endif
#include "../../../../header_dnp3.h"
#include "TransportLayerMrzs.h"

#include "TransportConstants.h"
//#include <string.h>

////#include "logging/LogMacros.h"

////#include "opendnp3/logging/LogLevels.h"

////#include <cassert>

////namespace opendnp3
////{

void TransportLayerMrzs_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayerMrzs, uint32_t maxRxFragSize)
{
#ifdef  LOG_INFO
    std::cout<<std::endl;
    increment_stack_info();
    std::cout<<getString_stack_info();
    std::cout<<"{TransportLayer_in_TransportLayer1"<<'\n';
#endif
////    : logger(logger), receiver(logger, maxRxFragSize), transmitter(logger)
//  pTransportLayer->upper = NULL;
//  pTransportLayer->lower = NULL;

  // ---- state ----
  pTransportLayerMrzs->isOnline = true;//false;
  pTransportLayerMrzs->isSending = false;
  Message_in_MessageOver1(&(pTransportLayerMrzs->asdu));

  TransportTx_in_TransportTx(&(pTransportLayerMrzs->transmitter));
  TransportRx_in_TransportRx(&(pTransportLayerMrzs->receiver), maxRxFragSize > 292 ? 292 : maxRxFragSize);

  // ------ ILowerLayer ------
/*
  pTransportLayer->iILowerLayer.pBeginTransmit_in_ILowerLayer = BeginTransmit_in_TransportLayer_override;

  // ------ IUpperLayer ------

  pTransportLayer->iIUpperLayer.pOnReceive_in_IUpperLayer = OnReceive_in_TransportLayer_override;

  pTransportLayer->iIUpperLayer.iIUpDown.pOnLowerLayerUp_in_IUpDown = OnLowerLayerUp_in_TransportLayer_override;

  pTransportLayer->iIUpperLayer.iIUpDown.pOnLowerLayerDown_in_IUpDown = OnLowerLayerDown_in_TransportLayer_override;

  pTransportLayer->iIUpperLayer.pOnTxReady_in_IUpperLayer = OnTxReady_in_TransportLayer_override;
*/
//  setParentPointer_in_ILowerLayer(&(pTransportLayerMrzs->iILowerLayer), pTransportLayerMrzs);
//  setParentPointer_in_IUpperLayer(&(pTransportLayer->iIUpperLayer), pTransportLayer);

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}TransportLayer_in_TransportLayer_"<<'\n';
    decrement_stack_info();
#endif
}

///////////////////////////////////////
// Actions
///////////////////////////////////////
boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
{
#ifdef  LOG_INFO
    std::cout<<std::endl;
    increment_stack_info();
    std::cout<<getString_stack_info();
    std::cout<<"{BeginTransmit_in_TransportLayer1"<<'\n';
#endif
/*
  if (!pTransportLayer->isOnline)
  {
////        SIMPLE_LOG_BLOCK(logger, flags::ERR, "Layer offline");
#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*SIMPLE_LOG_BLOCK(logger, flags::ERR, 'Layer offline')"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}BeginTransmit_in_TransportLayer1_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }
*/
////    if (message.payload.is_empty())
  if(is_empty_in_HasLength_for_Uint16_t(&(message->payload.hHasLength)))
  {
////        SIMPLE_LOG_BLOCK(logger, flags::ERR, "APDU cannot be empty");
#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*SIMPLE_LOG_BLOCK(logger, flags::ERR, 'APDU cannot be empty')"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}BeginTransmit_in_TransportLayer2_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }
/*
  if (pTransportLayer->isSending)
  {
////        SIMPLE_LOG_BLOCK(logger, flags::ERR, "Invalid BeginTransmit call, already transmitting");
#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*SIMPLE_LOG_BLOCK(logger, flags::ERR, 'Invalid BeginTransmit call, already transmitting')"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}BeginTransmit_in_TransportLayer3_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }

  if (!pTransportLayer->lower)
  {
////        SIMPLE_LOG_BLOCK(logger, flags::ERR, "Can't send without an attached link layer");
#ifdef  LOG_INFO
    std::cout<<"*"<<getString_stack_info();
    std::cout<<"*SIMPLE_LOG_BLOCK(logger, flags::ERR, 'Can't send without an attached link layer')"<<'\n';
    std::cout<<getString_stack_info();
    std::cout<<"}BeginTransmit_in_TransportLayer4_"<<'\n';
    decrement_stack_info();
#endif
    return false;
  }

  pTransportLayer->isSending = true;
*/
//void Configure_in_TransportTx(TransportTx *pTransportTx, Message* message);
////    transmitter.Configure(message);
  Configure_in_TransportTx(&(pTransportLayer->transmitter), message);

//boolean Send_in_ILinkLayer(ILinkLayer* pILinkLayer, ITransportSegment* segment);
////    lower->Send(transmitter);
//  Send_in_ILinkLayer(pTransportLayer->lower, &(pTransportLayer->transmitter.iITransportSegment));
//  Send_in_MockLinkLayer(NULL, &(pTransportLayer->transmitter.iITransportSegment));

#ifdef  LOG_INFO
  std::cout<<'\n';
  std::cout<<"{Send_in_MockLinkLayer1"<<'\n';
#endif

  ITransportSegment* segments = &(pTransportLayer->transmitter.iITransportSegment);
//boolean HasValue_in_ITransportSegment(ITransportSegment*);
////        while (segments.HasValue())
//  while (HasValue_in_ITransportSegment(segments))
//  {
//RSeq_for_Uint16_t GetSegment_in_ITransportSegment(ITransportSegment*);
//std::string to_hex_in_HexConversionsOver2(RSeq_for_Uint16_t* buffer, bool spaced = true);
////            sends.push_back(ser4cpp::HexConversions::to_hex(segments.GetSegment()));
    RSeq_for_Uint16_t tmp = GetSegment_in_ITransportSegment(segments);
//    pMockLinkLayer->sends_in_MockLinkLayer.push_back(to_hex_in_HexConversionsOver2(&tmp));
////            segments.Advance();
    pTransportLayer->asdu.payload = tmp;
//    Advance_in_ITransportSegment(segments);
//  }//while

#ifdef  LOG_INFO
  std::cout<<"}Send_in_MockLinkLayer_"<<'\n';
#endif

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}BeginTransmit_in_TransportLayer5_"<<'\n';
    decrement_stack_info();
#endif
  return true;
}

//boolean BeginTransmit_in_TransportLayerMrzs_override(void *pILowerLayer, Message* message)
//{
//  TransportLayerMrzs *parent = (TransportLayerMrzs*) getParentPointer_in_ILowerLayer((ILowerLayer*)pILowerLayer);
//  return BeginTransmit_in_TransportLayerMrzs(parent, message);
//}

///////////////////////////////////////
// IUpperLayer
///////////////////////////////////////

////bool TransportLayer::OnReceive(const Message& message)
boolean OnReceive_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
{
#ifdef  LOG_INFO
    std::cout<<std::endl;
    increment_stack_info();
    std::cout<<getString_stack_info();
    std::cout<<"{OnReceive_in_TransportLayerMrzs1"<<'\n';
#endif
  if (pTransportLayer->isOnline)
  {
//Message ProcessReceive_in_TransportRx(TransportRx *pTransportRx, Message* segment);
////        const auto asdu = receiver.ProcessReceive(message);
   pTransportLayer->asdu = ProcessReceive_in_TransportRx(&(pTransportLayer->receiver), message);

////        if (upper && asdu.payload.is_not_empty())
    if(/*pTransportLayer->upper && */is_not_empty_in_HasLength_for_Uint16_t(&(pTransportLayer->asdu.payload.hHasLength)))
    {
//boolean OnReceive_in_IUpperLayer(IUpperLayer *, Message* message);
////            upper->OnReceive(asdu);
//      OnReceive_in_IUpperLayer(pTransportLayer->upper, &asdu);
#ifdef  LOG_INFO
    inspect_Message(&(pTransportLayer->asdu));
    std::cout<<getString_stack_info();
    std::cout<<"}OnReceive_in_TransportLayerMrzs1_"<<'\n';
    decrement_stack_info();
#endif
    return true;
    }
/*
    else
    {
#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}OnReceive_in_TransportLayerMrzs1_"<<'\n';
    decrement_stack_info();
#endif
      return false;//add
    }

#ifdef  LOG_INFO
    std::cout<<getString_stack_info();
    std::cout<<"}OnReceive_in_TransportLayerMrzs2_"<<'\n';
    decrement_stack_info();
#endif
    return true;
*/
  }

////    SIMPLE_LOG_BLOCK(logger, flags::ERR, "Layer offline");
#ifdef  LOG_INFO
  std::cout<<"*"<<getString_stack_info();
  std::cout<<"*SIMPLE_LOG_BLOCK(logger, flags::ERR, 'Layer offline')"<<'\n';
  std::cout<<getString_stack_info();
  std::cout<<"}OnReceive_in_TransportLayerMrzs2_"<<'\n';
  decrement_stack_info();
#endif
  return false;
}
