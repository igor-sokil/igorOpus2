
#include <QApplication>
#include <QtWidgets>

#include <stdlib.h>
#include <iostream>
#include <string>

#include "MainWindow.h"
#include "key_filter.h"

#include "../../../header.h"

#include "OutstationConfig.h"
#include "OutstationTestObject.h"
//#include "APDUHexBuilders.h"
//#include "DatabaseHelpers.h"
//#include "TestOutstationDiscontiguousIndices.h"

#define UNUSED(x) (void)(x)

#define DATAMAPKEYS1  2
#define DATAMAPKEYS2  4
#define DATAMAPKEYS3  5

key_filter *pkf;

MainWindow *mainWindow;

void update_in_TestOutstationDiscontiguousIndices(IUpdateHandler*);
void update_in_TestOutstationDiscontiguousIndices(IUpdateHandler* db)
{
    std::cout << "update_in_TestOutstationDiscontiguousIndices" <<'\n';
////    t.Transaction([](IUpdateHandler& db) {
////        db.Update(Binary(true, Flags(0x01)), 2, EventMode::Suppress);
////        db.Update(Binary(false, Flags(0x01)), 4, EventMode::Suppress);
////    });

 Flags fFlags;
 Flags_In_FlagsOver2(&fFlags, 1);

//void Binary_in_BinaryOver5(Binary *pBinary, boolean value, Flags flags);
 Binary bBinary1;
 Binary_in_BinaryOver5(&bBinary1, true, fFlags);
 Binary bBinary2;
 Binary_in_BinaryOver5(&bBinary2, false, fFlags);

//boolean Update_Binary_in_IUpdateHandler(IUpdateHandler*, Binary* meas, uint16_t index, EventMode_uint8_t mode);// = EventMode::Detect) = 0;
         Update_Binary_in_IUpdateHandler(db, &bBinary1, DATAMAPKEYS1, EventMode_Suppress);// = EventMode::Detect) = 0;
         Update_Binary_in_IUpdateHandler(db, &bBinary2, DATAMAPKEYS2, EventMode_Suppress);// = EventMode::Detect) = 0;
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);


qDebug()<<"********SUITE('2ReadDiscontiguousBadRangeBelow')********";
////    REQUIRE(QueryDiscontiguousBinary("C0 01 01 02 00 00 01") == "C0 81 80 04");
    OutstationConfig config;
    OutstationConfig_in_OutstationConfig(&config);

    BinaryConfig bBinaryConfig;
    BinaryConfig_in_BinaryConfig(&bBinaryConfig);
//DatabaseConfig from_AnalogConfig_in_DatabaseHelpers(std::map<uint16_t, AnalogConfig> map);

    getDataMapKeys_for_BinarySpec()[0] = DATAMAPKEYS1;
    getDataMapKeys_for_BinarySpec()[1] = DATAMAPKEYS2;
    getDataMapKeys_for_BinarySpec()[2] = DATAMAPKEYS3;
//    DatabaseConfig tmp = from_BinaryConfig_in_DatabaseHelpers(
//                                           {{2, bBinaryConfig},
//                                            {4, bBinaryConfig},
//                                            {5, bBinaryConfig}}
//                                                          );
   DatabaseConfig tmp;
  uint16_t num_binary = 3;
  for (uint16_t i = 0; i < num_binary; ++i)
  {
    tmp.binary_input_config[i] = bBinaryConfig;//{};
  }
  tmp.binary_input_count = num_binary; 

    OutstationTestObject t;
    OutstationTestObject_in_OutstationTestObject(&t, &config, &tmp);


////    t.LowerLayerUp();
//    LowerLayerUp_in_OutstationTestObject(&t);

////    t.Transaction([](IUpdateHandler& db) {
////        db.Update(Binary(true, Flags(0x01)), 2, EventMode::Suppress);
////        db.Update(Binary(false, Flags(0x01)), 4, EventMode::Suppress);
////    });
    Transaction_in_OutstationTestObject(&t, update_in_TestOutstationDiscontiguousIndices);//void (*apply)(IUpdateHandler*));

////    t.SendToOutstation(request);
    uint8_t request[] = {7, 0xC0, 0x01, 0x01 ,0x02, 0x00, 0x00, 0x01};
    SendToOutstation_in_OutstationTestObject(&t, request);  

// std::string request("C0 01 01 02 00 00 01");       
// std::string response = QueryDiscontiguousBinary(request);
qDebug()<<"REQUIRE(QueryDiscontiguousBinary('C0 01 01 02 00 00 01') == 'C0 81 80 04')";
//std::cout << "response= " << response<<'\n';

/*
TEST_CASE(SUITE("2ReadDiscontiguousBadRangeBelow"))
2. ѕрочитайте ниже несмежный неверный диапазон.
{
    // read 01 var 2, [00 : 01]
    REQUIRE(QueryDiscontiguousBinary("C0 01 01 02 00 00 01") == "C0 81 80 04");
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

