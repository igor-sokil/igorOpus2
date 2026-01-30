CONFIG	    += console 
CONFIG	    += release

TEMPLATE      = app

TARGET = TestOutstation_14WriteTimeDateLAN

QT += widgets


LIBS += "D:\MRZV_HOME\Xtended\dnp3\qtvirtual_dnp3\dll\libqt_dnp3.a"

include(../../../include_tests.pri)

SOURCES      += MainWindow.cpp \
                main.cpp 

HEADERS       = key_filter.h \
                MainWindow.h 


DESTDIR = d:\QT_5.12\Examples\release_programs


