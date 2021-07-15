/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/*
 * File:   Launcher.cpp
 * Author: Patron
 *
 * Created on 2 de junio de 2021, 14:01
 */

#include "Launcher.h"

Launcher::Launcher() {
    widget.setupUi(this);
    
}
void Launcher::Init(QString App){

    Silo* base = new Silo;
    //Silo base;
    base->Log("....                 \n..........               \nInicio del programa");
    
    //*********** Login Screen ******************//
  
    Login* login = new Login(); 
    login->InitApp = App;
    QObject::connect(login, SIGNAL(ShowMainSignal(QString)), this, SLOT(ShowMainWindow(QString)));
    
    login->setFixedSize(440,600);
    login->setWindowTitle("Login");
    login->setWindowIcon(QIcon("images/Icono_App_Silo_2.png"));
    login->CheckLogin();  // check if the config file exist
    login->show();        //login screen
    
    //Serial* Conecserial = new Serial;    // coneccion a bascula, *pendiente
    //Conecserial->Connect_RS232();

    //base->Log("Ok");      // indica que todo salio bien
    
}

void Launcher::ShowMainWindow(QString App){
    //********** Muestra la pantalla Principal del sistema*****//  
    
    Silo *base = new Silo();
    
    base->setMinimumSize(1280, 800);
    base->setFixedSize(1920,1080);
    //base->setWindowState(Qt::WindowMaximized);
    base->setWindowTitle("SAAS");
    base->setWindowIcon(QIcon("images/Icono_App_Silo_1.png"));
    //FramelessWindow winPrin;
    //winPrin.setStyle(new DarkStyle);
    //winPrin.setContent(base);
    //winPrin.setFixedSize(1920,1080);
    //winPrin.setWindowState(Qt::WindowMaximized);
    //winPrin.setWindowTitle("SAAS");
    //winPrin.setWindowIcon(QIcon("images/Icono_App_Silo_1.png"));
    
    base->Log("Pantalla Principal");
    base->InitSilo(App);  // inicialized the Main Screen, pantalla princiapal
    base->InitDb(App);    // initialized the database
    //winPrin.show();
    base->show();
    
}
Launcher::~Launcher() {
}
