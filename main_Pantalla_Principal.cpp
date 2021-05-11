/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: StudioMac
 *
 * Created on 22 de febrero de 2020, 19:32
 */

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-copy"
#include <QApplication>
#include <QLineEdit>
#include <QObject>
#include <QMessageBox>
#include <QSqlDatabase> // crea conecciones a base de datos
#include <QSqlQuery> // hace las busquedas y agrega data a los registros
#include <QSqlError> //hacer debug sql
#include <QPixmap>
#include <QLabel>

#include "Silo_SaS.h"  // #include "Pantalla_Principal.cpp"  Cambiado a Silo_SaS.cpp
#include "Serial.h"    // Coneccion Serial a los puertos
#include "Login.h"     // Pantalla de login

//  framework DarkStyle de Jurgen-VikingGod
#include "../Qt-Frameless-Window-DarkStyle/DarkStyle.h"  // se debia agregar el DarkStyle.cpp a sources files del projecto
#include "../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.h"  // tambien se agrega el Framelesswindow.cpp al sources files

#pragma GCC diagnostic pop
  
   //extern QString ciclo_actual(){return QStringLiteral("CICLO-OI-19-20.db");}

   //extern QString users(){return QStringLiteral("Utilisateurs.db");}
 
   //extern QString adeudos(){return QStringLiteral("Dettes_OI_19-20.db");}
 

