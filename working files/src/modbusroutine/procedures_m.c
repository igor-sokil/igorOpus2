#include "header.h"
#include "variables_external_m.h"

extern unsigned char  *outputPacket;
extern unsigned char  outputPacket_USB[300];
extern unsigned char  outputPacket_RS485[300];
#if (((MODYFIKACIA_VERSII_PZ / 10) & 0x1) != 0)
extern unsigned char  outputPacket_TCP[300];
#endif

extern int sizeOutputPacket;
extern unsigned char *inputPacket;
extern int *received_count;
extern int globalcntBit;//к-во бит
extern int globalcntReg;//к-во регистров
extern int globalbeginAdrReg;//адрес нач регистра
extern int globalbeginAdrBit;//адрес нач бит

int superReader20(int offsetRegister, int fileNumber, int recordNumber, int recordLen);
int openRegistrator(int number_file);

int  outputFunc20PacketEncoder(int adrUnit, int *fileNumber, int *recordNumber, int *recordLen, int cntitem);
int  inputPacketParser(void);
void inputPacketParserUSB(void);
void inputPacketParserRS485(void);
unsigned short int  AddCRC(unsigned char inpbyte, unsigned short int oldCRC);
int  Error_modbus_m(unsigned int address, unsigned int function, unsigned int error, unsigned char *output_data);

#if (((MODYFIKACIA_VERSII_PZ / 10) & 0x1) != 0)
/**************************************/
//разбор входного пакета TCP
/**************************************/
void inputPacketParserLAN(void)
{
//размер префикса TCP
//#define TCP_PREFIXSIZE 6
  pointInterface=LAN_RECUEST;//метка интерфейса 0-USB 1-RS485

  received_count = &LAN_received_count;

  outputPacket = outputPacket_TCP;
  inputPacket = LAN_received;
//                +TCP_PREFIXSIZE;//убрать префикс TCP
//  *received_count -= TCP_PREFIXSIZE;//убрать префикс TCP

  if((*received_count)<0)
  {
    LAN_received_count = 0;//очистить вход
    return;//что-то пошло не так
  }//if

  *received_count += 2;//симитировать CRC
  //Перевірка контрольної суми
//  unsigned short CRC_sum;
//  CRC_sum = 0xffff;
//  for (int index = 0; index < (*received_count-2); index++) CRC_sum = AddCRC(*(inputPacket + index),CRC_sum);
//  if((CRC_sum & 0xff)  != *(inputPacket+*received_count-2)) return;
//  if ((CRC_sum >> 8  ) != *(inputPacket+*received_count-1)) return;

//  if(inputPacket[0]!=current_settings.address) return;

  if(inputPacketParser()==0)
  {
    LAN_received_count = 0;//очистить вход
    return;
  }//if

  sizeOutputPacket -= 2;//убрать CRC

  LAN_transmiting_count = sizeOutputPacket;
//  for (int i = 0; i < TCP_PREFIXSIZE; i++) LAN_transmiting[i] = 0;//добавить префикс TCP
//  LAN_transmiting[1] = 1;//префикс TCP
//  LAN_transmiting[5] = sizeOutputPacket;//префикс TCP
  for (int i = 0; i < LAN_transmiting_count; i++) LAN_transmiting[i/*+ TCP_PREFIXSIZE*/] = outputPacket[i];
//  LAN_transmiting_count += TCP_PREFIXSIZE;//добавить префикс TCP
  LAN_received_count = 0;//очистить вход
  _SET_STATE (queue_mo, STATE_QUEUE_MO_SEND_MODBUS_TCP_RESP);//отправить результат
}//inputPacketParserLAN(void)
#endif

