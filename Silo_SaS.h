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
#include <QHash>
#include <QVector>
#include <QDoubleValidator>
#include <QLineEdit>

#include "ui_Pantalla_Principal V2.5.h"
//#include "ui_Pantalla_Principal V2.4.h"
//#include "ui_Pantalla_Principal V2.3.h"
//#include "ui_Pantalla_Principal V2.2.h"
//#include "ui_Pantalla_Principal V2.h"
//#include "ui_Pantalla_Principal.h"

//#include "libusb.h"  // libreria para leer USB
//usar postgrest para la DB en vez de SQLITE
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
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
    void InitSilo(QString);
    void InitDb(QString);
    void Log(QString save); // dejar una sola funcion
    void LogData(QString);
    void Ciclo();
    void Contrasenas();
    void Creditos();
    void Dry_n_Wet();
    void CreateConfigFile(QString, QString);
    void CrearDB(QString, QString);
    bool ChecarDB(QString, QString);    
    void Productores_Lista();
    void Compradores_Lista();
    void PopuAdeudos();
    //void RetencionesLiquidacion();
    //void CalculoExcedentes();
    //void CalculoPrima();
    //void AdeudosSemilla();
    //void AnticiposSorgo();
    void RegistroInd();
    void RegistroGeneral();
    void RS232();
    void listaBoletasProd();
    void show_Liquidacion();
    void Popup_DrynWet_CB1();
    void Popup_DrynWet_CB2();
    void Popup_DrynWet_CB3();
    void Arrows();
    void ShowDeduc();
   
    QStringList buscarArchivos(QStringList, QString);
  
   // int Generator_UUID();
    //void AutoCompletar(); // checar luego

    QString ciclo_actual(); //  Base de Datos del Ciclo en SQLite
    QString ciclo_actual_Postgres();  // Base de Datos en PostgresSQL
    QString users(); // Base de Datos de usuarios
    QString adeudos(); // Base de Datos de los Adeudos/semillas/prestamos
    int TonsXaccion = 50;  // cambiar y usar Ton_Socio dentro de config
    
public slots:
    void About();
    void C_Ent();               // Boletas de entrada
    void C_Reg();               // Registros
    //void C_Ade();   // eliminado adeudos
    void C_Pro();               // Productores
    void C_Comp();              // Compradores
    void C_Liq();               // Liquidaciones
    void C_Opc();               // opciones del Programa
    void Salidas();             // Boletas de Salidas
    void Silos();               //  Silos
    void C_HumySec1();          //  Primera ventana de tablas Humedad y secado
    void C_HumySec2();          //  Segunda ventana tablas
    void TablasDeduc1();        // llena los valores de las tablas de secado
    void TablasDeduc2();
    void TablasDeduc3();
    void Salir();                // exit program
    void Boleta_New();           // crea una nueva boleta
    void Productor_New();        // crea un nuevo productor
    void Productor_Erase();      //  borra el registro de Productor
    void Produ_Limpiar();        // limpia los campos en productor
    void Comprador_New();        //  Crea un registro en los compradores
    void Comprador_Limpiar();    // limpia los campos en comprador
    void Comprador_Borrar();     // borra el registro del comprador
    void RegIndProd(QString);    // comboBox de los productores
    void TablaRegInd(QString);   // Registro Individual, Muestra las boletas de cada Productor de forma individual
    void TablaRegGen(QString);   // Registro general, muestra el total de todas las boletas X productor
    void NumProdu(QString);
    void mostrar_Produc(int, int);          // carga la informacion de los productores y la muestra
    void mostrar_Compra(int, int);          //  Muestra la informacion de cada Comprador y la muestra
    void Liquidaciones_Data(QString);       // Recuadro Boletas dentro de Liquidacion
    void Liquidaciones(int, int);           // Muestra la info de la boleta dentro de Liquidaciones
    void AdeudosProdu(QString ComboBox);    // Manejo de Adeudos, se agregara en otra actualizacion
    void Imp_Liquida();                     // prints liquidacines
    void Imp_Salidas();                     // prints Boletas Salidas
    void CheckBrutoTara();
    //virtual void closeEvent(QCloseEvent *event) override;  // old exit program
   
    
   // virtual void mousePressEvent(QMouseEvent *evento) override;  // el evento del click es llamado por la misma aplicacion Qt

private:
    Ui::Pantalla_Principal widget_PP;
 
};
#endif /* _PANTALLA_PRINCIPAL_H */
