#include <QtWidgets>

#include <stdlib.h>
#include <iostream>
#include <string>

#include "../../../header_dnp3.h"

#include "MrzsFrameSink.h"
#include "OutstationMrzsObject.h"
#include "LinkParserMrzs.h"
#include "TransportLayerMrzs.h"

QString Send_To_Outstation(RSeq_for_Uint16_t);
QString inspectQt_RSeq(RSeq_for_Uint16_t *buffer);

extern  LinkLayerParser parser;
extern  TransportLayerMrzs transport;
extern  OutstationConfig config;
extern  OutstationMrzsObject t;
extern  MrzsFrameSink  mMrzsFrameSink;
extern  DatabaseConfig dDatabaseConfig;

QString Send_To_Outstation(RSeq_for_Uint16_t rst)
{
  QString strQt = "";
  if(rst.hHasLength.m_length == 10) rst.buffer_[2] = 5;
  else //rst.buffer_[2] = rst.hHasLength.m_length - 5 - 2;
  {
   if((rst.hHasLength.m_length-10) > 18)
   {
    std::cout<<'\n';
    std::cout<<"*rst.hHasLength.m_length= "<<rst.hHasLength.m_length<<'\n';
     rst.buffer_[2] = rst.hHasLength.m_length - 5 - 2 - ((rst.hHasLength.m_length-10 -2)/16)*2;
   }//if
   else rst.buffer_[2] = rst.hHasLength.m_length - 5 - 2;
  }

  RepairCRC_in_DNPHelpers(&rst);
  inspect_RSeq(&rst);
  std::cout<<'\n';
  std::cout<<"{***Send_To_Outstation***"<<'\n';
  std::cout<<"+***Send_To_Outstation***"<<'\n';

  WriteData_in_LinkParserMrzsOver1(&parser, &mMrzsFrameSink, &rst);

  uint8_t writeTo_buf[300];
  WSeq_for_Uint16_t writeTo;
  WSeq_for_Uint16_t_in_WSeq_for_Uint16_tOver2(&writeTo, writeTo_buf, sizeof(writeTo_buf));
  switch(mMrzsFrameSink.m_last_header.func)
  {
  case LinkFunction_PRI_RESET_LINK_STATES:// = 0x40,
  {
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_RESET_LINK_STATES***"<<'\n';
//RSeq_for_Uint16_t FormatAck_in_LinkFrame_static(
//  WSeq_for_Uint16_t* buffer, boolean aIsMaster, boolean aIsRcvBuffFull, uint16_t aDest, uint16_t aSrc);

    RSeq_for_Uint16_t wrapper = FormatAck_in_LinkFrame_static(&writeTo, false, false,
                                mMrzsFrameSink.m_last_header.addresses.source,
                                mMrzsFrameSink.m_last_header.addresses.destination);

    std::cout<<'\n';
    std::cout<<"}***Send_To_Outstation***"<<'\n';

    inspect_RSeq(&wrapper);
    strQt = inspectQt_RSeq(&wrapper);

    OnTxReady_in_OutstationMrzsObject(&t);
  }
  break;
  case LinkFunction_PRI_TEST_LINK_STATES:// = 0x42,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_TEST_LINK_STATES***"<<'\n';
    break;
  case LinkFunction_PRI_CONFIRMED_USER_DATA:// = 0x43,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_CONFIRMED_USER_DATA***"<<'\n';
    if(mMrzsFrameSink.userdata)
    {
      inspect_RSeq(mMrzsFrameSink.userdata);
      Message mMessage;
      Addresses aAddresses;
      Addresses_in_AddressesOver1(&aAddresses);
      Message_in_Message(&mMessage, &aAddresses, mMrzsFrameSink.userdata);
      t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length = 0;

      if(OnReceive_in_TransportLayerMrzs(&transport, &mMessage))
        if(is_not_empty_in_HasLength_for_Uint16_t(&(transport.asdu.payload.hHasLength)))
        {
          OnReceive_in_OContext(&(t.context), &transport.asdu);
          if(t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length == 0)
          {
            std::cout<<'\n';
            std::cout<<"***Empty output***"<<'\n';
            std::cout<<"}***Send_To_Outstation1***"<<'\n';
            strQt = QString("***Empty output***\n");
            break;
          }//if

          inspect_Message(&(t.lower.mMessage_in_MrzsLowerLayer));
          std::cout<<"+transport.receiver.expectedSeq.seq= "<<(uint16_t)transport.receiver.expectedSeq.seq<<'\n';

          //boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
          BeginTransmit_in_TransportLayerMrzs(&transport, &(t.lower.mMessage_in_MrzsLowerLayer));
          inspect_RSeq(&(transport.asdu.payload));

//RSeq_for_Uint16_t FormatConfirmedUserData_in_LinkFrame_static(WSeq_for_Uint16_t* buffer,
//    boolean aIsMaster, boolean aFcb, uint16_t aDest, uint16_t aSrc,  RSeq_for_Uint16_t user_data)//,

          RSeq_for_Uint16_t data = FormatConfirmedUserData_in_LinkFrame_static(&writeTo,
                                   false,//boolean aIsMaster,
                                   false,//boolean aFcb,
                                   mMrzsFrameSink.m_last_header.addresses.source,//uint16_t aDest,
                                   mMrzsFrameSink.m_last_header.addresses.destination,//uint16_t aSrc,
                                   (transport.asdu.payload));//RSeq_for_Uint16_t user_data);
          std::cout<<'\n';
          std::cout<<"}***Send_To_Outstation2***"<<'\n';

          inspect_RSeq(&data);
          strQt = inspectQt_RSeq(&data);

          OnTxReady_in_OutstationMrzsObject(&t);
        }//if(is_not_empty_in_HasLength_for_Uint16_t(&(pTransportLayer->asdu.payload.hHasLength)))
    }//if(mMrzsFrameSink.userdata)
    break;
  case LinkFunction_PRI_UNCONFIRMED_USER_DATA:// = 0x44,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_UNCONFIRMED_USER_DATA***"<<'\n';
    if(mMrzsFrameSink.userdata)
    {
      inspect_RSeq(mMrzsFrameSink.userdata);
      Message mMessage;
      Addresses aAddresses;
      Addresses_in_AddressesOver1(&aAddresses);
      Message_in_Message(&mMessage, &aAddresses, mMrzsFrameSink.userdata);
      t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length = 0;

      if(OnReceive_in_TransportLayerMrzs(&transport, &mMessage))
        if(is_not_empty_in_HasLength_for_Uint16_t(&(transport.asdu.payload.hHasLength)))
        {
          OnReceive_in_OContext(&(t.context), &transport.asdu);
          if(t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length == 0)
          {
            std::cout<<'\n';
            std::cout<<"***Empty output***"<<'\n';
            std::cout<<"}***Send_To_Outstation1***"<<'\n';
            strQt = QString("***Empty output***\n");
            break;
          }//if

          inspect_Message(&(t.lower.mMessage_in_MrzsLowerLayer));
          std::cout<<"+transport.receiver.expectedSeq.seq= "<<(uint16_t)transport.receiver.expectedSeq.seq<<'\n';

          //boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
          BeginTransmit_in_TransportLayerMrzs(&transport, &(t.lower.mMessage_in_MrzsLowerLayer));

          inspect_RSeq(&(transport.asdu.payload));

//RSeq_for_Uint16_t FormatUnconfirmedUserData_in_LinkFrame_static(
//  WSeq_for_Uint16_t* buffer, boolean aIsMaster, uint16_t aDest, uint16_t aSrc, RSeq_for_Uint16_t user_data)//, Logger* pLogger)

          RSeq_for_Uint16_t data = FormatUnconfirmedUserData_in_LinkFrame_static(&writeTo,
                                   false,//boolean aIsMaster,
                                   mMrzsFrameSink.m_last_header.addresses.source,//uint16_t aDest,
                                   mMrzsFrameSink.m_last_header.addresses.destination,//uint16_t aSrc,
                                   (transport.asdu.payload));//RSeq_for_Uint16_t user_data);
          std::cout<<'\n';
          std::cout<<"}***Send_To_Outstation2***"<<'\n';

          inspect_RSeq(&data);
          strQt = inspectQt_RSeq(&data);

          OnTxReady_in_OutstationMrzsObject(&t);
        }//if(is_not_empty_in_HasLength_for_Uint16_t(&(pTransportLayer->asdu.payload.hHasLength)))
    }//if(mMrzsFrameSink.userdata)
    break;

  case LinkFunction_PRI_REQUEST_LINK_STATUS:// = 0x49,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_REQUEST_LINK_STATUS***"<<'\n';
    break;
  case LinkFunction_SEC_ACK:// = 0x0,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_SEC_ACK***"<<'\n';
    break;
  case LinkFunction_SEC_NACK:// = 0x1,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_SEC_NACK***"<<'\n';
    break;
  case LinkFunction_SEC_LINK_STATUS:// = 0xB,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_SEC_LINK_STATUS***"<<'\n';
    break;
  case LinkFunction_SEC_NOT_SUPPORTED:// = 0xF,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_SEC_NOT_SUPPORTED***"<<'\n';
    break;
  case LinkFunction_INVALID:// = 0xFF
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_INVALID***"<<'\n';
    break;
  }//switch

  Parser_in_LinkStatistics* temp = Statistics_in_LinkLayerParser(&parser);

  qDebug()<<"parser.Statistics().numBodyCrcError= "<<temp->numBodyCrcError;
  qDebug()<<"parser.Statistics().numHeaderCrcError= "<<temp->numHeaderCrcError;
  return strQt;
}//Send_To_Outstation