/**************************************/
//разбор входного пакета USB
/**************************************/
void inputPacketParserUSB(void)
{
  pointInterface=USB_RECUEST;//метка интерфейса 0-USB 1-RS485

  received_count = &usb_received_count;

  inputPacket = usb_received;
  outputPacket = outputPacket_USB;
  //Перевірка контрольної суми
//  unsigned short CRC_sum;
//  CRC_sum = 0xffff;
//  for (int index = 0; index < (*received_count-2); index++) CRC_sum = AddCRC(*(inputPacket + index),CRC_sum);
//  if((CRC_sum & 0xff)  != *(inputPacket+*received_count-2)) return;
//  if ((CRC_sum >> 8  ) != *(inputPacket+*received_count-1)) return;

//  if(inputPacket[0]!=current_settings.address) return;

//  if(inputPacketParser()==0) return;
//  uint8_t hex[] = {0x05, 0x64, 0x05, 0xc0, 0x01, 0x00, 0x02, 0x00, 0x74, 0xe3};
//  for(int m=0; m<10; m++) inputPacket[m] = hex[m];
//  usb_received_count = 10;
  if(*received_count==10) inputPacket[2] = 5;
//  else inputPacket[2] = *received_count - 5 - 2;
  else //rst.buffer_[2] = rst.hHasLength.m_length - 5 - 2;
  {
   if(((*received_count)-10) > 18)
   {
//    std::cout<<'\n';
//    std::cout<<"*rst.hHasLength.m_length= "<<rst.hHasLength.m_length<<'\n';
     inputPacket[2] = (*received_count) - 5 - 2 - (((*received_count)-10 -2)/16)*2;
   }//if
   else inputPacket[2] = (*received_count) - 5 - 2;
  }
  if(*received_count < 10)
  {
     Flags fFlags;
 Flags_In_FlagsOver2(&fFlags, 1);

 DNPTime dDNPTime1;
 DNPTime_in_DNPTimeOver3(&dDNPTime1, 0x4571, TimestampQuality_SYNCHRONIZED);
 DNPTime dDNPTime2;
 DNPTime_in_DNPTimeOver3(&dDNPTime2, 0x4570, TimestampQuality_SYNCHRONIZED);

 Binary bBinary1;
 Binary_in_BinaryOver6(&bBinary1, false, fFlags, dDNPTime1);

 Binary bBinary2;
 Binary_in_BinaryOver6(&bBinary2, false, fFlags, dDNPTime2);

  Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50000, EventMode_Detect);// = EventMode::Detect) = 0;
  Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary2, 50001, EventMode_Detect);// = EventMode::Detect) = 0;

    return;
  }//*received_count
  
  RSeq_for_Uint16_t rst;
  RSeq_for_Uint16_t_in_RSeq_for_Uint16_tOver2(&rst, inputPacket, *received_count);
  RepairCRC_in_DNPHelpers(&rst);
  
  mMrzsFrameSink.m_last_header.func = LinkFunction_INVALID;
  
  WriteData_in_LinkParserMrzsOver1(&parser, &mMrzsFrameSink, &rst);
  
  uint8_t writeTo_buf[300];
  WSeq_for_Uint16_t writeTo;
  WSeq_for_Uint16_t_in_WSeq_for_Uint16_tOver2(&writeTo, writeTo_buf, 250);
  switch(mMrzsFrameSink.m_last_header.func)
  {
  case LinkFunction_PRI_RESET_LINK_STATES:// = 0x40,
  {
//    std::cout<<'\n';
//    std::cout<<"+***LinkFunction_PRI_RESET_LINK_STATES***"<<'\n';
//RSeq_for_Uint16_t FormatAck_in_LinkFrame_static(
//  WSeq_for_Uint16_t* buffer, boolean aIsMaster, boolean aIsRcvBuffFull, uint16_t aDest, uint16_t aSrc);

    RSeq_for_Uint16_t wrapper = FormatAck_in_LinkFrame_static(&writeTo, false, false,
                                mMrzsFrameSink.m_last_header.addresses.source,
                                mMrzsFrameSink.m_last_header.addresses.destination);

//      inspect_RSeq(&wrapper);
    usb_transmiting_count = wrapper.hHasLength.m_length;
    for (int i = 0; i < usb_transmiting_count; i++) usb_transmiting[i] = wrapper.buffer_[i];
    data_usb_transmiting = true;
  }
  break;
  case LinkFunction_PRI_TEST_LINK_STATES:// = 0x42,
//    std::cout<<'\n';
//    std::cout<<"+***LinkFunction_PRI_TEST_LINK_STATES***"<<'\n';
    break;
  case LinkFunction_PRI_CONFIRMED_USER_DATA:// = 0x43,
//    std::cout<<'\n';
    //std::cout<<"+***LinkFunction_PRI_CONFIRMED_USER_DATA***"<<'\n';
    if(mMrzsFrameSink.userdata)
    {
//      inspect_RSeq(mMrzsFrameSink.userdata);
      Message mMessage;
      Addresses aAddresses;
      Addresses_in_AddressesOver2(&aAddresses, mMrzsFrameSink.m_last_header.addresses.source, mMrzsFrameSink.m_last_header.addresses.destination);
      Message_in_Message(&mMessage, &aAddresses, mMrzsFrameSink.userdata);
      t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length = 0;

      if(OnReceive_in_TransportLayerMrzs(&transport, &mMessage))
        if(is_not_empty_in_HasLength_for_Uint16_t(&(transport.asdu.payload.hHasLength)))
        {
          OnReceive_in_OContext(&(t.context), &transport.asdu);
          if(t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length == 0)
          {
//           ***Empty output***
            break;
          }//if

//        inspect_Message(&(t.lower.mMessage));
//        std::cout<<"+transport.receiver.expectedSeq.seq= "<<(uint16_t)transport.receiver.expectedSeq.seq<<'\n';

          //boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
          BeginTransmit_in_TransportLayerMrzs(&transport, &(t.lower.mMessage_in_MrzsLowerLayer));
//        inspect_RSeq(&(transport.asdu.payload));

//RSeq_for_Uint16_t FormatConfirmedUserData_in_LinkFrame_static(WSeq_for_Uint16_t* buffer,
//    boolean aIsMaster, boolean aFcb, uint16_t aDest, uint16_t aSrc,  RSeq_for_Uint16_t user_data)//,

          RSeq_for_Uint16_t wrapper = FormatConfirmedUserData_in_LinkFrame_static(
                                     &writeTo,//WSeq_for_Uint16_t* buffer,
                                     false,//boolean aIsMaster,
                                     false,//boolean aFcb,
                                     mMrzsFrameSink.m_last_header.addresses.source,//uint16_t aDest,
                                     mMrzsFrameSink.m_last_header.addresses.destination,//uint16_t aSrc,
                                     (transport.asdu.payload));//RSeq_for_Uint16_t user_data);
//        inspect_RSeq(&data);
          OnTxReady_in_OutstationMrzsObject(&t);

          usb_transmiting_count = wrapper.hHasLength.m_length;
          for (int i = 0; i < usb_transmiting_count; i++) usb_transmiting[i] = wrapper.buffer_[i];
          data_usb_transmiting = true;
        }//if(is_not_empty_in_HasLength_for_Uint16_t(&(pTransportLayer->asdu.payload.hHasLength)))
    }//if(mMrzsFrameSink.userdata)
    break;

  case LinkFunction_PRI_UNCONFIRMED_USER_DATA:// = 0x44,
//    std::cout<<'\n';
//    std::cout<<"+***LinkFunction_PRI_UNCONFIRMED_USER_DATA***"<<'\n';
    if(mMrzsFrameSink.userdata)
    {
//      inspect_RSeq(mMrzsFrameSink.userdata);
      Message mMessage;
      Addresses aAddresses;
      Addresses_in_AddressesOver2(&aAddresses, mMrzsFrameSink.m_last_header.addresses.source, mMrzsFrameSink.m_last_header.addresses.destination);
      Message_in_Message(&mMessage, &aAddresses, mMrzsFrameSink.userdata);
      t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length = 0;

      if(OnReceive_in_TransportLayerMrzs(&transport, &mMessage))
        if(is_not_empty_in_HasLength_for_Uint16_t(&(transport.asdu.payload.hHasLength)))
        {
          OnReceive_in_OContext(&(t.context), &transport.asdu);
          if(t.lower.mMessage_in_MrzsLowerLayer.payload.hHasLength.m_length == 0)
          {
//           ***Empty output***
            break;
          }//if

//        inspect_Message(&(t.lower.mMessage));
//        std::cout<<"+transport.receiver.expectedSeq.seq= "<<(uint16_t)transport.receiver.expectedSeq.seq<<'\n';

          //boolean BeginTransmit_in_TransportLayerMrzs(TransportLayerMrzs *pTransportLayer, Message* message)
          BeginTransmit_in_TransportLayerMrzs(&transport, &(t.lower.mMessage_in_MrzsLowerLayer));
//        inspect_RSeq(&(transport.asdu.payload));

          RSeq_for_Uint16_t wrapper = FormatUnconfirmedUserData_in_LinkFrame_static(
                                     &writeTo,//WSeq_for_Uint16_t* buffer,
                                     false,//boolean aIsMaster,
                                     mMrzsFrameSink.m_last_header.addresses.source,//uint16_t aDest,
                                     mMrzsFrameSink.m_last_header.addresses.destination,//uint16_t aSrc,
                                     (transport.asdu.payload));//RSeq_for_Uint16_t user_data);
//        inspect_RSeq(&data);
          OnTxReady_in_OutstationMrzsObject(&t);

          usb_transmiting_count = wrapper.hHasLength.m_length;
          for (int i = 0; i < usb_transmiting_count; i++) usb_transmiting[i] = wrapper.buffer_[i];
          data_usb_transmiting = true;
        }//if(is_not_empty_in_HasLength_for_Uint16_t(&(pTransportLayer->asdu.payload.hHasLength)))
    }//if(mMrzsFrameSink.userdata)
    break;
  case LinkFunction_INVALID:// = 0xFF
//    std::cout<<'\n';
//    std::cout<<"+***LinkFunction_INVALID***"<<'\n';
    return;
  }//switch

