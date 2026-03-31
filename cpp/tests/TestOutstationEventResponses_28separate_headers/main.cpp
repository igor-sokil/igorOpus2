
#include <QApplication>
#include <QtWidgets>

#include <stdlib.h>
#include <iostream>
#include <string>

#include "MainWindow.h"
#include "key_filter.h"

#include "../../../header_dnp3.h"

#include "OutstationConfig.h"
#include "OutstationTestObject.h"
//#include "DatabaseHelpers.h"

#define UNUSED(x) (void)(x)

DatabaseConfig database_by_sizes_in_DatabaseHelpers(uint16_t num_octet_string
//    uint16_t num_double_binary,
//    uint16_t  num_binary
/*    uint16_t num_counter,
    uint16_t num_frozen_counter,
    uint16_t num_binary_output_status,
    uint16_t num_analog_output_status,
    uint16_t num_time_and_interval,
    uint16_t num_octet_string*/);
DatabaseConfig octet_string_in_DatabaseHelpers(uint16_t num);

key_filter *pkf;

MainWindow *mainWindow;

void update_in_28same_header(IUpdateHandler* db);
void update_in_28same_header(IUpdateHandler* db)
{
    OctetString data;
//void OctetString_in_OctetStringOver3(OctetString *pOctetString, Buffer *buffer);
//void Buffer_in_BufferOver2(Buffer *pBuffer, uint8_t* data, uint16_t length);
   uint8_t bytes[2] = {0xCA, 0xFE};
   Buffer bBuffer;
   Buffer_in_BufferOver2(&bBuffer, bytes, 2);
   OctetString_in_OctetStringOver3(&data, &bBuffer);

//IUpdateHandler* GetUpdateHandler_in_OContext(OContext *pOContext);
//boolean Update_OctetString_in_IUpdateHandler(IUpdateHandler*, OctetString* meas, uint16_t index, EventMode_uint8_t mode);// = EventMode::Detect) = 0;
//IUpdateHandler* itmp = GetUpdateHandler_in_OContext(&(t.context));
//boolean Update_for_OctetString_in_Database_override(void *pIUpdateHandler, OctetString* meas, uint16_t index, EventMode_uint8_t mode);
//btmp = Update_OctetString_in_IUpdateHandler(itmp, &data, 2, EventMode_Detect);// = EventMode::Detect) = 0;
 Update_for_OctetString_in_Database_override(db, &data, 0, EventMode_Detect);

   uint8_t bytes1[4] = {0xCA, 0xFE, 0xBA, 0xBE};
   Buffer_in_BufferOver2(&bBuffer, bytes1, 4);
   OctetString_in_OctetStringOver3(&data, &bBuffer);

//IUpdateHandler* itmp = GetUpdateHandler_in_OContext(&(t.context));
 Update_for_OctetString_in_Database_override(db, &data, 0, EventMode_Detect);// = EventMode::Detect) = 0;
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);

qDebug()<<"********SUITE('27same_header')********";
////    OutstationConfig config;

    OutstationConfig config;
    OutstationConfig_in_OutstationConfig(&config);

////    config.eventBufferConfig = EventBufferConfig::AllTypes(5);
   EventBufferConfig etemp = AllTypes_in_EventBufferConfig_static(10);
   config.eventBufferConfig = etemp;

//DatabaseConfig octet_string_in_DatabaseHelpers(uint16_t num);
////    OutstationTestObject t(config, configure::by_count_of::octet_string(5));
DatabaseConfig tmp = octet_string_in_DatabaseHelpers(5);
  setDataMapKeys_for_OctetStringSpec(&tmp, 0, 0);
  setDataMapKeys_for_OctetStringSpec(&tmp, 1, 1);
  setDataMapKeys_for_OctetStringSpec(&tmp, 2, 2);

    OutstationTestObject t;
    OutstationTestObject_in_OutstationTestObject(&t, &config, &tmp);

    Transaction_in_OutstationTestObject(&t, update_in_28same_header);//void (*apply)(IUpdateHandler*));

//    LowerLayerUp_in_OutstationTestObject(&t);

