
#ifndef OPENDNP3_UNITTESTS_OUTSTATION_MRZS_OBJECT_H
#define OPENDNP3_UNITTESTS_OUTSTATION_MRZS_OBJECT_H

////#include <opendnp3/logging/LogLevels.h>

////#include <exe4cpp/MockExecutor.h>

////#include "dnp3mocks/MockCommandHandler.h"
////#include "dnp3mocks/MockLogHandler.h"
////#include "dnp3mocks/MockLowerLayer.h"
////#include "dnp3mocks/MockOutstationApplication.h"

////#include <link/LinkLayerConstants.h>
////#include <outstation/Database.h>
////#include <outstation/OutstationContext.h>

////#include <functional>

#include "MrzsExecutorExe4cpp.h"
#include "MrzsCommandHandler.h"
#include "MrzsLowerLayer.h"
#include "MrzsOutstationApplication.h"
#include "Database.h"
#include "OutstationContext.h"

////class OutstationTestObject
typedef struct
{

////public:
////    OutstationTestObject(const opendnp3::OutstationConfig& config,
////                         const opendnp3::DatabaseConfig& db_config = opendnp3::DatabaseConfig());

////    size_t SendToOutstation(const std::string& hex);

////    size_t BroadcastToOutstation(opendnp3::LinkBroadcastAddress broadcast_address, const std::string& hex);

////    size_t LowerLayerUp();

////    size_t LowerLayerDown();

////    size_t OnTxReady();

////    size_t NumPendingTimers() const;

////    bool AdvanceToNextTimer();

////    size_t AdvanceTime(const opendnp3::TimeDuration& td);

////    MockLogHandler log;

////    void Transaction(const std::function<void(opendnp3::IUpdateHandler&)>& apply)
////    {
  // auto& handler = context.GetUpdateHandler();
////        apply(context.GetUpdateHandler());
////        context.HandleNewEvents();
////    }

////private:
////    const std::shared_ptr<exe4cpp::MockExecutor> exe;
  MrzsExecutor  exe;
////public:
////    const std::shared_ptr<MockLowerLayer> lower;
  MrzsLowerLayer lower;
////    const std::shared_ptr<MockCommandHandler> cmdHandler;
  MrzsCommandHandler cmdHandler;
////    const std::shared_ptr<MockOutstationApplication> application;
  MrzsOutstationApplication application;
  OContext context;
} OutstationMrzsObject;

//   void OutstationTestObject_in_OutstationTestObject(OutstationConfig* config,
//                                                     DatabaseConfig* db_config);// = opendnp3::DatabaseConfig());
void OutstationMrzsObject_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject, OutstationConfig* config,
    DatabaseConfig* db_config);// = opendnp3::DatabaseConfig());

uint16_t LowerLayerUp_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject);
uint16_t LowerLayerDown_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject);

//uint16_t SendToOutstation_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject, uint8_t* input_packet);//std::string& hex);
//void Transaction_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject, void (*apply)(IUpdateHandler*));//std::function<void(opendnp3::IUpdateHandler&)>& apply)
/*
uint16_t BroadcastToOutstation_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject, LinkBroadcastAddress_uint16_t broadcast_address, std::string& hex);
*/
//uint16_t OnTxReady_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject);
uint16_t OnTxReady_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject);

uint16_t AdvanceTime_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject, TimeDuration* td);

boolean AdvanceToNextTimer_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject);

uint16_t NumPendingTimers_in_OutstationMrzsObject(OutstationMrzsObject *pOutstationMrzsObject);
void RepairCRC_in_DNPHelpers(RSeq_for_Uint16_t* rseq);

#endif