int main(int argc, char *argv[]) {
   
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon("/images/Logo.png"));
    
    Silo* base = new Silo;
    base->Log(".                   ");
    base->Log(".                   ");
    base->Log("Inicio del programa");
    
    //********** Muestra la pantalla Principal del sistema*****//  
    
    FramelessWindow winPrin;
    winPrin.setStyle(new DarkStyle);
    winPrin.setContent(base);
    winPrin.setFixedSize(1920,1080);
    winPrin.setWindowState(Qt::WindowMaximized);
    winPrin.setWindowTitle("SAAS");
    
    
    //*********** Pagina de Login*****************************//
    FramelessWindow winLog;
    Login* login = new Login;
    winLog.setStyle(new DarkStyle);
    winLog.setContent(login);
    winLog.setFixedSize(460,635);
    

    // winPrin.hide();   usar el hide asta que login sea true
   
    // revisar mariadbcpp y mariadb-connector-c
    // usar mysql_install_db para incializar la estructura de datos de mariadb, si existe pasar de largo
    // mysql.server start inicia el servidor mariadb
    // mysql -u root -p  conecta a la base de datos (poner usuario y contraseña aqui)
   /****************************  Activar Serial  ******************/
    Serial* serial = new Serial;
    serial->Connect_RS232();
    
    //*******************  Fondos  ****************************//
    QString icon_boletas = app.applicationDirPath() + "/images/Bascula1_edit.png";
    QString icon_liqui = app.applicationDirPath() + "/images/Liquidacion1_edit.png";
    QString icon_reg = app.applicationDirPath() + "/images/Registros1_edit.png";
    QString icon_adeu = app.applicationDirPath() + "/images/Adeudos1_edit.png";
    QString icon_produ = app.applicationDirPath() + "/images/Silo1_edit.png";
    QString icon_comp = app.applicationDirPath() + "/images/Compradores1_edit.png";
    QString Logo_Emp = app.applicationDirPath() + "/images/Logo.png";
    QString fondo = app.applicationDirPath() + "/images/SorgoPlanta1.jpg";
    QString fondoApp = app.applicationDirPath() + "/images/SorgoPlanta2.jpg" ;
    QPixmap logo;
    
    if (!logo.load(fondo)){
        base->Log("imposible cargar la imagen: " + fondo);
    }else{
       base->findChild<QLabel*>("SplashScreenLogo")->setPixmap(logo);    
       login->findChild<QLabel*>("LoginSplash")->setPixmap(logo);
    }
   
    if (!logo.load(fondoApp)){
        base->Log("imposible cargar la imagen: " + fondoApp);
    }else{
        base->findChild<QLabel*>("Fondo_1")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_2")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_3")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_4")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_5")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_6")->setPixmap(logo);
    }
    
    // operadores terciarios son igual al if
    !logo.load(icon_boletas) ? base->Log("imposible cargar la imagen: " + icon_boletas) : base->findChild<QLabel*>("icon_Boletas")->setPixmap(logo);
    !logo.load(icon_liqui) ? base->Log("imposible cargar la imagen: " + icon_liqui) : base->findChild<QLabel*>("icon_Liq")->setPixmap(logo);    
    !logo.load(icon_reg)? base->Log("imposible cargar la imagen: " + icon_reg) : base->findChild<QLabel*>("icon_Reg")->setPixmap(logo);
    //!logo.load(icon_adeu) ? base->Log("imposible cargar la imagen: " + icon_adeu) : base->findChild<QLabel*>("icon_Adeu")->setPixmap(logo);
    !logo.load(icon_produ) ? base->Log("imposible cargar la imagen: " + icon_produ) : base->findChild<QLabel*>("icon_Prod")->setPixmap(logo);
    !logo.load(icon_comp) ? base->Log("imposible cargar la imagen: " + icon_comp) : base->findChild<QLabel*>("icon_Comp")->setPixmap(logo);
    !logo.load(Logo_Emp) ? base->Log("imposible cargar la imagen: " + Logo_Emp) : base->findChild<QLabel*>("Nombre_Programa")->setPixmap(logo);
    
    /****************  Creacion de las Bases de Datos  *************************/
   
    // usar los if para revisar que existan las bases de datos, si no crearlas
   
    base->Log("Creacion de Bases de Datos");
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setWindowTitle("Error de Base Datos");
    MBox.setDefaultButton(boton_OK);
    
    if (base->ChecarDB(app.applicationDirPath(), base->ciclo_actual()) == false){
       // QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->ciclo_actual(), QMessageBox::Ok | QMessageBox::Cancel);
       MBox.setText("No se Pudo encontrar la base de datos: " + base->ciclo_actual());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec();
       if (MBox.clickedButton() == boton_OK){
        base->CrearDB(app.applicationDirPath(), base->ciclo_actual());
        base->Log("Se creo la DB: " + base->ciclo_actual());
       }else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->CrearDB(app.applicationDirPath(), base->ciclo_actual());
    }*/
        
    if (base->ChecarDB(app.applicationDirPath(), base->users()) == false){
       // QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->users() ,QMessageBox::Ok);
       MBox.setText("No se Pudo encontrar la base de datos: " + base->users());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec(); 
       if (MBox.clickedButton() == boton_OK){
        base->CrearDB(app.applicationDirPath(), base->users());
        base->Log("Se creo la DB: " + base->users());
       } else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->ChecarDB(app.applicationDirPath(), base->users());
    }*/
    
    if (base->ChecarDB(app.applicationDirPath(), base->adeudos()) == false){
        //QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->adeudos() ,QMessageBox::Ok);
       MBox.setText("No se Pudo encontrar la base de datos: " + base->adeudos());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec(); 
       if (MBox.clickedButton() == boton_OK){
        base->CrearDB(app.applicationDirPath(), base->adeudos());
        base->Log("Se creo la DB: " + base->adeudos());
       } else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->ChecarDB(app.applicationDirPath(), base->adeudos());
    }*/
    
    base->Contrasenas();
    base->Creditos();
    base->Ciclo();
    
    //********* Manejo del Serial y mostrar pantallas *********************//
    
    winLog.show();    //login.show()  pantalla de login;
    if(login->checkConfigFile(app.applicationDirPath()) == true){ 
       login->findChild<QPushButton*>("Aceptar")->setCheckable(true);
       login->findChild<QLineEdit*>("Serial_edit")->setVisible(false);  // pone o quita lineedit del serial
    }else{
       login->findChild<QPushButton*>("Aceptar")->setCheckable(false);
       login->findChild<QLineEdit*>("Serial_edit")->setVisible(true);  // pone o quita lineedit del serial
       login->findChild<QLabel*>("Serial_aviso")->setText("Por favor Introduzca un Serial Valido");  
       if(login->validSerial){  //si es valido el serial
           login->findChild<QPushButton*>("Aceptar")->setCheckable(true); // revisar, y hacer que el boton cambie de color
           login->findChild<QPushButton*>("Aceptar")->setStyleSheet("color:red");
           winPrin.show();    // base.show()  pantalla principal;
           //login->createConfig("");  // crea el archivo config
       }
    }
     
   
    
    
    base->Log("Se Muestran las pantallas");

    return app.exec();
}

