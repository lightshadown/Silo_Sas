# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug_MinGW53_Toolchain/MinGW_Qt_5.11.3_Toolchain-Windows
TARGET = Sistema_Silo_MinGW_Qt_5.11.3_Toolchain-Windows
VERSION = 0.1
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets sql
SOURCES += ../Qt-Frameless-Window-DarkStyle/DarkStyle.cpp ../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.cpp ../Qt-Frameless-Window-DarkStyle/framelesswindow/windowdragger.cpp Impresora.cpp Login.cpp Serial.cpp Silo_SaS.cpp main_Pantalla_Principal.cpp
HEADERS += ../../../../../MinGW/lib/gcc/mingw32/9.2.0/include/c++/filesystem ../Qt-Frameless-Window-DarkStyle/DarkStyle.h ../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.h ../Qt-Frameless-Window-DarkStyle/framelesswindow/windowdragger.h Impresora.h Login.h Serial.h Silo_SaS.h ui_Login.h "ui_Pantalla_Principal V2.2.h" ui_Pantalla_Principal_V2.1.h ui_framelesswindow.h
FORMS += ../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.ui Login.ui "Pantalla_Principal V2.1.ui" "Pantalla_Principal V2.2.ui" "Pantalla_Principal V2.3.ui"
RESOURCES += ../Qt-Frameless-Window-DarkStyle/darkstyle.qrc ../Qt-Frameless-Window-DarkStyle/framelesswindow.qrc LogoSplashScreen.qrc
TRANSLATIONS +=
OBJECTS_DIR = build/Debug_MinGW53_Toolchain/MinGW_Qt_5.11.3_Toolchain-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
