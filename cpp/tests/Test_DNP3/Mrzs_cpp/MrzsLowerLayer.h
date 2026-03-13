
#ifndef OPENDNP3_UNITTESTS_MRZSLOWERLAYER_H
#define OPENDNP3_UNITTESTS_MRZSLOWERLAYER_H

#include "LayerInterfaces.h"
#include "RSeq.h"
//#include "HexConversions.h"

//#include <queue>
////#include <string>

////class MockLowerLayer : public opendnp3::ILowerLayer, public opendnp3::HasUpperLayer
typedef struct
{
  ILowerLayer iILowerLayer;
  HasUpperLayer hHasUpperLayer;

////public:
////    void SendUp(const ser4cpp::rseq_t& data, const opendnp3::Addresses& addresses = opendnp3::Addresses());
////    void SendUp(const std::string& arHexData, const opendnp3::Addresses& addresses = opendnp3::Addresses());

////    void SendComplete();
////    void ThisLayerUp();
////    void ThisLayerDown();

////    bool HasNoData() const;

////    size_t NumWrites() const;
////    std::string PopWriteAsHex();

////    virtual bool BeginTransmit(const opendnp3::Message& message) override final;

////private:
////    std::queue<opendnp3::Message> sendQueue;
//  std::queue<Message> sendQueue;
  Message mMessage_in_MrzsLowerLayer;
  boolean isResponse_in_MrzsLowerLayer;
} MrzsLowerLayer;

void MrzsLowerLayer_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer);

////    void SendUp(const ser4cpp::rseq_t& data, const opendnp3::Addresses& addresses = opendnp3::Addresses());
void SendUp_in_MrzsLowerLayerOver1(MrzsLowerLayer *pMrzsLowerLayer, RSeq_for_Uint16_t* data, Addresses* addresses);//// = opendnp3::Addresses());
////    void SendUp(const std::string& arHexData, const opendnp3::Addresses& addresses = opendnp3::Addresses());
//void SendUp_in_MrzsLowerLayerOver2(MrzsLowerLayer *pMrzsLowerLayer, const std::string& arHexData, Addresses* addresses);//// = opendnp3::Addresses());

////    void SendComplete();
void SendComplete_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer);
////    void ThisLayerUp();
void ThisLayerUp_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer);
////    void ThisLayerDown();
void ThisLayerDown_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer);

////    bool HasNoData() const;
boolean HasNoData_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer);

////    size_t NumWrites() const;
uint16_t NumWrites_in_MrzsLowerLayer(MrzsLowerLayer *pMrzsLowerLayer);
////    std::string PopWriteAsHex();
//std::string  PopWriteAsHex_in_MockLowerLayer(MockLowerLayer *pMockLowerLayer);

////    virtual bool BeginTransmit(const opendnp3::Message& message) override final;
boolean BeginTransmit_in_MrzsLowerLayer_override(void*, Message* message);
boolean BeginTransmit_in_MrzsLowerLayer(MrzsLowerLayer* pMrzsLowerLayer, Message* message);

#endif
