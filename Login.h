/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Login.h
 * Author: StudioMac
 *
 * Created on 9 de marzo de 2020, 10:32
 */

#ifndef _EMBARQUES_H
#define _EMBARQUES_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-copy"
#include <QObject>
#include <QString>
#include <QStringList>
#include "ui_Login.h"
#include <fstream>  // hacer stream para escribir en un archivo
#include <windows.h> // funciones de windows, funciones para abrir y cerrar directorios 
#include <ctime>
#include <QByteArray>
#include <Iphlpapi.h>  //  pip adapter, for mac address
#include <Assert.h>
#include <QDirIterator>
#pragma GCC diagnostic pop

class Login : public QWidget {
    Q_OBJECT
public:
    Login();
    virtual ~Login();
    QString CheckSerial(QString Cb);
    bool SortMAC(const QStringList &sort);
    QStringList getMacAddress();
    bool checkConfigFile(QString);
    void createConfig(QString MAC);
    
    bool validSerial = false; 
    //bool fileConfig = false;
    
public slots:
    void Check();
    
private:
    Ui::Embarques widget_Login;
};

#endif /* _EMBARQUES_H */