//  usb_transmiting_count = sizeOutputPacket;
//  for (int i = 0; i < usb_transmiting_count; i++) usb_transmiting[i] = outputPacket[i];
//  data_usb_transmiting = true;
}//inputPacketParserUSB(void)

/**************************************/
//разбор входного пакета RS485
/**************************************/
void inputPacketParserRS485(void)
{
  pointInterface=RS485_RECUEST;//метка интерфейса 0-USB 1-RS485

  inputPacket = RxBuffer_RS485;

  received_count = &RxBuffer_RS485_count;
  outputPacket = outputPacket_RS485;

  //Перевірка контрольної суми
//  unsigned short CRC_sum;
//  CRC_sum = 0xffff;
//  for (int index = 0; index < (*received_count-2); index++) CRC_sum = AddCRC(*(inputPacket + index),CRC_sum);
//  if((CRC_sum & 0xff)  != *(inputPacket+*received_count-2) ||//) return;
//      (CRC_sum >> 8  ) != *(inputPacket+*received_count-1))
//    {
  /***
  12345
  Причина рестарту (не співпала контрольна сума)
  ***/
  //reason_of_restart_RS485 |= (1 << 5);
  /***/

//      restart_monitoring_RS485();
  //return;
//    }

//  if(!(inputPacket[0]==current_settings.address))
//    {
  /***
  12345
  Причина рестарту (не співпала адреса 2)
  ***/
  //reason_of_restart_RS485 |= (1 << 6);
  /***/

//      restart_monitoring_RS485();
//      return;
//    }

//  if(inputPacketParser()==0)
//    {
  /***
  12345
  Причина рестарту (запит пакету відповіді завеликого розміру)
  ***/
  // reason_of_restart_RS485 |= (1 << 7);
  /***/

//      restart_monitoring_RS485();
//      return;
//    }

  TxBuffer_RS485_count = sizeOutputPacket;
  for (int i = 0; i < TxBuffer_RS485_count; i++) TxBuffer_RS485[i] = outputPacket[i];
  start_transmint_data_via_RS_485(TxBuffer_RS485_count);
}//inputPacketParserRS485(void)









