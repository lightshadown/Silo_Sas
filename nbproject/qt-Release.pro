# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-MacOSX
TARGET = Sistema_Silo
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets sql
SOURCES += Login.cpp Pantalla_Principal.cpp main_Pantalla_Principal.cpp
HEADERS += /usr/local/include/mariadb++/account.hpp /usr/local/include/mariadb++/bind.hpp /usr/local/include/mariadb++/concurrency.hpp /usr/local/include/mariadb++/connection.hpp /usr/local/include/mariadb++/conversion_helper.hpp /usr/local/include/mariadb++/data.hpp /usr/local/include/mariadb++/date_time.hpp /usr/local/include/mariadb++/decimal.hpp /usr/local/include/mariadb++/exceptions.hpp /usr/local/include/mariadb++/last_error.hpp /usr/local/include/mariadb++/result_set.hpp /usr/local/include/mariadb++/save_point.hpp /usr/local/include/mariadb++/statement.hpp /usr/local/include/mariadb++/time.hpp /usr/local/include/mariadb++/time_span.hpp /usr/local/include/mariadb++/transaction.hpp /usr/local/include/mariadb++/types.hpp Login.h Pantalla_Principal.h ui_Login.h ui_Pantalla_Principal.h
FORMS += Login.ui Pantalla_Principal.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-MacOSX
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
