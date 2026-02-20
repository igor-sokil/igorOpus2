
#include "header.h"

int inputPacketParser(void);
void inputPacketParserUSB(void);
void inputPacketParserRS485(void);
unsigned short int  AddCRC(unsigned char inpbyte, unsigned short int oldCRC);
int Error_modbus_m(unsigned int address, unsigned int function, unsigned int error, unsigned char *output_data);

int outputFunc20PacketEncoder(int adrUnit, int *fileNumber, int *recordNumber, int *recordLen, int cntitem);
int outputFunc16PacketEncoder(int adrUnit, int adrReg, int cntReg);
int outputFunc15PacketEncoder(int adrUnit, int adrBit, int cntBit);
int outputFunc6PacketEncoder(int adrUnit, int adrReg, int dataReg);
int outputFunc5PacketEncoder(int adrUnit, int adrBit, int dataBit);
int outputFunc3PacketEncoder(int adrUnit, int adrReg, int cntReg);
int outputFunc1PacketEncoder(int adrUnit, int adrReg, int cntReg);
int passwordImunitetReg(int adrReg);
int passwordImunitetBit(int adrBit);

SRAM1 unsigned char  *outputPacket;
#if (((MODYFIKACIA_VERSII_PZ / 10) & 0x1) != 0)
SRAM1 unsigned char  outputPacket_TCP[300];
#endif
SRAM1 unsigned char  outputPacket_USB[300];
SRAM1 unsigned char  outputPacket_RS485[300];

SRAM1 int sizeOutputPacket;
SRAM1 unsigned char *inputPacket;
SRAM1 int *received_count;
SRAM1 int globalcntBit;//к-во бит
SRAM1 int globalcntReg;//к-во регистров
SRAM1 int globalbeginAdrReg;//адрес нач регистра
SRAM1 int globalbeginAdrBit;//адрес нач бит
SRAM1 int upravlSetting;//флаг Setting
SRAM1 int upravlSchematic;//флаг Shematic

/**************************************/
//разбор входного пакета
/**************************************/
int inputPacketParser(void)
{
  return 1;
}//inputPacketParser