//    std::string name("C0 01 3C 02 06");       
    uint8_t name[] = {5, 0xC0, 0x01, 0x3C, 0x02, 0x06};
    SendToOutstation_in_OutstationTestObject(&t, name);  

//    std::string temp = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == 'E0 81 80 00 6F 02 28 01 00 00 00 CA FE 6F 04 28 01 00 00 00 CA FE BA BE')";
//std::cout << "temp= " << temp<<'\n';

/*
TEST_CASE(SUITE("28reports octet string events w/ different sizes in separate headers"))
{
    OutstationConfig config;
    config.eventBufferConfig = EventBufferConfig::AllTypes(5);
    OutstationTestObject t(config, configure::by_count_of::octet_string(5));
    t.LowerLayerUp();

    auto update = [](IUpdateHandler& db) {
        {
            uint8_t bytes[2] = {0xCA, 0xFE};
            OctetString data(opendnp3::Buffer(bytes, 2));
            db.Update(data, 0);
        }
        {
            uint8_t bytes[4] = {0xCA, 0xFE, 0xBA, 0xBE};
            OctetString data(opendnp3::Buffer(bytes, 4));
            db.Update(data, 0);
        }
    };

    t.Transaction(update);

    t.SendToOutstation("C0 01 3C 02 06"); // Read class 1
    REQUIRE(t.lower->PopWriteAsHex() == "E0 81 80 00 6F 02 28 01 00 00 00 CA FE 6F 04 28 01 00 00 00 CA FE BA BE");
}
*/


  MainWindow mainWindowObj;
  mainWindow = &mainWindowObj;


  mainWindowObj.resize(600, 800);
  mainWindowObj.show();
  return app.exec();
}


key_filter::key_filter(QObject *parent)
  : QObject(parent)
{
}

bool key_filter::eventFilter(QObject *obj, QEvent *event)
{
  UNUSED(obj);

  if(event->type() == QEvent::KeyPress)
  {
    QKeyEvent *ke = static_cast<QKeyEvent*>(event);
    int myKey = ke->key();

    switch(myKey)
    {
    case  Qt::Key_Asterisk:
      emit sig_key_asterisk();
      return true;
    }//switch

    if(ke->modifiers()==Qt::NoModifier)
    switch(myKey)
    {
    case  Qt::Key_1:
      emit sig_key_1();
      return true;
    case  Qt::Key_2:
      emit sig_key_2();
      return true;
    case  Qt::Key_3:
      emit sig_key_3();
      return true;
    case  Qt::Key_4:
      emit sig_key_4();
      return true;

    case  Qt::Key_5:
      emit sig_key_5();
      return true;
    case  Qt::Key_6:
      emit sig_key_6();
      return true;
    case  Qt::Key_7:
      emit sig_key_7();
      return true;
    case  Qt::Key_8:
      emit sig_key_8();
      return true;

    case  Qt::Key_Up:
      emit sig_key_up();
      return true;
    case  Qt::Key_Down:
      emit sig_key_down();
      return true;
    case  Qt::Key_PageDown:
      emit sig_key_pgDown();
      return true;
    case  Qt::Key_PageUp:
      emit sig_key_pgUp();
      return true;
    case  Qt::Key_Left:
      emit sig_key_left();
      return true;
    case  Qt::Key_Right:
      emit sig_key_right();
      return true;
    case  Qt::Key_Home:
      emit sig_key_home();
      return true;
    case  Qt::Key_End:
      emit sig_key_end();
      return true;
    case  Qt::Key_Insert:
      emit sig_key_enter();
      return true;
    case  Qt::Key_Delete:
      emit sig_key_esc();
      return true;
    case  Qt::Key_Escape:
      emit sig_key_esc();
      return true;

    case  Qt::Key_F1:
      emit sig_key_f1();
      return true;
    case  Qt::Key_F2:
      emit sig_key_f2();
      return true;
    case  Qt::Key_F3:
      emit sig_key_f3();
      return true;

    case  Qt::Key_F8:
      emit sig_key_f8();
      return true;
    }//switch

   if(ke->modifiers()!=Qt::ControlModifier) return false;
    switch(myKey)
    {
    case  Qt::Key_1:
      emit sig_ctrlkey(0);
      return true;
    case  Qt::Key_2:
      emit sig_ctrlkey(1);
      return true;
    case  Qt::Key_3:
      emit sig_ctrlkey(2);
      return true;
    case  Qt::Key_4:
      emit sig_ctrlkey(3);
      return true;
    case  Qt::Key_5:
      emit sig_ctrlkey(4);
      return true;
    case  Qt::Key_6:
      emit sig_ctrlkey(5);
      return true;
    case  Qt::Key_7:
      emit sig_ctrlkey(6);
      return true;
    case  Qt::Key_8:
      emit sig_ctrlkey(7);
      return true;
    }//switch

  }
  return false;
}

