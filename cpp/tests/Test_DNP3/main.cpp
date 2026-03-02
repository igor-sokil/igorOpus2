
#include <QApplication>
#include <QtWidgets>
#include <QFile>

#include <stdlib.h>
#include <iostream>
#include <string>

#include "MainWindow.h"
#include "key_filter.h"

#include "../../../header_dnp3.h"

#include "MrzsFrameSink.h"
#include "OutstationMrzsObject.h"
#include "LinkParserMrzs.h"
#include "TransportLayerMrzs.h"

void RepairCRC_in_DNPHelpers(RSeq_for_Uint16_t* rseq);//std::string& arData)
DatabaseConfig all_types_in_DatabaseHelpers(uint16_t num);
boolean  setMrzsDataMapKeys_for_AnalogSpec(DatabaseConfig* pDatabaseConfig);

#define UNUSED(x) (void)(x)


key_filter *pkf;

MainWindow *mainWindow;

  LinkLayerParser parser;
  TransportLayerMrzs transport;
  OutstationConfig config;
  OutstationMrzsObject t;
  MrzsFrameSink  mMrzsFrameSink;
  DatabaseConfig dDatabaseConfig;

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);

if (QFile::exists("step_dnp3.txt")) {
    // файл есть
} else {
    // файла нет
QFile file("step_dnp3.txt");
if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
 //   QTextStream out(&file);
//    out << "Привет, мир!\n";
//    out << "Это второй абзац." << endl;
    file.close();
}}
  qDebug()<<"********SUITE('Test_DNP3')********";

    std::cout<<"+***LinkLayerParser parser= "<<sizeof(parser)<<'\n';
    std::cout<<"+***TransportLayerMrzs transport= "<<sizeof(transport)<<'\n';
    std::cout<<"+***OutstationConfig config= "<<sizeof(config)<<'\n';
    std::cout<<"+***OutstationMrzsObject t= "<<sizeof(t)<<'\n';
    std::cout<<"+***MrzsFrameSink  mMrzsFrameSink= "<<sizeof(mMrzsFrameSink)<<'\n';
    std::cout<<"+***DatabaseConfig dDatabaseConfig= "<<sizeof(dDatabaseConfig)<<'\n';

  LinkLayerParser_in_LinkLayerParser(&parser);
  TransportLayerMrzs_in_TransportLayerMrzs(&transport, 292);
  OutstationConfig_in_OutstationConfig(&config);
//  DatabaseConfig tmp = all_types_in_DatabaseHelpers(2);
  OutstationConfig_in_OutstationConfig(&config);
  initialize_BinaryConfig(&dDatabaseConfig, 2);
  initialize_DoubleBitBinaryConfig(&dDatabaseConfig, 2);
  initialize_AnalogConfig(&dDatabaseConfig, 65);
  initialize_CounterConfig(&dDatabaseConfig, 2);
  initialize_FrozenCounterConfig(&dDatabaseConfig, 2);
  initialize_BOStatusConfig(&dDatabaseConfig, 2);
  initialize_AOStatusConfig(&dDatabaseConfig, 2);
  initialize_TimeAndIntervalConfig(&dDatabaseConfig, 2);

  OutstationMrzsObject_in_OutstationMrzsObject(&t, &config, &dDatabaseConfig);
  MrzsFrameSink_in_MrzsFrameSink(&mMrzsFrameSink);

  setMrzsDataMapKeys_for_AnalogSpec(&dDatabaseConfig);

  Analog aAnalog;
  Analog_in_AnalogOver2(&aAnalog, 350.0);
boolean tt = Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 350, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 351.0);
 tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 351, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 352.0);
 tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 352, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 353.0);
 tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 353, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 354.0);
 tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 354, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 355.0);
 tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 355, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 357.0);
 tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 357, EventMode_Detect);
    std::cout<<'\n';
    std::cout<<"***boolean tt= "<<tt<<'\n';

  /*
  TEST_CASE(SUITE("3BodyCRCError"))
  {
      LinkParserTest t;
      t.WriteData("05 64 14 F3 01 00 00 04 0A 3B C0 C3 01 3C 02 06 3C 03 06 3C 04 06 3C 01 06 9A 11");
      REQUIRE(t.sink.m_num_frames == 0);
      REQUIRE(t.parser.Statistics().numBodyCrcError == 1);
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
