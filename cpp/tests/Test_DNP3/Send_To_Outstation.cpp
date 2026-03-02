#include <QtWidgets>

#include <stdlib.h>
#include <iostream>
#include <string>

#include "../../../header_dnp3.h"

#include "MrzsFrameSink.h"
#include "OutstationMrzsObject.h"
#include "LinkParserMrzs.h"
#include "TransportLayerMrzs.h"

void Send_To_Outstation(void);

extern  LinkLayerParser parser;
extern  TransportLayerMrzs transport;
extern  OutstationConfig config;
extern  OutstationMrzsObject t;
extern  MrzsFrameSink  mMrzsFrameSink;
extern  DatabaseConfig dDatabaseConfig;

void Send_To_Outstation(void)
{
    std::cout<<'\n';
    std::cout<<"{***Send_To_Outstation***"<<'\n';
    std::cout<<"+***Send_To_Outstation***"<<'\n';
//void WriteData_in_LinkParserTestOver2(LinkParserTest *pLinkParserTest, uint8_t *hex, uint16_t size_hex);////const std::string& hex)
////    t.WriteData("05 64 14 F3 01 00 00 04 0A 3B C0 C3 01 3C 02 06 3C 03 06 3C 04 06 3C 01 06 9A 11");
//uint8_t hex[] = {0x05, 0x64, 0x14, 0xF3, 0x01, 0x00, 0x00, 0x04, 0x0A, 0x3B, 0xC0, 0xC3, 0x01, 0x3C, 0x02, 0x06, 0x3C, 0x03, 0x06, 0x3C, 0x04, 0x06, 0x3C, 0x01, 0x06, 0x9A, 0x11};
//uint8_t hex[] = {0x05, 0x64, 0x0e, 0xc4, 0x03, 0x00, 0x01, 0x00, 0xe0, 0x66, 0xc2, 0xc2, 0x02, 0x50, 0x01, 0x00, 0x07, 0x07, 0x00, 0xf3, 0x95};
//  uint8_t hex[] = {0x05, 0x64, 0x05, 0xc0, 0x01, 0x00, 0x02, 0x00, 0x74, 0xe3};
//uint8_t hex[] = {0x05, 0x64, 0x12, 0xc4, 0x01, 0x00, 0x02, 0x00, 0x93, 0xc9, 0xc1, 0xc1, 0x02, 0x32, 0x01, 0x07, 0x01, 0x1c, 0x4d, 0x68, 0xac, 0x8d, 0x01, 0x66, 0x27};
/*
uint8_t hex[] = {0x05, 0x64, 
                  11, //size
                  0xc4, 0x03, 0x00, 0x01, 0x00, 0xe0, 0x66, 0xc2, 
                  0xC0, 0x01,//READ
                  0x1E, 0x01,//grp30var1
                  0x1, 354%256, 354/256, 357%256, 357/256, 
                  0, 0};
*/
uint8_t hex[] = {0x05, 0x64, 0x0e, 0xc4, 0x01, 0x00, 0x02, 0x00, 0xe0, 0x66, 0xc2, 0xc2, 0x02, 0x50, 0x01, 0x00, 0x07, 0x07, 0x00, 0xf3, 0x95};
 if(sizeof(hex)==10) hex[2] = 5;
 else hex[2] = sizeof(hex) - 5 - 2;

 RSeq_for_Uint16_t rst;
 RSeq_for_Uint16_t_in_RSeq_for_Uint16_tOver2(&rst, hex, sizeof(hex));
 RepairCRC_in_DNPHelpers(&rst);
 inspect_RSeq(&rst);

  WriteData_in_LinkParserMrzsOver2(&parser, &mMrzsFrameSink, hex, sizeof(hex));

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

      inspect_RSeq(&wrapper);
}
    break;
  case LinkFunction_PRI_TEST_LINK_STATES:// = 0x42,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_TEST_LINK_STATES***"<<'\n';
    break;
  case LinkFunction_PRI_CONFIRMED_USER_DATA:// = 0x43,
    std::cout<<'\n';
    std::cout<<"+***LinkFunction_PRI_CONFIRMED_USER_DATA***"<<'\n';
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

      if(OnReceive_in_TransportLayerMrzs(&transport, &mMessage))
      if(is_not_empty_in_HasLength_for_Uint16_t(&(transport.asdu.payload.hHasLength)))
      {
        OnReceive_in_OContext(&(t.context), &transport.asdu);

        inspect_Message(&(t.lower.mMessage));
        std::cout<<"+transport.receiver.expectedSeq.seq= "<<(uint16_t)transport.receiver.expectedSeq.seq<<'\n';

        //boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
        BeginTransmit_in_TransportLayerMrzs(&transport, &(t.lower.mMessage));
        inspect_RSeq(&(transport.asdu.payload));

//RSeq_for_Uint16_t FormatConfirmedUserData_in_LinkFrame_static(WSeq_for_Uint16_t* buffer,
//    boolean aIsMaster, boolean aFcb, uint16_t aDest, uint16_t aSrc,  RSeq_for_Uint16_t user_data)//,
        
RSeq_for_Uint16_t data = FormatConfirmedUserData_in_LinkFrame_static(&writeTo,//WSeq_for_Uint16_t* buffer,
    false,//boolean aIsMaster,
    false,//boolean aFcb,
    mMrzsFrameSink.m_last_header.addresses.source,//uint16_t aDest, 
    mMrzsFrameSink.m_last_header.addresses.destination,//uint16_t aSrc,
    (transport.asdu.payload));//RSeq_for_Uint16_t user_data);
        inspect_RSeq(&data);
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


// std::string name1 = "05 64 14 F3 01 00 00 04 0A 3B C0 C3 01 3C 02 06 3C 03 06 3C 04 06 3C 01 06 9A 12";
// std::string name2 = "05 64 05 C0 01 00 00 04 E9 21";
// WriteData_in_LinkParserTestOver3(&t, name1);////const std::string& hex)

  qDebug()<<"REQUIRE(t.sink.m_num_frames == 0)";
//qDebug()<<"t.sink.m_num_frames= "<<t.sink.m_num_frames;

  qDebug()<<"REQUIRE(t.parser.Statistics().numHeaderCrcError == 1)";
  Parser_in_LinkStatistics* temp = Statistics_in_LinkLayerParser(&parser);

  qDebug()<<"parser.Statistics().numBodyCrcError= "<<temp->numBodyCrcError;
  qDebug()<<"parser.Statistics().numHeaderCrcError= "<<temp->numHeaderCrcError;
    std::cout<<'\n';
    std::cout<<"}***Send_To_Outstation***"<<'\n';
}//Send_To_Outstation
