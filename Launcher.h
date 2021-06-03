/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Launcher.h
 * Author: Patron
 *
 * Created on 2 de junio de 2021, 14:01
 */

#ifndef _LAUNCHER_H
#define _LAUNCHER_H

#include <QLineEdit>
#include <QObject>
#include <QMessageBox>
#include <QSqlDatabase> // crea conecciones a base de datos
#include <QSqlQuery> // hace las busquedas y agrega data a los registros
#include <QSqlError> //hacer debug sql
#include <QPixmap>
#include <QLabel>

#include "ui_Launcher.h"
#include "Silo_SaS.h"
#include "Login.h"
#include "Serial.h"

//#include "framelesswindow.h"
#include "../Qt-Frameless-Window-DarkStyle/DarkStyle.h"  // se debia agregar el DarkStyle.cpp a sources files del projecto
#include "../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.h"  // tambien se agrega el Framelesswindow.cpp al sources files


class Launcher : public QWidget {
    Q_OBJECT
public:
    Launcher();
    void Init(QString);
    virtual ~Launcher();
public slots:
    void ShowMainWindow();
    
private:
    Ui::Launcher widget;
};

#endif /* _LAUNCHER_H */
