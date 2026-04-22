
#include <QApplication>
#include <QtWidgets>

#include <stdlib.h>
#include <iostream>

#include "MainWindow.h"
#include "key_filter.h"

#include "../../../header_dnp3.h"

#include "OutstationConfig.h"
#include "OutstationTestObject.h"

#define UNUSED(x) (void)(x)

void* pPointerGlobal1;
void* pPointerGlobal2;
void* pPointerGlobal3;

key_filter *pkf;

MainWindow *mainWindow;

DatabaseConfig database_by_sizes_in_DatabaseHelpers(uint16_t num_binary,
//    uint16_t num_double_binary,
    uint16_t num_analog
/*    uint16_t num_counter,
    uint16_t num_frozen_counter,
    uint16_t num_binary_output_status,
    uint16_t num_analog_output_status,
    uint16_t num_time_and_interval,
    uint16_t num_octet_string*/);
DatabaseConfig analog_input_in_DatabaseHelpers(uint16_t num);

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);

qDebug()<<"********SUITE('5WarmRestart')********";
////    OutstationConfig config;
////    OutstationTestObject t(config);
////    t.LowerLayerUp();
    OutstationConfig config;
    OutstationConfig_in_OutstationConfig(&config);
//    OutstationTestObject t;
//    OutstationTestObject_in_OutstationTestObject(&t, &config);
    DatabaseConfig tmp = analog_input_in_DatabaseHelpers(2);

    OutstationTestObject t;
    OutstationTestObject_in_OutstationTestObject(&t, &config, &tmp);

    LowerLayerUp_in_OutstationTestObject(&t);

////    t.SendToOutstation("C0 0E"); 
//    std::string name("C0 0E");       
    uint8_t name[] = {2, 0xC0, 0x0E};
    SendToOutstation_in_OutstationTestObject(&t, name);  

//    std::string temp = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

    // IIN = device restart + function not supported
////    REQUIRE(t.lower->PopWriteAsHex() == "C0 81 80 01");
qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 01')";
//std::cout << "temp= " << temp<<'\n';

//uint16_t OnTxReady_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject)
////    t.OnTxReady();
uint16_t l = OnTxReady_in_OutstationTestObject(&t);
qDebug()<< "l= " << l;

////    t.application->coldRestartSupport = RestartMode::SUPPORTED_DELAY_FINE;
  t.application.warmRestartSupport = RestartMode_SUPPORTED_DELAY_COARSE;
////    t.application->coldRestartTimeDelay = 1;
  t.application.warmRestartTimeDelay = 65535;

////    t.SendToOutstation("C1 0E");
//    std::string name1("C1 0E");       
    uint8_t name1[] = {2, 0xC1, 0x0E};
    SendToOutstation_in_OutstationTestObject(&t, name1);  

////    REQUIRE(t.lower->PopWriteAsHex() == "C1 81 80 00 34 01 07 01 FF FF");
//    std::string temp2 = PopWriteAsHex_in_MockLowerLayer(&(t.lower));
qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == 'C1 81 80 00 34 01 07 01 FF FF')";
//std::cout << "temp2= " << temp2<<'\n';

/*
TEST_CASE(SUITE("5WarmRestart"))
{
    OutstationConfig config;
    OutstationTestObject t(config);
    t.LowerLayerUp();

    // try first with support turned off
// сначала попробуем с отключенной поддержкой
    t.SendToOutstation("C0 0E");
    REQUIRE(t.lower->PopWriteAsHex() == "C0 81 80 01"); // IIN = device restart + function not supported
    t.OnTxReady();

    t.application->warmRestartSupport = RestartMode::SUPPORTED_DELAY_COARSE;
    t.application->warmRestartTimeDelay = 65535;

    t.SendToOutstation("C1 0E");
    REQUIRE(t.lower->PopWriteAsHex() == "C1 81 80 00 34 01 07 01 FF FF");
}
*/
/*
////    OutstationConfig config;
////    OutstationTestObject t(config);
////    t.LowerLayerUp();
    OutstationConfig config;
    OutstationConfig_in_OutstationConfig(&config);
//    OutstationTestObject t;
//    OutstationTestObject_in_OutstationTestObject(&t, &config);
    DatabaseConfig tmp;
    DatabaseConfig_in_DatabaseConfig(&tmp, 0);

    OutstationTestObject t;
    OutstationTestObject_in_OutstationTestObject(&t, &config, &tmp);

    LowerLayerUp_in_OutstationTestObject(&t);

////    t.SendToOutstation("C0 0D"); 
    std::string name("C0 0D");       
    SendToOutstation_in_OutstationTestObject(&t, name);  

    std::string temp = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

    // IIN = device restart + function not supported
////    REQUIRE(t.lower->PopWriteAsHex() == "C0 81 80 01");
qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == 'C0 81 80 01')";
std::cout << "temp= " << temp<<'\n';
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


DatabaseConfig database_by_sizes_in_DatabaseHelpers(uint16_t num_analog,
//    uint16_t num_double_binary,
    uint16_t  num_binary
/*    uint16_t num_counter,
    uint16_t num_frozen_counter,
    uint16_t num_binary_output_status,
    uint16_t num_analog_output_status,
    uint16_t num_time_and_interval,
    uint16_t num_octet_string*/)
{
  DatabaseConfig config;

  BinaryConfig bBinaryConfig;
  BinaryConfig_in_BinaryConfig(&bBinaryConfig);
  for (uint16_t i = 0; i < num_binary; ++i)
  {
    config.binary_input_config[i] = bBinaryConfig;//{};
  }
  config.binary_input_count = num_binary; 
/*
  DoubleBitBinaryConfig dDoubleBitBinaryConfig;
  DoubleBitBinaryConfig_in_DoubleBitBinaryConfig(&dDoubleBitBinaryConfig);
  for (uint16_t i = 0; i < num_double_binary; ++i)
  {
    config.double_binary[i] = dDoubleBitBinaryConfig;//{};
  }
*/
  AnalogConfig aAnalogConfig;
  AnalogConfig_in_AnalogConfig(&aAnalogConfig);
  for (uint16_t i = 0; i < num_analog; ++i)
  {
    config.analog_input_config[i] = aAnalogConfig;//{};
  }
  config.analog_input_count = num_analog; 
/*
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

  OctetStringConfig oOctetStringConfig;
  OctetStringConfig_in_OctetStringConfig(&oOctetStringConfig);
  for (uint16_t i = 0; i < num_octet_string; ++i)
  {
    config.octet_string[i] = oOctetStringConfig;//{};
  }
*/
  return config;
}

DatabaseConfig analog_input_in_DatabaseHelpers(uint16_t num)
{
  return database_by_sizes_in_DatabaseHelpers(num, 0);//, 0, 0, 0, 0, 0, 0, 0);
}
