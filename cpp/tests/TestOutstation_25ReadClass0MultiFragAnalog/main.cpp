
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


//int16_t get_stack_info(void);

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

void apply_in_25ReadClass0MultiFragAnalog(IUpdateHandler*);
void apply_in_25ReadClass0MultiFragAnalog(IUpdateHandler* db)
{
 Flags fFlags;
 Flags_In_FlagsOver2(&fFlags, 1);

//void Analog_in_AnalogOver3(Analog *pAnalog, double value, Flags flags);
 Analog aAnalog;
 Analog_in_AnalogOver3(&aAnalog, 0.0, fFlags);

        for (uint16_t i = 0; i < 8; i++)
        {
//boolean Update_Analog_in_IUpdateHandler(IUpdateHandler*, Analog* meas, uint16_t index, EventMode_uint8_t mode);// = EventMode::Detect) = 0;
////            db.Update(Analog(0, Flags(0x01)), i);
         Update_Analog_in_IUpdateHandler(db, &aAnalog, i, EventMode_Detect);// = EventMode::Detect) = 0;
        }
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);

//expectsContents_in_CountParser = true;
//expectsContents_in_CountIndexParser = false;
//expectsContents_in_RangeParser = false;

qDebug()<<"********SUITE('25ReadClass0MultiFragAnalog')********";
    OutstationConfig config;
//qDebug()<<"1stack_info= "<<get_stack_info();

    OutstationConfig_in_OutstationConfig(&config);
//qDebug()<<"2stack_info= "<<get_stack_info();

    config.params.maxTxFragSize = 20; // override to use a fragment length of 20


////    OutstationTestObject t(config, configure::by_count_of::analog_input(8));
DatabaseConfig tmp = analog_input_in_DatabaseHelpers(8);
//qDebug()<<"3stack_info= "<<get_stack_info();
    setDataMapKeys_for_AnalogSpec(&tmp, 0, 0);
    setDataMapKeys_for_AnalogSpec(&tmp, 1, 1);
    setDataMapKeys_for_AnalogSpec(&tmp, 2, 2);
    setDataMapKeys_for_AnalogSpec(&tmp, 3, 3);
    setDataMapKeys_for_AnalogSpec(&tmp, 4, 4);
    setDataMapKeys_for_AnalogSpec(&tmp, 5, 5);
    setDataMapKeys_for_AnalogSpec(&tmp, 6, 6);
    setDataMapKeys_for_AnalogSpec(&tmp, 7, 7);

    OutstationTestObject t;
    OutstationTestObject_in_OutstationTestObject(&t, &config, &tmp);
//qDebug()<<"4stack_info= "<<get_stack_info();

//    LowerLayerUp_in_OutstationTestObject(&t);
//qDebug()<<"5stack_info= "<<get_stack_info();

//void Transaction_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject, void (*apply)(IUpdateHandler*));//std::function<void(opendnp3::IUpdateHandler&)>& apply)
////    t.Transaction([](IUpdateHandler& db) {
////        for (uint16_t i = 0; i < 8; i++)
////        {
////            db.Update(Analog(0, Flags(0x01)), i);
////        }
////    });

    Transaction_in_OutstationTestObject(&t, apply_in_25ReadClass0MultiFragAnalog);//void (*apply)(IUpdateHandler*));

//    std::string name("C0 01 3C 01 06");       
    uint8_t name[] = {5, 0xC0, 0x01, 0x3C, 0x01, 0x06};
    SendToOutstation_in_OutstationTestObject(&t, name);  

//    std::string temp = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == 'A0 81 80 00 1E 01 00 00 01 01 00 00 00 00 01 00 00 00 00')";
//std::cout << "temp= " << temp<<'\n';
/*
//uint16_t OnTxReady_in_OutstationTestObject(OutstationTestObject *pOutstationTestObject);
////    t.OnTxReady();
 OnTxReady_in_OutstationTestObject(&t);

////    t.SendToOutstation("C0 00");
    std::string name1("C0 00");       
    SendToOutstation_in_OutstationTestObject(&t, name1);  

    std::string temp1 = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == '21 81 80 00 1E 01 00 02 03 01 00 00 00 00 01 00 00 00 00')";
std::cout << "temp1= " << temp1<<'\n';

 OnTxReady_in_OutstationTestObject(&t);

////    t.SendToOutstation("C1 00");
    std::string name2("C1 00");       
    SendToOutstation_in_OutstationTestObject(&t, name2);  

    std::string temp2 = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == '22 81 80 00 1E 01 00 04 05 01 00 00 00 00 01 00 00 00 00')";
std::cout << "temp2= " << temp2<<'\n';

 OnTxReady_in_OutstationTestObject(&t);

////    t.SendToOutstation("C2 00");
    std::string name3("C2 00");       
    SendToOutstation_in_OutstationTestObject(&t, name3);  

    std::string temp3 = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

qDebug()<<"REQUIRE(t.lower->PopWriteAsHex() == '43 81 80 00 1E 01 00 06 07 01 00 00 00 00 01 00 00 00 00')";
std::cout << "temp3= " << temp3<<'\n';

 OnTxReady_in_OutstationTestObject(&t);

////    t.SendToOutstation("C3 00");
    std::string name4("C3 00");       
    SendToOutstation_in_OutstationTestObject(&t, name4);  

    std::string temp4 = PopWriteAsHex_in_MockLowerLayer(&(t.lower));

qDebug()<<"REQUIRE(t.lower->PopWriteAsHex().empty())";
std::cout << "temp4= " << temp4<<'\n';
*/
/*
TEST_CASE(SUITE("25ReadClass0MultiFragAnalog"))
{
    OutstationConfig config;
    config.params.maxTxFragSize = 20; // override to use a fragment length of 20
    OutstationTestObject t(config, configure::by_count_of::analog_input(8));
    t.LowerLayerUp();

    t.Transaction([](IUpdateHandler& db) {
        for (uint16_t i = 0; i < 8; i++)
        {
            db.Update(Analog(0, Flags(0x01)), i);
        }
    });

    t.SendToOutstation("C0 01 3C 01 06"); // Read class 0

    // Response should be (30,1)x2 per fragment, quality ONLINE, value 0
    // 4 fragment response, first 3 fragments should be confirmed, last one shouldn't be
    REQUIRE(t.lower->PopWriteAsHex() == "A0 81 80 00 1E 01 00 00 01 01 00 00 00 00 01 00 00 00 00");
    t.OnTxReady();
    t.SendToOutstation("C0 00");
    REQUIRE(t.lower->PopWriteAsHex() == "21 81 80 00 1E 01 00 02 03 01 00 00 00 00 01 00 00 00 00");
    t.OnTxReady();
    t.SendToOutstation("C1 00");
    REQUIRE(t.lower->PopWriteAsHex() == "22 81 80 00 1E 01 00 04 05 01 00 00 00 00 01 00 00 00 00");
    t.OnTxReady();
    t.SendToOutstation("C2 00");
    REQUIRE(t.lower->PopWriteAsHex() == "43 81 80 00 1E 01 00 06 07 01 00 00 00 00 01 00 00 00 00");
    t.OnTxReady();
    t.SendToOutstation("C3 00");

    REQUIRE(t.lower->PopWriteAsHex().empty());
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
