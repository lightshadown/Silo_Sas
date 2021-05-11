/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pantalla_Principal.h
 * Author: StudioMac
 *
 * Created on 22 de febrero de 2020, 20:08
 */

#ifndef _PANTALLA_PRINCIPAL_H
#define _PANTALLA_PRINCIPAL_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-copy"
#include <QObject>
#include <QSqlQuery>
#include <QString>
#include <QWidget> // usar el widget
#include <QLabel> // usar label
#include <QObject>
#include <QString>
#include <QDebug> // hacer debug
#include <QSqlError> //hacer debug sql
#include <QSqlDatabase> // crea conecciones a base de datos
#include <QTableWidget>
#include <QSqlTableModel> // tabla de una sola columna
#include <QSqlRelationalTableModel> // tablas de varias columnas
#include <QSqlQuery> // hace las busquedas y agrega data a los registros
#include <QMessageBox> // crea los mensajes de advertencia
#include <QEvent>
#include <QCloseEvent>
#include <Qdir>
#include <QDirIterator>
#include <QPushButton>

#include "ui_Pantalla_Principal V2.3.h"
#include "ui_Pantalla_Principal V2.2.h"
//#include "ui_Pantalla_Principal V2.h"
//#include "ui_Pantalla_Principal.h"

//#include "libusb.h"  // libreria para leer USB
//usar postgrest para la DB en vez de SQLITE
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>  // hacer stream para escribir en un archivo
#include <windows.h> // funciones de windows, funciones para abrir y cerrar directorios 
#include <ctime>
#include <QByteArray>
#include <Iphlpapi.h>
#include <Assert.h>

// usar una contrasena simple, getMacAddress() + serial

#pragma GCC diagnostic pop

QString ciclo_actual();
QString users();
QString adeudos();

class Silo : public QMainWindow {
    Q_OBJECT

public:
    Silo();
    virtual ~Silo();
    //void Log(QString, QString, QString /* std::vector<QString> */); // modificar para usar un vector<QString> y facilitar el asunto
    void Log(QString save); // dejar una sola funcion
    void LogData(QString);
    void Ciclo();
    void Contrasenas();
    void Creditos();
    void CrearDB(QString, QString);
    bool ChecarDB(QString, QString);    
    void Productores_Lista();
    void Compradores_Lista();
    void PopuAdeudos();
    void RetencionesLiquidacion();
    void CalculoExcedentes();
    void CalculoPrima();
    void AdeudosSemilla();
    void AnticiposSorgo();
    void RegistroInd();
    void RegistroGeneral();
    void RS232();
    void listaBoletasProd();
    void show_Liquidacion();
    
   
    QStringList buscarArchivos(QStringList, QString);
  
   // int Generator_UUID();
    //void AutoCompletar(); // checar luego

    QString ciclo_actual(); //  Base de Datos del Ciclo en SQLite
    QString ciclo_actual_Postgres();  // Base de Datos en PostgresSQL
    QString users(); // Base de Datos de usuarios
    QString adeudos(); // Base de Datos de los Adeudos/semillas/prestamos
    int TonsXaccion = 50;
    
public slots:
    void About();
    void C_Ent();
    void C_Reg();
    void C_Ade();
    void C_Pro();
    void C_Comp();
    void C_Liq();
    void Salir();
    void Productor();
    void Productor_New();
    void Comprador_New();
    void RegIndProd(QString);
    void TablaRegInd(QString);
    void TablaRegGen(QString);
    void NumProdu(QString);
    void mostrar_Produc(int, int);
    void mostrar_Compra(int, int);
    void Liquidaciones(QString);
    void Liquidaciones_Data(int, int);
    void AdeudosProdu(QString ComboBox);
    void Impresion();
    virtual void closeEvent(QCloseEvent *event) override;
    
   // virtual void mousePressEvent(QMouseEvent *evento) override;  // el evento del click es llamado por la misma aplicacion Qt

private:
    Ui::Pantalla_Principal widget_PP;
   // void closeEvent(QCloseEvent*);
};
#endif /* _PANTALLA_PRINCIPAL_H */