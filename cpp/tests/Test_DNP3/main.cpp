
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
boolean  setMrzsDataMapKeys_for_BinarySpec(DatabaseConfig* pDatabaseConfig);
boolean  setMrzsDataMapKeys_for_CounterSpec(DatabaseConfig* pDatabaseConfig);

#define UNUSED(x) (void)(x)


key_filter *pkf;

MainWindow *mainWindow;

LinkLayerParser parser;
TransportLayerMrzs transport;
OutstationConfig config;
OutstationMrzsObject t;
MrzsFrameSink  mMrzsFrameSink;
DatabaseConfig dDatabaseConfig;

  QStringList lines_file_step_dnp3;
  QStringList::iterator it_lines_file_step_dnp3;
int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  key_filter kf;
  app.installEventFilter(pkf=&kf);

  QFile file_step_dnp3("step_dnp3.txt");
  if (QFile::exists("step_dnp3.txt")) {
    // файл есть
  } else {
    // файла нет
    if (file_step_dnp3.open(QIODevice::WriteOnly | QIODevice::Text)) {
      file_step_dnp3.close();
    }
  }

  if (!file_step_dnp3.open(QIODevice::ReadOnly | QIODevice::Text))
  {
    qDebug() << "Ошибка открытия файла:" << file_step_dnp3.errorString();
  }
  else 
  {
    QTextStream in_file_step_dnp3(&file_step_dnp3);
    while (!in_file_step_dnp3.atEnd()) {
        lines_file_step_dnp3 << in_file_step_dnp3.readLine();
    }
    file_step_dnp3.close();
    it_lines_file_step_dnp3 = lines_file_step_dnp3.begin();
  }
  qDebug()<<"********SUITE('Test_DNP3')********";

  std::cout<<"+***LinkLayerParser parser= "<<sizeof(parser)<<'\n';
  std::cout<<"+***TransportLayerMrzs transport= "<<sizeof(transport)<<'\n';
  std::cout<<"+***OutstationConfig config= "<<sizeof(config)<<'\n';
  std::cout<<"+***OutstationMrzsObject t= "<<sizeof(t)<<'\n';
  std::cout<<"+   ***OContext context= "<<sizeof(t.context)<<'\n';
  std::cout<<"+      ***ResponseContext rspContext_in_OContext= "<<sizeof(t.context.rspContext_in_OContext)<<'\n';
  std::cout<<"+      ***EventBuffer eventBuffer_in_OContext= "<<sizeof(t.context.eventBuffer_in_OContext)<<'\n';
  std::cout<<"+         ***EventStorage storage= "<<sizeof(t.context.eventBuffer_in_OContext.storage)<<'\n';
  std::cout<<"+            ***EventLists state= "<<sizeof(t.context.eventBuffer_in_OContext.storage.state)<<'\n';
  std::cout<<"+               ***List_for_EventRecord events_in_EventLists= "<<sizeof(t.context.eventBuffer_in_OContext.storage.state.events_in_EventLists)<<'\n';
  std::cout<<"+               ***EventClassCounters counters_in_EventLists= "<<sizeof(t.context.eventBuffer_in_OContext.storage.state.counters_in_EventLists)<<'\n';
  std::cout<<"+               ***List_TypedEventRecord_for_BinarySpec binary= "<<sizeof(t.context.eventBuffer_in_OContext.storage.state.binary)<<'\n';
  std::cout<<"+               ***List_TypedEventRecord_for_DoubleBitBinarySpec doubleBinary= "<<sizeof(t.context.eventBuffer_in_OContext.storage.state.doubleBinary)<<'\n';
  std::cout<<"+      ***Database database_in_OContext= "<<sizeof(t.context.database_in_OContext)<<'\n';
  std::cout<<"+         ***StaticDataMap_for_BinarySpec binary_input= "<<sizeof(t.context.database_in_OContext.binary_input)<<'\n';
  std::cout<<"+         ***StaticDataMap_for_DoubleBitBinarySpec double_binary= "<<sizeof(t.context.database_in_OContext.double_binary)<<'\n';
  std::cout<<"+         ***StaticDataMap_for_AnalogSpec analog_input= "<<sizeof(t.context.database_in_OContext.analog_input)<<'\n';
  std::cout<<"+   ***MrzsOutstationApplication application= "<<sizeof(t.application)<<'\n';
  std::cout<<"+***MrzsFrameSink  mMrzsFrameSink= "<<sizeof(mMrzsFrameSink)<<'\n';
  std::cout<<"+***DatabaseConfig dDatabaseConfig= "<<sizeof(dDatabaseConfig)<<'\n';

  std::cout<<"{***START "<<'\n';
  LinkLayerParser_in_LinkLayerParser(&parser);
  TransportLayerMrzs_in_TransportLayerMrzs(&transport, 292);
  OutstationConfig_in_OutstationConfig(&config);

  OutstationConfig_in_OutstationConfig(&config);
  initialize_BinaryConfig(&dDatabaseConfig, 65);
  initialize_DoubleBitBinaryConfig(&dDatabaseConfig, 2);
  initialize_AnalogConfig(&dDatabaseConfig, 65);
  initialize_CounterConfig(&dDatabaseConfig, 65);
  initialize_FrozenCounterConfig(&dDatabaseConfig, 2);
  initialize_BOStatusConfig(&dDatabaseConfig, 2);
  initialize_AOStatusConfig(&dDatabaseConfig, 2);
  initialize_TimeAndIntervalConfig(&dDatabaseConfig, 2);

  OutstationMrzsObject_in_OutstationMrzsObject(&t, &config, &dDatabaseConfig);

  MrzsFrameSink_in_MrzsFrameSink(&mMrzsFrameSink);

  setMrzsDataMapKeys_for_AnalogSpec(&dDatabaseConfig);
  setMrzsDataMapKeys_for_BinarySpec(&dDatabaseConfig);
  setMrzsDataMapKeys_for_CounterSpec(&dDatabaseConfig);