DatabaseConfig database_by_sizes_in_DatabaseHelpers(uint16_t num_octet_string
//    uint16_t num_double_binary,
//    uint16_t  num_binary
/*    uint16_t num_counter,
    uint16_t num_frozen_counter,
    uint16_t num_binary_output_status,
    uint16_t num_analog_output_status,
    uint16_t num_time_and_interval,
    uint16_t num_octet_string*/)
{
  DatabaseConfig config;
/*
  BinaryConfig bBinaryConfig;
  BinaryConfig_in_BinaryConfig(&bBinaryConfig);
  for (uint16_t i = 0; i < num_binary; ++i)
  {
    config.binary_input_config[i] = bBinaryConfig;//{};
  }
  config.binary_input_count = num_binary; 

  DoubleBitBinaryConfig dDoubleBitBinaryConfig;
  DoubleBitBinaryConfig_in_DoubleBitBinaryConfig(&dDoubleBitBinaryConfig);
  for (uint16_t i = 0; i < num_double_binary; ++i)
  {
    config.double_binary[i] = dDoubleBitBinaryConfig;//{};
  }

  AnalogConfig aAnalogConfig;
  AnalogConfig_in_AnalogConfig(&aAnalogConfig);
  for (uint16_t i = 0; i < num_analog; ++i)
  {
    config.analog_input_config[i] = aAnalogConfig;//{};
  }
  config.analog_input_count = num_analog; 

  CounterConfig cCounterConfig;
  CounterConfig_in_CounterConfig(&cCounterConfig);
  for (uint16_t i = 0; i < num_counter; ++i)
  {
    config.counter[i] = cCounterConfig;//{};
  }

  FrozenCounterConfig fFrozenCounterConfig;
  FrozenCounterConfig_in_FrozenCounterConfig(&fFrozenCounterConfig);
  for (uint16_t i = 0; i < num_frozen_counter; ++i)
  {
    config.frozen_counter[i] = fFrozenCounterConfig;//{};
  }

  BOStatusConfig bBOStatusConfig;
  BOStatusConfig_in_BOStatusConfig(&bBOStatusConfig);
  for (uint16_t i = 0; i < num_binary_output_status; ++i)
  {
    config.binary_output_status[i] = bBOStatusConfig;//{};
  }

  AOStatusConfig aAOStatusConfig;
  AOStatusConfig_in_AOStatusConfig(&aAOStatusConfig);
  for (uint16_t i = 0; i < num_analog_output_status; ++i)
  {
    config.analog_output_status[i] = aAOStatusConfig;//{};
  }

  TimeAndIntervalConfig tTimeAndIntervalConfig;
  TimeAndIntervalConfig_in_TimeAndIntervalConfig(&tTimeAndIntervalConfig);
  for (uint16_t i = 0; i < num_time_and_interval; ++i)
  {
    config.time_and_interval[i] = tTimeAndIntervalConfig;//{};
  }
*/
  OctetStringConfig oOctetStringConfig;
  OctetStringConfig_in_OctetStringConfig(&oOctetStringConfig);
  for (uint16_t i = 0; i < num_octet_string; ++i)
  {
    config.octet_string_config[i] = oOctetStringConfig;//{};
  }
  config.octet_string_count = num_octet_string; 

  return config;
}
DatabaseConfig octet_string_in_DatabaseHelpers(uint16_t num)
{
  return database_by_sizes_in_DatabaseHelpers(num);//, 0, 0, 0, 0, 0, 0, 0);
}
