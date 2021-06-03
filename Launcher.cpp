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
    base->Log(".                   ");
    base->Log(".                   ");
    base->Log("Inicio del programa");
    
    //*********** Pagina de Login*****************************//
    //FramelessWindow winLog;
    Login* login = new Login(); 
    
    //winLog.setStyle(new DarkStyle);
    //winLog.setContent(login);
    //winLog.setFixedSize(460,635);
    //winLog.setWindowTitle("Login");
    //winLog.setWindowIcon(QIcon("images/Icono_App_Silo_2.png"));
    login->setFixedSize(440,600);
    login->setWindowTitle("Login");
    login->setWindowIcon(QIcon("images/Icono_App_Silo_2.png"));
    login->Init = App;
    QObject::connect(login, SIGNAL(ShowMainSignal()), this, SLOT(ShowMainWindow()));

    // winPrin.hide();   usar el hide asta que login sea true
   
    // revisar mariadbcpp y mariadb-connector-c
    // usar mysql_install_db para incializar la estructura de datos de mariadb, si existe pasar de largo
    // mysql.server start inicia el servidor mariadb
    // mysql -u root -p  conecta a la base de datos (poner usuario y contraseña aqui)
   /****************************  Activar Serial  ******************/
    Serial* Conecserial = new Serial;
    Conecserial->Connect_RS232();
    
    //*******************  Fondos  ****************************//
    QString icon_boletas = App + "/images/Bascula1_edit.png";
    QString icon_liqui = App + "/images/Liquidacion1_edit.png";
    QString icon_Salidas = App + "/images/Bascula1_edit.png";
    QString icon_reg = App + "/images/Registros1_edit.png";
    QString icon_produ = App + "/images/Silo1_edit.png";
    QString icon_comp = App + "/images/Compradores1_edit.png";
    QString icon_Silos = App + "/images/Silo1_edit.png";
    QString Logo_Emp = App + "/images/Logo.png";
    QString fondo = App + "/images/SorgoPlanta1.jpg";
    QString fondoApp = App + "/images/SorgoPlanta2.jpg" ;
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
        base->findChild<QLabel*>("Fondo_7")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_8")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_9")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_10")->setPixmap(logo);
        base->findChild<QLabel*>("Fondo_11")->setPixmap(logo);
    }
    
    // operadores terciarios son igual al if
    !logo.load(icon_boletas) ? base->Log("imposible cargar la imagen: " + icon_boletas) : base->findChild<QLabel*>("icon_Boletas")->setPixmap(logo);
    !logo.load(icon_liqui) ? base->Log("imposible cargar la imagen: " + icon_liqui) : base->findChild<QLabel*>("icon_Liq")->setPixmap(logo);    
    !logo.load(icon_Salidas) ? base->Log("imposible cargar la imagen: " + icon_Salidas) : base->findChild<QLabel*>("icon_Salidas")->setPixmap(logo);    
    !logo.load(icon_reg)? base->Log("imposible cargar la imagen: " + icon_reg) : base->findChild<QLabel*>("icon_Reg")->setPixmap(logo);
    !logo.load(icon_Silos) ? base->Log("imposible cargar la imagen: " + icon_Silos) : base->findChild<QLabel*>("icon_Silos")->setPixmap(logo);
    !logo.load(icon_produ) ? base->Log("imposible cargar la imagen: " + icon_produ) : base->findChild<QLabel*>("icon_Prod")->setPixmap(logo);
    !logo.load(icon_comp) ? base->Log("imposible cargar la imagen: " + icon_comp) : base->findChild<QLabel*>("icon_Comp")->setPixmap(logo);
    !logo.load(Logo_Emp) ? base->Log("imposible cargar la imagen: " + Logo_Emp) : base->findChild<QLabel*>("Nombre_Programa_Landing")->setPixmap(logo);
    !logo.load(Logo_Emp) ? base->Log("imposible cargar la imagen: " + Logo_Emp) : base->findChild<QLabel*>("Nombre_Programa")->setPixmap(logo);
    base->findChild<QLabel*>("Nombre_Programa_Landing")->setFixedSize(430,620);
    base->findChild<QLabel*>("Nombre_Programa")->setFixedSize(290,250);
    /****************  Creacion de las Bases de Datos  *************************/
   
    // usar los if para revisar que existan las bases de datos, si no crearlas
   
    base->Log("Creacion de Bases de Datos");
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setWindowTitle("Error de Base Datos");
    MBox.setDefaultButton(boton_OK);
    if (base->ChecarDB(App, base->ciclo_actual()) == false){
       // QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->ciclo_actual(), QMessageBox::Ok | QMessageBox::Cancel);
       MBox.setText("No se Pudo encontrar la base de datos: " + base->ciclo_actual());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec();
       if (MBox.clickedButton() == boton_OK){
        base->CrearDB(App, base->ciclo_actual());
        base->Log("Se creo la DB: " + base->ciclo_actual());
       }else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->CrearDB(App, base->ciclo_actual());
    }*/
        
    if (base->ChecarDB(App, base->users()) == false){
       // QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->users() ,QMessageBox::Ok);
       MBox.setText("No se Pudo encontrar la base de datos: " + base->users());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec(); 
       if (MBox.clickedButton() == boton_OK){
        base->CrearDB(App, base->users());
        base->Log("Se creo la DB: " + base->users());
       } else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->ChecarDB(App, base->users());
    }*/
    
    if (base->ChecarDB(App, base->adeudos()) == false){
        //QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->adeudos() ,QMessageBox::Ok);
       MBox.setText("No se Pudo encontrar la base de datos: " + base->adeudos());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec(); 
       if (MBox.clickedButton() == boton_OK){
        base->CrearDB(App, base->adeudos());
        base->Log("Se creo la DB: " + base->adeudos());
       } else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->ChecarDB(App, base->adeudos());
    }*/
    
    base->Contrasenas();
    base->Creditos();
    base->Ciclo(); 
    base->Dry_n_Wet();  // secado
    
   
    login->show();   //pantalla de login;
   
    base->Log("Se Muestran las pantallas");
    
}

void Launcher::ShowMainWindow(){
    //********** Muestra la pantalla Principal del sistema*****//  
    
    Silo* base = new Silo;
    
    FramelessWindow winPrin;
    winPrin.setStyle(new DarkStyle);
    winPrin.setContent(base);
    winPrin.setFixedSize(1920,1080);
    winPrin.setWindowState(Qt::WindowMaximized);
    winPrin.setWindowTitle("SAAS");
    winPrin.setWindowIcon(QIcon("images/Icono_App_Silo_1.png"));
    base->Log("Pantalla Principal");
    
    
}
Launcher::~Launcher() {
}