/*
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
  Analog_in_AnalogOver2(&aAnalog, 356.0);
  tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 356, EventMode_Detect);
  Analog_in_AnalogOver2(&aAnalog, 357.0);
  tt &= Update_for_Analog_in_Database(&t.context.database_in_OContext, &aAnalog, 357, EventMode_Detect);

  Flags fFlags;
  Flags_In_FlagsOver2(&fFlags, 1);
  Binary bBinary1;
  Binary_in_BinaryOver5(&bBinary1, true, fFlags);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50000, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50001, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50002, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50003, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50004, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50005, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50006, EventMode_Detect);
  tt &= Update_for_Binary_in_Database(&t.context.database_in_OContext, &bBinary1, 50007, EventMode_Detect);

  Counter cCounter1;
  Counter_in_CounterOver2(&cCounter1, 2);
  tt &= Update_for_Counter_in_Database(&t.context.database_in_OContext, &cCounter1, 10315, EventMode_Detect);
  tt &= Update_for_Counter_in_Database(&t.context.database_in_OContext, &cCounter1, 10316, EventMode_Detect);
*/
  t.application.supportsAssignClass = true;

  EventBufferConfig etemp;
  EventBufferConfig_in_EventBufferConfigOver2(&etemp,
    2,//uint16_t maxBinaryEvents,
    0,//uint16_t maxDoubleBinaryEvents,
    2,//uint16_t maxAnalogEvents,
    2,//uint16_t maxCounterEvents,
    0,//uint16_t maxFrozenCounterEvents,
    0,//uint16_t maxBinaryOutputStatusEvents,
    0,//uint16_t maxAnalogOutputStatusEvents,
    0//uint16_t maxOctetStringEvents
    );
  config.eventBufferConfig = etemp;
//  OutstationMrzsObject_in_OutstationMrzsObject(&t, &config, &dDatabaseConfig);
  EventBuffer_in_EventBufferOver2(&(t.context.eventBuffer_in_OContext), &(config.eventBufferConfig));

  LowerLayerUp_in_OutstationMrzsObject(&t);

  std::cout<<"}***START "<<'\n';
  std::cout<<'\n';
//  std::cout<<"***boolean tt= "<<tt<<'\n';


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
