
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
//#include "APDUHexBuilders.h"
//#include "DatabaseHelpers.h"
//#include "TestOutstationEventResponses.h"

#define UNUSED(x) (void)(x)


key_filter *pkf;

MainWindow *mainWindow;
DatabaseConfig all_types_in_DatabaseHelpers(uint16_t num);

void configure_in_9Class1TwoByteLimitedCount(DatabaseConfig*);
void configure_in_9Class1TwoByteLimitedCount(DatabaseConfig* v)
{
 UNUSED(v);
}

void update_in_9Class1TwoByteLimitedCount(IUpdateHandler*);
void update_in_9Class1TwoByteLimitedCount(IUpdateHandler* db)
{
    std::cout << "update_in_9Class1TwoByteLimitedCount" <<'\n';
////    auto update = [](IUpdateHandler& db) {
////        db.Update(Binary(false, Flags(0x01)), 2);
////        db.Update(Binary(true, Flags(0x01)), 1);
////        db.Update(Binary(true, Flags(0x01)), 3);
////    };

 Flags fFlags;
 Flags_In_FlagsOver2(&fFlags, 1);

//void Binary_in_BinaryOver5(Binary *pBinary, boolean value, Flags flags);
 Binary bBinary1;
 Binary_in_BinaryOver5(&bBinary1, false, fFlags);
 Binary bBinary2;
 Binary_in_BinaryOver5(&bBinary2, true, fFlags);

//boolean Update_Binary_in_IUpdateHandler(IUpdateHandler*, Binary* meas, uint16_t index, EventMode_uint8_t mode);// = EventMode::Detect) = 0;
////            db.Update(Binary(true, Flags(0x01)), 0); 
         Update_Binary_in_IUpdateHandler(db, &bBinary1, 2, EventMode_Detect);// = EventMode::Detect) = 0;
         Update_Binary_in_IUpdateHandler(db, &bBinary2, 1, EventMode_Detect);// = EventMode::Detect) = 0;
         Update_Binary_in_IUpdateHandler(db, &bBinary2, 3, EventMode_Detect);// = EventMode::Detect) = 0;
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);


qDebug()<<"********SUITE('9Class1TwoByteLimitedCount')********";
/*
    // reads a single event, IIB bit indicates more events present
////    TestEventRead("C0 01 3C 02 08 02 00", "E0 81 82 00 02 01 28 02 00 02 00 01 01 00 81", update);
 std::string request("C0 01 3C 02 08 02 00");       
 std::string response("E0 81 82 00 02 01 28 02 00 02 00 01 01 00 81");       
 TestEventRead(request, response,
                   ////const std::function<void(IUpdateHandler& db)>& loadFun,
                   update_in_9Class1TwoByteLimitedCount,
                   ////const std::function<void(DatabaseConfig& db)>& configure = [](DatabaseConfig& view) {})
                   configure_in_9Class1TwoByteLimitedCount);
*/
    OutstationConfig config;
    OutstationConfig_in_OutstationConfig(&config);
////    OutstationConfig config;
////    config.eventBufferConfig = EventBufferConfig::AllTypes(10);
   EventBufferConfig etemp = AllTypes_in_EventBufferConfig_static(10);
   config.eventBufferConfig = etemp;

////    DatabaseConfig database = configure::by_count_of::all_types(5);
////    configure(database);
  getDataMapKeys_for_BinarySpec()[0] = 0;
  getDataMapKeys_for_BinarySpec()[1] = 1;
  getDataMapKeys_for_BinarySpec()[2] = 2;
  getDataMapKeys_for_BinarySpec()[3] = 3;
////    OutstationTestObject t(config, configure::by_count_of::all_types(100));
//    DatabaseConfig tmp = binary_input_in_DatabaseHelpers(1);
  DatabaseConfig database = all_types_in_DatabaseHelpers(4);

//  configure(&database);

////    OutstationTestObject t(config, std::move(database));
    OutstationTestObject t;
    OutstationTestObject_in_OutstationTestObject(&t, &config, &database);

////    t.LowerLayerUp();

////    t.Transaction([&](IUpdateHandler& db) { loadFun(db); });
    Transaction_in_OutstationTestObject(&t, update_in_9Class1TwoByteLimitedCount);//void (*apply)(IUpdateHandler*));

////    t.SendToOutstation(request);
    uint8_t name1[] = {7, 0xC0, 0x01, 0x3C, 0x02, 0x08, 0x02, 0x00};
    SendToOutstation_in_OutstationTestObject(&t, name1);  
////    REQUIRE(t.lower->PopWriteAsHex() == response);
qDebug()<<"REQUIRE('E0 81 82 00 02 01 28 02 00 02 00 01 01 00 81' == t.lower->PopWriteAsHex())";

/*
TEST_CASE(SUITE("9Class1TwoByteLimitedCount"))
{
    auto update = [](IUpdateHandler& db) {
        db.Update(Binary(false, Flags(0x01)), 2);
        db.Update(Binary(true, Flags(0x01)), 1);
        db.Update(Binary(true, Flags(0x01)), 3);
    };

    // reads a single event, IIB bit indicates more events present
    TestEventRead("C0 01 3C 02 08 02 00", "E0 81 82 00 02 01 28 02 00 02 00 01 01 00 81", update);
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

DatabaseConfig all_types_in_DatabaseHelpers(uint16_t num)
{
//void DatabaseConfig_in_DatabaseConfig(uint16_t all_types);
////        return opendnp3::DatabaseConfig(num);
  DatabaseConfig dDatabaseConfig;
  DatabaseConfig_in_DatabaseConfig(&dDatabaseConfig, num);
  return dDatabaseConfig;
}
