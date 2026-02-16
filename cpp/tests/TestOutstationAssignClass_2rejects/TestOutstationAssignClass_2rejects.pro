CONFIG	    += console 
CONFIG	    += release

TEMPLATE      = app

TARGET = TestOutstationAssignClass_2rejects

QT += widgets


HEADERS       = key_filter.h \
                MainWindow.h 

LIBS += "D:\MRZV_HOME\Xtended\dnp3\qtvirtual_dnp3\dll\libqt_dnp3.a"

include(../../../include_tests.pri)

SOURCES      += MainWindow.cpp \
                main.cpp 


DESTDIR = d:\QT_5.12\Examples\release_programs


