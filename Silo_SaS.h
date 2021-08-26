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
#include <QStringList>
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
#include <QDoubleValidator>   // Validadores de float
#include <QIntValidator>      // validadores de Int
//#include <QRegularExpressionValidator>    //<QRegExpValidator>   // validadores de Expresiones regulares (RegExp)    cambiar por QRegularExpressionValidator   Qt6
#include <QLineEdit>
#include <QColor>

#include "ui_Pantalla_Principal V2.6.h"
//#include "ui_Pantalla_Principal V2.5.h"
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
//#include <sstream>   // checar con sstream    basic_stringstream
//#include <basic_stringstream>
#include <iomanip>
#include <cmath>
#include <fstream>  // hacer stream para escribir en un archivo
#include <windows.h> // funciones de windows, funciones para abrir y cerrar directorios 
#include <ctime>
#include <QByteArray>
#include <Iphlpapi.h>
#include <Assert.h>
#include <vector>
#include <chrono>
//#include <map>

// usar una contrasena simple, getMacAddress() + serial

#pragma GCC diagnostic pop

QString ciclo_actual();
QString users();
QString adeudos();
struct Data {

        QString Nombre, Procedencia,Vehiculo, Placas, Chofer, Fecha ;
        QString Folio, Total, TotalSecado;
        QString Humedad, KilosxTon, Deduc, Merma, DeducTotal;
        QString Bruto, Tara, Neto, Analizado, PrecioTon;
        QString Secado, SecadoIva, Cuota_Conserv, Sanidad;
    };


class Silo : public QMainWindow {
    Q_OBJECT

public:
    Silo();
    virtual ~Silo();                        // main wrapper
    void InitSilo(QString);                 // initiated the main window
    void InitDb(QString);                   // initiated all the databases
    void Log(QString save);                 // program log
    void LogData(QString);                  // crates a log for the inserted data
    void Ciclo();                           // manage currten cicle
    void Contrasenas();                     // users
    void Creditos();                        // credits
    void Dry_n_Wet();                       // dry and wet tables
    //void CreateConfigFile(QString, QString);   //creates de config file
    void CrearDB(QString, QString);      // creates and open the database
    void KillDB();//(QString);                // kills the open conecction
    bool ChecarDB(QString, QString);     // checks if the database exists
    void Tabla_Boletas_Entradas();          // populates the table with the last inserted records, boletas entradas
    void Tabla_Boletas_Salidas();           // populates the table with the last inserted records, boletas salidas
    void Productores_Lista();
    void Compradores_Lista();
    void PopuAdeudos();
    void Reg_Individual_CB_Ciclo();
    void RegistroGeneral_CB();
    void RS232();
    void Entradas_CB_Productor();        // populates the CB Productor in Entradas
    void Salidas_CB_Comprador();         // populates the CB Razon Social in Salidas
    void Liquidaciones_CB_Comp();
    void Liquidaciones_CB_Prod();
    std::vector<float> Analizado(float , float);     // manejo del grano analizado
    std::vector<float> Hmd (float, std::wstring);    // manejo de la humedad
    //void Liquidaciones_Show_Comp();
    void Popup_DrynWet_CB1();
    void Popup_DrynWet_CB2();
    void Popup_DrynWet_CB3();
    void Arrows();
    void ShowDeduc();
    void ShowDeduc_Tarifa();
    void Options_Init();                     // set disable all the Qlineedits by default
    void Opt_Sanidad_Load();
    void Opt_Grano_Load();
    void Opt_Modulo_Load();
    void Validadores_Boletas_New();         // validadores tipo de caracteres
    void Validadores_Boletas_Salidas();
    void Validadores_Productores();
    void Validadores_Compradores();
    void Validadores_Opciones();
    float comprador_Precio();
    void setColortoRow(int,int,QColor);
    void Usuarios_Load_Borrar();
    void RevisarDiasRestantes();
   
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
    void C_Ent();                           // Boletas de entrada
    void C_Reg_Ind();               // Registros
    void C_Reg_Gen();
    //void C_Ade();   // eliminado adeudos
    void C_Pro();               // Productores
    void C_Comp();              // Compradores
    void C_Liq();               // Liquidaciones
    void C_Opc();                           // opciones del Programa
    void Salidas();                         // Boletas de Salidas
    void Silos();                           //  Silos
    void C_HumySec1();                      //  Primera ventana de tablas Humedad y secado
    void C_HumySec2();                      //  Segunda ventana tablas
    void TablasDeduc1();                    // llena los valores de las tablas de secado
    void TablasDeduc2();
    void TablasDeduc3();
    void Salir();                           // exit program
    void Entradas_Boleta_New();             //  creates a new boleta for new truck
    void Entradas_Boletas_Borrar();         //  erase the current boleta
    void Entradas_Boletas_Update();         //  Update the current record
    void Entradas_Boletas_Limpiar();        //  erase the current fields
    void Boleta_Salidas_New();              //  creates a new boleta for exit truck
    void Salidas_Boletas_Update();
    void Salidas_Boletas_Borrar();
    void Salidas_Boletas_Limpiar();         //  clear all the field in Boletas Entradas new
    void Productor_New();                   // crea un nuevo productor
    void Productor_Erase();                 //  borra el registro de Productor
    void Produ_Limpiar();                   // limpia los campos en productor
    void Comprador_New();                   //  Crea un registro en los compradores
    void Comprador_Limpiar();               // limpia los campos en comprador
    void Comprador_Borrar();                // borra el registro del comprador
    void Reg_Individual_CB_Prod(QString);               // comboBox de los productores
    void Tabla_Reg_Individual(QString);              // Registro Individual, Muestra las boletas de cada Productor de forma individual
    void Tabla_Reg_Generales(QString);              // Registro general, muestra el total de todas las boletas X productor
    void Entradas_NumProdu(QString);        // Set the number of Productor in Boletas Entradas
    void Salidas_NumComprador(QString);         // Set the number of Productor in Boletas Salidas
    void mostrar_Produc(int, int);          // carga la informacion de los productores y la muestra
    void mostrar_Compra(int, int);          //  Muestra la informacion de cada Comprador y la muestra
    void Liquidaciones_Data(QString);       // Recuadro Boletas dentro de Liquidacion
    void Liquidaciones(int, int);           // Muestra la info de la boleta dentro de Liquidaciones
    
    //void AdeudosProdu(QString ComboBox);    // Manejo de Adeudos, se agregara en otra actualizacion
    void Imp_Liquida();                     // prints liquidacines
    void Imp_Salidas();                     // prints Boletas Salidas
    void Entradas_CheckBrutoTara();
    void CheckBrutoTara_Salida();
    void Usuarios_set(int);
    void Usuarios_New();
    void Usuarios_Borrar(int);
    void Cuotas_Sanidad(int);
    void Cuotas_Modulo(int);
    void Cuotas_Grano(int);
    void Opt_Sanidad();
    void Opt_Grano();
    void Opt_Modulo();
    void Opt_TonsSocios();
    void Actualizacion(int);
    
    //virtual void closeEvent(QCloseEvent *event) override;  // old exit program
   
    
   // virtual void mousePressEvent(QMouseEvent *evento) override;  // el evento del click es llamado por la misma aplicacion Qt

private:
    Ui::Pantalla_Principal widget_PP;
 
};
#endif /* _PANTALLA_PRINCIPAL_H */
