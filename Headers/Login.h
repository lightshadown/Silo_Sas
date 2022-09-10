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
#include <QApplication>
#include <QMessageBox>
#include <QObject>
#include <QString>
#include <QStringList>

#include <fstream>  // hacer stream para escribir en un archivo
#include <windows.h> // funciones de windows, funciones para abrir y cerrar directorios 
#include <ctime>
#include <QByteArray>
#include <Iphlpapi.h>  //  pip adapter, for mac address
#include <Assert.h>
#include <QDirIterator>

//#include "ui_Login.h"
#include "ui_Login V0.2.h"
#pragma GCC diagnostic pop

class Login : public QWidget {
    Q_OBJECT
public:
    Login();  //(QString, QApplication);
    virtual ~Login();
    bool SortMAC(const QStringList &sort, QString);   // check if the given Mac Address its the same as the Mac stored in Config
    QStringList getMacAddress();                 // get the macaddres
    bool checkConfigFile(QString);               // check if config file exist or not
    QString CheckSerial(QString Cb);             //takes the mac addres and converts it from Hexa to Decimal
    void CheckLogin();                           // check if the config file exist and the serial is correct
    QString InitApp;                             // here i pass the apps location
    void CreateConfigFile(QString , QString );   // Creates Config File
    
signals:
    void ShowMainSignal(QString);     // tells login when to show the main window
public slots:
    void Check_Enter(); //(QString, QApplication);   // checks if the given serial is valid or not
    void BotonAceptar();               // just the ok Button
     
private:
    Ui::Embarques widget_Login;
};

#endif /* _EMBARQUES_H */
