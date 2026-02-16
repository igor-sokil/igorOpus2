CONFIG	    += console 
CONFIG	    += release

TEMPLATE      = app

TARGET = TestAPDUParsing_3BodyCRCError

QT += widgets


INCLUDEPATH  += Mrzs_cpp
INCLUDEPATH  += Mrzs_cpp/exe4cpp

HEADERS       = key_filter.h \
                MainWindow.h 

LIBS += "D:\MRZV_HOME\Xtended\dnp3\qtvirtual_dnp3\dll\libqt_dnp3.a"

include(../../../include_tests.pri)

SOURCES      += MainWindow.cpp \
                main.cpp \
                Mrzs_cpp/LinkParserMrzs.cpp \
                Mrzs_cpp/MrzsFrameSink.cpp \
                Mrzs_cpp/MrzsCommandHandler.cpp \
                Mrzs_cpp/MrzsLowerLayer.cpp \
                Mrzs_cpp/MrzsOutstationApplication.cpp \
                Mrzs_cpp/OutstationMrzsObject.cpp \
                Mrzs_cpp/TransportLayerMrzs.cpp \
                Mrzs_cpp/exe4cpp/IExecutorExe4cpp.cpp \
                Mrzs_cpp/exe4cpp/ISteadyTimeSourceExe4cpp.cpp \
                Mrzs_cpp/exe4cpp/ITimer.cpp \
                Mrzs_cpp/exe4cpp/MrzsExecutorExe4cpp.cpp \
                Mrzs_cpp/exe4cpp/TimerExe4cpp.cpp \


DESTDIR = d:\QT_5.12\Examples\release_programs


