#ifndef __GLOBAL_EXTERNAL_M_H
#define __GLOBAL_EXTERNAL_M_H
#include "header_m.h"
#include "header_dnp3.h"
extern  int   pointInterface;//метка интерфейса 0-USB 1-RS485

#include "MrzsFrameSink.h"
#include "OutstationMrzsObject.h"
#include "LinkParserMrzs.h"
#include "TransportLayerMrzs.h"

extern LinkLayerParser parser;
extern  TransportLayerMrzs transport;
extern  OutstationConfig config;
extern  OutstationMrzsObject t;
extern  MrzsFrameSink  mMrzsFrameSink;
extern  DatabaseConfig dDatabaseConfig;

#endif
