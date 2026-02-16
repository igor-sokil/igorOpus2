
#ifndef OPENDNP3_TRANSPORTLAYER_H
#define OPENDNP3_TRANSPORTLAYER_H

//#include "MrzsFrameSink.h"
//#include "LayerInterfaces.h"
#include "TransportRx.h"
#include "TransportTx.h"
#include "ILinkLayer.h"

//#include "StackStatistics.h"
////#include "opendnp3/logging/Logger.h"

////#include <exe4cpp/IExecutor.h>

////namespace opendnp3
////{

/**
    Implements the DNP3 transport layer
*/
////class TransportLayer final : public IUpperLayer, public ILowerLayer
typedef struct
{
//  IUpperLayer iIUpperLayer;
//  ILowerLayer iILowerLayer;

////public:
////    TransportLayer(const Logger& logger, uint32_t maxRxFragSize);

  // ------ ILowerLayer ------

////    virtual bool BeginTransmit(const Message& message) override;

  // ------ IUpperLayer ------

////    virtual bool OnReceive(const Message& message) override;
////    virtual bool OnLowerLayerUp() override final;
////    virtual bool OnLowerLayerDown() override;
////    virtual bool OnTxReady() override;

////    void SetAppLayer(IUpperLayer& upperLayer);

////    void SetLinkLayer(ILinkLayer& linkLayer);

////    StackStatistics::Transport GetStatistics() const;

////private:
////    Logger logger;

//  IUpperLayer* upper;// = nullptr;
//  ILinkLayer* lower;// = nullptr;

  // ---- state ----
  boolean isOnline;// = false;
  boolean isSending;// = false;
  Message asdu;

  // ----- Transmitter and Receiver Classes ------
  TransportRx receiver;
  TransportTx transmitter;
} TransportLayerMrzs;

void TransportLayerMrzs_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayerMrzs, uint32_t maxRxFragSize);

// ------ ILowerLayer ------

boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message);
//boolean BeginTransmit_in_TransportLayerMrzs_override(void *pILowerLayer, Message* message);

// ------ IUpperLayer ------

boolean OnReceive_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayerMrzs, Message* message);
//boolean OnReceive_in_TransportLayerMrzs_override(void *pIUpperLayer, Message* message);
/*
boolean OnLowerLayerUp_in_TransportLayer(TransportLayer *pTransportLayer);
boolean OnLowerLayerUp_in_TransportLayer_override(void *pIUpDown);

boolean OnLowerLayerDown_in_TransportLayer(TransportLayer *pTransportLayer);
boolean OnLowerLayerDown_in_TransportLayer_override(void *pIUpDown);

boolean OnTxReady_in_TransportLayer(TransportLayer *pTransportLayer);
boolean OnTxReady_in_TransportLayer_override(void *pIUpperLayer);

void SetAppLayer_in_TransportLayer(TransportLayer *pTransportLayer, IUpperLayer* upperLayer);

void SetLinkLayer_in_TransportLayer(TransportLayer *pTransportLayer, ILinkLayer* linkLayer);

Transport_StackStatistics GetStatistics_in_TransportLayer(TransportLayer *pTransportLayer);
*/
boolean SendDown_in_MockUpperLayerOver2(void *pMockUpperLayer, RSeq_for_Uint16_t* data, Addresses* addresses);
boolean Send_in_MockLinkLayer(void *pMockLinkLayer, ITransportSegment* segments);
////} // namespace opendnp3

#endif
