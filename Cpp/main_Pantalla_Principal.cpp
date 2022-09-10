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
//#include <QLineEdit>
//#include <QObject>
//#include <QMessageBox>
//#include <QSqlDatabase> // crea conecciones a base de datos
//#include <QSqlQuery> // hace las busquedas y agrega data a los registros
//#include <QSqlError> //hacer debug sql
//#include <QPixmap>
//#include <QLabel>

//#include "Silo_SaS.h"  // Pantalla_Principal.cpp Cambiado a Silo_SaS.cpp
//#include "Serial.h"    // Coneccion Serial a los puertos
//#include "Login.h"     // Pantalla de login
#include "../Headers/Launcher.h"  // base para mostrar las pantallas

//  framework DarkStyle de Jurgen-VikingGod
//#include "../Qt-Frameless-Window-DarkStyle/DarkStyle.h"  // se debia agregar el DarkStyle.cpp a sources files del projecto
//#include "../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.h"  // tambien se agrega el Framelesswindow.cpp al sources files

#pragma GCC diagnostic pop
  
   //extern QString ciclo_actual(){return QStringLiteral("CICLO-OI-19-20.db");}

   //extern QString users(){return QStringLiteral("Utilisateurs.db");}
 
   //extern QString adeudos(){return QStringLiteral("Dettes_OI_19-20.db");}
 
int main(int argc, char *argv[]) {
   
    QApplication app(argc, argv);
    //app.setWindowIcon(QIcon("/images/Logo.png"));
    app.setWindowIcon(QIcon("/images/Icono_App_Silo_1"));
    Launcher* lanch = new Launcher();
    lanch->Init(app.applicationDirPath());  //  start the app
    
    return app.exec();
}

