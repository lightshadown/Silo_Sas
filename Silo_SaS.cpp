/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Pantalla_Principal.cpp
 * Author: StudioMac
 *
 * Created on 22 de febrero de 2020, 20:08
 */

#include "Silo_SaS.h"   // contiene todas las librerias por usar
//#include "ui_Pantalla_Principal V2.2.h"
//#include "ui_Pantalla_Principal V2.h"
//#include "ui_Pantalla_Principal.h"
//#include "framelesswindow.h"
#include "Impresora.h"
#include "Serial.h"
//#include "ui_Pantalla_Principal V2.6.h"
//#include "ui_Pantalla_Principal V2.5.h"
#include "Login.h"
//#include "ui_Pantalla_Principal V2.4.h"
//#include "filesystem"  // hace la busqueda de archivos mas facil, c++ 17

   //**************  se usan en ciclo_actual() ********//
    //static constexpr int DAY_OFFSET = 0;
    //static constexpr int DAY_LENGTH = 3;

    static constexpr int MONTH_OFFSET = 4;
    static constexpr int MONTH_LENGTH = 3;

    static constexpr int DAY_NUMBER_OFFSET = 8;
    static constexpr int DAY_NUMBER_LENGTH = 2;

    static constexpr int HOUR_OFFSET = 11;
    static constexpr int HOUR_LENGTH = 8;

    static constexpr int YEAR_OFFSET = 20;
    static constexpr int YEAR_LENGTH = 4;
    // ***********************************************//

Silo::Silo() {
    widget_PP.setupUi(this);

    // Conecciones
    //************ Botonera Principal *********//
    
    QObject::connect(widget_PP.push_Boletas, SIGNAL(clicked()), this, SLOT(C_Ent()));                // boletas
    QObject::connect(widget_PP.push_Registros, SIGNAL(clicked()), this, SLOT(C_Reg_Ind()));              //  Registros
    //QObject::connect(widget_PP.push_Adeudos, SIGNAL(clicked()), this, SLOT(C_Ade()));              // Adeudos, eliminado no debe usarse
    QObject::connect(widget_PP.push_Productores, SIGNAL(clicked()), this, SLOT(C_Pro()));            //productores
    QObject::connect(widget_PP.push_Compradores, SIGNAL(clicked()), this, SLOT(C_Comp()));           // Compradores
    QObject::connect(widget_PP.push_Liquidacion, SIGNAL(clicked()), this, SLOT(C_Liq()));            //Liquidaciones
    QObject::connect(widget_PP.push_Silos, SIGNAL(clicked()), this, SLOT(Silos()));                  // Silos
    QObject::connect(widget_PP.push_Salidas, SIGNAL(clicked()), this, SLOT(Salidas()));              // Salidas
    
    //************* Botones ***************************//
    
    QObject::connect(widget_PP.push_Entradas_Nuevo, SIGNAL(clicked()), this, SLOT(Entradas_Boleta_New()));           // nueva boleta de entradas 
    QObject::connect(widget_PP.push_Salidas_Nuevo, SIGNAL(clicked()), this, SLOT(Boleta_Salidas_New()));             // nueva boleta de salidas
    QObject::connect(widget_PP.push_Salidas_Limpiar, SIGNAL(clicked()), this, SLOT(Salidas_Boletas_Limpiar()));               //  limpia los campos de boleta Salidas   Salidas_Limpiar
    QObject::connect(widget_PP.push_NextTable, SIGNAL(clicked()), this, SLOT(C_HumySec2()));                         // Menu Humedad y secado 2, boton
    QObject::connect(widget_PP.push_BeforeTable, SIGNAL(clicked()), this, SLOT(C_HumySec1()));                       // Menu Humedad y secado 1, boton
    QObject::connect(widget_PP.Prod_Limpiar, SIGNAL(clicked()), this, SLOT(Produ_Limpiar()));                        //  limpia los campos de productor
    QObject::connect(widget_PP.Prod_Borrar, SIGNAL(clicked()), this, SLOT(Productor_Erase()));                       //  borra el registro del productor
    QObject::connect(widget_PP.Prod_Guardar, SIGNAL(clicked()), this, SLOT(Productor_New()));                        // nuevo productor
    QObject::connect(widget_PP.Comp_Limpiar, SIGNAL(clicked()), this, SLOT(Comprador_Limpiar()));                    //  limpia los campos de comprador
    QObject::connect(widget_PP.Comp_Borrar, SIGNAL(clicked()), this, SLOT(Comprador_Borrar()));                      // delete the user comprador
    QObject::connect(widget_PP.Comp_Guardar, SIGNAL(clicked()), this, SLOT(Comprador_New()));                        // Creates new user comprador
    QObject::connect(widget_PP.push_Entrada_Borrar, SIGNAL(clicked()), this, SLOT(Entradas_Boletas_Borrar()));       // Entradas_Boletas_Borrar()
    QObject::connect(widget_PP.push_Salidas_Borrar, SIGNAL(clicked()), this, SLOT(Salidas_Boletas_Borrar()));       //  Salidas_Boletas_Borrar
    QObject::connect(widget_PP.User_Add_Push, SIGNAL(clicked()), this, SLOT(Usuarios_New()));        //  Usuarios_New()
    // ************* ComboBox  y Checkbox **************************//
   
    QObject::connect(widget_PP.RegInd_Ciclo_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Reg_Individual_CB_Prod(QString)));           // Registros Individual 
    QObject::connect(widget_PP.RegInd_Prod_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Tabla_Reg_Individual(QString)));              // Registros Individual 
    QObject::connect(widget_PP.RegGen_Ciclo_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Tabla_Reg_Generales(QString)));              // Registros Generales 
    QObject::connect(widget_PP.Liq_Prod_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Liquidaciones_Data(QString)));                   // Liquidaciones
    //QObject::connect(widget_PP.Prod_sal_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(AdeudosProdu(QString)));  // Adeudos  -- Borrado
    QObject::connect(widget_PP.Prod_ComboBox, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Entradas_NumProdu(QString)));                  //  Num Productor Entradas
    QObject::connect(widget_PP.Salida_Razon_Social_edit, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Salidas_NumComprador(QString)));    //  Num Comprador Salidas
    QObject::connect(widget_PP.Cuotas_Sanidad, SIGNAL(stateChanged(int)), this, SLOT(Cuotas_Sanidad(int)));                                         //  Num Comprador Salidas
    QObject::connect(widget_PP.Cuotas_Grano, SIGNAL(stateChanged(int)), this, SLOT(Cuotas_Grano(int)));                                             //  Num Comprador Salidas
    QObject::connect(widget_PP.Cuotas_Modulo, SIGNAL(stateChanged(int)), this, SLOT(Cuotas_Modulo(int)));                                           //  Num Comprador Salidas
    QObject::connect(widget_PP.User_Add, SIGNAL(stateChanged(int)), this, SLOT(Usuarios(int)));                                                     //  Usuarios(int)
    QObject::connect(widget_PP.User_Del, SIGNAL(stateChanged(int)), this, SLOT(Usuarios_Borrar(int)));                                              //  Usuarios_Borrar(int)
    QObject::connect(widget_PP.Actual, SIGNAL(stateChanged(int)), this, SLOT(Actualizacion(int)));                                                  //  Actualizacion(int)
    
    // ******************* Senales de enter *****************************//
    
    QObject::connect(widget_PP.Liq_Boletas_Lista, SIGNAL(cellClicked(int,int)), this, SLOT(Liquidaciones(int, int)));            // Liquidaciones Data
    QObject::connect(widget_PP.Productores_Lista, SIGNAL(cellClicked(int,int)), this, SLOT(mostrar_Produc(int, int)));           // Productores
    QObject::connect(widget_PP.Compradores_Lista, SIGNAL(cellClicked(int,int)), this, SLOT(mostrar_Compra(int, int)));           // Compradores 
    QObject::connect(widget_PP.HumSec_CB1_edit, SIGNAL(returnPressed()), this, SLOT(TablasDeduc1()));                            // senal de enter al introducir el valor para las tablas de secado
    QObject::connect(widget_PP.HumSec_CB2_edit, SIGNAL(returnPressed()), this, SLOT(TablasDeduc2()));                            // senal de enter al introducir el valor para las tablas de secado
    QObject::connect(widget_PP.HumSec_CB3_edit, SIGNAL(returnPressed()), this, SLOT(TablasDeduc3()));                            // senal de enter al introducir el valor para las tablas de secado    
    QObject::connect(widget_PP.Peso_Tara_edit, SIGNAL(returnPressed()), this, SLOT(Entradas_CheckBrutoTara()));                  // senal de enter de tara  
    QObject::connect(widget_PP.Salidas_Tara_edit, SIGNAL(returnPressed()), this, SLOT(CheckBrutoTara_Salida()));                 // senal de enter de tara    CheckBrutoTara_Salida
    QObject::connect(widget_PP.Cuotas_Sanidad_edit, SIGNAL(returnPressed()), this, SLOT(Opt_Sanidad()));                         //  Opt_Sanidad()
    QObject::connect(widget_PP.Cuotas_Grano_edit, SIGNAL(returnPressed()), this, SLOT(Opt_Grano()));                             //  Opt_Grano()
    QObject::connect(widget_PP.Cuotas_Modulo_edit, SIGNAL(returnPressed()), this, SLOT(Opt_Modulo()));                           //  Opt_Modulo()
    QObject::connect(widget_PP.Socios_TonsxSocio_edit, SIGNAL(returnPressed()), this, SLOT(Opt_TonsSocios()));                   // Opt_TonsSocios()
    
    
    //************* Menu ************//
    
    QObject::connect(widget_PP.About, SIGNAL(triggered()), this, SLOT(Ventana_About()));
    QObject::connect(widget_PP.actionAcerda_de, SIGNAL(triggered()), this, SLOT(About()));                // Menu About
    QObject::connect(widget_PP.actionOpciones, SIGNAL(triggered()), this, SLOT(C_Opc()));                 // Menu Opciones
    QObject::connect(widget_PP.actionHumedad_y_secado, SIGNAL(triggered()), this, SLOT(C_HumySec1()));    // Menu Humedad y secado 1
    QObject::connect(widget_PP.actionSalir, SIGNAL(triggered()), this, SLOT(Salir()));                    //closeEvent()));  // cerrar programa
    QObject::connect(widget_PP.actionEntradas, SIGNAL(triggered()), this, SLOT(C_Ent()));                 // Menu Boletas
    QObject::connect(widget_PP.actionIndividuales, SIGNAL(triggered()), this, SLOT(C_Reg_Ind()));             // Menu Registros
    QObject::connect(widget_PP.actionGenerales, SIGNAL(triggered()), this, SLOT(C_Reg_Gen()) );  // Menu Registros Generales
    QObject::connect(widget_PP.actionProductores, SIGNAL(triggered()), this, SLOT(C_Pro()));              // Menu Productores
    QObject::connect(widget_PP.actionCompradores, SIGNAL(triggered()), this, SLOT(C_Comp()));             // Menu Compradores
    QObject::connect(widget_PP.actionSalidas, SIGNAL(triggered()), this, SLOT(C_Liq()));                  // Menu Liquidaciones
    
    //*********** Impresion **********//
    
    QObject::connect(widget_PP.Liq_Liquidacion, SIGNAL(clicked()),this, SLOT(Imp_Liquida()));   // impresion de liquidaciones
    //QObject::connect(widget_PP, SIGNAL(clicked()), this, SLOT(Imp_Salidas()));              // cambiar impresion de boletas de salidas
    
}

Silo::~Silo() {  //Destructor de Clase
}

void Silo::InitSilo(QString App){
    
    //*******************  Fondos  ****************************//
    QString icon_boletas = App + "/images/Bascula1_edit.png";
    QString icon_liqui = App + "/images/Liquidacion1_edit.png";
    QString icon_Salidas = App + "/images/Bascula2_edit.png";
    QString icon_reg = App + "/images/Registros1_edit.png";
    QString icon_produ = App + "/images/Silo1_edit.png";
    QString icon_comp = App + "/images/Compradores1_edit.png";
    QString icon_Silos = App + "/images/Silo1_edit.png";
    QString Logo_Emp = App + "/images/Logo.png";
    QString fondo = App + "/images/SorgoPlanta1.jpg";
    QString fondoApp = App + "/images/SorgoPlanta2.jpg";
    QString icon_arrow = App + "/images/Arrow_Right.png";
    QString silo = App + "/images/Silo_Volumen_1.png";
    QPixmap logo;
    
    if (!logo.load(fondo)){
        Log("imposible cargar la imagen: " + fondo);
    }else{
       widget_PP.SplashScreenLogo->setPixmap(logo);    
      //  login->findChild<QLabel*>("LoginSplash")->setPixmap(logo);
    }
   
    if (!logo.load(fondoApp)){
        Log("imposible cargar la imagen: " + fondoApp);
    }else{
        widget_PP.Fondo_1->setPixmap(logo);
        widget_PP.Fondo_2->setPixmap(logo);
        widget_PP.Fondo_3->setPixmap(logo);
        widget_PP.Fondo_4->setPixmap(logo);
        widget_PP.Fondo_5->setPixmap(logo); 
        widget_PP.Fondo_6->setPixmap(logo);
        widget_PP.Fondo_7->setPixmap(logo); 
        widget_PP.Fondo_8->setPixmap(logo);
        widget_PP.Fondo_9->setPixmap(logo);
        widget_PP.Fondo_10->setPixmap(logo); 
        widget_PP.Fondo_11->setPixmap(logo);
    }
    
    // Load icons
    !logo.load(icon_boletas) ? Log("imposible cargar la imagen: " + icon_boletas) : widget_PP.icon_Boletas->setPixmap(logo);
    !logo.load(icon_liqui) ? Log("imposible cargar la imagen: " + icon_liqui) : widget_PP.icon_Liq->setPixmap(logo); 
    !logo.load(icon_Salidas) ? Log("imposible cargar la imagen: " + icon_Salidas) : widget_PP.icon_Salidas->setPixmap(logo); 
    !logo.load(icon_reg)? Log("imposible cargar la imagen: " + icon_reg) : widget_PP.icon_Reg->setPixmap(logo);
    !logo.load(icon_Silos) ? Log("imposible cargar la imagen: " + icon_Silos) : widget_PP.icon_Silos->setPixmap(logo);
    !logo.load(icon_produ) ? Log("imposible cargar la imagen: " + icon_produ) : widget_PP.icon_Prod->setPixmap(logo); 
    !logo.load(icon_comp) ? Log("imposible cargar la imagen: " + icon_comp) : widget_PP.icon_Comp->setPixmap(logo);
    !logo.load(Logo_Emp) ? Log("imposible cargar la imagen: " + Logo_Emp) : widget_PP.Nombre_Programa_Landing->setPixmap(logo);
    !logo.load(Logo_Emp) ? Log("imposible cargar la imagen: " + Logo_Emp) : widget_PP.Nombre_Programa->setPixmap(logo); 
    !logo.load(silo) ? Log("imposible cargar la imagen: " + silo) : widget_PP.Silo_Total_1->setPixmap(logo);
    !logo.load(silo) ? Log("imposible cargar la imagen: " + silo) : widget_PP.Silo_Total_2->setPixmap(logo);
    
    //widget_PP.Nombre_Programa_Landing->setFixedSize(430,620);
    widget_PP.Nombre_Programa->setFixedSize(290,250); 
    
    // icon Arrow
    if(!logo.load(icon_arrow)){
        Log("imposible cargar la imagen: " + Logo_Emp);
    }else{
        // Assing the png
        widget_PP.icon_Arrow_1->setPixmap(logo);
        widget_PP.icon_Arrow_2->setPixmap(logo);
        widget_PP.icon_Arrow_3->setPixmap(logo);
        widget_PP.icon_Arrow_4->setPixmap(logo);
        widget_PP.icon_Arrow_5->setPixmap(logo);
        widget_PP.icon_Arrow_6->setPixmap(logo);
        widget_PP.icon_Arrow_7->setPixmap(logo);
        widget_PP.icon_Arrow_8->setPixmap(logo);
        widget_PP.icon_Arrow_9->setPixmap(logo);
        // hide the arrows
        widget_PP.icon_Arrow_1->setVisible(false);
        widget_PP.icon_Arrow_2->setVisible(false);
        widget_PP.icon_Arrow_3->setVisible(false);
        widget_PP.icon_Arrow_4->setVisible(false);
        widget_PP.icon_Arrow_5->setVisible(false);
        widget_PP.icon_Arrow_6->setVisible(false);
        widget_PP.icon_Arrow_7->setVisible(false);
        widget_PP.icon_Arrow_8->setVisible(false);
        widget_PP.icon_Arrow_9->setVisible(false);
    }   
}

void Silo::InitDb(QString App){
    /****************  Creacion de las Bases de Datos  *************************/
   
    // usar los if para revisar que existan las bases de datos, si no crearlas
   
    Log("Creacion de Bases de Datos");
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setWindowTitle("Error de Base Datos");
    MBox.setDefaultButton(boton_OK);
    if (ChecarDB(App, ciclo_actual()) == false){
       // QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->ciclo_actual(), QMessageBox::Ok | QMessageBox::Cancel);
       MBox.setText("No se Pudo encontrar la base de datos: " + ciclo_actual());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec();
       if (MBox.clickedButton() == boton_OK){
        CrearDB(App, ciclo_actual());
        //KillDB();
        Log("Se creo la DB: " + ciclo_actual());
       }else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->CrearDB(App, base->ciclo_actual());
    }*/
        
    if (ChecarDB(App, users()) == false){
       // QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->users() ,QMessageBox::Ok);
       MBox.setText("No se Pudo encontrar la base de datos: " + users());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec(); 
       if (MBox.clickedButton() == boton_OK){
        CrearDB(App, users());
        //KillDB();
        Log("Se creo la DB: " + users());
       } else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->ChecarDB(App, base->users());
    }*/
    
    if (ChecarDB(App, adeudos()) == false){
        //QMessageBox::critical( base, "Error de Database", "No se pudo encontrar la Base de Datos " + base->adeudos() ,QMessageBox::Ok);
       MBox.setText("No se Pudo encontrar la base de datos: " + adeudos());
       MBox.setInformativeText("Desea crearla?");
       MBox.exec(); 
       if (MBox.clickedButton() == boton_OK){
        CrearDB(App, adeudos());
        //KillDB();
        Log("Se creo la DB: " + adeudos());
       } else if(MBox.clickedButton() == boton_CANCEL){
           
       }
    }/*else{
        base->ChecarDB(App, base->adeudos());
    }*/
    
    Contrasenas();
    Creditos();
    Ciclo(); 
    Dry_n_Wet();  // secado
    
}

void Silo::Arrows(){
    
    // hide the arrows
    widget_PP.icon_Arrow_1->setVisible(false);
    widget_PP.icon_Arrow_2->setVisible(false);
    widget_PP.icon_Arrow_3->setVisible(false);
    widget_PP.icon_Arrow_4->setVisible(false);
    widget_PP.icon_Arrow_5->setVisible(false);
    widget_PP.icon_Arrow_6->setVisible(false);
    widget_PP.icon_Arrow_7->setVisible(false);
    widget_PP.icon_Arrow_8->setVisible(false);
    widget_PP.icon_Arrow_9->setVisible(false);
}

//******************************************************************
//*****************  Bases de Datos y variables Globales ************
QString Silo::ciclo_actual()
{
   // typedef enum{
   //     Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Agu, Sep, Oct, Nov, Dec
   // }meses;
        
    std::time_t ahora = time(0); // sem MES DD hh:mm:ss YYYY
    std::string date = ctime(&ahora);  // carga la fecha actual, formato:  www MMM DD hh:mm:ss YYYY  
    QString ciclo{"none"};
    int ano2{0}, mes{0}, ano2_ant{0};
    //meses mes2;
    //std::string day(date.begin() + DAY_OFFSET, date.begin() + DAY_OFFSET + DAY_LENGTH); // el primer argumento pone el cursor al principio de donde quiero leer
    std::string month(date.begin() + MONTH_OFFSET, date.begin() + MONTH_OFFSET + MONTH_LENGTH);  // el segundo argumento le dices asta que direccion de memoria 
    //std::string dayNumber(date.begin() + DAY_NUMBER_OFFSET, date.begin() + DAY_NUMBER_OFFSET + DAY_NUMBER_LENGTH); // vas a leer
    //std::string hours(date.begin() + HOUR_OFFSET, date.begin() + HOUR_OFFSET + HOUR_LENGTH); // inicializacion c++11/14
    std::string year(date.begin() + YEAR_OFFSET, date.begin() + YEAR_OFFSET + YEAR_LENGTH); 
   
    ano2 = stoi(year);   // stoi combierte de string a int  
   
    //Log("fecha: " + QString::fromStdString(date) + " ,mes: " + QString::fromStdString(month));
    
    if (month == "Jan"){mes = 1; /*mes2 = Jan;*/}
    if (month == "Feb"){mes = 2;}
    if (month == "Mar"){mes = 3;}
    if (month == "Apr"){mes = 4;}
    if (month == "May"){mes = 5;}
    if (month == "Jun"){mes = 6;}
    if (month == "Jul"){mes = 7;}
    if (month == "Aug"){mes = 8;}
    if (month == "Sep"){mes = 9;}
    if (month == "Oct"){mes = 10;}
    if (month == "Nov"){mes = 11;}
    if (month == "Dec"){mes = 12;}
    
    if (mes >= 5 && mes <= 11 ){  // entre Mayo y Noviembre
           ano2_ant = ano2 - 1;
           ciclo = "Ciclo_OI_" + QString::number(ano2_ant)  + "_" + QString::fromStdString(year) + ".db";    //ciclo OI
    }
   
    if (mes == 12){   // Dicembre
           ano2_ant = ano2 - 1;
           ciclo = "Ciclo_PV_" + QString::number(ano2_ant)  + "_" + QString::fromStdString(year) + ".db";    //ciclo OI
    }
    
    if (mes >= 1 && mes <= 4){  // entre Dic y Abril
        ano2_ant = ano2 - 1;
        ciclo = "Ciclo_PV_" + QString::number(ano2_ant)  + "_" + QString::fromStdString(year) + ".db";    //ciclo PV
    }
    
    //std::to_string(año)  combierte un numero a cadenas        
   // Log("ciclo actual: " + ciclo);
    return ciclo;   //    return QStringLiteral("CICLO-OI-19-20.db");
}

QString Silo::ciclo_actual_Postgres(){
    return QStringLiteral("CICLO-OI-19-20-PostGresSQL.db");
}

QString Silo::users(){return QStringLiteral("Utilisateurs.db");}  // usuarios
 
QString Silo::adeudos()
{
    return QStringLiteral("Dettes.db");
    // modificar igual que ciclo actual segun la fecha del ano
}


void Silo::Entradas_Boleta_New(){
    int cnt{0};
    bool Ok;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    //MBox.setIconPixmap(QPixmap("images/Icono_App_Silo_1.png"));
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    QString Folio = widget_PP.Folio_edit->text();
    QString prodNum = widget_PP.SocioNum_edit->text(); // recupera el numero de productor del formulario, ponerlo como protegido
    QString ubicacion = widget_PP.Predio_Ubicacion_edit->text();
    QString c_nombre = widget_PP.Nombres_Chofer_edit->text();
    QString c_apellidos = widget_PP.Apellidos_Chofer_edit->text();
    QString placas = widget_PP.Placas_Camion_edit->text();
    QString color = widget_PP.Camion_Color_edit->text();
    QString tipo = widget_PP.Camion_Tipo_edit->text();
    QString bruto = widget_PP.Peso_Bruto_edit->text();
    QString tara = widget_PP.Peso_Tara_edit->text();
    QString humedad = widget_PP.Humedad_edit->text();  
    QString Peso_esp = widget_PP.Peso_Espe_edit->text();
    QString silo; // traer cual silo esta seleccionado
    Log("Nueva Boleta Entradas");
    valor.exec("SELECT Folio FROM Boletas_Entradas");
    if(valor.lastError().isValid()){
        Log("No se Puede seleccionar el Folio en Boletas Entrada\n" + valor.lastQuery() + "\n" + valor.lastError().text());
    }
    //Log("query en boletas Entradas\n" + valor.lastQuery());
    
    valor.first();
    //Log("valor de folio Entradas: " + Folio);
    if(Folio.toInt(&Ok,10) <= 0){     // manejo de errores de Folios
        Log("Error de Folio Entradas, esta vacio");
        MBox.setWindowTitle("Error de Folio");
        MBox.setText("El numero de Folio no puede estar vacio");
        MBox.exec();
        return;
    }else{ 
        
        do{
            if (Folio == valor.value("Folio").toString()){
                Log("Error de Folio Entradas, ya existe");
                MBox.setWindowTitle("Error de Folio");
                MBox.setText("El Folio ya existe, por favor reviselo");
                MBox.exec();
                return;
            } else {
                cnt++;
                Log("dentro del else: " + QString::number(cnt) + ", Folio: " + valor.value("Folio").toString());
            }
            if (cnt >9){
                Log("Error de Folio Entradas, esta mal escrito");
                MBox.setWindowTitle("Error de Folio");
                MBox.setText("El Folio esta mal escrito, por favor reviselo");
                MBox.exec();
                return;
            }
            //valor.next();
            
        }while (valor.next());
    }
   
    std::time_t now = time(0);
    QString fecha = ctime(&now);
    
    widget_PP.Silo_1->isChecked() ? silo="1" : silo="2";
    
    int neto{0};
    neto = bruto.toInt() - tara.toInt();
    
    valor.first();
    // cambiar las columnas y agregar las que faltan
    valor.prepare( "INSERT INTO Boletas_Entradas ( Folio, Procedencia, Prod_Num, Chofer_Nombre, Chofer_Apellidos,"
                   " Placas, Color, Tipo, Humedad, Peso_Esp, Bruto, Tara, Neto, Silo, Ciclo, Fecha ) " // agregar las fotos al ultimo, foto_Cam1, foto_Cam2,
                   "VALUES ( :Folio, :Proc, :Prod_Num, :Chofer_Nombre, :Chofer_Apellidos, :Placas, :Color, :Tipo, :Humedad,"
                   " :Peso_Esp, :Bruto, :Tara, :Neto, :Silo, :Ciclo, :Fecha )"); // :foto_Cam1, :foto_Cam2,
    
    valor.bindValue(":Folio", Folio); 
    LogData("--Entrada--");
    LogData("Folio -- " + Folio);
    valor.bindValue(":Proc", ubicacion);
    LogData("Procedencia -- " + ubicacion);
    valor.bindValue(":Prod_Num", prodNum ); 
    LogData("Numero Productor -- " + prodNum);
    valor.bindValue(":Chofer_Nombre", c_nombre);
    LogData("Nombre Chofer -- " + c_nombre);
    valor.bindValue(":Chofer_Apellidos", c_apellidos);
    LogData("Apellidos Chofer -- " + c_apellidos);
    valor.bindValue(":Placas", placas);
    LogData("Placas -- " + placas);
    valor.bindValue(":Color", color);
    LogData("Color -- " + color);
    valor.bindValue(":Tipo", tipo);
    LogData("Tipo camion -- " + tipo);
    valor.bindValue(":Humedad", humedad);
    LogData("Humedad -- " + humedad);
    valor.bindValue(":Peso_Esp", Peso_esp);
    LogData("Peso Especifico -- " + Peso_esp);
    valor.bindValue(":Bruto", bruto);
    LogData("Bruto -- " + bruto);
    valor.bindValue(":Tara", tara);
    LogData("Tara -- " + tara);
    valor.bindValue(":Neto", neto);
    LogData("Neto -- " + neto);
    valor.bindValue(":Silo", silo);
    LogData("Silo -- " + silo);
    valor.bindValue(":Ciclo", ciclo_actual()); 
    LogData("Ciclo -- " + ciclo_actual());
    valor.bindValue(":Fecha", fecha);
    LogData("Fecha -- " + fecha);
    
    valor.exec();
    
    if(valor.lastError().isValid()) {
        Log("Error al agregar Valores Entradas \n" + valor.executedQuery() + "\n" + valor.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("Hubo un problema al crear el Registro\n" + valor.lastError().text());
        MBox.exec();
        return;
     }else {
        Log("Registro creado nueva boleta de Productor");
        MBox.setWindowTitle("Nuevo Registro");
        MBox.setText("Registro Creado con exito");
        MBox.exec();
    }
    
    widget_PP.Folio_edit->clear();
    widget_PP.SocioNum_edit->clear(); 
    widget_PP.Folio_edit->clear();
    widget_PP.Predio_Ubicacion_edit->clear();
    widget_PP.Nombres_Chofer_edit->clear();
    widget_PP.Apellidos_Chofer_edit->clear();
    widget_PP.Placas_Camion_edit->clear();
    widget_PP.Camion_Color_edit->clear();
    widget_PP.Camion_Tipo_edit->clear();
    widget_PP.Peso_Bruto_edit->clear();
    widget_PP.Peso_Tara_edit->clear();
    widget_PP.Peso_Neto_edit->clear();
    widget_PP.Humedad_edit->clear();  
    widget_PP.Peso_Espe_edit->clear();

    valor.finish();
    //KillDB();
}

// revisar https://stackoverflow.com/questions/8478317/netbeans-and-mingw-w64 sobre como configurar mingw 64 bits
//  crashea si no esta seleccionado ningun registro o la tabla esta vacia
void Silo::Entradas_Boletas_Borrar(){       // Select the current record and erase it
    int fila;
    QString BoletaName, BoletaNum, Celda;
    QTableWidgetItem *item;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    
    valor.exec("SELECT a.Prod_Nombre, a.Prod_Apellidos, b.* FROM Productores AS a "
                "JOIN Boletas_Entradas AS b ON a.Prod_Num=b.Prod_Num GROUP BY b.Folio ORDER BY Fecha DESC");
    if(valor.lastError().isValid()){
        Log("No se puede hacer el query en Boletas Borrar \n" + valor.lastQuery() + "\n" + valor.lastError().text());
    }
    
    fila = widget_PP.Tabla_Entradas_Folios->currentRow();   // index de la fila actual
    item = widget_PP.Tabla_Entradas_Folios->item(fila,0);   // celda en fila y columna, obtener el folio de boleta
    Celda = item->text();  // obtienes el contenido de la celda
    valor.first();

      do{
        //BoletaName = valor.value("Prod_Nombre").toString() + " " + valor.value("Prod_Apellidos").toString();
        BoletaNum = valor.value("Folio").toString();
        if(Celda == BoletaNum){
            valor.prepare("DELETE FROM Boletas_Entradas WHERE Folio = :folio ");    // borrar el registro
            valor.bindValue(":folio", BoletaNum);
            valor.exec();

         if(valor.lastError().isValid()) {
            Log("Error al borrar registros \n" + valor.executedQuery() + "\n" + valor.lastError().text());
            MBox.setWindowTitle("Error");
            MBox.setText("Hubo un problema al borrar el Registro\n" + valor.lastError().text());
            MBox.exec();
            return;
         }else {
            Log("Registro borrado boleta de Productor");
            widget_PP.Tabla_Entradas_Folios->removeRow(fila);  // elimina la fila seleccionada 
            MBox.setWindowTitle("Registro");
            MBox.setText("Se borro el Registro con exito");
            MBox.exec();
        }
        }

      }while(valor.next());
   
    valor.finish();
}

void Silo::Entradas_Boletas_Update(){       // Update the current record
    
}

void Silo::Entradas_Boletas_Limpiar(){      //  Clean the current fields
    widget_PP.Folio_edit->clear();
    widget_PP.Predio_Ubicacion_edit->clear();
    widget_PP.Nombres_Chofer_edit->clear();
    widget_PP.Apellidos_Chofer_edit->clear();
    widget_PP.Placas_Camion_edit->clear();
    widget_PP.Camion_Color_edit->clear();
    widget_PP.Camion_Tipo_edit->clear();
    widget_PP.Peso_Bruto_edit->clear();
    widget_PP.Peso_Tara_edit->clear();
    widget_PP.Peso_Neto_edit->clear();
    widget_PP.Humedad_edit->clear();
    widget_PP.Peso_Espe_edit->clear();
}

void Silo::Entradas_CheckBrutoTara(){
    QString bruto = widget_PP.Peso_Bruto_edit->text();
    QString tara = widget_PP.Peso_Tara_edit->text();
    
        if (bruto.toInt() < tara.toInt()) {   // se asegura que el peso bruto nunca sea mayor que la tara, dando valores negativos
            QMessageBox::information( this, "  Error Peso  ", " Error, la Tara no puede ser mayor al Bruto");
            return;
            //widget_PP.Peso_Bruto_edit->clear();
            //widget_PP.Peso_Tara_edit->clear();
        } else{
            int neto{0};
            neto = bruto.toInt() - tara.toInt();
            widget_PP.Peso_Neto_edit->setText(QString::number(neto));
        }
    }

void Silo::Entradas_CB_Productor(){  // llenar el combo box productor boletas
    int dos{0};
    widget_PP.Prod_ComboBox->clear();
    widget_PP.Folio_edit->clear();
    widget_PP.Predio_Ubicacion_edit->clear();
    widget_PP.Nombres_Chofer_edit->clear();
    widget_PP.Apellidos_Chofer_edit->clear();
    widget_PP.Placas_Camion_edit->clear();
    widget_PP.Camion_Color_edit->clear();
    widget_PP.Camion_Tipo_edit->clear();
    widget_PP.Peso_Bruto_edit->clear();
    widget_PP.Peso_Neto_edit->clear();
    widget_PP.Peso_Espe_edit->clear();  //peso especifico
    widget_PP.Peso_Tara_edit->clear();
    widget_PP.Humedad_edit->clear();
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));
    prod.exec("SELECT Prod_Apellidos, Prod_Nombre FROM Productores");
    if(prod.lastError().isValid()){
        Log( "QcomboBox lista productores boletas \n" + prod.executedQuery() + "\n" + prod.lastError().text());
    }
    
    prod.first();
    do{
        dos++;
    }while(prod.next());
    
    prod.first();
    for(int i = 0; i<dos; ){
       widget_PP.Prod_ComboBox->addItem(prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
       prod.next();
       i++;
    }
    
    /*
    do{
       widget_PP.Prod_ComboBox->addItem(prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
       prod.next();
    }while(prod.last() == false);
    
    while (prod.next()){
      widget_PP.Prod_ComboBox->addItem(prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
    }*/
    prod.finish();
    //KillDB();
}

void Silo::Entradas_NumProdu(QString ComboBox){   // poner el numero del socio boletas
    int contador = 0;  // super importante NO BORRAR!!!!!!!!!!!!!!!
    QString prod;
    bool check = false;
   
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery busq(QSqlDatabase::database(ciclo_actual()));
    busq.exec("SELECT Prod_Apellidos, Prod_Nombre, Prod_Num FROM Productores");
    if(busq.lastError().isValid()){
        Log("Num Productor en Boletas \n" + busq.executedQuery() + "\n" + busq.lastError().text());
    }
    
    widget_PP.SocioNum_edit->setEnabled(false);// isEnabled(); // solo lectura
    do{
        prod = busq.value("Prod_Apellidos").toString() + ", " + busq.value("Prod_Nombre").toString();
//        if(prod == ", "){
//            Log("Num prod empty \n" + prod + "\n" + ComboBox);
//        }
        if(ComboBox == prod){
            widget_PP.SocioNum_edit->setText(busq.value("Prod_Num").toString());  //hacerlo protegido no debe cambiarlo el usuario
            check = true;}
            else {
               if (prod.trimmed() == ","){contador++;}
               busq.next();
            }
        
        if( contador >= 5){
            QMessageBox::warning( this, "Error", " No Existe ese Usuario");
            
            check = true;
        }   
        
    }while (check == false);
   
    busq.finish();
    //KillDB();
}

/// Boletas Salidas
void Silo::Boleta_Salidas_New(){   // creates a new boleta from Boletas Salidas
    int cnt{0};
    bool Ok;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    //MBox.setIconPixmap(QPixmap("images/Icono_App_Silo_1.png"));
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    QString Folio = widget_PP.Folio_Salida_edit->text();
    QString Comp_Num = widget_PP.SocioNum_Comp_edit->text(); // recupera el numero de productor del formulario, ponerlo como protegido
    QString destino = widget_PP.Salidas_Destino_edit->text();
    QString c_nombre = widget_PP.Salidas_Chofer_Nombre_edit->text();
    QString c_apellidos = widget_PP.Salidas_Chofer_Apellidos_edit->text();
    QString placas = widget_PP.Salidas_Placas_edit->text();
    QString color = widget_PP.Salidas_Color_edit->text();
    QString tipo = widget_PP.Salidas_Tipo_edit->text();
    QString bruto = widget_PP.Salidas_Bruto_edit->text();
    QString tara = widget_PP.Salidas_Tara_edit->text();
    QString silo; // traer cual silo esta seleccionado
    Log("Nueva Boleta Salidas");
    valor.exec("SELECT Folio FROM Boletas_Salidas");
    if(valor.lastError().isValid()){
        Log("No se Puede seleccionar el Folio salidas\n" + valor.lastQuery() + "\n" + valor.lastError().text());
    }
    Log("query en boletas de Salidas\n" + valor.lastQuery());
    
    valor.first();
    Log("valor de folio Salidas: " + Folio);
    if(Folio.toInt(&Ok,10) <= 0){     // manejo de errores de Folios
        Log("Error de Folio Salidas, esta vacio");
        MBox.setWindowTitle("Error de Folio");
        MBox.setText("El numero de Folio no puede estar vacio");
        MBox.exec();
        return;
    }else{ 
        
        do{
            if (Folio == valor.value("Folio").toString()){
                Log("Error de Folio Salidas, ya existe");
                MBox.setWindowTitle("Error de Folio");
                MBox.setText("El Folio ya existe, por favor reviselo");
                MBox.exec();
                return;
            } else {
                cnt++;
                Log("dentro del else Salidas: " + QString::number(cnt) + ", Folio: " + valor.value("Folio").toString());
            }
            if (cnt >9){
                Log("Error de Folio Salidas, esta mal escrito");
                MBox.setWindowTitle("Error de Folio");
                MBox.setText("El Folio esta mal escrito, por favor reviselo");
                MBox.exec();
                return;
            }
            //valor.next();
            
        }while (valor.next());
    }
   
    std::time_t now = time(0);
    QString fecha = ctime(&now);
    
    widget_PP.Salidas_Silo_1->isChecked() ? silo="1" : silo="2";
    
    int neto{0};
    neto = bruto.toInt() - tara.toInt();
    
    valor.first();
    // cambiar las columnas y agregar las que faltan
    valor.prepare( "INSERT INTO Boletas_Salidas (Comp_Num, Folio, Chofer_Nombre, Chofer_Apellidos,"
                   " Placas, Color, Tipo, Destino, Bruto, Tara, Neto, Silo, Fecha ) "  
                   "VALUES ( :Comp_Num, :Folio, :Chofer_Nombre, :Chofer_Apellidos, :Placas, :Color, :Tipo,"
                   " :Destino, :Bruto, :Tara, :Neto, :Silo, :Fecha )"); 
    
    valor.bindValue(":Comp_Num", Comp_Num ); 
    LogData("Numero Productor -- " + Comp_Num);
    valor.bindValue(":Folio", Folio); 
    LogData("Folio -- " + Folio);
    valor.bindValue(":Chofer_Nombre", c_nombre);
    LogData("Nombre Chofer -- " + c_nombre);
    valor.bindValue(":Chofer_Apellidos", c_apellidos);
    LogData("Apellidos Chofer -- " + c_apellidos);
    valor.bindValue(":Placas", placas);
    LogData("Placas -- " + placas);
    valor.bindValue(":Color", color);
    LogData("Color -- " + color);
    valor.bindValue(":Tipo", tipo);
    LogData("Tipo camion -- " + tipo);
    valor.bindValue(":Destino", destino);
    LogData("Destino -- " + destino);
    valor.bindValue(":Bruto", bruto);
    LogData("Bruto -- " + bruto);
    valor.bindValue(":Tara", tara);
    LogData("Tara -- " + tara);
    valor.bindValue(":Neto", neto);
    LogData("Neto -- " + neto);
    valor.bindValue(":Silo", silo);
    LogData("Silo -- " + silo);
    valor.bindValue(":Fecha", fecha);
    LogData("Fecha -- " + fecha);
    
    valor.exec();
    
    if(valor.lastError().isValid()) {
        Log("Error al agregar Valores Salidas \n" + valor.executedQuery() + "\n" + valor.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("Hubo un problema al crear el Registro\n" + valor.lastError().text());
        MBox.exec();
        return;
     }else {
        Log("Registro creado Boletas salidas");
        MBox.setWindowTitle("Nuevo Registro");
        MBox.setText("Registro Creado con exito");
        MBox.exec();
    }
    
    widget_PP.SocioNum_Comp_edit->clear(); 
    widget_PP.Folio_Salida_edit->clear();
    widget_PP.Salidas_Destino_edit->clear();
    widget_PP.Salidas_Chofer_Nombre_edit->clear();
    widget_PP.Salidas_Chofer_Apellidos_edit->clear();
    widget_PP.Salidas_Placas_edit->clear();
    widget_PP.Salidas_Color_edit->clear();
    widget_PP.Salidas_Tipo_edit->clear();
    widget_PP.Salidas_Bruto_edit->clear();
    widget_PP.Salidas_Tara_edit->clear();
    widget_PP.Salidas_Neto_edit->clear();
    
    valor.finish();
    //KillDB();
}

void Silo::CheckBrutoTara_Salida(){
    QString bruto = widget_PP.Salidas_Bruto_edit->text();
    QString tara = widget_PP.Salidas_Tara_edit->text();
    
        if (bruto.toInt() < tara.toInt()) {   // se asegura que el peso bruto nunca sea mayor que la tara, dando valores negativos
            QMessageBox::information( this, "  Error Peso  ", " Error, la Tara no puede ser mayor al Bruto");
            return;
            //widget_PP.Peso_Bruto_edit->clear();
            //widget_PP.Peso_Tara_edit->clear();
        } else{
            int neto{0};
            neto = bruto.toInt() - tara.toInt();
            widget_PP.Salidas_Neto_edit->setText(QString::number(neto));
        }
    }

void Silo::Salidas_Boletas_Borrar(){  // borra las boletas de salidas
    int fila;
    QString BoletaName, BoletaNum, Celda;
    QTableWidgetItem *item;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    
    valor.exec("SELECT a.Razon_Social, b.* FROM Compradores AS a "
                "JOIN Boletas_Salidas AS b ON a.Comp_Num=b.Comp_Num GROUP BY Folio ORDER BY Fecha DESC");
    if(valor.lastError().isValid()){
        Log("No se puede hacer el query en Boletas Salidas Borrar \n" + valor.lastQuery() + "\n" + valor.lastError().text());
    }
    
    fila = widget_PP.Tabla_Salidas_Folios->currentRow();   // index de la fila actual
    item = widget_PP.Tabla_Salidas_Folios->item(fila,0);   // celda en fila y columna, obtener el folio de boleta
    Celda = item->text();  // obtienes el contenido de la celda
    valor.first();

      do{
        //BoletaName = valor.value("Prod_Nombre").toString() + " " + valor.value("Prod_Apellidos").toString();
        BoletaNum = valor.value("Folio").toString();
        if(Celda == BoletaNum){
            valor.prepare("DELETE FROM Boletas_Salidas WHERE Folio = :folio ");    // borrar el registro
            valor.bindValue(":folio", BoletaNum);
            valor.exec();

         if(valor.lastError().isValid()) {
            Log("Error al borrar registros Boletas de Salidas \n" + valor.executedQuery() + "\n" + valor.lastError().text());
            MBox.setWindowTitle("Error");
            MBox.setText("Hubo un problema al borrar el Registro\n" + valor.lastError().text());
            MBox.exec();
            return;
         }else {
            Log("Registro borrado boleta de Compradores");
            widget_PP.Tabla_Salidas_Folios->removeRow(fila);  // elimina la fila seleccionada 
            MBox.setWindowTitle("Registro");
            MBox.setText("Se borro el Registro con exito");
            MBox.exec();
        }
        }

      }while(valor.next());
   
    valor.finish();
}

void Silo::Salidas_Boletas_Update(){
    
}

void Silo::Salidas_Boletas_Limpiar(){
    widget_PP.Folio_Salida_edit->clear();
    widget_PP.Salidas_Destino_edit->clear();
    widget_PP.Salidas_Chofer_Nombre_edit->clear();
    widget_PP.Salidas_Chofer_Apellidos_edit->clear();
    widget_PP.Salidas_Placas_edit->clear();
    widget_PP.Salidas_Color_edit->clear();
    widget_PP.Salidas_Tipo_edit->clear();
    widget_PP.Salidas_Neto_edit->clear();
    widget_PP.Salidas_Bruto_edit->clear();
    widget_PP.Salidas_Tara_edit->clear();
    widget_PP.Salidas_Humedad_edit->clear();
    widget_PP.Salidas_Espe_edit->clear();
}

void Silo::Salidas_CB_Comprador(){  // llenar el combo box Razon Social Salidas
    int dos{0};
    widget_PP.Salida_Razon_Social_edit->clear();
    widget_PP.Folio_Salida_edit->clear();
    widget_PP.Salidas_Destino_edit->clear();
    widget_PP.Salidas_Chofer_Nombre_edit->clear();
    widget_PP.Salidas_Chofer_Apellidos_edit->clear();
    widget_PP.Salidas_Placas_edit->clear();
    widget_PP.Salidas_Color_edit->clear();
    widget_PP.Salidas_Tipo_edit->clear();
    widget_PP.Salidas_Bruto_edit->clear();
    widget_PP.Salidas_Tara_edit->clear();
    widget_PP.Salidas_Neto_edit->clear();
    /* Revisar si se va a usar peso especifico y humedad */
    widget_PP.Peso_Espe_edit->clear();  //peso especifico
    widget_PP.Humedad_edit->clear();
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));
    prod.exec("SELECT Razon_Social FROM Compradores");
    if(prod.lastError().isValid()){
        Log( "lista Razon Social boletas Salidas \n" + prod.executedQuery() + "\n" + prod.lastError().text());
    }
    
    prod.first();
    do{
        dos++;
    }while(prod.next());
   
    prod.first();
    for(int i = 0; i<dos; ){
       widget_PP.Salida_Razon_Social_edit->addItem(prod.value("Razon_Social").toString()); //populates the combobox for users, this is one i need to know who is selected
       prod.next();
       i++;
    }
    
    //while (prod.next()){
    //  widget_PP.Salida_Razon_Social_edit->addItem(prod.value("Razon_Social").toString()); //populates the combobox for users, this is one i need to know who is selected
    // }
    prod.finish();
    //KillDB();
}

void Silo::Salidas_NumComprador(QString ComboBox){   // poner el numero del socio boletas
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery busq(QSqlDatabase::database(ciclo_actual()));
    busq.exec("SELECT Comp_Num, Razon_Social FROM Compradores");
    if(busq.lastError().isValid()){
        Log("Num de Comprador en Salidas \n" + busq.executedQuery() + "\n" + busq.lastError().text());
    }
    
    int contador = 0;  // super importante NO BORRAR!!!!!!!!!!!!!!!
    QString prod;
    bool check = false;
   
    widget_PP.SocioNum_Comp_edit->setEnabled(false);// isEnabled(); // solo lectura
    do{
        prod = busq.value("Razon_Social").toString();
//        if(prod == ""){
//            Log("Num prod en Salidas empty \n" + prod + "\n" + ComboBox);
//        }
        if(ComboBox == prod){
            widget_PP.SocioNum_Comp_edit->setText(busq.value("Comp_Num").toString());
            check = true;
        }else {
            if (prod.trimmed() == ""){contador++;}
            busq.next();
        }
        
        if( contador >= 5){
            QMessageBox::warning( this, "Error", " No Existe ese Usuario");
            
            check = true;
        }   
        
    }while (check == false);
    busq.finish();
    //KillDB();
}

void Silo::Tabla_Boletas_Entradas(){   // populates the table with the last inserted records, boletas entradas
    
    int filas{0};
    QString Folio, Prod, Chofer, Hora;
    std::string date;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    //Log("Tabla de boletas entregadas");
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery boleta(QSqlDatabase::database(ciclo_actual()));  // haces la busqueda de boletas
    
    boleta.exec("SELECT a.Prod_Nombre, a.Prod_Apellidos, b.* FROM Productores AS a "
                "JOIN Boletas_Entradas AS b ON a.Prod_Num=b.Prod_Num GROUP BY b.Folio ORDER BY Fecha DESC");
    if(boleta.lastError().isValid()){
        Log("Error no se puede leer la tabla, tabla boletas de entrada \n" + boleta.executedQuery() + "\n" + boleta.lastError().text() );
    }
    // ***************** borrar los valores en pantalla****************
    widget_PP.Tabla_Entradas_Folios->clear();
    widget_PP.Tabla_Entradas_Folios->setRowCount(0);
    widget_PP.Tabla_Entradas_Folios->setColumnCount(4);
    widget_PP.Tabla_Entradas_Folios->horizontalHeader()->hide();
    widget_PP.Tabla_Entradas_Folios->horizontalHeader()->setDefaultSectionSize(120);
    widget_PP.Tabla_Entradas_Folios->horizontalHeader()->resizeSection(0,50);
    widget_PP.Tabla_Entradas_Folios->horizontalHeader()->resizeSection(1,140);
    widget_PP.Tabla_Entradas_Folios->verticalHeader()->hide();
    widget_PP.Tabla_Entradas_Folios->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    //Log( "TablaRegGen dentro del ciclo \n" + ComboBox);
  
    do{
       
        Folio = boleta.value("Folio").toString();
        Prod = boleta.value("Prod_Apellidos").toString() + ", " +  boleta.value("Prod_Nombre").toString();
        Chofer = boleta.value("Chofer_Apellidos").toString() + ", " + boleta.value("Chofer_Nombre").toString();
        Hora = boleta.value("Fecha").toString();
        date = Hora.toStdString();
        // tomar la hora y parsearla
        //std::string day(date.begin() + DAY_OFFSET, date.begin() + DAY_OFFSET + DAY_LENGTH); // el primer argumento pone el cursor al principio de donde quiero leer
        std::string month(date.begin() + MONTH_OFFSET, date.begin() + MONTH_OFFSET + MONTH_LENGTH);  // el segundo argumento le dices asta que direccion de memoria 
        std::string dayNumber(date.begin() + DAY_NUMBER_OFFSET, date.begin() + DAY_NUMBER_OFFSET + DAY_NUMBER_LENGTH); // vas a leer
        std::string hours(date.begin() + HOUR_OFFSET, date.begin() + HOUR_OFFSET + HOUR_LENGTH); // inicializacion c++11/14
        //std::string year(Hora.begin() + YEAR_OFFSET, Hora.begin() + YEAR_OFFSET + YEAR_LENGTH); 
        Hora = QString::fromStdString(dayNumber) + " " + QString::fromStdString(month) + " " + QString::fromStdString(hours);
        
        if (Folio == ""){
           
        } else{
             widget_PP.Tabla_Entradas_Folios->setRowCount(widget_PP.Tabla_Entradas_Folios->rowCount() + 1);
            filas = widget_PP.Tabla_Entradas_Folios->rowCount() - 1;

            //Log("Fila: " + QString::number(filas) + " --- " + Folio + " --- " + Prod + " --- " + Chofer + " --- " + Hora);
       
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(Folio);
              widget_PP.Tabla_Entradas_Folios->setItem(filas,0,obj0);
              
              QTableWidgetItem *obj1 = new QTableWidgetItem; 
              obj1->setText(Prod);
             
              widget_PP.Tabla_Entradas_Folios->setItem(filas,1,obj1);
              
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(Chofer);
              widget_PP.Tabla_Entradas_Folios->setItem(filas,2,obj2);
              
              QTableWidgetItem *obj3 = new QTableWidgetItem;
              obj3->setText(Hora);
              widget_PP.Tabla_Entradas_Folios->setItem(filas,3,obj3);
        }
    }while(boleta.next()); 
    boleta.finish();
    
}

void Silo::Tabla_Boletas_Salidas(){       // populates the table with the last inserted records, boletas salidas
 
//    int filas{0};
    QString Folio, Prod, Chofer, Hora;
    std::string date;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    //Log("Tabla de boletas Salidas");
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery boleta(QSqlDatabase::database(ciclo_actual()));  // haces la busqueda de boletas
    
    boleta.exec("SELECT a.Razon_Social, b.* FROM Compradores AS a "
                "JOIN Boletas_Salidas AS b ON a.Comp_Num=b.Comp_Num GROUP BY Folio ORDER BY Fecha DESC");
    if(boleta.lastError().isValid()){
        Log("Error no se puede leer la tabla, tabla boletas de salida \n" + boleta.executedQuery() + "\n" + boleta.lastError().text() );
    }
    // ***************** borrar los valores en pantalla****************
    widget_PP.Tabla_Salidas_Folios->clear();
    widget_PP.Tabla_Salidas_Folios->setRowCount(0);
    widget_PP.Tabla_Salidas_Folios->setColumnCount(4);
    widget_PP.Tabla_Salidas_Folios->horizontalHeader()->hide();
    widget_PP.Tabla_Salidas_Folios->horizontalHeader()->setDefaultSectionSize(120);
    widget_PP.Tabla_Salidas_Folios->horizontalHeader()->resizeSection(0,50);
    widget_PP.Tabla_Salidas_Folios->horizontalHeader()->resizeSection(1,140);
    widget_PP.Tabla_Salidas_Folios->verticalHeader()->hide();
    widget_PP.Tabla_Salidas_Folios->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    //Log( "TablaRegGen dentro del ciclo \n" + ComboBox);
  
    do{
       
        Folio = boleta.value("Folio").toString();
        Prod = boleta.value("Razon_Social").toString();
        Chofer = boleta.value("Chofer_Apellidos").toString() + ", " + boleta.value("Chofer_Nombre").toString();
        Hora = boleta.value("Fecha").toString();
        date = Hora.toStdString();
        // tomar la hora y parsearla
        //std::string day(date.begin() + DAY_OFFSET, date.begin() + DAY_OFFSET + DAY_LENGTH); // el primer argumento pone el cursor al principio de donde quiero leer
        std::string month(date.begin() + MONTH_OFFSET, date.begin() + MONTH_OFFSET + MONTH_LENGTH);  // el segundo argumento le dices asta que direccion de memoria 
        std::string dayNumber(date.begin() + DAY_NUMBER_OFFSET, date.begin() + DAY_NUMBER_OFFSET + DAY_NUMBER_LENGTH); // vas a leer
        std::string hours(date.begin() + HOUR_OFFSET, date.begin() + HOUR_OFFSET + HOUR_LENGTH); // inicializacion c++11/14
        //std::string year(Hora.begin() + YEAR_OFFSET, Hora.begin() + YEAR_OFFSET + YEAR_LENGTH); 
        Hora = QString::fromStdString(dayNumber) + " " + QString::fromStdString(month) + " " + QString::fromStdString(hours);
        
        if (Folio != ""){
            widget_PP.Tabla_Salidas_Folios->setRowCount(widget_PP.Tabla_Salidas_Folios->rowCount() + 1);
            int filas = widget_PP.Tabla_Salidas_Folios->rowCount() - 1;

            //Log("Fila: " + QString::number(filas) + " --- " + Folio + " --- " + Prod + " --- " + Chofer + " --- " + Hora);
       
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(Folio);
              widget_PP.Tabla_Salidas_Folios->setItem(filas,0,obj0);
              
              QTableWidgetItem *obj1 = new QTableWidgetItem; 
              obj1->setText(Prod);
              widget_PP.Tabla_Salidas_Folios->setItem(filas,1,obj1);
              
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(Chofer);
              widget_PP.Tabla_Salidas_Folios->setItem(filas,2,obj2);
              
              QTableWidgetItem *obj3 = new QTableWidgetItem;
              obj3->setText(Hora);
              widget_PP.Tabla_Salidas_Folios->setItem(filas,3,obj3);
        }
    }while(boleta.next()); 
    boleta.finish();
    
}

void Silo::Productor_New(){
    
    QString nombre = widget_PP.Nombre_Lista_Prod_edit->text();
    QString apellidos = widget_PP.Apellidos_Lista_Prod_edit->text();
    QString direccion = widget_PP.Direccion_Lista_Prod_edit->text(); // hacer widget para la direccion
    QString predio = widget_PP.Predio_Lista_Prod_edit->text();
    QString ubicacion = widget_PP.Ciudad_Lista_Prod_edit->text();
    //QString tipo_Prod = ; // spin box
    //QString socio_ref = ; // spin box
    //QString num_Acciones = ; // spin box
    QString email = widget_PP.Email_Lista_Prod_edit->text();
    QString whatsapp = widget_PP.Whats_Lista_Prod_edit->text();
    QString telefono = widget_PP.Tel_Lista_Prod_edit->text();
    QString RFC = widget_PP.RFC_Lista_Prod_edit->text();
    int newProd{0};
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    
    valor.exec("SELECT Prod_Num FROM Productores");  
    if(valor.lastError().isValid()){
        Log("No se puede accesar a tabla Productores\n" + valor.lastQuery() + "\n" +valor.lastError().text() );
    }
    
    valor.last();                                    
    newProd = valor.value("Prod_Num").toInt();       //  hace lo mismo que autoincrement, hacer algo similar en borrar productor
    if (newProd <= 0 ){                              //  pero que borre el numero y reajuste los demas productores
        newProd = 1; 
    }else{
        newProd = valor.value("Prod_Num").toInt() + 1;
    }
    
    valor.prepare( "INSERT INTO Productores ( Prod_Num, Prod_Nombre, Prod_Apellidos, Prod_Direccion, Predio_Nombre, Ciudad, "
                   " Email, Whattsapp, Telefono, RFCF ) "                                  //  Tipo_Prod, Socio_Ref, Num_Acciones,
                   "VALUES ( :Prod_Num, :Prod_Nombre, :Prod_Apellidos, :Prod_Direccion, :Predio_Nombre, :Ciudad, "   //   :Tipo_Prod, :Socio_Ref, :Num_Acciones, 
                   ":Email, :Whattsapp, :Telefono, :RFCF )");
    
    LogData("Productor_New");
    valor.bindValue(":Prod_Num", newProd);
    LogData("Numero Productor -- " + newProd );
    valor.bindValue(":Prod_Nombre", nombre);
    LogData("Nombre -- " + nombre);
    valor.bindValue(":Prod_Apellidos", apellidos);
    LogData("Apellidos -- " + apellidos);
    valor.bindValue(":Prod_Direccion", direccion);
    LogData("Direccion -- " + direccion);
    valor.bindValue(":Predio_Nombre", predio);
    LogData("Predio -- " + predio);
    valor.bindValue(":Ciudad", ubicacion);
    LogData("Ubicacion -- " + ubicacion);
   /*valor.bindValue(":Tipo_Prod", );
    *LogData("Tipo de productor -- " + );
    *valor.bindValue(":Socio_Ref", );
    *LogData("Socio de Referencia -- " + );
    *valor.bindValue(":Num_Acciones", );
    *LogData("Num de Acciones -- " + );
   */
    valor.bindValue(":Email", email);
    LogData("Email -- " + email);
    valor.bindValue(":Whattsapp", whatsapp);
    LogData("Whatsapp -- " + whatsapp);
    valor.bindValue(":Telefono", telefono);
    LogData("Telefono -- " + telefono);
    valor.bindValue(":RFCF", RFC);
    valor.exec();
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    //MBox.setIconPixmap(QPixmap("images/Icono_App_Silo_1.png"));
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
     if(valor.lastError().isValid()){
        Log("Error al crear un Productor nuevo \n" + valor.executedQuery() + "\n" + valor.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("Hubo un problema al crear el Registro\n" + valor.lastError().text());
        MBox.exec();
        }
    else {    
        Log("Productor Agregado");
        MBox.setWindowTitle("Nuevo Registro");
        MBox.setText("Registro Creado con exito");
        MBox.exec();
    }
    valor.finish();
    //KillDB();
    Productores_Lista(); // lo llamo para actualizar la lista
}

 void Silo::Productor_Erase(){
    
    bool check = false;
    QString numProd = widget_PP.No_Cliente_edit->text();
    QString productor;
    int size{0};
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    valor.exec("SELECT * FROM Productores");
    if(valor.lastError().isValid()){
        Log("No se puede accesar a tabla Productores, Erase\n" + valor.lastQuery() + "\n" + valor.lastError().text());
    }
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    valor.last();
    size = valor.value("Prod_Num").toInt() + 1;
    if (size <= 0){
        Log("Tabla Vacia Productores" + QString::number(valor.at()));
        MBox.setWindowTitle("Error");
        MBox.setText("La tabla esta vacia, no se puede borrar\n" + valor.lastError().text());
        MBox.exec();
    }else{
        valor.first();
        do{
           if( valor.value("Prod_Num").toString() == numProd){
              productor = ( valor.value("Prod_Nombre").toString() + " " +valor.value("Prod_Apellidos").toString());
              valor.prepare("DELETE FROM Productores WHERE Prod_Num = :Prd"); 
              valor.bindValue(":Prd", numProd);
              valor.exec();
              if(valor.lastError().isValid()){
                  Log("No se Pudo Borrar el productor\n" + valor.lastError().text() + valor.lastQuery());
                  MBox.setWindowTitle("Error");
                  MBox.setText("No se Pudo Borrar el Productor\n" + valor.lastError().text());
                  MBox.exec();
              } else {
                  Log("Productor Borrado con exito\n" + productor);
                  MBox.setWindowTitle("Productor");
                  MBox.setText("Productor " + productor + " Borrado con Exito");
                  MBox.exec();
              }
              check = true;
           } else {
               valor.next();
           }
       
        }while (check == false); 
    }
    valor.finish();
    //KillDB();
    Produ_Limpiar();    // limpia los campos 
    Productores_Lista(); // lo llamo para actualizar la lista
}

void Silo::Produ_Limpiar(){
    widget_PP.Nombre_Lista_Prod_edit->clear();
    widget_PP.Apellidos_Lista_Prod_edit->clear();
    widget_PP.Predio_Lista_Prod_edit->clear();
    widget_PP.Tel_Lista_Prod_edit->clear();
    widget_PP.Whats_Lista_Prod_edit->clear();
    widget_PP.Direccion_Lista_Prod_edit->clear();
    widget_PP.Ciudad_Lista_Prod_edit->clear();
    widget_PP.Email_Lista_Prod_edit->clear();
    widget_PP.RFC_Lista_Prod_edit->clear();
    widget_PP.No_Cliente_edit->clear();
}

void Silo::Comprador_New(){
    
    // ver por que no son editables los qlineEdit
    //widget_PP.Contacto_edit->setReadOnly(false);
    
    QString contacto = widget_PP.Contacto_edit->text();
    QString razon_social = widget_PP.Razon_Social_edit->text();
    QString direccion = widget_PP.Direccion_edit->text(); 
    QString email = widget_PP.Email_edit->text();
    QString whatsapp = widget_PP.Whatsapp_edit->text();
    QString telefono = widget_PP.Telefono_edit->text();
    QString ciudad = widget_PP.Ciudad_edit->text();
    QString estado = widget_PP.Estado_edit->text();
    QString RFC =  widget_PP.RFC_edit->text();
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    valor.prepare( "INSERT INTO Compradores ( Razon_Social, Direccion, Contacto,"
                   " Telefono, Whattsapp, Email, Ciudad, Estado, RFCM )"
                   "VALUES (:Razon_Social, :Direccion, :Contacto, :Telefono,"
                   " :Whattsapp, :Email, :Ciudad, :Estado, :RFC )"
                   );
    valor.bindValue(":Razon_Social", razon_social);
    LogData("Razon Social -- " + razon_social);
    valor.bindValue(":Direccion", direccion);
    LogData("Direccion -- " + direccion);
    valor.bindValue(":Contacto", contacto);
    LogData("Contacto -- " + contacto);
    valor.bindValue(":Telefono", telefono);
    LogData("Telefono -- " + telefono);
    valor.bindValue(":Whattsapp", whatsapp);
    LogData("Whatsapp -- " + whatsapp);
    valor.bindValue(":Email", email);
    LogData("Email -- " + email);
    valor.bindValue(":Ciudad", ciudad);
    LogData("Ciudad -- " + ciudad);
    valor.bindValue(":Estado", estado);
    LogData("Estado -- " + estado);
    valor.bindValue(":RFC", RFC);
    LogData("RCF -- " + RFC);
    valor.exec();
    
    if(valor.lastError().isValid()){
        Log("Error no se puede agregar el comprador \n" + valor.lastError().text() + "\n" + valor.lastQuery());
        MBox.setWindowTitle("Error Nuevo Comprador");
        MBox.setText("Error al crear el nuevo Compradror ");
        MBox.exec();
    } else {
        MBox.setWindowTitle("Exito");
        MBox.setText("Comprador Agregado con Exito");
        MBox.exec();
    }
    valor.finish();
    //KillDB();
    Compradores_Lista(); // actualiza la lista de compradores
}
    
void Silo::Comprador_Borrar(){    // erase Comprador
       
    bool check = false;
    QString RFC = widget_PP.RFC_edit->text();    // usa el RFCM como base de referencia
    QString comprador;
    int size{0}, cnt{0};
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    valor.exec("SELECT * FROM Compradores");
    if(valor.lastError().isValid()){
        Log("No se puede accesar a tabla Compradores, Erase\n" + valor.lastQuery() + "\n" + valor.lastError().text());
    }
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    valor.first();
    do{                          // Reviso el tamano de la tabla
       size++;  
    }while (valor.next());
    
    if (size <= 0){
        Log("Tabla Vacia Compradores\n");
        MBox.setWindowTitle("Error");
        MBox.setText("La tabla esta vacia, no se puede borrar\n");
        MBox.exec();
        return;
    }else{
        valor.first();
        do{
           if( valor.value("RFCM").toString() == RFC){
              comprador = ( valor.value("Razon_Social").toString());
              valor.prepare("DELETE FROM Compradores WHERE RFCM = :rfc"); 
              valor.bindValue(":rfc", RFC);
              if (valor.exec()){
                  Log("Comprador Borrado con exito\n" + comprador);
                  MBox.setWindowTitle("Exito");
                  MBox.setText("Comprador: " + comprador + " Borrado con Exito");
                  MBox.exec();
              }
     
              if(valor.lastError().isValid()){
                  Log("No se Pudo Borrar el comprador\n" + valor.lastError().text() + valor.lastQuery());
                  MBox.setWindowTitle("Error");
                  MBox.setText("No se Pudo Borrar el Comprador\n" + valor.lastError().text());
                  MBox.exec();
              }

              check = true;
           } else {
               cnt++;
               valor.next();
           }
           if (cnt > 5){
               Log("No se encontro el comprador");
               MBox.setWindowTitle("Error");
               MBox.setText("No se pudo encontrar el comprador");
               MBox.exec();
               check = true;
           }
       
        }while (check == false); 
    }
    valor.finish();
    //KillDB();
    Comprador_Limpiar();    // limpia los campos 
    Compradores_Lista(); // lo llamo para actualizar la lista
}

void Silo::Comprador_Limpiar(){    // clean all the fields on comprador
    widget_PP.Contacto_edit->clear();
    widget_PP.Razon_Social_edit->clear();
    widget_PP.Direccion_edit->clear();
    widget_PP.Telefono_edit->clear();
    widget_PP.Whatsapp_edit->clear();
    widget_PP.Email_edit->clear();
    widget_PP.Ciudad_edit->clear();
    widget_PP.Estado_edit->clear();
    widget_PP.RFC_edit->clear();
}

void Silo::Reg_Individual_CB_Ciclo(){    // comboBox del Ciclo
    QStringList filename = {"ciclo*.db", "Ciclo*.db", "CICLO*.db"};
   /* QSqlQuery reg(QSqlDatabase::database(ciclo_actual())); // usar buscarArchivos() para usar la db seleccionada en el combobox

    reg.exec("SELECT Prod_Apellidos, Prod_Nombre, Prod_Num FROM Productores");
    if(reg.lastError().isValid()){
         Log( reg.executedQuery(), reg.lastError().text(),"RegistrosInd");
    }
    */
    QStringList ciclos = buscarArchivos(filename, "Data");
    widget_PP.RegInd_Ciclo_CB->clear();
    //widget_PP.RegInd_Prod_CB->clear();
    widget_PP.RegInd_Ciclo_CB->setEditable(false);
  
    if (ciclos.size() <= 0){
        Log("Registros Individual, No se Pueden Encontrar los archivos: " + filename.at(0) );//QString::number(ciclos.size()));
    }
    
    for(int i = 0; i <ciclos.size(); i++){                       // en esencia es un foreach que pone cada ciclo dentro del Combobox
        if (!ciclos.at(i).isEmpty()){
            widget_PP.RegInd_Ciclo_CB->addItem(ciclos.at(i));
            //Log("despues de llamar buscarArchivos dentro de RegistroInd = " + QString::number(i) + " " + ciclos.at(i));    
        }
    };
}

void Silo::Reg_Individual_CB_Prod(QString ComboBox){  // comboBox de los productores
    int sice{0};
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    widget_PP.RegInd_Prod_CB->clear();
    CrearDB(QString::fromStdWString(DirFile), ComboBox);
    QSqlQuery reg(QSqlDatabase::database(ComboBox)); // usar buscarArchivos() para usar la db seleccionada en el combobox
    reg.exec("SELECT Prod_Apellidos, Prod_Nombre FROM Productores GROUP BY Prod_Num");
    if(reg.lastError().isValid()){
         Log( "No se puede leer la tabla Productores, en Registros Individual \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    
    reg.first();
    do{
        sice++;
    }while(reg.next());
    
    reg.first();
    for(int i = 0; i<sice; ){
       widget_PP.RegInd_Prod_CB->addItem(reg.value("Prod_Apellidos").toString() + ", " + reg.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
       reg.next();
       i++;
    }
    reg.finish(); 
    //KillDB();
}

void Silo::Tabla_Reg_Individual(QString ComboBox){  // Muestra las boletas de cada Productor de forma individual
    
    auto contador = 0;  // super importante NO BORRAR!!!!!!!!!!!!!!!
    QString info;  // hace las comparacions contra el ComboBox
    QString folioNum, Chofer, C_Apellidos, Placas, Color, Tipo, Silo;\
    auto Bruto{0.0}, Tara{0.0}, Neto{0.0}, Humedad{0.0};
//  QString Prod_Num = registros.value("Prod_Num").toString();

    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    QString Db= widget_PP.RegInd_Ciclo_CB->currentText();
    
    CrearDB(QString::fromStdWString(DirFile), Db);
    QSqlQuery prod(QSqlDatabase::database(Db));  // haces la busqueda de boletas
    // filtrar solo por el nombre y apellido del productor
    //Log(ComboBox + "\n" + Db);
    prod.exec("SELECT a.Prod_Nombre, a.Prod_Apellidos, b.* FROM Productores AS a JOIN Boletas_Entradas AS b ON a.Prod_Num=b.Prod_Num GROUP BY Folio");
    if(prod.lastError().isValid()){
        Log("Lectura Tabla Registros Individual \n" + prod.executedQuery() + "\n" + prod.lastError().text() ); 
    }
    widget_PP.Registros_Ind->clear();
    widget_PP.Registros_Ind->setRowCount(0);
    //widget_PP.Liq_Boletas_Lista->setColumnCount(3);
    widget_PP.Registros_Ind->horizontalHeader()->hide();
    widget_PP.Registros_Ind->horizontalHeader()->resizeSection(1,200);
    widget_PP.Registros_Ind->horizontalHeader()->resizeSection(7,180);
    widget_PP.Registros_Ind->horizontalHeader()->resizeSection(6,180);
    widget_PP.Registros_Ind->horizontalHeader()->resizeSection(7,180);
    widget_PP.Registros_Ind->horizontalHeader()->resizeSection(8,180);
    //widget_PP.Liq_Boletas_Lista->horizontalHeader()->setDefaultSectionSize(200);
    widget_PP.Registros_Ind->verticalHeader()->hide();
    widget_PP.Registros_Ind->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    
    
    //widget_PP.RegInd_NoCont_edit->setText(registros.value("Num_Contrato").toString());
    
    do {
        info = prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString();
        //if (info == ", "){
        //    Log( "TablaRegInd\n" + info + "\n" + ComboBox);
        //}
        if(ComboBox == info){
    
              widget_PP.Registros_Ind->setRowCount(widget_PP.Registros_Ind->rowCount() + 1);
              int filas = widget_PP.Registros_Ind->rowCount() - 1;
        
              folioNum = prod.value("Folio").toString();
          //  QString Prod_Num = registros.value("Prod_Num").toString();
              Chofer = prod.value("Chofer_Nombre").toString();
              C_Apellidos = prod.value("Chofer_Apellidos").toString();
              Chofer.append(" ");
              Chofer.append(C_Apellidos);
              Placas = prod.value("Placas").toString();
              Color = prod.value("Color").toString();
              Tipo = prod.value("Tipo").toString();
              Humedad = prod.value("Humedad").toFloat();
              Bruto = prod.value("Bruto").toFloat() / 1000;
              Tara = prod.value("Tara").toFloat() / 1000;
              Neto = prod.value("Neto").toFloat() / 1000;
              //Silo = prod.value("Silo").toString();
          //  QString foto1 = registros.value("foto_Cam1").toString();
          //  QString foto2 = registros.value("foto_Cam2").toString();
              
              /*
                //Modo viejo
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(folioNum);
              widget_PP.Registros_Ind->setItem(filas,0,obj0);
              QTableWidgetItem *obj1 = new QTableWidgetItem;
              obj1->setText(Chofer);
              widget_PP.Registros_Ind->setItem(filas,1,obj1);
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(Placas);
              widget_PP.Registros_Ind->setItem(filas,2,obj2);
              QTableWidgetItem *obj3 = new QTableWidgetItem;
              obj3->setText(Color);
              widget_PP.Registros_Ind->setItem(filas,3,obj3);
              QTableWidgetItem *obj4 = new QTableWidgetItem;
              obj4->setText(Tipo);
              widget_PP.Registros_Ind->setItem(filas,4,obj4);    
              QTableWidgetItem *obj6 = new QTableWidgetItem;
              obj6->setText(Bruto);
              widget_PP.Registros_Ind->setItem(filas,6,obj6);
              QTableWidgetItem *obj7 = new QTableWidgetItem;
              obj7->setText(Tara);
              widget_PP.Registros_Ind->setItem(filas,7,obj7);
              QTableWidgetItem *obj8 = new QTableWidgetItem;
              obj8->setText(Neto);
              widget_PP.Registros_Ind->setItem(filas,8,obj8);
              */
              QLineEdit *edit0 = new QLineEdit(widget_PP.Registros_Ind);   // FolioNum
              //edit0->setValidator(new QDoubleValidator(1, 2, 2,edit5));   
              edit0->setText(folioNum);
              edit0->setReadOnly(true);
              edit0->setStyleSheet("border-width:0px; padding-left:65px");
              widget_PP.Registros_Ind->setCellWidget(filas,0,edit0);
              
              QLineEdit *edit1 = new QLineEdit(widget_PP.Registros_Ind);   // Chofer
              //edit1->setValidator(new QDoubleValidator(1, 2, 2,edit1));   
              edit1->setText(Chofer);
              edit1->setReadOnly(true);
              edit1->setStyleSheet("border-width:0px; padding-left:45px");
              widget_PP.Registros_Ind->setCellWidget(filas,1,edit1);
              
              QLineEdit *edit2 = new QLineEdit(widget_PP.Registros_Ind);   // Placas
              //edit2->setValidator(new QDoubleValidator(1, 2, 2,edit2));   
              edit2->setText(Placas);
              edit2->setReadOnly(true);
              edit2->setStyleSheet("border-width:0px; padding-left:35px");
              widget_PP.Registros_Ind->setCellWidget(filas,2,edit2);
              
              QLineEdit *edit3 = new QLineEdit(widget_PP.Registros_Ind);   // Color
              //edit3->setValidator(new QDoubleValidator(1, 2, 2,edit3));   
              edit3->setText(Color);
              edit3->setReadOnly(true);
              edit3->setStyleSheet("border-width:0px; padding-left:45px");
              widget_PP.Registros_Ind->setCellWidget(filas,3,edit3);
              
              QLineEdit *edit4 = new QLineEdit(widget_PP.Registros_Ind);   // Tipo
              //edit4->setValidator(new QDoubleValidator(1, 2, 2,edit4));   
              edit4->setText(Tipo);
              edit4->setReadOnly(true);
              edit4->setStyleSheet("border-width:0px; padding-left:45px");
              widget_PP.Registros_Ind->setCellWidget(filas,4,edit4);
              
              QLineEdit *edit5 = new QLineEdit(widget_PP.Registros_Ind);   // Humedad
              edit5->setValidator(new QDoubleValidator(1, 2, 2,edit5));   
              edit5->setText(QString::number(Humedad, 'f', 1));
              edit5->setReadOnly(true);
              edit5->setStyleSheet("border-width:0px; padding-left:70px");
              widget_PP.Registros_Ind->setCellWidget(filas,5,edit5);
              
              QLineEdit *edit6 = new QLineEdit(widget_PP.Registros_Ind);   // Bruto
              edit6->setValidator(new QDoubleValidator(1, 5, 3, edit6));
              edit6->setText(QString::number(Bruto, 'f', 3));
              edit6->setReadOnly(true);
              edit6->setStyleSheet("border-width:0px; padding-left:57px");
              widget_PP.Registros_Ind->setCellWidget(filas,6,edit6);
              
              QLineEdit *edit7 = new QLineEdit(widget_PP.Registros_Ind);   // Tara
              edit7->setValidator(new QDoubleValidator(1, 5, 3, edit7));
              edit7->setText(QString::number(Tara, 'f', 3));
              edit7->setReadOnly(true);
              edit7->setStyleSheet("border-width:0px; padding-left:57px");
              widget_PP.Registros_Ind->setCellWidget(filas,7,edit7);
              
              QLineEdit *edit8 = new QLineEdit(widget_PP.Registros_Ind);   // Neto
              edit8->setValidator(new QDoubleValidator(1, 5, 3, edit8));
              edit8->setText(QString::number(Neto, 'f', 3));
              edit8->setReadOnly(true);
              edit8->setStyleSheet("border-width:0px; padding-left:57px");
              widget_PP.Registros_Ind->setCellWidget(filas,8,edit8);
              
    } else {
          if (info.trimmed() == ","){contador++;}
        }
        
      if( contador >= 5){
        QMessageBox::warning( this, "Error", " No Existe ese Usuario");
     
       }
  } while(prod.next()); 
  
  prod.finish();
  //KillDB();
}

void Silo::RegistroGeneral_CB(){
    QStringList filename = {"ciclo*.db", "Ciclo*.db", "CICLO*.db"};
    QStringList ciclos = buscarArchivos(filename, "Data");
    
    //QSqlQuery reg(QSqlDatabase::database(ciclo_actual()));

    //reg.exec("SELECT * FROM Productores");
    //Log("Registros Generales");
    
    widget_PP.RegGen_Ciclo_CB->clear();
    widget_PP.RegGen_Ciclo_CB->setEditable(false);
    //widget_PP.RegGen_Ciclo_CB->addItem(ciclo_actual());
    
     if (ciclos.size() <= 0){
        Log("RegistroGeneral, No se Pueden Encontrar los archivos: " + filename.at(0));//QString::number(ciclos.size()));
    }
    
    for(int i = 0; i <ciclos.size(); i++){                       // en esencia es un foreach que pone cada ciclo dentro del Combobox
        if (!ciclos.at(i).isEmpty()){
            widget_PP.RegGen_Ciclo_CB->addItem(ciclos.at(i));
            //Log("despues de llamar buscarArchivos dentro de RegistroGeneral = " + QString::number(i) + " " + ciclos.at(i));    
        }
    }
}


void Silo::Tabla_Reg_Generales(QString ComboBox){  // Registro general, muestra el total de todas las boletas X productor
  
    QString Productor;
    auto counter{0}, filas{0};
    float Neto{0.0}, Analizado{110.0}, Secado{20.0}, Cuota_Grano{0.0}, Sanidad{0.0}, Total{50};

    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ComboBox);
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    //Log("TablaRegGen, Antes del query " + ComboBox);
    QSqlQuery rows(QSqlDatabase::database(ComboBox));  // haces la busqueda de boletas
    QSqlQuery Cnf(QSqlDatabase::database("Config.db"));
    // filtrar solo por el nombre y apellido del productor
    // rows selecciona todos los productores
    rows.exec("SELECT b.Prod_Nombre, b.Prod_Apellidos, a.Neto FROM Boletas_Entradas AS a JOIN Productores AS b ON a.Prod_Num=b.Prod_Num ORDER BY b.Prod_Num");
    if(rows.lastError().isValid()){
        Log( "Fallo Lectura Tabla Registros Generales \n" + rows.executedQuery() + "\n" + rows.lastError().text() ); 
    }
    
    Cnf.exec("SELECT * FROM Config");
    if(Cnf.lastError().isValid()){
        Log("No se puede leer el Config");
    }
    
    widget_PP.Registros_General->clear();
    widget_PP.Registros_General->setRowCount(0);
    
    widget_PP.Registros_General->setColumnCount(9);
    widget_PP.Registros_General->horizontalHeader()->hide();
    widget_PP.Registros_General->horizontalHeader()->setDefaultSectionSize(200);
    widget_PP.Registros_General->horizontalHeader()->resizeSection(0,320);
    //widget_PP.Liq_Boletas_Lista->setHorizontalHeaderLabels(list);
    widget_PP.Registros_General->verticalHeader()->hide();
    widget_PP.Registros_General->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    
    //Log( "TablaRegGen dentro del ciclo \n" + ComboBox);
    
    Cnf.first();
    Sanidad = Cnf.value("Sanidad").toFloat();
    Cuota_Grano = Cnf.value("Cuota").toFloat();
    
    rows.first();   // pone el puntero en el primer registor
    do{
            counter++;    // cuenta cada registro, total de registros
        }while(rows.next());
    
    rows.first();   // reinicia los registros
    while(rows.next()){     // este while pone cada productor en una fila cada uno
   /*
        for( int i =0; i<=counter ; ){
            if(rows.value("Prod_Num").toInt() == i+1){
                Neto = Neto + rows.value("Neto").toFloat();
            }
            i++;
        }
  
        //
        //  buscar solo las boletas de cada productor, sumarle los netos de cada uno 
        //  primero se calcula para cada boleta y se van sumando para sacar un total de las boletas y mostarlo por cada productor
        //  tomar el neto de cada boleta y calcular Analizado, Secado, la cuota de Conservacion, Sanidad Vegetal y el total de grano a entregar por productor
        //
        
       rows.first();  //  poner para  
       */
       widget_PP.Registros_General->setRowCount(widget_PP.Registros_General->rowCount() + 1);
       filas = widget_PP.Registros_General->rowCount() - 1;
        
       Productor = rows.value("Prod_Nombre").toString() + " " + rows.value("Prod_Apellidos").toString();
       Neto = rows.value("Neto").toFloat() / 1000;
       
        // Modo Viejo
//              QTableWidgetItem *obj0 = new QTableWidgetItem;   // Productor
//              obj0->setText(Productor);
//              widget_PP.Registros_General->setItem(filas,0,obj0);
//              QTableWidgetItem *obj1 = new QTableWidgetItem;   // Neto
//              obj1->setText(QString::number(Neto, 'f', 2));
//              widget_PP.Registros_General->setItem(filas,1,obj1);
//              QTableWidgetItem *obj2 = new QTableWidgetItem;   // Analizado
//              obj2->setText(QString::number(Analizado, 'f', 3));
//              widget_PP.Registros_General->setItem(filas,2,obj2);
//              QTableWidgetItem *obj3 = new QTableWidgetItem;   // Secado
//              obj3->setText(QString::number(Secado, 'f', 3));
//              widget_PP.Registros_General->setItem(filas,3,obj3);
//              QTableWidgetItem *obj4 = new QTableWidgetItem;   // Cuota Grano
//              obj4->setText(QString::number(Cuota_Grano, 'f', 3));  
//              widget_PP.Registros_General->setItem(filas,4,obj4);
//              QTableWidgetItem *obj5 = new QTableWidgetItem;   // Sanidad vegetal
//              obj5->setText(QString::number(Sanidad, 'f', 3));
//              widget_PP.Registros_General->setItem(filas,5,obj5);    
//              QTableWidgetItem *obj6 = new QTableWidgetItem;   // Total
//              obj6->setText(QString::number(Total, 'f', 3));
//              widget_PP.Registros_General->setItem(filas,6,obj6);           
//              
              QLineEdit *edit0 = new QLineEdit(widget_PP.Registros_General);   // Productor
              //edit0->setValidator(new QDoubleValidator(1, 2, 2,edit5));   
              edit0->setText(Productor);
              edit0->setReadOnly(true);
              edit0->setStyleSheet("border-width:0px; padding-left:20px");
              widget_PP.Registros_General->setCellWidget(filas,0,edit0);
             
              QLineEdit *edit1 = new QLineEdit(widget_PP.Registros_General);   // Neto
              //edit1->setValidator(new QDoubleValidator(1, 2, 2,edit1));   
              edit1->setText(QString::number(Neto, 'f', 3));
              edit1->setReadOnly(true);
              edit1->setStyleSheet("border-width:0px; padding-left:50px");
              widget_PP.Registros_General->setCellWidget(filas,1,edit1);
              
              QLineEdit *edit2 = new QLineEdit(widget_PP.Registros_General);   // Analizado
              //edit2->setValidator(new QDoubleValidator(1, 2, 2,edit2));   
              edit2->setText(QString::number(Analizado, 'f', 3));
              edit2->setReadOnly(true);
              edit2->setStyleSheet("border-width:0px; padding-left:65px");
              widget_PP.Registros_General->setCellWidget(filas,2,edit2);
             
              QLineEdit *edit3 = new QLineEdit(widget_PP.Registros_General);   // Secado
              //edit3->setValidator(new QDoubleValidator(1, 2, 2,edit3));   
              edit3->setText(QString::number(Secado, 'f', 3));
              edit3->setReadOnly(true);
              edit3->setStyleSheet("border-width:0px; padding-left:65px");
              widget_PP.Registros_General->setCellWidget(filas,3,edit3);
              
              QLineEdit *edit4 = new QLineEdit(widget_PP.Registros_General);   // Cuota Grano
              //edit4->setValidator(new QDoubleValidator(1, 2, 2,edit4));   
              edit4->setText(QString::number(Cuota_Grano, 'f', 1));
              edit4->setReadOnly(true);
              edit4->setStyleSheet("border-width:0px; padding-left:65px");
              widget_PP.Registros_General->setCellWidget(filas,4,edit4);
              
              QLineEdit *edit5 = new QLineEdit(widget_PP.Registros_General);   // Sanidad
              //edit5->setValidator(new QDoubleValidator(1, 2, 2,edit5));   
              edit5->setText(QString::number(Sanidad, 'f', 1));
              edit5->setReadOnly(true);
              edit5->setStyleSheet("border-width:0px; padding-left:65px");
              widget_PP.Registros_General->setCellWidget(filas,5,edit5);
              
              QLineEdit *edit6 = new QLineEdit(widget_PP.Registros_General);   // Total
              //edit6->setValidator(new QDoubleValidator(1, 2, 2,edit6));   
              edit6->setText(QString::number(Total, 'f', 3));
              edit6->setReadOnly(true);
              edit6->setStyleSheet("border-width:0px; padding-left:65px");
              widget_PP.Registros_General->setCellWidget(filas,6,edit6);
         
    } 
   /*     
      if( contador >= 5){
        QMessageBox::warning( this, "Error", " No Existe ese Usuario");
     
       }
     */
    rows.finish();
    //KillDB();
}

void Silo::Productores_Lista(){   // Lista de Productores

    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    QSqlQuery registros(QSqlDatabase::database(ciclo_actual()));
    registros.exec("SELECT * FROM Productores ORDER BY Prod_Apellidos ASC"); // primero organizar alphabeticamente por apellidos y luego mostrar en la tabla
    if(registros.lastError().isValid()){
        Log( "Lista de Productores \n" + registros.executedQuery() + "\n" + registros.lastError().text() );
    }
    widget_PP.Productores_Lista->clear();
    widget_PP.Productores_Lista->setColumnCount(1);
    widget_PP.Productores_Lista->setRowCount(0);
    widget_PP.Productores_Lista->horizontalHeader()->hide();
    widget_PP.Productores_Lista->horizontalHeader()->resizeSection(0,700);
    widget_PP.Productores_Lista->verticalHeader()->hide();
    
    while (registros.next()){
       widget_PP.Productores_Lista->setRowCount(widget_PP.Productores_Lista->rowCount() + 1);
       int filas = widget_PP.Productores_Lista->rowCount() - 1;
       QTableWidgetItem *obj0 = new QTableWidgetItem;
       obj0->setText(registros.value("Prod_Apellidos").toString() + ", " + registros.value("Prod_Nombre").toString());
       widget_PP.Productores_Lista->setItem(filas,0,obj0);
    }
    registros.finish();
    //KillDB();
}

//#pragma GCC diagnostic push                         // con esto evitas las notificaciones
//#pragma GCC diagnostic ignored "-Wunused-parameter"
void Silo::mostrar_Produc(int fila, int columna){ // carga la informacion de los productores y la muestra
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    bool correcto = false;
    QSqlQuery reg(QSqlDatabase::database(ciclo_actual()));
    reg.exec("SELECT * FROM Productores ORDER BY Prod_Apellidos ASC"); // orderna alphabeticamente por Apellidos   
    if(reg.lastError().isValid()){
        Log( "Load prod data \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    
    //Log( "fila y columna: " + QString::number(fila) + " " + QString::number(columna) );
    
    QTableWidgetItem* item = widget_PP.Productores_Lista->item(fila,columna);  // item entrega el objeto en fila y columna
    int contador = 0; // evita el bucle infinito
    
    //Log(item->text(), "Antes del ciclo", "Productores");
    
    do {
       
        QString table = reg.value("Prod_Apellidos").toString() + ", " + reg.value("Prod_Nombre").toString(); 
        LogData("Load Prod");
        if (table == item->text()){  // ver cual renglon esta activo y comparararlo con table
         widget_PP.No_Cliente_edit->setText(reg.value("Prod_Num").toString());
        LogData("Productor_Numero -- " + reg.value("Prod_Num").toString()); 
         widget_PP.Nombre_Lista_Prod_edit->setText(reg.value("Prod_Nombre").toString()); 
        LogData("Productor_Nombre -- " + reg.value("Prod_Nombre").toString());        
         widget_PP.Apellidos_Lista_Prod_edit->setText(reg.value("Prod_Apellidos").toString());
        LogData("Apellidos -- " + reg.value("Prod_Apellidos").toString());  
         widget_PP.Direccion_Lista_Prod_edit->setText(reg.value("Prod_Direccion").toString());
        LogData("Direccion -- " + reg.value("Prod_Direccion").toString());
         widget_PP.Ciudad_Lista_Prod_edit->setText(reg.value("Ciudad").toString());
        LogData("Ubicacion -- " + reg.value("Ciudad").toString());
         widget_PP.Predio_Lista_Prod_edit->setText(reg.value("Predio_Nombre").toString());
        LogData("Predio -- " + reg.value("Predio_Nombre").toString());
         widget_PP.Tel_Lista_Prod_edit->setText(reg.value("Telefono").toString());
        LogData("Telefono -- " + reg.value("Telefono").toString());
         widget_PP.Whats_Lista_Prod_edit->setText(reg.value("Whattsapp").toString());
        LogData("Whatsapp -- " + reg.value("Whattsapp").toString());
         widget_PP.Email_Lista_Prod_edit->setText(reg.value("Email").toString());
        LogData("Email -- " + reg.value("Email").toString());
         widget_PP.RFC_Lista_Prod_edit->setText(reg.value("RFCF").toString());
        LogData("RFC -- " + reg.value("RFCF").toString());
        /*
        widget_PP.No_Cliente_Spin->setValue(QVariant(reg.value("Prod_Num")).toInt());
        LogData("Productor_Num -- " + reg.value("Prod_Num").toString());
         widget_PP.No_Acciones_Spin->setValue(QVariant(reg.value("Num_Acciones")).toInt());
        LogData("Acciones -- " + reg.value("Num_Acciones").toString());
        */
        correcto = true;
     }
    else 
     {
        if (table.trimmed() == ","){contador++;}  // trimmed borra los espacios vacios al principio y al final
        reg.next();
     }
    
    if( contador >= 5){
        QMessageBox::warning( this, "Error", " No se encuentra este Productor");
        Log("no se encontro el Productor");
        correcto = true;
    }
    } while (correcto == false);
    reg.finish();
    //KillDB();
}
//#pragma GCC diagnostic pop



void Silo::Compradores_Lista(){  // Lista de compradores
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    QSqlQuery registros(QSqlDatabase::database(ciclo_actual()));
    registros.exec("SELECT * FROM Compradores ORDER BY Razon_Social ASC"); // organizar los compradores por Razon Social
    if(registros.lastError().isValid()){
        Log("Lista de Compradores \n" + registros.executedQuery() + "\n" +registros.lastError().text() );   
    }
    widget_PP.Compradores_Lista->clear();
    widget_PP.Compradores_Lista->setColumnCount(1);
    widget_PP.Compradores_Lista->setRowCount(0);
    widget_PP.Compradores_Lista->horizontalHeader()->hide();
    widget_PP.Compradores_Lista->horizontalHeader()->resizeSection(0,700);
    widget_PP.Compradores_Lista->verticalHeader()->hide();
    
    
    while (registros.next()) {
      widget_PP.Compradores_Lista->setRowCount(widget_PP.Compradores_Lista->rowCount() + 1);
      int filas = widget_PP.Compradores_Lista->rowCount() - 1;
      QTableWidgetItem *obj0 = new QTableWidgetItem;
      obj0->setText(registros.value("Razon_Social").toString());
      widget_PP.Compradores_Lista->setItem(filas,0,obj0);
    }    
    registros.finish();
    //KillDB();
  }

void Silo::mostrar_Compra(int fila, int columna){   // Carga la info de los productores y la muestra
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    bool correcto = false;
    QSqlQuery reg(QSqlDatabase::database(ciclo_actual()));
    reg.exec("SELECT * FROM Compradores ORDER BY Razon_Social ASC"); // orderna alphabeticamente por Apellidos   
    //Log( "fila y columna: " + QString::number(fila) + " " + QString::number(columna) );
    if(reg.lastError().isValid()){
        Log("Load Comp Data \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    QTableWidgetItem* item = widget_PP.Compradores_Lista->item(fila,columna);  // item entrega el objeto en fila y columna
    int contador = 0; // evita el bucle infinito
    
    //Log(item->text(), "Antes del ciclo", "Compradores");
    
    do {
       
        QString table = reg.value("Razon_Social").toString(); 
        LogData("Load Compradores");
        if (table == item->text()){  // ver cual renglon esta activo y comparararlo con table
         widget_PP.RFC_edit->setText(reg.value("RFCM").toString());
        LogData("RFC -- " + reg.value("RFCM").toString());
         widget_PP.Contacto_edit->setText(reg.value("Contacto").toString()); 
        LogData("Contacto -- " + reg.value("Contacto").toString());        
         widget_PP.Razon_Social_edit->setText(reg.value("Razon_Social").toString());
        LogData("Razon_Social -- " + reg.value("Razon_Social").toString());  
         widget_PP.Direccion_edit->setText(reg.value("Direccion").toString());
        LogData("Direccion -- " + reg.value("Direccion").toString());
         widget_PP.Telefono_edit->setText(reg.value("Telefono").toString());
        LogData("Telefono -- " + reg.value("Telefono").toString());
         widget_PP.Whatsapp_edit->setText(reg.value("Whattsapp").toString());
        LogData("Whatsapp -- " + reg.value("Whattsapp").toString());
         widget_PP.Email_edit->setText(reg.value("Email").toString());
        LogData("Email -- " + reg.value("Email").toString());
         widget_PP.Ciudad_edit->setText(reg.value("Ciudad").toString());
        LogData("Ciudad -- " + reg.value("Ciudad").toString());
         widget_PP.Estado_edit->setText(reg.value("Estado").toString());
        LogData("Estado -- " + reg.value("Estado").toString());
         widget_PP.Precio_Ton_edit->setText(reg.value("Precio_Ton").toString());
        LogData("Precio Tonelada -- " + reg.value("Precio_Ton").toString());
        correcto = true;
     }
    else 
     {
        if (table.trimmed() == ","){contador++;}  // trimmed borra los espacios vacios al principio y al final
        reg.next();
     }
    
    if( contador >= 5){
        QMessageBox::warning( this, "Error", " No se encuentra este Comprador");
        Log("no se encontro el Comprador");
        correcto = true;
    }
    } while (correcto == false);
    reg.finish();
    //KillDB();
}



void Silo::RS232(){
    
//    QString data;   // paso la configuracion del puerto por un vector
//    QByteArray dataRead;
//    Serial* serial = new Serial(data);
   // serial(data);
//    serial->USB_Serial.open();
//    serial->USB_Serial.write("lo que voy a mandar al puerto");   // este escribe al puerto
//    dataRead = serial->USB_Serial.readAll(); //este lee la info del puerto
//    serial->USB_Serial.close();
    // cuota de conservacion de grano, secado total , cuota del patronato y del modulo (si aplica)
}

void Silo::Liquidaciones_CB_Prod(){  // comboBox de los productores
    int sice{0};
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    widget_PP.Liq_Prod_CB->clear();
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery reg(QSqlDatabase::database(ciclo_actual())); // usar buscarArchivos() para usar la db seleccionada en el combobox
    reg.exec("SELECT Prod_Apellidos, Prod_Nombre FROM Productores GROUP BY Prod_Num");
    if(reg.lastError().isValid()){
         Log( "No se puede leer la tabla Productores, en Liquidaciones Productor \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    
    reg.first();
    do{
        sice++;
    }while(reg.next());
    
    reg.first();
    for(int i = 0; i<sice; ){
       widget_PP.Liq_Prod_CB->addItem(reg.value("Prod_Apellidos").toString() + ", " + reg.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
       reg.next();
       i++;
    }
    reg.finish(); 
    //KillDB();
}

void Silo::Liquidaciones_CB_Comp(){   // llenado del CB productor y comprador en Liquidaciones

    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
  
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    
    //  Llenado de Comprador en Liquidaciones
    QSqlQuery Comp(QSqlDatabase::database(ciclo_actual()));  // haces la busqueda de compradores
    Comp.exec("SELECT Razon_Social FROM Compradores GROUP BY Razon_Social");
    if(Comp.lastError().isValid()){
        Log("Error en Compradores \n" + Comp.lastQuery() + "\n" + Comp.lastError().text() );
    }
    
    Comp.first();
    widget_PP.Liq_Comp_CB->clear();
    do{
        if(Comp.value("Razon_Social").toString() == ""){
          
        }else{
            widget_PP.Liq_Comp_CB->addItem(Comp.value("Razon_Social").toString());
        }
    }while(Comp.next());
    Comp.finish();
    //KillDB();
}

void Silo::Liquidaciones_Data(QString ComboBox){   // Recuadro Boletas dentro de Liquidacion
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    QString info, Folio, Fecha;
    float Tons;
    std::string date;
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    widget_PP.Liq_Ciclo_edit->setText(ciclo_actual());
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    //Log("Liquidaciones, Antes del query " + ComboBox);
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));  // haces la busqueda de boletas
    
    if(prod.lastError().isValid()){
        Log("Error al buscar en Liquidaciones" + prod.lastQuery() + "\n" + prod.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("Error de Lectura de Db");
        MBox.exec();
    }
   
    prod.exec("SELECT * FROM Boletas_Entradas AS a JOIN Productores AS b ON a.Prod_Num=b.Prod_Num GROUP BY Folio ORDER BY Folio");
    if(prod.lastError().isValid()){
        Log( "Lectura fallida \n" + prod.executedQuery() + "\n" + prod.lastError().text() ); 
        MBox.setWindowTitle("Error");
        MBox.setText("Error de Lectura Tablas");
        MBox.exec();
    }
    //***************** borrar los valores en pantalla****************
    widget_PP.Liq_Boletas_Lista->clear();
    widget_PP.Liq_Boletas_Lista->setRowCount(0);
    widget_PP.Liq_Boletas_Lista->setColumnCount(3);
    widget_PP.Liq_Boletas_Lista->horizontalHeader()->hide();
    widget_PP.Liq_Boletas_Lista->horizontalHeader()->setDefaultSectionSize(170);
    widget_PP.Productores_Lista->horizontalHeader()->resizeSection(0,200);
    widget_PP.Productores_Lista->horizontalHeader()->resizeSection(1,400);
    //widget_PP.Liq_Boletas_Lista->setHorizontalHeaderLabels(list);
    widget_PP.Liq_Boletas_Lista->verticalHeader()->hide();
    widget_PP.Liq_Boletas_Lista->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    //Log( "TablaRegGen dentro del ciclo \n" + ComboBox);
  
    do{
        info = prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString();
        //if (info == ", "){
        //    Log( "Liquidaciones\n" + info + "\n" + ComboBox);
        //}
        
        if(ComboBox == info){
    
              //Log ("dentro del while");
              widget_PP.Liq_Boletas_Lista->setRowCount(widget_PP.Liq_Boletas_Lista->rowCount() + 1);
              int filas = widget_PP.Liq_Boletas_Lista->rowCount() - 1;
              
              Folio = prod.value("Folio").toString();
              Fecha = prod.value("Fecha").toString();
              Tons = prod.value("Neto").toInt();
              date = Fecha.toStdString();
              
              Tons = Tons / 1000;
            // tomar la hora y parsearla
            //std::string day(date.begin() + DAY_OFFSET, date.begin() + DAY_OFFSET + DAY_LENGTH); // el primer argumento pone el cursor al principio de donde quiero leer
              std::string month(date.begin() + MONTH_OFFSET, date.begin() + MONTH_OFFSET + MONTH_LENGTH);  // el segundo argumento le dices asta que direccion de memoria 
              std::string dayNumber(date.begin() + DAY_NUMBER_OFFSET, date.begin() + DAY_NUMBER_OFFSET + DAY_NUMBER_LENGTH); // vas a leer
              std::string hours(date.begin() + HOUR_OFFSET, date.begin() + HOUR_OFFSET + HOUR_LENGTH); // inicializacion c++11/14
            //std::string year(Hora.begin() + YEAR_OFFSET, Hora.begin() + YEAR_OFFSET + YEAR_LENGTH); 
              Fecha = QString::fromStdString(dayNumber) + " " + QString::fromStdString(month) + " " + QString::fromStdString(hours);
              //Log("Valores boletas_Entradas: " + Fecha + " ....... " + Tons + " ...... " + filas);
              
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(Folio);
              widget_PP.Liq_Boletas_Lista->setItem(filas,0,obj0);
              
              QTableWidgetItem *obj1 = new QTableWidgetItem; 
              obj1->setText(Fecha);
              widget_PP.Liq_Boletas_Lista->setItem(filas,1,obj1);
              
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(QString::number(Tons, 'f', 3));
              widget_PP.Liq_Boletas_Lista->setItem(filas,2,obj2);
              
//              si pongo en modo Qlineedit se quiebra liquidaciones
//               QLineEdit *edit0 = new QLineEdit(widget_PP.Liq_Boletas_Lista);   // FolioNum
//              //edit0->setValidator(new QDoubleValidator(1, 2, 2,edit5));   
//              edit0->setText(Folio);
//              edit0->setStyleSheet("border-width:0px; padding-left:65px");
//              widget_PP.Liq_Boletas_Lista->setCellWidget(filas,0,edit0);
              
        }         
    }while(prod.next()); 
    widget_PP.Liq_Boletas_Lista->sortItems(0,Qt::AscendingOrder);
    prod.finish();
    //KillDB();
}

void Silo::setColortoRow(int row, int col, QColor color){
    // revisar para poner el color a las celdas   https://stackoverflow.com/questions/43512041/qtablewidget-change-the-row-color/43513116
    
    QPalette p = widget_PP.Liq_Boletas_Lista->palette();
    p.setColor(QPalette::Background,Qt::transparent);
    widget_PP.Liq_Boletas_Lista->setPalette(p);
    widget_PP.Liq_Boletas_Lista->item(row, col)->setBackgroundColor(color);
}


float Silo::comprador_Precio(){
    QString comp_CB;
    float Precio_Ton{0};
    int sice{0};
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery Comp(QSqlDatabase::database(ciclo_actual()));      // query to table Comprador
    Comp.exec("SELECT Razon_Social, Precio_Ton FROM Compradores GROUP By Razon_Social");
    if (Comp.lastError().isValid()){
        Log( "Error en el precio del Comprador \n" + Comp.executedQuery() + "\n" + Comp.lastError().text());
    }
    
    Comp.first();
    do{
        sice++;
    }while(Comp.next());
    
    comp_CB = widget_PP.Liq_Comp_CB->currentText();  // get the current Buyer/Comprador
    Comp.first();
    for(int i{0} ; i<sice; ){
       //Log(comp_CB + "..." + Comp.value("Razon_Social").toString());
       if (comp_CB == Comp.value("Razon_Social").toString()){
           Precio_Ton = Comp.value("Precio_Ton").toFloat();
           break;
       }else{
             Comp.next();
       }
      i++;  
    }
    Comp.finish();
    //KillDB();
    return Precio_Ton;
}


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
void Silo::Liquidaciones(int row, int col){  // funcion principal, toma la info de la boleta dentro de Liquidaciones y la desglosa
    bool Ok;
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    float DeduX_norma, Humd_Kilos, Merma_1Ciento;
    float Total_Deduc, Peso_Anali, Total_Pagar, Secado;
    float Iva_Secado, Reten_Total, Tarifa, Precio_Ton;
    float Cuota_Cons, Sanidad;  // las cuotas viene de la DB Config.db
    float Bruto, Tara, Neto;
    int rango{0};
    //QString comp_CB;
    
    bool correcto = false;
    //bool correcto_Hum = false;
    //bool correcto_Tar = false;
    QHash<int, float> HumSec;
    float it = 14.1;
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");   // creates connection to database
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    
    QSqlQuery reg(QSqlDatabase::database(ciclo_actual()));          // query ciclo actual
    QSqlQuery Hmd(QSqlDatabase::database("Humedad_Secado.db"));     // query to Humedad y Secado
    QSqlQuery Cnf(QSqlDatabase::database("Config.db"));             // query to Config
   
    QTableWidgetItem* item = widget_PP.Liq_Boletas_Lista->item(row,0);  // item deliver the row and col for the object
    setColortoRow(row, 0, QColor(248,64,107,255));   // color rojo
    //setColortoRow(row, 0, QColor(45,234,103,255));   // color verde
    int contador = 0; // stop the infinite loop
    
    for( int i = 0; i<160 ; ){   
        HumSec.insert(i, it);
        it = it + 0.1;
        i = i + 1;
    }
    
    reg.exec("SELECT * FROM Boletas_Entradas AS a JOIN Productores AS b ON a.Prod_Num=b.Prod_Num ORDER BY Folio"); // orderna alphabeticamente por Apellidos   
    if(reg.lastError().isValid()){
        Log( "Error Liquidaciones data \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    reg.first();
    Hmd.first();
    Cnf.first();
    
    do {
        QString table = reg.value("Folio").toString(); 
        //Log("Valor de Folio dentro del Do while:  " + table );
        if (table == item->text()){  // ver cual renglon esta activo y comparararlo con table
            //Log("Dentro del If en Liquidaciones_Data \n" + table + "\n"+ item->text());
            /*   Calculo Excedentes, ver si se queda, revisar la tabla de contratos
            if(reg.value("Sorgo_Contrato").toFloat() < reg.value("Sorgo_Entregado").toFloat() ){
                Tons_Exced = reg.value("Sorgo_Entregado").toFloat() - reg.value("Sorgo_Contrato").toFloat() ;
            }else{
                Tons_Exced = 0.0;
            }
            */
            // Calculo Deducciones
            ////////////////// Porcentaje /////////////////////////////
            Hmd.exec("SELECT * FROM Kilos");    // seleccionar las tablas de humedad
            if(Hmd.lastError().isValid()){
                Log("Error de Kilos \n" + Hmd.executedQuery() + "\n" + Hmd.lastError().text());
            }
            Hmd.first();
            
            for(int i = 0 ; i<160;){
                if(reg.value("Humedad").toFloat() == Hmd.value("Porcentaje").toFloat()){  // compares decimal values for Humidity
                    Humd_Kilos = Hmd.value("Kgs_Ton").toFloat();  // Kilos a restar por Ton
                    //Log( "Kilos a restar: " + QString::number(Humd_Kilos, 'f', 2));
                    break;//correcto_Hum = true;
                }
                if (reg.value("Humedad").toFloat() > 30.0){
                    Log("Error la humedad es mayor a 30.0");
                    return;
                }
                //Log("Dentro de Kilos X Humedad \nPorcentaje: " + QString::number(Hmd.value("Porcentaje").toFloat(), 'f', 2) + " ,Humedad: " + QString::number(reg.value("Humedad").toFloat(), 'f', 2 ));
                Hmd.next();
                i++;
            }
//            
//            do{    // Obtener kilos X Humedad
//                if(reg.value("Humedad").toFloat() == Hmd.value("Porcentaje").toFloat()){  // compares decimal values for Humidity
//                    Humd_Kilos = Hmd.value("Kgs_Ton").toFloat();  // Kilos a restar por Ton
//                    break;//correcto_Hum = true;
//                }
//                if (reg.value("Humedad").toFloat() > 30.0){
//                    Log("Error la humedad es mayor a 30.0");
//                    return;
//                }
//                Log("Dentro de Kilos X Humedad " + QString::number(Hmd.value("Porcentaje").toFloat(), 'f', 3));
//                Hmd.next();
//            } while (Hmd.last() == false);
            
            /////////////////////  RANGO   /////////////////////////////
            Hmd.exec("SELECT * FROM Secado");
            if (Hmd.lastError().isValid()){
                Log("Error de Secado \n" + Hmd.executedQuery() + "\n" + Hmd.lastError().text() );
            }
                // Especifico el rango, ver si se puede hacer mejor
            if (reg.value("Humedad").toFloat() > 14.0 && reg.value("Humedad").toFloat() <15.1){
                rango = 0;
            }
            if (reg.value("Humedad").toFloat() > 15.0 && reg.value("Humedad").toFloat() <16.1){
                rango = 1;
            } 
            if (reg.value("Humedad").toFloat() > 16.0 && reg.value("Humedad").toFloat() <17.1){
                rango = 2;
            } 
            if (reg.value("Humedad").toFloat() > 17.0 && reg.value("Humedad").toFloat() <18.1){
                rango = 3;
            } 
            if (reg.value("Humedad").toFloat() > 18.0 && reg.value("Humedad").toFloat() <19.1){
                rango = 4;
            } 
            if (reg.value("Humedad").toFloat() > 19.0 && reg.value("Humedad").toFloat() <20.1){
                rango = 5;
            } 
            if (reg.value("Humedad").toFloat() > 20.0 && reg.value("Humedad").toFloat() <21.1){
                rango = 6;
            } 
            if (reg.value("Humedad").toFloat() > 21.0 && reg.value("Humedad").toFloat() <22.1){
                rango = 7;
            }
            if (reg.value("Humedad").toFloat() > 22.0 && reg.value("Humedad").toFloat() <23.1){
                rango = 8;
            } 
            if (reg.value("Humedad").toFloat() > 23.0 && reg.value("Humedad").toFloat() <24.1){
                rango = 9;
            } 
            if (reg.value("Humedad").toFloat() > 24.0 && reg.value("Humedad").toFloat() <25.1){
                rango = 10;
            } 
            if (reg.value("Humedad").toFloat() > 25.0 && reg.value("Humedad").toFloat() <26.1){
                rango = 11;
            }
            if (reg.value("Humedad").toFloat() > 26.0 && reg.value("Humedad").toFloat() <27.1){
                rango = 12;
            } 
            if (reg.value("Humedad").toFloat() > 27.0 && reg.value("Humedad").toFloat() <28.1){
                rango = 13;
            } 
            if (reg.value("Humedad").toFloat() > 28.0 && reg.value("Humedad").toFloat() <29.1){
                rango = 14;
            } 
            if (reg.value("Humedad").toFloat() > 29.0 && reg.value("Humedad").toFloat() <30.1){
                rango = 15;
            }
            
            Hmd.first();
            
            for (int i = 0; i<16 ; ){
                if(rango == Hmd.value("Rango").toInt() ){  // usar los index de la tabla  0..15, no puede ser comparacion directab
                    Tarifa = Hmd.value("Tarifa").toFloat();
                    //Log("Tarifa: " + QString::number(Hmd.value("Tarifa").toFloat(), 'f', 2) );
                    break;  //correcto_Tar = true;
                }
                if (reg.value("Humedad").toFloat() > 30.0){   // Manejo de errores Humedad
                    Log("error el valor de humedad es mayor a 30.0 " + QString::number(reg.value("Humedad").toFloat()));
                    MBox.setWindowTitle("Error de Humedad");
                    MBox.setText("La humedad del sorgo no puede ser mayor a 30.0");
                    MBox.exec();
                    Tarifa = 0.0;
                    return;
                    //correcto_Tar == true;
                }
                //Log("Dentro de Tarifa X Humedad \nRango: " + QString::number(rango) + " , " + QString::number(Hmd.value("Rango").toInt()));
                Hmd.next();
                i++;
            }
            
//            do {// Obtener Tarifa x Humedad
//                if(rango == Hmd.value("Rango").toInt() ){  // usar los index de la tabla  0..15, no puede ser comparacion directab
//                    Tarifa = Hmd.value("Tarifa").toFloat();
//                    break;  //correcto_Tar = true;
//                }else{
//                    Hmd.next();
//                }
//                if (reg.value("Humedad").toFloat() > 30.0){   // Manejo de errores Humedad
//                    Log("error el valor de humedad es mayor a 30.0 " + QString::number(reg.value("Humedad").toFloat()));
//                    MBox.setWindowTitle("Error de Humedad");
//                    MBox.setText("La humedad del sorgo no puede ser mayor a 30.0");
//                    MBox.exec();
//                    Tarifa = 0.0;
//                    return;
//                    //correcto_Tar == true;
//                }
//                //Log("Dentro de Tarifa X Humedad");
//            } while( Hmd.last() == false);   // correcto_Tar == true
            ///////////////////////////////////////////////////////////
            //  1000kgs = 1 Ton
            //KilosxTon = Humd_Kilos / 1000; // los kilos a restar por Tonelada 
            DeduX_norma = (Humd_Kilos / 1000) * reg.value("Neto").toFloat(); // Kilos a restar al neto
            //Log( "Kilos a restar: " + QString::number(Humd_Kilos, 'f', 3) + " ,Neto: " + reg.value("Neto").toString() + " ,Deducciones: " + QString::number(DeduX_norma, 'f', 3) );
            Merma_1Ciento = (reg.value("Neto").toFloat() - DeduX_norma) * 0.01;  // 1% merma de la boleta
            Total_Deduc = DeduX_norma + Merma_1Ciento;  // total de deducciones
            Peso_Anali = (reg.value("Neto").toFloat() - Total_Deduc) / 1000 ;   // converts from Kgs to Ton
            
            // Calculo Retenciones de Liquidacion
            Cnf.exec("SELECT * FROM Config");
            if(Cnf.lastError().isValid()){
                Log("Error de Config \n" + Cnf.executedQuery() + "\n" + Cnf.lastError().text());
            }
            Cnf.first();
            Cuota_Cons = Cnf.value("Cuota").toFloat();
            Sanidad = Cnf.value("Sanidad").toFloat();  // estos valores viene la DB Config.db, hacerla al iniciar el programa
            //Log("Cuota Conservacion: " + QString::number(Cuota_Cons, 'f', 2) + " ,Sanidad:" + QString::number(Sanidad, 'f', 2));
            //  Subtotal y total
            Precio_Ton = comprador_Precio();
            
            if (Precio_Ton <1){
                MBox.setWindowTitle("Error");
                MBox.setText("El precio x Tonelada esta vacio, favor de actualizarlo");
                MBox.exec();
                Precio_Ton = 0.0;
                return;
            } else {   
                Total_Pagar = Peso_Anali * Precio_Ton;
                widget_PP.Liq_Total_PrecioTon_edit->setText(QString::number(Precio_Ton, 'f', 2));
            }
            
            Secado = (Tarifa / 1000) * reg.value("Neto").toFloat();   
            Iva_Secado = Secado * 0.16;
            Reten_Total = Cuota_Cons + Sanidad + Secado + Iva_Secado;  // total de retenciones,  ver donde va
            
            Bruto = reg.value("Bruto").toFloat() / 1000;  // converts from Kgs to Tons
            Tara = reg.value("Tara").toFloat() / 1000;
            Neto = reg.value("Neto").toFloat() / 1000;
            
            //Info General Boleta
            widget_PP.Liq_Prod_Info_edit->setText(reg.value("Prod_Nombre").toString() + " " + reg.value("Prod_Apellidos").toString());         
            widget_PP.Liq_NoProd_edit->setText(reg.value("Prod_Num").toString());
            widget_PP.Liq_Proce_Info_edit->setText(reg.value("Procedencia").toString());              
            widget_PP.Liq_Vehi_Info_edit->setText(reg.value("Tipo").toString());            
            widget_PP.Liq_Placas_Info_edit->setText(reg.value("Placas").toString());        
            widget_PP.Liq_Chofer_Info_edit->setText(reg.value("Chofer_Nombre").toString() + " " + reg.value("Chofer_Apellidos").toString());        
            widget_PP.Liq_Fecha_Info_edit->setText(reg.value("Fecha").toString());        
            widget_PP.Liq_Folio_Info_edit->setText(reg.value("Folio").toString());       
            widget_PP.Liq_Bruto_Info_edit->setText(QString::number(Bruto, 'f', 3) );            
            widget_PP.Liq_Tara_Info_edit->setText(QString::number(Tara, 'f', 3) );
            widget_PP.Liq_Neto_Info_edit->setText(QString::number(Neto, 'f', 3) );
            widget_PP.Liq_Dedc_Humedad_edit->setText(reg.value("Humedad").toString());
            //Excedentes, revisar si se quedan o se elimina
            //widget_PP.Liq_Excd_Derecho_edit->setText(reg.value("Sorgo_Contrato").toString());      // Tons con derecho
            //widget_PP.Liq_Excd_Entrega_edit->setText(reg.value("Sorgo_Entregado").toString());      // Tons Entregadas
            //widget_PP.Liq_Excd_Excede_edit->setText(QString::number(Tons_Exced, 'f', 3));       //  tons Excentes
            //Retenciones de Liquidacion
            widget_PP.Liq_Reten_ConsGrano_edit->setText(QString::number(Cuota_Cons, 'f', 2));   // Cuota Conservacion de Grano  viene de las opciones
            widget_PP.Liq_Reten_Secado_edit->setText(QString::number(Secado, 'f', 2));      //  Cuota por secado            
            widget_PP.Liq_Reten_IvaSecado_edit->setText(QString::number(Iva_Secado, 'f', 2));
            widget_PP.Liq_Reten_Sanidad_edit->setText(QString::number(Sanidad, 'f', 2));     // sanidad vegetal              vienede las opciones
            widget_PP.Liq_Reten_Total_edit->setText(QString::number(Reten_Total, 'f', 2));       // Total de retenciones
            // Deducciones
            widget_PP.Liq_Dedc_Deducciones_edit->setText(QString::number(DeduX_norma, 'f', 2));      // Deducciones normas Kgs
            widget_PP.Liq_Dedc_Merma_edit->setText(QString::number(Merma_1Ciento, 'f', 2));         // prevencion merma
            //Totales
            widget_PP.Liq_Total_PrecioTon_edit->setText(QString::number(Precio_Ton, 'f', 2));
            widget_PP.Liq_Total_Analizado_edit->setText(QString::number(Peso_Anali, 'f', 2));     // Peso Analizado   Revisar cambie el nombre
            widget_PP.Liq_Total_Pagar_edit->setText(QString::number(Total_Pagar , 'f', 2));
        correcto = true;
     }
    else 
     {
        if (table.trimmed() == ","){contador++;}  // trimmed borra los espacios vacios al principio y al final
        reg.next();
     }
    
    if( contador >= 5){
        QMessageBox::warning( this, "Error", " No se encuentra este Productor");
        Log("no se encontro el Productor");
        correcto = true;
    }
       // Log("Dentro del While principal Liquidaciones Data");
    } while (correcto == false);
    reg.finish();
    Hmd.finish();
    Cnf.finish();
    //KillDB();
    //KillDB("Humedad_Secado.db");
    //KillDB("Config.db");
}

void Silo::Popup_DrynWet_CB1(){  // Primera tabla de humedad
    widget_PP.HumSec_CB1->clear();
    for ( float it = 14.0; it <=25.9 ; ){
        it = it + 0.1;
        widget_PP.HumSec_CB1->addItem(QString::number( it, 'f', 1));
    }
    widget_PP.HumSec_CB1_edit->setValidator(new QDoubleValidator(0, 1000, 2, this));
    
    //QLocale mexico(QLocale::Spanish, QLocale::Mexico);
    //widget_PP.HumSec_CB1_edit->setLocale(mexico);
}

void Silo::Popup_DrynWet_CB2(){   // Segunda Tabla de Humedad
    widget_PP.HumSec_CB2->clear();
    for ( float it = 26.0; it <=30.1 ; ){
        widget_PP.HumSec_CB2->addItem(QString::number( it, 'f', 1));
        it = it + 0.1;
    }
    widget_PP.HumSec_CB2_edit->setValidator(new QDoubleValidator(0, 1000, 2, this));
}
 
void Silo::Popup_DrynWet_CB3(){   // Tarifas de Secado
    widget_PP.HumSec_CB3->clear();
    for ( float it = 14.1; it <30.1 ; ){
        widget_PP.HumSec_CB3->addItem(QString::number( it, 'f', 1));
         it = it + 1;
    }
    widget_PP.HumSec_CB3_edit->setValidator(new QDoubleValidator(0, 1000, 2, this));  // estipula el rango y los decimales que puede aceptar el Qlineedit
}

//#pragma GCC diagnostic pop

void Silo::TablasDeduc1(){   // updates the table Kilos
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    int index = widget_PP.HumSec_CB1->currentIndex();
    QString text =widget_PP.HumSec_CB1_edit->text();
    QHash<int, float> HumSec;
    float it = 14.1;
    
    for( int i = 0; i<119 ; ){
        HumSec.insert(i, it);
        it = it + 0.1;
        i = i + 1;
    }
    
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");
    QSqlQuery Kgs_Ton(QSqlDatabase::database("Humedad_Secado.db"));
    // actuliza los valores de la tabla, siempre usar el WHERE
    Kgs_Ton.prepare("UPDATE Kilos SET Kgs_Ton = :Kgs WHERE Porcentaje = :Porctg");
    Kgs_Ton.bindValue(":Kgs", text); 
    Kgs_Ton.bindValue(":Porctg", QString::number(HumSec.value(index), 'f', 2)); 
    Kgs_Ton.exec();
    if(Kgs_Ton.lastError().isValid()){
        Log("No se pudo guardar el valor " + QString::number(index) +" en Kgs_Ton: " + text + "\n" +Kgs_Ton.lastQuery() + "\n" + Kgs_Ton.lastError().text());
    }
    
    if (index <0 ){
        Log("Error el combox esta vacio, TablasDeduc");
    }
    
    
    if (index >= 0 && index < 20){  // de 14.1 a 16.0
        switch (index){
            case 0:
                widget_PP.HumSec_val141->setText(text);  // 0 pesos a descontar
                break;
            case 1:
                widget_PP.HumSec_val142->setText(text);
                break;
            case 2:
                widget_PP.HumSec_val143->setText(text);
                break;
            case 3:
                widget_PP.HumSec_val144->setText(text);
                break;
            case 4:
                widget_PP.HumSec_val145->setText(text);
                break;
            case 5:
                widget_PP.HumSec_val146->setText(text);
                break;
            case 6:
                widget_PP.HumSec_val147->setText(text);
                break;
            case 7:
                widget_PP.HumSec_val148->setText(text);
                break;
            case 8:
                widget_PP.HumSec_val149->setText(text);
                break;
            case 9:
                widget_PP.HumSec_val150->setText(text);
                break;
            case 10:
                widget_PP.HumSec_val151->setText(text);
                break;
            case 11:
                widget_PP.HumSec_val152->setText(text);
                break;
            case 12:
                widget_PP.HumSec_val153->setText(text);
                break;
            case 13:
                widget_PP.HumSec_val154->setText(text);
                break;
            case 14:
                widget_PP.HumSec_val155->setText(text);
                break;
            case 15:
                widget_PP.HumSec_val156->setText(text);
                break;
            case 16:
                widget_PP.HumSec_val157->setText(text);
                break;
            case 17:
                widget_PP.HumSec_val158->setText(text);
                break;
            case 18:
                widget_PP.HumSec_val159->setText(text);
                break;
            case 19:
                widget_PP.HumSec_val160->setText(text);
                break;
        }
    }
    
    if (index >= 20 && index < 40){  // de 16.1 a 18
        switch (index){
            case 20:
                widget_PP.HumSec_val161->setText(text);
                break;
            case 21:
                widget_PP.HumSec_val162->setText(text);
                break;
            case 22:
                widget_PP.HumSec_val163->setText(text);
                break;
            case 23:
                widget_PP.HumSec_val164->setText(text);
                break;
            case 24:
                widget_PP.HumSec_val165->setText(text);
                break;
            case 25:
                widget_PP.HumSec_val166->setText(text);
                break;
            case 26:
                widget_PP.HumSec_val167->setText(text);
                break;
            case 27:
                widget_PP.HumSec_val168->setText(text);
                break;
            case 28:
                widget_PP.HumSec_val169->setText(text);
                break;
            case 29:
                widget_PP.HumSec_val170->setText(text);
                break;
            case 30:
                widget_PP.HumSec_val171->setText(text);
                break;
            case 31:
                widget_PP.HumSec_val172->setText(text);
                break;
            case 32:
                widget_PP.HumSec_val173->setText(text);
                break;
            case 33:
                widget_PP.HumSec_val174->setText(text);
                break;
            case 34:
                widget_PP.HumSec_val175->setText(text);
                break;
            case 35:
                widget_PP.HumSec_val176->setText(text);
                break;
            case 36:
                widget_PP.HumSec_val177->setText(text);
                break;
            case 37:
                widget_PP.HumSec_val178->setText(text);
                break;
            case 38:
                widget_PP.HumSec_val179->setText(text);
                break;
            case 39:
                widget_PP.HumSec_val180->setText(text);
                break;
        }
    }
    
    if (index >= 40 && index < 60){  // de 18.1 a 20
        switch (index){
            case 40:
                widget_PP.HumSec_val181->setText(text);
                break;
            case 41:
                widget_PP.HumSec_val182->setText(text);
                break;
            case 42:
                widget_PP.HumSec_val183->setText(text);
                break;
            case 43:
                widget_PP.HumSec_val184->setText(text);
                break;
            case 44:
                widget_PP.HumSec_val185->setText(text);
                break;
            case 45:
                widget_PP.HumSec_val186->setText(text);
                break;
            case 46:
                widget_PP.HumSec_val187->setText(text);
                break;
            case 47:
                widget_PP.HumSec_val188->setText(text);
                break;
            case 48:
                widget_PP.HumSec_val189->setText(text);
                break;
            case 49:
                widget_PP.HumSec_val190->setText(text);
                break;
            case 50:
                widget_PP.HumSec_val191->setText(text);
                break;
            case 51:
                widget_PP.HumSec_val192->setText(text);
                break;
            case 52:
                widget_PP.HumSec_val193->setText(text);
                break;
            case 53:
                widget_PP.HumSec_val194->setText(text);
                break;
            case 54:
                widget_PP.HumSec_val195->setText(text);
                break;
            case 55:
                widget_PP.HumSec_val196->setText(text);
                break;
            case 56:
                widget_PP.HumSec_val197->setText(text);
                break;
            case 57:
                widget_PP.HumSec_val198->setText(text);
                break;
            case 58:
                widget_PP.HumSec_val199->setText(text);
                break;
            case 59:
                widget_PP.HumSec_val200->setText(text);
                break;
        }
    }
    
    if (index >= 60 && index < 80){  // de 20.1 a 22.0
        switch (index){
            case 60:
                widget_PP.HumSec_val201->setText(text);
                break;
            case 61:
                widget_PP.HumSec_val202->setText(text);
                break;
            case 62:
                widget_PP.HumSec_val203->setText(text);
                break;
            case 63:
                widget_PP.HumSec_val204->setText(text);
                break;
            case 64:
                widget_PP.HumSec_val205->setText(text);
                break;
            case 65:
                widget_PP.HumSec_val206->setText(text);
                break;
            case 66:
                widget_PP.HumSec_val207->setText(text);
                break;
            case 67:
                widget_PP.HumSec_val208->setText(text);
                break;
            case 68:
                widget_PP.HumSec_val209->setText(text);
                break;
            case 69:
                widget_PP.HumSec_val210->setText(text);
                break;
            case 70:
                widget_PP.HumSec_val211->setText(text);
                break;
            case 71:
                widget_PP.HumSec_val212->setText(text);
                break;
            case 72:
                widget_PP.HumSec_val213->setText(text);
                break;
            case 73:
                widget_PP.HumSec_val214->setText(text);
                break;
            case 74:
                widget_PP.HumSec_val215->setText(text);
                break;
            case 75:
                widget_PP.HumSec_val216->setText(text);
                break;
            case 76:
                widget_PP.HumSec_val217->setText(text);
                break;
            case 77:
                widget_PP.HumSec_val218->setText(text);
                break;
            case 78:
                widget_PP.HumSec_val219->setText(text);
                break;
            case 79:
                widget_PP.HumSec_val220->setText(text);
                break;
        }
    }
    
    if (index >= 80 && index < 100){  // de 22.1 a 24.0
        switch (index){
            case 80:
                widget_PP.HumSec_val221->setText(text);
                break;
            case 81:
                widget_PP.HumSec_val222->setText(text);
                break;
            case 82:
                widget_PP.HumSec_val223->setText(text);
                break;
            case 83:
                widget_PP.HumSec_val224->setText(text);
                break;
            case 84:
                widget_PP.HumSec_val225->setText(text);
                break;
            case 85:
                widget_PP.HumSec_val226->setText(text);
                break;
            case 86:
                widget_PP.HumSec_val227->setText(text);
                break;
            case 87:
                widget_PP.HumSec_val228->setText(text);
                break;
            case 88:
                widget_PP.HumSec_val229->setText(text);
                break;
            case 89:
                widget_PP.HumSec_val230->setText(text);
                break;
            case 90:
                widget_PP.HumSec_val231->setText(text);
                break;
            case 91:
                widget_PP.HumSec_val232->setText(text);
                break;
            case 92:
                widget_PP.HumSec_val233->setText(text);
                break;
            case 93:
                widget_PP.HumSec_val234->setText(text);
                break;
            case 94:
                widget_PP.HumSec_val235->setText(text);
                break;
            case 95:
                widget_PP.HumSec_val236->setText(text);
                break;
            case 96:
                widget_PP.HumSec_val237->setText(text);
                break;
            case 97:
                widget_PP.HumSec_val238->setText(text);
                break;
            case 98:
                widget_PP.HumSec_val239->setText(text);
                break;
            case 99:
                widget_PP.HumSec_val240->setText(text);
                break;
        }
    }
    
    if (index >= 100 && index < 119){  // de 24.1 a 26.0
        switch (index){
            case 100:
                widget_PP.HumSec_val241->setText(text);
                break;
            case 101:
                widget_PP.HumSec_val242->setText(text);
                break;
            case 102:
                widget_PP.HumSec_val243->setText(text);
                break;
            case 103:
                widget_PP.HumSec_val244->setText(text);
                break;
            case 104:
                widget_PP.HumSec_val245->setText(text);
                break;
            case 105:
                widget_PP.HumSec_val246->setText(text);
                break;
            case 106:
                widget_PP.HumSec_val247->setText(text);
                break;
            case 107:
                widget_PP.HumSec_val248->setText(text);
                break;
            case 108:
                widget_PP.HumSec_val249->setText(text);
                break;
            case 109:
                widget_PP.HumSec_val250->setText(text);
                break;
            case 110:
                widget_PP.HumSec_val251->setText(text);
                break;
            case 111:
                widget_PP.HumSec_val252->setText(text);
                break;
            case 112:
                widget_PP.HumSec_val253->setText(text);
                break;
            case 113:
                widget_PP.HumSec_val254->setText(text);
                break;
            case 114:
                widget_PP.HumSec_val255->setText(text);
                break;
            case 115:
                widget_PP.HumSec_val256->setText(text);
                break;
            case 116:
                widget_PP.HumSec_val257->setText(text);
                break;
            case 117:
                widget_PP.HumSec_val258->setText(text);
                break;
            case 118:
                widget_PP.HumSec_val259->setText(text);
                break;
        }
    }
    Kgs_Ton.finish();
    //KillDB();
}

void Silo::TablasDeduc2(){
   
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    int index = widget_PP.HumSec_CB2->currentIndex();
    QString text =widget_PP.HumSec_CB2_edit->text();
    QHash<int, float> HumSec;
    float it = 26.0;
    Log("Index: " + QString::number(index));
    for( int i = 0; i<42 ; ){
        HumSec.insert(i, it);
        it = it + 0.1;
        i = i + 1;
        Log("Dentro de Tabla Deduc2 " + QString::number(i) + " : " + QString::number(it, 'f', 2));
    }
    
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");
    QSqlQuery Kgs_Ton(QSqlDatabase::database("Humedad_Secado.db"));
    if(Kgs_Ton.lastError().isValid()){
        Log("Error de Db\n " + Kgs_Ton.lastQuery() + "\n" + Kgs_Ton.lastError().text());
    }
    // actuliza los valores de la tabla, siempre usar el WHERE
    Kgs_Ton.prepare("UPDATE Kilos SET Kgs_Ton = :Kgs WHERE Porcentaje = :Porctg");
    Kgs_Ton.bindValue(":Kgs", text); 
    Kgs_Ton.bindValue(":Porctg", QString::number(HumSec.value(index), 'f', 2)); 
    Kgs_Ton.exec();
    
    if(Kgs_Ton.lastError().isValid()){
        Log("No se pudo guardar el valor " + QString::number(index) +" en Kgs_Ton: " + text + "\n" +Kgs_Ton.lastQuery() + "\n" + Kgs_Ton.lastError().text());
    }
   
    if (index <0 ){
        Log("Error el combox esta vacio, TablasDeduc 2");
    }
    
     if (index >= 0 && index < 21){  // de 26.0 a 28.0
        switch (index){
            case 0:
                widget_PP.HumSec_val260->setText(text);
                break;
            case 1:
                widget_PP.HumSec_val261->setText(text);
                break;
            case 2:
                widget_PP.HumSec_val262->setText(text);
                break;
            case 3:
                widget_PP.HumSec_val263->setText(text);
                break;
            case 4:
                widget_PP.HumSec_val264->setText(text);
                break;
            case 5:
                widget_PP.HumSec_val265->setText(text);
                break;
            case 6:
                widget_PP.HumSec_val266->setText(text);
                break;
            case 7:
                widget_PP.HumSec_val267->setText(text);
                break;
            case 8:
                widget_PP.HumSec_val268->setText(text);
                break;
            case 9:
                widget_PP.HumSec_val269->setText(text);
                break;
            case 10:
                widget_PP.HumSec_val270->setText(text);
                break;
            case 11:
                widget_PP.HumSec_val271->setText(text);
                break;
            case 12:
                widget_PP.HumSec_val272->setText(text);
                break;
            case 13:
                widget_PP.HumSec_val273->setText(text);
                break;
            case 14:
                widget_PP.HumSec_val274->setText(text);
                break;
            case 15:
                widget_PP.HumSec_val275->setText(text);
                break;
            case 16:
                widget_PP.HumSec_val276->setText(text);
                break;
            case 17:
                widget_PP.HumSec_val277->setText(text);
                break;
            case 18:
                widget_PP.HumSec_val278->setText(text);
                break;
            case 19:
                widget_PP.HumSec_val279->setText(text);
                break;
            case 20:
                widget_PP.HumSec_val280->setText(text);
                break;
        }
    }
    
    if (index >= 21 && index <= 41){  // de 28.1 a 30
        switch (index){
            case 21:
                widget_PP.HumSec_val281->setText(text);
                break;
            case 22:
                widget_PP.HumSec_val282->setText(text);
                break;
            case 23:
                widget_PP.HumSec_val283->setText(text);
                break;
            case 24:
                widget_PP.HumSec_val284->setText(text);
                break;
            case 25:
                widget_PP.HumSec_val285->setText(text);
                break;
            case 26:
                widget_PP.HumSec_val286->setText(text);
                break;
            case 27:
                widget_PP.HumSec_val287->setText(text);
                break;
            case 28:
                widget_PP.HumSec_val288->setText(text);
                break;
            case 29:
                widget_PP.HumSec_val289->setText(text);
                break;
            case 30:
                widget_PP.HumSec_val290->setText(text);
                break;
            case 31:
                widget_PP.HumSec_val291->setText(text);
                break;
            case 32:
                widget_PP.HumSec_val292->setText(text);
                break;
            case 33:
                widget_PP.HumSec_val293->setText(text);
                break;
            case 34:
                widget_PP.HumSec_val294->setText(text);
                break;
            case 35:
                widget_PP.HumSec_val295->setText(text);
                break;
            case 36:
                widget_PP.HumSec_val296->setText(text);
                break;
            case 37:
                widget_PP.HumSec_val297->setText(text);
                break;
            case 38:
                widget_PP.HumSec_val298->setText(text);
                break;
            case 39:
                widget_PP.HumSec_val299->setText(text);
                break;
            case 40:
                widget_PP.HumSec_val300->setText(text);
                break;
            //case 41:
            //    widget_PP.HumSec_val300->setText(text);
            //    break;
        }
    }
    Kgs_Ton.finish();
    //KillDB();
}

void Silo::TablasDeduc3(){   // tarifas de secado en rangos
    int index = widget_PP.HumSec_CB3->currentIndex();
    QString text =widget_PP.HumSec_CB3_edit->text();
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");
    QSqlQuery tarifa(QSqlDatabase::database("Humedad_Secado.db"));
    // actuliza los valores de la tabla, siempre usar el WHERE
    tarifa.prepare("UPDATE Secado SET Tarifa = :Tarifa WHERE Rango = :Rango");
    tarifa.bindValue(":Tarifa", text); 
    tarifa.bindValue(":Rango", index); 
    tarifa.exec();
    if(tarifa.lastError().isValid()){
        Log("No se pudo guardar el valor " + QString::number(index) +" en Tarifa: " + text + "\n" +tarifa.lastQuery() + "\n" + tarifa.lastError().text());
    }
   
    if (index <0 ){
        Log("Error el combox esta vacio, TablasDeduc 3");
    }
    
     if (index >= 0 && index < 16){  // rangos de Tarifas
        switch (index){
            case 0:
                widget_PP.HumSec_Tarifa_141_150->setText(text);
                break;
            case 1:
                widget_PP.HumSec_Tarifa_151_160->setText(text);
                break;
            case 2:
                widget_PP.HumSec_Tarifa_161_170->setText(text);
                break;
            case 3:
                widget_PP.HumSec_Tarifa_171_180->setText(text);
                break;
            case 4:
                widget_PP.HumSec_Tarifa_181_190->setText(text);
                break;
            case 5:
                widget_PP.HumSec_Tarifa_191_200->setText(text);
                break;
            case 6:
                widget_PP.HumSec_Tarifa_201_210->setText(text);
                break;
            case 7:
                widget_PP.HumSec_Tarifa_211_220->setText(text);
                break;
            case 8:
                widget_PP.HumSec_Tarifa_221_230->setText(text);
                break;
            case 9:
                widget_PP.HumSec_Tarifa_231_240->setText(text);
                break;
            case 10:
                widget_PP.HumSec_Tarifa_241_250->setText(text);
                break;
            case 11:
                widget_PP.HumSec_Tarifa_251_260->setText(text);
                break;
            case 12:
                widget_PP.HumSec_Tarifa_261_270->setText(text);
                break;
            case 13:
                widget_PP.HumSec_Tarifa_271_280->setText(text);
                break;
            case 14:
                widget_PP.HumSec_Tarifa_281_290->setText(text);
                break;
            case 15:
                widget_PP.HumSec_Tarifa_291_300->setText(text);
                break;
        }
    }
    tarifa.finish();
    //KillDB();
}

void Silo::ShowDeduc(){   // populates tables Humedad y Secado
   
    QVector<float> HumSec(160);
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");
    QSqlQuery Tabla(QSqlDatabase::database("Humedad_Secado.db"));

    Tabla.exec("SELECT * FROM Kilos ORDER BY Porcentaje");
    if(Tabla.lastError().isValid()){
        Log("Leer la tabla Kilos\n" + Tabla.lastQuery() + "\n" + Tabla.lastError().text());
    }
    
    //float it = Tabla.value("Kgs_Ton").toFloat();
    //float i = Tabla.value("Porcentaje").toFloat();
    Tabla.first();
    for( int i =0; i<160 ; ) {   // populates hash table    
        HumSec.insert(i, Tabla.value("Kgs_Ton").toFloat());
        Tabla.next();
        i++;
    }
    
    // Populates the values of the DB Humedad y Secado
    widget_PP.HumSec_val141->setText(QString::number(HumSec.at(0), 'f', 2));
    widget_PP.HumSec_val142->setText(QString::number(HumSec.at(1), 'f', 2));
    widget_PP.HumSec_val143->setText(QString::number(HumSec.at(2), 'f', 2));
    widget_PP.HumSec_val144->setText(QString::number(HumSec.at(3), 'f', 2));
    widget_PP.HumSec_val145->setText(QString::number(HumSec.at(4), 'f', 2));
    widget_PP.HumSec_val146->setText(QString::number(HumSec.at(5), 'f', 2));
    widget_PP.HumSec_val147->setText(QString::number(HumSec.at(6), 'f', 2));
    widget_PP.HumSec_val148->setText(QString::number(HumSec.at(7), 'f', 2));
    widget_PP.HumSec_val149->setText(QString::number(HumSec.at(8), 'f', 2));
    widget_PP.HumSec_val150->setText(QString::number(HumSec.at(9), 'f', 2));
    widget_PP.HumSec_val151->setText(QString::number(HumSec.at(10), 'f', 2));
    widget_PP.HumSec_val152->setText(QString::number(HumSec.at(11), 'f', 2));
    widget_PP.HumSec_val153->setText(QString::number(HumSec.at(12), 'f', 2));
    widget_PP.HumSec_val154->setText(QString::number(HumSec.at(13), 'f', 2));
    widget_PP.HumSec_val155->setText(QString::number(HumSec.at(14), 'f', 2));
    widget_PP.HumSec_val156->setText(QString::number(HumSec.at(15), 'f', 2));
    widget_PP.HumSec_val157->setText(QString::number(HumSec.at(16), 'f', 2));
    widget_PP.HumSec_val158->setText(QString::number(HumSec.at(17), 'f', 2));
    widget_PP.HumSec_val159->setText(QString::number(HumSec.at(18), 'f', 2));
    widget_PP.HumSec_val160->setText(QString::number(HumSec.at(19), 'f', 2));
    widget_PP.HumSec_val161->setText(QString::number(HumSec.at(20), 'f', 2));
    widget_PP.HumSec_val162->setText(QString::number(HumSec.at(21), 'f', 2));
    widget_PP.HumSec_val163->setText(QString::number(HumSec.at(22), 'f', 2));
    widget_PP.HumSec_val164->setText(QString::number(HumSec.at(23), 'f', 2));
    widget_PP.HumSec_val165->setText(QString::number(HumSec.at(24), 'f', 2));
    widget_PP.HumSec_val166->setText(QString::number(HumSec.at(25), 'f', 2));
    widget_PP.HumSec_val167->setText(QString::number(HumSec.at(26), 'f', 2));
    widget_PP.HumSec_val168->setText(QString::number(HumSec.at(27), 'f', 2));
    widget_PP.HumSec_val169->setText(QString::number(HumSec.at(28), 'f', 2));
    widget_PP.HumSec_val170->setText(QString::number(HumSec.at(29), 'f', 2));
    widget_PP.HumSec_val171->setText(QString::number(HumSec.at(30), 'f', 2));
    widget_PP.HumSec_val172->setText(QString::number(HumSec.at(31), 'f', 2));
    widget_PP.HumSec_val173->setText(QString::number(HumSec.at(32), 'f', 2));
    widget_PP.HumSec_val174->setText(QString::number(HumSec.at(33), 'f', 2));
    widget_PP.HumSec_val175->setText(QString::number(HumSec.at(34), 'f', 2));
    widget_PP.HumSec_val176->setText(QString::number(HumSec.at(35), 'f', 2));
    widget_PP.HumSec_val177->setText(QString::number(HumSec.at(36), 'f', 2));
    widget_PP.HumSec_val178->setText(QString::number(HumSec.at(37), 'f', 2));
    widget_PP.HumSec_val179->setText(QString::number(HumSec.at(38), 'f', 2));
    widget_PP.HumSec_val180->setText(QString::number(HumSec.at(39), 'f', 2));
    widget_PP.HumSec_val181->setText(QString::number(HumSec.at(40), 'f', 2));
    widget_PP.HumSec_val182->setText(QString::number(HumSec.at(41), 'f', 2));
    widget_PP.HumSec_val183->setText(QString::number(HumSec.at(42), 'f', 2));
    widget_PP.HumSec_val184->setText(QString::number(HumSec.at(43), 'f', 2));
    widget_PP.HumSec_val185->setText(QString::number(HumSec.at(44), 'f', 2));
    widget_PP.HumSec_val186->setText(QString::number(HumSec.at(45), 'f', 2));
    widget_PP.HumSec_val187->setText(QString::number(HumSec.at(46), 'f', 2));
    widget_PP.HumSec_val188->setText(QString::number(HumSec.at(47), 'f', 2));
    widget_PP.HumSec_val189->setText(QString::number(HumSec.at(48), 'f', 2));
    widget_PP.HumSec_val190->setText(QString::number(HumSec.at(49), 'f', 2));
    widget_PP.HumSec_val191->setText(QString::number(HumSec.at(50), 'f', 2));
    widget_PP.HumSec_val192->setText(QString::number(HumSec.at(51), 'f', 2));
    widget_PP.HumSec_val193->setText(QString::number(HumSec.at(52), 'f', 2));
    widget_PP.HumSec_val194->setText(QString::number(HumSec.at(53), 'f', 2));
    widget_PP.HumSec_val195->setText(QString::number(HumSec.at(54), 'f', 2));
    widget_PP.HumSec_val196->setText(QString::number(HumSec.at(55), 'f', 2));
    widget_PP.HumSec_val197->setText(QString::number(HumSec.at(56), 'f', 2));
    widget_PP.HumSec_val198->setText(QString::number(HumSec.at(57), 'f', 2));
    widget_PP.HumSec_val199->setText(QString::number(HumSec.at(58), 'f', 2));
    widget_PP.HumSec_val200->setText(QString::number(HumSec.at(59), 'f', 2));
    widget_PP.HumSec_val201->setText(QString::number(HumSec.at(60), 'f', 2));
    widget_PP.HumSec_val202->setText(QString::number(HumSec.at(61), 'f', 2));
    widget_PP.HumSec_val203->setText(QString::number(HumSec.at(62), 'f', 2));
    widget_PP.HumSec_val204->setText(QString::number(HumSec.at(63), 'f', 2));
    widget_PP.HumSec_val205->setText(QString::number(HumSec.at(64), 'f', 2));
    widget_PP.HumSec_val206->setText(QString::number(HumSec.at(65), 'f', 2));
    widget_PP.HumSec_val207->setText(QString::number(HumSec.at(66), 'f', 2));
    widget_PP.HumSec_val208->setText(QString::number(HumSec.at(67), 'f', 2));
    widget_PP.HumSec_val209->setText(QString::number(HumSec.at(68), 'f', 2));
    widget_PP.HumSec_val210->setText(QString::number(HumSec.at(69), 'f', 2));
    widget_PP.HumSec_val211->setText(QString::number(HumSec.at(70), 'f', 2));
    widget_PP.HumSec_val212->setText(QString::number(HumSec.at(71), 'f', 2));
    widget_PP.HumSec_val213->setText(QString::number(HumSec.at(72), 'f', 2));
    widget_PP.HumSec_val214->setText(QString::number(HumSec.at(73), 'f', 2));
    widget_PP.HumSec_val215->setText(QString::number(HumSec.at(74), 'f', 2));
    widget_PP.HumSec_val216->setText(QString::number(HumSec.at(75), 'f', 2));
    widget_PP.HumSec_val217->setText(QString::number(HumSec.at(76), 'f', 2));
    widget_PP.HumSec_val218->setText(QString::number(HumSec.at(77), 'f', 2));
    widget_PP.HumSec_val219->setText(QString::number(HumSec.at(78), 'f', 2));
    widget_PP.HumSec_val220->setText(QString::number(HumSec.at(79), 'f', 2));
    widget_PP.HumSec_val221->setText(QString::number(HumSec.at(80), 'f', 2));
    widget_PP.HumSec_val222->setText(QString::number(HumSec.at(81), 'f', 2));
    widget_PP.HumSec_val223->setText(QString::number(HumSec.at(82), 'f', 2));
    widget_PP.HumSec_val224->setText(QString::number(HumSec.at(83), 'f', 2));
    widget_PP.HumSec_val225->setText(QString::number(HumSec.at(84), 'f', 2));
    widget_PP.HumSec_val226->setText(QString::number(HumSec.at(85), 'f', 2));
    widget_PP.HumSec_val227->setText(QString::number(HumSec.at(86), 'f', 2));
    widget_PP.HumSec_val228->setText(QString::number(HumSec.at(87), 'f', 2));
    widget_PP.HumSec_val229->setText(QString::number(HumSec.at(88), 'f', 2));
    widget_PP.HumSec_val230->setText(QString::number(HumSec.at(89), 'f', 2));
    widget_PP.HumSec_val231->setText(QString::number(HumSec.at(90), 'f', 2));
    widget_PP.HumSec_val232->setText(QString::number(HumSec.at(91), 'f', 2));
    widget_PP.HumSec_val233->setText(QString::number(HumSec.at(92), 'f', 2));
    widget_PP.HumSec_val234->setText(QString::number(HumSec.at(93), 'f', 2));
    widget_PP.HumSec_val235->setText(QString::number(HumSec.at(94), 'f', 2));
    widget_PP.HumSec_val236->setText(QString::number(HumSec.at(95), 'f', 2));
    widget_PP.HumSec_val237->setText(QString::number(HumSec.at(96), 'f', 2));
    widget_PP.HumSec_val238->setText(QString::number(HumSec.at(97), 'f', 2));
    widget_PP.HumSec_val239->setText(QString::number(HumSec.at(98), 'f', 2));
    widget_PP.HumSec_val240->setText(QString::number(HumSec.at(99), 'f', 2));
    widget_PP.HumSec_val241->setText(QString::number(HumSec.at(100), 'f', 2));
    widget_PP.HumSec_val242->setText(QString::number(HumSec.at(101), 'f', 2));
    widget_PP.HumSec_val243->setText(QString::number(HumSec.at(102), 'f', 2));
    widget_PP.HumSec_val244->setText(QString::number(HumSec.at(103), 'f', 2));
    widget_PP.HumSec_val245->setText(QString::number(HumSec.at(104), 'f', 2));
    widget_PP.HumSec_val246->setText(QString::number(HumSec.at(105), 'f', 2));
    widget_PP.HumSec_val247->setText(QString::number(HumSec.at(106), 'f', 2));
    widget_PP.HumSec_val248->setText(QString::number(HumSec.at(107), 'f', 2));
    widget_PP.HumSec_val249->setText(QString::number(HumSec.at(108), 'f', 2));
    widget_PP.HumSec_val250->setText(QString::number(HumSec.at(109), 'f', 2));
    widget_PP.HumSec_val251->setText(QString::number(HumSec.at(110), 'f', 2));
    widget_PP.HumSec_val252->setText(QString::number(HumSec.at(111), 'f', 2));
    widget_PP.HumSec_val253->setText(QString::number(HumSec.at(112), 'f', 2));
    widget_PP.HumSec_val254->setText(QString::number(HumSec.at(113), 'f', 2));
    widget_PP.HumSec_val255->setText(QString::number(HumSec.at(114), 'f', 2));
    widget_PP.HumSec_val256->setText(QString::number(HumSec.at(115), 'f', 2));
    widget_PP.HumSec_val257->setText(QString::number(HumSec.at(116), 'f', 2));
    widget_PP.HumSec_val258->setText(QString::number(HumSec.at(117), 'f', 2));
    widget_PP.HumSec_val259->setText(QString::number(HumSec.at(118), 'f', 2));
    widget_PP.HumSec_val260->setText(QString::number(HumSec.at(119), 'f', 2));
    widget_PP.HumSec_val261->setText(QString::number(HumSec.at(120), 'f', 2));
    widget_PP.HumSec_val262->setText(QString::number(HumSec.at(121), 'f', 2));
    widget_PP.HumSec_val263->setText(QString::number(HumSec.at(122), 'f', 2));
    widget_PP.HumSec_val264->setText(QString::number(HumSec.at(123), 'f', 2));
    widget_PP.HumSec_val265->setText(QString::number(HumSec.at(124), 'f', 2));
    widget_PP.HumSec_val266->setText(QString::number(HumSec.at(125), 'f', 2));
    widget_PP.HumSec_val267->setText(QString::number(HumSec.at(126), 'f', 2));
    widget_PP.HumSec_val268->setText(QString::number(HumSec.at(127), 'f', 2));
    widget_PP.HumSec_val269->setText(QString::number(HumSec.at(128), 'f', 2));
    widget_PP.HumSec_val270->setText(QString::number(HumSec.at(129), 'f', 2));
    widget_PP.HumSec_val271->setText(QString::number(HumSec.at(130), 'f', 2));
    widget_PP.HumSec_val272->setText(QString::number(HumSec.at(131), 'f', 2));
    widget_PP.HumSec_val273->setText(QString::number(HumSec.at(132), 'f', 2));
    widget_PP.HumSec_val274->setText(QString::number(HumSec.at(133), 'f', 2));
    widget_PP.HumSec_val275->setText(QString::number(HumSec.at(134), 'f', 2));
    widget_PP.HumSec_val276->setText(QString::number(HumSec.at(135), 'f', 2));
    widget_PP.HumSec_val277->setText(QString::number(HumSec.at(136), 'f', 2));
    widget_PP.HumSec_val278->setText(QString::number(HumSec.at(137), 'f', 2));
    widget_PP.HumSec_val279->setText(QString::number(HumSec.at(138), 'f', 2));
    widget_PP.HumSec_val280->setText(QString::number(HumSec.at(139), 'f', 2));
    widget_PP.HumSec_val281->setText(QString::number(HumSec.at(140), 'f', 2));
    widget_PP.HumSec_val282->setText(QString::number(HumSec.at(141), 'f', 2));
    widget_PP.HumSec_val283->setText(QString::number(HumSec.at(142), 'f', 2));
    widget_PP.HumSec_val284->setText(QString::number(HumSec.at(143), 'f', 2));
    widget_PP.HumSec_val285->setText(QString::number(HumSec.at(144), 'f', 2));
    widget_PP.HumSec_val286->setText(QString::number(HumSec.at(145), 'f', 2));
    widget_PP.HumSec_val287->setText(QString::number(HumSec.at(146), 'f', 2));
    widget_PP.HumSec_val288->setText(QString::number(HumSec.at(147), 'f', 2));
    widget_PP.HumSec_val289->setText(QString::number(HumSec.at(148), 'f', 2));
    widget_PP.HumSec_val290->setText(QString::number(HumSec.at(149), 'f', 2));
    widget_PP.HumSec_val291->setText(QString::number(HumSec.at(150), 'f', 2));
    widget_PP.HumSec_val292->setText(QString::number(HumSec.at(151), 'f', 2));
    widget_PP.HumSec_val293->setText(QString::number(HumSec.at(152), 'f', 2));
    widget_PP.HumSec_val294->setText(QString::number(HumSec.at(153), 'f', 2));
    widget_PP.HumSec_val295->setText(QString::number(HumSec.at(154), 'f', 2));
    widget_PP.HumSec_val296->setText(QString::number(HumSec.at(155), 'f', 2));
    widget_PP.HumSec_val297->setText(QString::number(HumSec.at(156), 'f', 2));
    widget_PP.HumSec_val298->setText(QString::number(HumSec.at(157), 'f', 2));
    widget_PP.HumSec_val299->setText(QString::number(HumSec.at(158), 'f', 2));
    widget_PP.HumSec_val300->setText(QString::number(HumSec.at(159), 'f', 2));
    
    Tabla.finish();
    //KillDB();
}

void Silo::Cuotas_Sanidad(int estado){
    
    //  Qt::Unchecked  = 0
    //  Qt::Checked  = 2
    if(estado == 2){
        widget_PP.Cuotas_Sanidad_edit->setEnabled(true);
        widget_PP.Cuotas_Sanidad_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white;");
    }
    if(estado == 0){
        widget_PP.Cuotas_Sanidad_edit->setEnabled(false);
        widget_PP.Cuotas_Sanidad_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white;");
    }
}

void Silo::Cuotas_Grano(int estado){
    
    //  Qt::Unchecked  = 0
    //  Qt::Checked  = 2
    if(estado == 2){
        widget_PP.Cuotas_Grano_edit->setEnabled(true);
        widget_PP.Cuotas_Grano_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white;");
    }
    if(estado == 0){
        widget_PP.Cuotas_Grano_edit->setEnabled(false);
        widget_PP.Cuotas_Grano_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white;");
    }
}

void Silo::Cuotas_Modulo(int estado){
    
    //  Qt::Unchecked  = 0
    //  Qt::Checked  = 2
    if(estado == 2){
        widget_PP.Cuotas_Modulo_edit->setEnabled(true);
        widget_PP.Cuotas_Modulo_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white;");
    }
    if(estado == 0){
        widget_PP.Cuotas_Modulo_edit->setEnabled(false);
        widget_PP.Cuotas_Modulo_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white;");
    }
}

void Silo::Actualizacion(int estado){
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));
    
    if(estado == 0){   // si no esta seleccionado no se buscan actualizaciones
        Opt.prepare("UPDATE Config SET Actulz = :Actz");
        Opt.bindValue(":Actz", 0);
        Opt.exec();
        if(Opt.lastError().isValid()){
            Log("No se pudo guardar el valor, 0");
        }
    }
    if(estado == 2){
        Opt.prepare("UPDATE Config SET Actulz = :Actz");
        Opt.bindValue(":Actz", 1);
        Opt.exec();
        if(Opt.lastError().isValid()){
            Log("Se actualizo el valor, 1");
        }
    }
    Opt.finish();
}

void Silo::Usuarios_Borrar(int estado){    // Activa y desactiva el borrar usuario
    if(estado == 0){
        widget_PP.User_Del_CB->setEnabled(false);
        widget_PP.User_Del_CB->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
    }
    if(estado == 2){
        widget_PP.User_Del_CB->setEnabled(true);
        widget_PP.User_Del_CB->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
    }
}

void Silo::Usuarios_New(){
    QString User = widget_PP.User_Add_usuario_edit->text();
    QString Pass = widget_PP.User_Add_pass_edit->text();
    QString Name = widget_PP.User_Add_nombre_edit->text();
    QString Apellido = widget_PP.User_Add_apellidos_edit->text();
    QString Direc = widget_PP.User_Add_direccion_edit->text();
    QString Tel = widget_PP.User_Add_telefono_edit->text();
    QString Puesto = widget_PP.User_Add_puesto_edit->text();
    int Num_user{0};
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //MBox.setWindowTitle("Correcto");
    MBox.setDefaultButton(boton_OK);
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Utilisateurs.db");
    QSqlQuery Opt(QSqlDatabase::database("Utilisateurs.db"));

    Opt.exec("SELECT Num_User FROM Usuarios");
    if (Opt.lastError().isValid()){
        Log("No se Puede leer el numero de Usuario\n" + Opt.lastError().text() + "\n" + Opt.lastQuery());
    }
    Opt.last();
    Num_user = Opt.value("Num_User").toInt();
    if(Num_user <= 0){
        Num_user = 1;
    }
    
    Opt.first();
    Opt.prepare("INSERT INTO Usuarios (Num_User, Nombre, Apellido, Direccion, Telefono, User, Pass, Puesto)"
                "VALUES (:num_user, :name, :apellido, :direc, :tel, :user, :pass, :puesto) ");
    Opt.bindValue(":num_user", Num_user);
    Opt.bindValue(":name", Name);
    Opt.bindValue(":apellido", Apellido);
    Opt.bindValue(":direc", Direc);
    Opt.bindValue(":tel", Tel);
    Opt.bindValue(":user", User);
    Opt.bindValue(":pass", Pass);
    Opt.bindValue(":puesto", Puesto);
    Opt.exec();
    if(Opt.lastError().isValid()){
        Log("Error no se puede crear el nuevo usuario\n" + Opt.lastQuery() + "\n" + Opt.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("No se puede crear el Usuario");
        MBox.exec();
    } else {
        MBox.setWindowTitle("Correcto");
        MBox.setText("Nuevo Usuario creado con Exito");
        MBox.exec();
    }
    Opt.finish();
}

void Silo::Usuarios(int estado){   // Activa y desactiva los QlineEdit
    if(estado == 0){
        widget_PP.User_Add_usuario_edit->setEnabled(false);
        widget_PP.User_Add_usuario_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_pass_edit->setEnabled(false);
        widget_PP.User_Add_pass_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_nombre_edit->setEnabled(false);
        widget_PP.User_Add_nombre_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_apellidos_edit->setEnabled(false);
        widget_PP.User_Add_apellidos_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_direccion_edit->setEnabled(false);
        widget_PP.User_Add_direccion_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_telefono_edit->setEnabled(false);
        widget_PP.User_Add_telefono_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_puesto_edit->setEnabled(false);
        widget_PP.User_Add_puesto_edit->setStyleSheet("border-width:0px; border-color:rgb(30,30,30); border-radius:8px; background:white");
    }
    if(estado == 2){
        widget_PP.User_Add_usuario_edit->setEnabled(true);
        widget_PP.User_Add_usuario_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_pass_edit->setEnabled(true);
        widget_PP.User_Add_pass_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_nombre_edit->setEnabled(true);
        widget_PP.User_Add_nombre_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_apellidos_edit->setEnabled(true);
        widget_PP.User_Add_apellidos_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_direccion_edit->setEnabled(true);
        widget_PP.User_Add_direccion_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_telefono_edit->setEnabled(true);
        widget_PP.User_Add_telefono_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
        widget_PP.User_Add_puesto_edit->setEnabled(true);
        widget_PP.User_Add_puesto_edit->setStyleSheet("border-width:1px; border-color:rgb(30,30,30); border-radius:8px; background:white");
    }
}

void Silo::Options_Init(){   // set disable all the Qlineedit by default for Options
    
    widget_PP.Cuotas_Sanidad_edit->setEnabled(false);
    widget_PP.Cuotas_Sanidad_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.Cuotas_Grano_edit->setEnabled(false);
    widget_PP.Cuotas_Grano_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.Cuotas_Modulo_edit->setEnabled(false);
    widget_PP.Cuotas_Modulo_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_usuario_edit->setEnabled(false);
    widget_PP.User_Add_usuario_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_pass_edit->setEnabled(false);
    widget_PP.User_Add_pass_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_nombre_edit->setEnabled(false);
    widget_PP.User_Add_nombre_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_apellidos_edit->setEnabled(false);
    widget_PP.User_Add_apellidos_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_direccion_edit->setEnabled(false);
    widget_PP.User_Add_direccion_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_telefono_edit->setEnabled(false);
    widget_PP.User_Add_telefono_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Add_puesto_edit->setEnabled(false);
    widget_PP.User_Add_puesto_edit->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    widget_PP.User_Del_CB->setEnabled(false);
    widget_PP.User_Del_CB->setStyleSheet("border-width:0px; border-radius:8px; background:white");
    
    widget_PP.Cuotas_Sanidad->setChecked(false);
    widget_PP.Cuotas_Grano->setChecked(false);
    widget_PP.Cuotas_Modulo->setChecked(false);
    widget_PP.User_Add->setChecked(false);
    widget_PP.User_Del->setChecked(false);
    widget_PP.Actual->setChecked(true);
    
    Opt_Sanidad_Load();
    Opt_Grano_Load();
    Opt_Modulo_Load();
    
}

void Silo::Opt_Sanidad(){      // Guarda la cuota de Sanidad
    QString sani = widget_PP.Cuotas_Sanidad_edit->text();
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //MBox.setWindowTitle("Correcto");
    MBox.setDefaultButton(boton_OK);
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.prepare("UPDATE Config SET Sanidad = :sanid");
    Opt.bindValue(":sanid", sani);
    Opt.exec();
    if(Opt.lastError().isValid()){
        Log("Error al insertar el valor de Sanidad\n" + Opt.lastQuery() + "\n" + Opt.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("No se pudo Guardar el Valor de Sanidad");
        MBox.exec();
    } else {
        MBox.setWindowTitle("Correcto");
        MBox.setText("Valor de Sanidad Guardado con Exito");
        MBox.exec();
    }
    Opt.finish();
}

void Silo::Opt_Sanidad_Load(){    // Carga la cuota de Sanidad y la muestra
        
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.exec("SELECT Sanidad FROM Config");
    if(Opt.lastError().isValid()){
        Log("Error al leer la tabla Config" + Opt.lastError().text() + "\n" + Opt.lastQuery());
    }
    Opt.first();
    QString valor = Opt.value("Sanidad").toString(); 
    widget_PP.Cuotas_Sanidad_edit->setText(valor);
    Opt.finish();
}

void Silo::Opt_Grano(){    // Guarda la Cuota de Cons de Grano en la DB
    QString grano = widget_PP.Cuotas_Grano_edit->text();
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //MBox.setWindowTitle("Correcto");
    MBox.setDefaultButton(boton_OK);
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.prepare("UPDATE Config SET Cuota = :cuota");
    Opt.bindValue(":cuota", grano);
    Opt.exec();
    if(Opt.lastError().isValid()){
        Log("Error al insertar la Cuota de Conservacion de Grano \n" + Opt.lastQuery() + "\n" + Opt.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("No se pudo Guardar la Cuota de Cons de Grano");
        MBox.exec();
    } else {
        MBox.setWindowTitle("Correcto");
        MBox.setText("Cuota de Cons de Grano Guardado con Exito");
        MBox.exec();
    }
    Opt.finish();
}

void Silo::Opt_Grano_Load(){     // Carga el valor de la cuota de Grano y la muestra
        
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.exec("SELECT Cuota FROM Config");
    if(Opt.lastError().isValid()){
        Log("Error al leer la Cuota de Conservacion" + Opt.lastError().text() + "\n" + Opt.lastQuery());
    }
    Opt.first();
    QString valor = Opt.value("Cuota").toString(); 
    widget_PP.Cuotas_Grano_edit->setText(valor);
    Opt.finish();
}
 
void Silo::Opt_Modulo(){     // Guarda el valor introducido en Modulo
    QString grano = widget_PP.Cuotas_Modulo_edit->text();
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //MBox.setWindowTitle("Correcto");
    MBox.setDefaultButton(boton_OK);
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.prepare("UPDATE Config SET Modulo = :mod");
    Opt.bindValue(":mod", grano);
    Opt.exec();
    if(Opt.lastError().isValid()){
        Log("Error al insertar la Cuota del Modulo \n" + Opt.lastQuery() + "\n" + Opt.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("No se pudo Guardar la Cuota del Modulo");
        MBox.exec();
    } else {
        MBox.setWindowTitle("Correcto");
        MBox.setText("Cuota del Modulo Guardado con Exito");
        MBox.exec();
    }
    Opt.finish();
}

void Silo::Opt_Modulo_Load(){  // Carga el valor del Modulo y lo muestra en Opciones
        
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.exec("SELECT Modulo FROM Config");
    if(Opt.lastError().isValid()){
        Log("Error al leer la Cuota del Modulo" + Opt.lastError().text() + "\n" + Opt.lastQuery());
    }
    Opt.first();
    QString valor = Opt.value("Modulo").toString(); 
    widget_PP.Cuotas_Modulo_edit->setText(valor);
    Opt.finish();
}

void Silo::Opt_TonsSocios(){     // Guarda el valor introducido en Modulo
    QString Ton = widget_PP.Socios_TonsxSocio_edit->text();
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //MBox.setWindowTitle("Correcto");
    MBox.setDefaultButton(boton_OK);
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Config.db");
    QSqlQuery Opt(QSqlDatabase::database("Config.db"));

    Opt.prepare("UPDATE Config SET Ton_Socio = :mod");
    Opt.bindValue(":mod", Ton);
    Opt.exec();
    if(Opt.lastError().isValid()){
        Log("Error al insertar las Toneladas por Derecho \n" + Opt.lastQuery() + "\n" + Opt.lastError().text());
        MBox.setWindowTitle("Error");
        MBox.setText("No se pudo Actualizar las Tons de cada Socio");
        MBox.exec();
    } else {
        MBox.setWindowTitle("Correcto");
        MBox.setText("Se actualizo Tons de Cada Socio");
        MBox.exec();
    }
    Opt.finish();
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wwrite-strings"

void Silo::About(){
    //QString add = getMacAddress();  // esta en Login.cpp
    //Log(add);
    
    char *about =  // const char
       " <HTML>"
       "<head>"
       "<style>"
       "h1 {text-align: center;}"
       "h2 {text-align: center;}"
       "</style>"
       "</head>"
    
       "<body>"
       "<h1> Sistema de Administracion de Silos </h1>"
       "<h2> \"SAS\" </h2>"
       "<p> Programa Disenado por Ing. Jose Luis Medina Alarcon </p>"
       "<p> para mas informacion contactar al email <b> ing.medina.alarcon@gmail.com </b></p>"
       "</body>"

       "</HTML>";
    
    
    
    QMessageBox::information( this, "About", about);
    
}
#pragma GCC diagnostic pop

QStringList Silo::buscarArchivos(QStringList file, QString SearchDir){  // checar https://doc.qt.io/qt-5/qtwidgets-dialogs-findfiles-example.html  esta en el messenger
    
    //********************* how to get current directory*************************//
    //****** https://stackoverflow.com/questions/875249/how-to-get-current-directory ******//
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    //**************************************************************//
    
    //QStringList filename = {"ciclo*.db", "Ciclo*.db", "CICLO*.db"};
    //QString path = "C:/Users/Patron/Desktop/Code Projects/Sistema_Silo/dist/Debug/MinGW-Windows/" + SearchDir;  
    QString path = QString::fromStdWString(DirFile) + "\\" + SearchDir;  // te entrega la ubicacion del programa + la carpeta a buscar
    QStringList foundFiles;
    
    
    QDirIterator it(path , file, QDir::Files | QDir::NoDotAndDotDot | QDir::NoSymLinks , QDirIterator::NoIteratorFlags);  //QDir::NoDotAndDotDot , QDir::AllEntries, QDir::NoSymLinks
    if (it.fileName().isEmpty()){
        while (it.hasNext()){
            //Log("archivos encontrados " + it.fileName());
            foundFiles << it.fileName();
            it.next();
    }
    }else{
        it.next();
    }
    foundFiles << it.fileName(); 
    it.next();
    if(foundFiles.isEmpty()){
        Log("La busqueda no regreso ningun archivo: " + file.at(0));// QString::number(foundFiles.size()));
        return foundFiles<< QString::number(0);
    }else{
        foundFiles.sort();
        return foundFiles;
    }
    
    /**************** solo funciona en c++ 17, no puedo linkiear**********
    std::string dataDir = "/Data/";
    std::vector<QString> archivos;
    for(const auto & entry : filesystem::directory_iterator(dataDir)){
        archivos = QString::fromStdString(entry.path());
    };
    return archivos;
    */
}

bool Silo::ChecarDB(QString Dir, QString Db){  // Reemplazar por buscarArchivos(), es mas eficiente
    HANDLE fileHandle;   
    WIN32_FIND_DATA archivo;
    QString ruta = Dir + "/Data/" + Db;
    std::wstring wDb = ruta.toStdWString();
    LPCWSTR findDb = wDb.c_str();
    
    fileHandle = FindFirstFile(findDb,&archivo);
    if (fileHandle == INVALID_HANDLE_VALUE){
        Log("No se pudo encontrar la Db: " + Db);
        return false;
    }else{
        Log("Base de Datos abierta: " + Db);
        return true;
    }

}

void Silo::CrearDB(QString Dir , QString Db){  // para sqlite, si no existe el archivo setDatabaseName() lo crea
    //accesa a la base de Datos usando QSqlite
    QString ruta = Dir + "/Data/" + Db ;
    QSqlDatabase mData=QSqlDatabase::addDatabase("QSQLITE", Db); // pones el tipo de driver de la db( en este caso QMYSQL), crea la coneccion a la DB
    mData.setDatabaseName(ruta); // usar la ruta completa para meter los archivos en un folder
    mData.open();
    
}

void Silo::KillDB(){//QString Db){
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    return;
}

void Silo::Contrasenas(){
    // crea las tablas de contrasenas
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), users());
    
    QSqlQuery valor(QSqlDatabase::database(users()));
    if(valor.lastError().isValid()){
        Log("Creacion de Db contr fallida \n" + valor.executedQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Usuarios"
               "(Num_User INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
               "Nombre VARCHAR(100) NOT NULL, Apellido VARCHAR(200) NOT NULL, "
               "Direccion TEXT, Telefono INTEGER, "
               "User VARCHAR(20) NOT NULL, Pass VARCHAR(20) NOT NULL, Puesto VARCHAR(200) )");
    if(valor.lastError().isValid()){
        Log("Creacion de Usuarios \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Accesos"
               "(Num_User INTEGER, direccion_Mac VARCHAR(12), ip_Address VARCHAR(50), "
               "login VARCHAR(30), logout VARCHAR(30) )");
    if(valor.lastError().isValid()){
        Log("Creacion de Accesos \n" + valor.lastQuery() + "\n" + valor.lastError().isValid() );
    }
    
    if(!valor.lastError().isValid()){
        Log("Creacion de Contr");
    }
    valor.finish();
    //KillDB();
} 

void Silo::Creditos(){    
    // crea las tablas de Creditos

    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), adeudos());
    QSqlQuery valor(QSqlDatabase::database(adeudos()));
    if(valor.lastError().isValid()){
        Log("Creacion de Db Creditos fallida \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
  
    valor.exec("CREATE TABLE IF NOT EXISTS Creditos_Cosecha"
               "(Prod_Num INTEGER, Cantidad INTEGER, "
               "Tipo_Interes FLOAT, fecha_Credito VARCHAR(30), fecha_Pago VARCHAR(30))");
    if(valor.lastError().isValid()){
        Log("Error al crear Creditos_Cosecha \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Semilla"
               "(Prod_Num INTEGER, Tipo_semilla VARCHAR(250), "
               "Cant_Bolsas INTEGER, Precio_Bolsas FLOAT, "
               "fecha_Credito VARCHAR(30), fecha_Pago VARCHAR(30), "
               "Tipo_Interes FLOAT)");
    if(valor.lastError().isValid()){
        Log("Error al crear Semilla \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Diesel"
               "(Prod_Num INTEGER, Cantidad FLOAT,"
               "Precio FLOAT, fecha_Carga VARCHAR(30), fecha_pago VARCHAR(30) )");
    if(valor.lastError().isValid()){
        Log("Error al crear Diesel" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    if(!valor.lastError().isValid()){
        Log("Creacion de Cred ");
    }
    valor.finish();
    //KillDB();
}

void Silo::Ciclo(){    // Creacion de tablas en base de datos del Ciclo
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    if(valor.lastError().isValid()){
        Log("Error Creacion de Db ciclo fallida \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Productores "
               "(RFCF VARCHAR(13) PRIMARY KEY, Prod_Num INTEGER,"   // RFCF es para personas fisicas, RFCM para personas morales
               "Prod_Nombre VARCHAR(100), Prod_Apellidos VARCHAR(250), "
               "Predio_Nombre VARCHAR(100), Prod_Direccion TEXT, "
               "Ciudad VARCHAR(250), Tipo_Prod TINYINT, "
               "Socio_Ref INTEGER, Num_Acciones INTEGER, "
               "Email VARCHAR(250), Whattsapp INTEGER,"
               "Telefono INTEGER)");
            
    if(valor.lastError().isValid()){
        Log("Error al crear Productores \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Boletas_Entradas "
               "(Folio INTEGER NOT NULL, "
               "Prod_Num INTEGER, "
               "Chofer_Nombre VARCHAR(100) , Chofer_Apellidos VARCHAR(250), "
               "Placas VARCHAR(8) , Color VARCHAR(20), "
               "Tipo VARCHAR(30), Humedad FLOAT, "
               "Bruto FLOAT, Tara FLOAT, "
               "Neto FLOAT, Silo TINYINT, "
               //"foto_Cam1 VARBINARY, foto_Cam2 VARBINARY, " // VARBINARY(MAX) soporta imagenes/pdf/word etc
               "Fecha VARCHAR(30), Ciclo VARCHAR(20), "
                "Procedencia VARCHAR(150), Peso_Esp INTEGER )" );
    
    if(valor.lastError().isValid()){
        Log("Error al crear Boletas_Entradas \n " + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Boletas_Salidas "
               "(Folio INTEGER NOT NULL, Comp_Num INTEGER, "
               "Chofer_Nombre VARCHAR(100), Chofer_Apellidos VARCHAR(250),"
               "Placas VARCHAR(8), Color VARCHAR(20), Tipo VARCHAR(30), "
               "Bruto FLOAT, Tara FLOAT, Neto FLOAT, "
               //"foto_Cam1 VARBINARY, foto_Cam2 VARBINARY,"  // agregar cuando ponga las camaras
               "Destino VARCHAR(150), "
               "Fecha VARCHAR(30), Silo TINYINT)");
    if(valor.lastError().isValid()){
        Log("Error al crear Boletas_salidas \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Contrato"
               "(Prod_Num INTEGER, "
               "Num_Contrato INTEGER, "
               "Sorgo_Contrato FLOAT, "
               "Sorgo_Entregado FLOAT, "
               "Precio_Ton FLOAT, "
               "Precio_Fix FLOAT )");
    if(valor.lastError().isValid()){
        Log("Error al crear Contrato \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Compradores"
               "(RFCM VARCHAR(12), Comp_Num Integer, Razon_Social VARCHAR(250), "  // RFCM es para personas morales, 12 caracteres
               "Direccion VARCHAR(500), Ciudad VARCHAR(250), Estado VARCHAR(250), "
               "Contacto VARCHAR(500), Telefono INTEGER, "
               "Whattsapp INTEGER, Email VARCHAR(250), Precio_Ton FLOAT )");
    if(valor.lastError().isValid()){
        Log("Error al crear Compradores \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Contrato_Comp "
               "(Comp_Num INTEGER, Ton_Contrato FLOAT, "
               "Ton_Embarque FLOAT, Num_Contrato INTEGER, "
               "Precio_Ton FLOAT, Precio_Fix FLOAT )");
    if(valor.lastError().isValid()){
        Log("Error al crar Contrato_Comp \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    if(!valor.lastError().isValid()){
       Log( "Creacion de tablas Ciclo ");
    }
    valor.finish();
    //KillDB();
}

void Silo::Dry_n_Wet(){
    // crea las tablas de Humedad
    int size{0}, size2{0};
    float e{14.1};
    //float Te;
    //float it = 14.1;
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");
    
    QSqlQuery valor(QSqlDatabase::database("Humedad_Secado.db"));
    if(valor.lastError().isValid()){
        Log("Creacion de Db Humedad_Secado fallida \n" + valor.executedQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Kilos"
               "(Porcentaje FLOAT NOT NULL, Kgs_Ton FLOAT )");
    if(valor.lastError().isValid()){
        Log("Creacion de Humedad \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Secado"
               "(Rango INTEGER NOT NULL, Tarifa FLOAT )");
    if(valor.lastError().isValid()){
        Log("Creacion de Secado \n" + valor.lastQuery() + "\n" + valor.lastError().isValid() );
    }
    
    /// inicializa los campos de las tablas, poner un if para evitar que se inicializen dos veces o mas
    
    valor.exec("SELECT Porcentaje FROM Kilos");
    valor.last();
    size2 = valor.at() + 1;   // read the total elements of the table and avoid double initialization
    /*
    for( int i = 0; i<160 ; ){   
        Log(QString::number(i) + " : " + QString::number(it, 'f', 1));
        it = it + 0.1;
        i = i + 1;
    }
    */
    if (size2 <= 0){
    for( int t = 0; t<160 ; ){   // se inicializa con los valores de humedad
        //Te = std::trunc(e*10)/10;
        valor.prepare("INSERT INTO Kilos (Porcentaje, Kgs_Ton) VALUES (:Porctg, :Kilos)");
        valor.bindValue(":Porctg", QString::number(e, 'f', 1));
        valor.bindValue(":Kilos", 0);
        valor.exec();
        if(valor.lastError().isValid()){
            Log("Error al llenar la tabla Kilos\n" + valor.lastQuery() + "\n" + valor.lastError().text() );
            break;
        }
        //Log("Valores que van tabla-- " + QString::number(t) + " : " + QString::number(e, 'f', 13) );
        e = e + 0.1;
        t++;
      }
    }
    
    valor.exec("SELECT Rango FROM Secado");
    valor.last();
    size = valor.at() + 1;  // obtiene el total de elementos dentro de la tabla y evita doble inicializacion
  
    if (size <= 0){
        for( int i = 0; i<16 ; ){  // inicializa con los rangos de 0 a 15
          valor.prepare("INSERT INTO Secado (Rango, Tarifa) VALUES (:Rango, :Tarifa)");
          valor.bindValue(":Rango", i);
          valor.bindValue(":Tarifa", 0);
          valor.exec();
          if(valor.lastError().isValid()){
              Log("Error al llenar la tabla de secado\n" + valor.lastQuery() + "\n" + valor.lastError().text() );
          }
          i++;
    }
    }
    
    if(!valor.lastError().isValid()){
        Log("Creacion de Humedad y Secado");
    }
    valor.finish();
    //KillDB();
} 

void Silo::CreateConfigFile(QString DirFile, QString MAC){
    // creates the DB Config 
    // if the Mac its empty creates the file
    // if the Mac its pass, it updates the mac inside Config table
    int row{0};
    
    if (MAC.isEmpty()){   // si esta vacio la mac crea el archivo
        CrearDB(DirFile, "Config.db");
    
        QSqlQuery valor(QSqlDatabase::database("Config.db"));
        if(valor.lastError().isValid()){
            Log("Creacion de Db Config fallida \n" + valor.executedQuery() + "\n" + valor.lastError().text() );
        }
    
        valor.exec("CREATE TABLE IF NOT EXISTS Config"
               "(Mac VARCHAR(18), Ton_Socio FLOAT, Sanidad FLOAT,"
               " Cuota FLOAT, Modulo FLOAT, Actulz INTEGER, Precio_Fix FLOAT )");
        if(valor.lastError().isValid()){
            Log("Creacion de Config fallida \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
        }
    
        if(!valor.lastError().isValid()){
            Log("Creacion de Config");
        }
        valor.finish();
        //KillDB();
    }else{
        // here i update the mac address inside the config file
        CrearDB(DirFile, "Config.db");   // creates conecction to DB
        QSqlQuery valor(QSqlDatabase::database("Config.db"));
        if(valor.lastError().isValid()){
            Log("Error \n" + valor.executedQuery() + "\n" + valor.lastError().text() );
        }
    
        valor.exec("SELECT * FROM Config");
       Log("antes del while");
        while (valor.last() == true){
            row++;
            valor.next();
        }
        
        Log(MAC);
        
        if( row == 1 ){  // if exist a row update the mac address
        valor.prepare("UPDATE Config SET Mac = ':serial'");
        valor.bindValue(":serial", MAC);
        valor.exec();
        if(valor.lastError().isValid()){
            Log("No se puede accesar la tabla Config \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
            }
        }
        if( row == 0){     //if not creates the row and update it
            valor.prepare("INSERT INTO Config (Mac) VALUES (:serial)");
            valor.bindValue(":serial", MAC);
            valor.exec();
            if(valor.lastError().isValid()){
                Log("No se puede crear el registro\n" + valor.lastQuery() + "\n" + valor.lastError().text() );
            }
        }
        if( row>1 ){
            Log("Error Demaciados campos " + QString::number(row));
        }
        if(!valor.lastError().isValid()){
            Log("Update de Config");
        }
        valor.finish();
        //KillDB();
    }
} 

void Silo::LogData(QString data){
    std::ofstream archivo; 
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    
    archivo.open("Logs/LogsDb.txt", std::ios::in | std::ios::app);
    if (!archivo.is_open()){
       QMessageBox::warning(this , "Error", "No se Pudo encontrar el archivo Logs");   
     }else{
        if (data.trimmed().isEmpty()){
           data = "empty";
        }
      archivo << "========================================" << timer << data.toStdString() << std::endl;
      archivo.close();
     }
    
}

void Silo::Log(QString save){
    std::ofstream archivo; 
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    
    archivo.open("Logs/LogSaS.txt", std::ios::in | std::ios::app);
    if(!archivo.is_open()){
      QMessageBox::warning(this , "Error", "No se Pudo encontrar el archivo Logs");
    }else{
      if (save.trimmed().isEmpty()){
           save = "empty";
        }
      archivo << "========================================" << timer << save.toStdString() << std::endl;
      archivo.close();
    }
}


/*
void Silo::closeEvent(QCloseEvent *event)  // Old Method works but its not needed
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();

    switch (ret) {
        case QMessageBox::Save:
            // Save was clicked
            break;
        case QMessageBox::Discard:
            // Don't Save was clicked
            break;
        case QMessageBox::Cancel:
            // Cancel was clicked
            break;
        default:
            // should never be reached
            break;
    }

    event->accept();
}
*/

void Silo::Salir(){
/*
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    QPushButton *boton_NO = MBox.addButton("Cancel", QMessageBox::RejectRole);
    
    MBox.setDefaultButton(boton_OK);
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    MBox.setWindowTitle("Exit");
    MBox.setText("Seguro que desea Salir?");
    
    if (MBox.clickedButton() == boton_OK){
        Log("Salio de la App");
        close();
    } else if(MBox.clickedButton() == boton_NO) {
        Log("Hizo click en no");
        return;
    }    
    */
    this->close();
}

void Silo::Validadores_Boletas_New(){
    //QRegExp rx("[^a-z$]|[^A-Z$]");     // RegExp los caracteres entre a-z o A-Z
    
    widget_PP.Folio_edit->setValidator(new QIntValidator(this));
    widget_PP.Peso_Bruto_edit->setValidator(new QDoubleValidator(this)); 
    widget_PP.Peso_Tara_edit->setValidator(new QDoubleValidator(this));
    //widget_PP.Peso_Neto_edit->setValidator(new QDoubleValidator(0, 60000, 2, this));
    widget_PP.Humedad_edit->setValidator(new QDoubleValidator(0, 30, 2, this));
    widget_PP.Peso_Espe_edit->setValidator(new QDoubleValidator(0, 1000, 3, this));
    
    //widget_PP.Predio_Ubicacion_edit->setValidator(new QRegExpValidator(rx, this));    // solo pueden existir caracteres contenidos en rx
   
}
void Silo::Validadores_Boletas_Salidas(){
    widget_PP.Folio_Salida_edit->setValidator(new QIntValidator(this));
    widget_PP.Salidas_Bruto_edit->setValidator(new QDoubleValidator(this));
    widget_PP.Salidas_Tara_edit->setValidator(new QDoubleValidator(this));
    widget_PP.Salidas_Humedad_edit->setValidator(new QDoubleValidator(0, 30, 2, this));
    widget_PP.Salidas_Espe_edit->setValidator(new QDoubleValidator(0, 1000, 3, this));
}

void Silo::Validadores_Productores(){
     widget_PP.Tel_Lista_Prod_edit->setValidator(new QIntValidator( this));
     widget_PP.Whats_Lista_Prod_edit->setValidator(new QIntValidator(this));
     widget_PP.No_Cliente_edit->setValidator(new QIntValidator(0, 500, this));
     widget_PP.Acciones_Lista_Prod_edit->setValidator(new QIntValidator(0 ,500 , this));
}

void Silo::Validadores_Compradores(){
     widget_PP.Telefono_edit->setValidator(new QIntValidator(this));
     widget_PP.Whatsapp_edit->setValidator(new QIntValidator(this));
     widget_PP.Precio_Ton_edit->setValidator(new QDoubleValidator(0, 10000, 2, this));
    
}

void Silo::Validadores_Opciones(){
    widget_PP.Cuotas_Sanidad_edit->setValidator(new QDoubleValidator(this));
    widget_PP.Cuotas_Grano_edit->setValidator(new QDoubleValidator(this));
    widget_PP.Cuotas_Modulo_edit->setValidator(new QDoubleValidator(this));
    widget_PP.Socios_TonsxSocio_edit->setValidator(new QDoubleValidator(this));
    widget_PP.User_Add_telefono_edit->setValidator(new QIntValidator(this));
    
}

void Silo::Imp_Liquida(){
    //  prints liquidaciones
    std::vector<QString> vector;   // Here goes the data that needs to be printed
    Impresora* print = new Impresora;
    print->imprimir(this, vector);
}

void Silo::Imp_Salidas(){
    // prints boletas salidas
}

void Silo::C_Ent(){  // Boletas de entrada
   
    widget_PP.Ciclo_edit->setText(ciclo_actual());  
    widget_PP.SW_Zona_Principal->setCurrentIndex(1);
    Validadores_Boletas_New();
    Entradas_CB_Productor();
    Tabla_Boletas_Entradas();
    Arrows();
    widget_PP.icon_Arrow_1->setVisible(true);
 }

void Silo::C_Reg_Ind(){  // Registros Individuales
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(2);
    widget_PP.Registros_Ind->horizontalHeader()->setVisible(true);
    widget_PP.Registros_Tab->setCurrentIndex(0);
    Reg_Individual_CB_Ciclo();
    RegistroGeneral_CB();
    Arrows();
    widget_PP.icon_Arrow_4->setVisible(true);
}

void Silo::C_Reg_Gen(){  // Registros Generales
    widget_PP.SW_Zona_Principal->setCurrentIndex(2);
    widget_PP.Registros_General->horizontalHeader()->setVisible(true);
    widget_PP.Registros_Tab->setCurrentIndex(1);
    RegistroGeneral_CB();
    Arrows();
    widget_PP.icon_Arrow_4->setVisible(true);
}

//void Silo::C_Ade(){   // Adeudos, eliminado no funciona
    
//    widget_PP.SW_Zona_Principal->setCurrentIndex(3);
//    PopuAdeudos();
//}

void Silo::C_Pro(){    // Productores
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(4);
    Productores_Lista();
    Validadores_Productores();
    Arrows();
    widget_PP.icon_Arrow_5->setVisible(true);
}

void Silo::C_Comp(){   // Compradores
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(5);
    Compradores_Lista();
    Validadores_Compradores();
    Arrows();
    widget_PP.icon_Arrow_6->setVisible(true);
}

void Silo::C_Liq(){  // Liquidaciones

    widget_PP.SW_Zona_Principal->setCurrentIndex(6);
    Liquidaciones_CB_Prod();
    Liquidaciones_CB_Comp();
    Arrows();
    widget_PP.icon_Arrow_2->setVisible(true);
}


void Silo::C_Opc(){    // Opciones
    widget_PP.SW_Zona_Principal->setCurrentIndex(7);
    Options_Init();
    Validadores_Opciones();
    Arrows();
}

void Silo::C_HumySec1(){  //Humedad y secado 1
    Popup_DrynWet_CB1();
    ShowDeduc();
    widget_PP.SW_Zona_Principal->setCurrentIndex(8);
    Arrows();
    
}

void Silo::C_HumySec2(){    // Humedad y secado 2
    widget_PP.SW_Zona_Principal->setCurrentIndex(9);
    Popup_DrynWet_CB2();
    Popup_DrynWet_CB3();
    Arrows();
}

void Silo::Salidas(){     // Salidas de Camiones
    widget_PP.Ciclo_edit_Salida->setText(ciclo_actual());  
    widget_PP.SW_Zona_Principal->setCurrentIndex(10);
    Salidas_CB_Comprador();
    Validadores_Boletas_Salidas();
    Tabla_Boletas_Salidas();
    Arrows();
    widget_PP.icon_Arrow_3->setVisible(true);
}

void Silo::Silos(){     // Silos
    widget_PP.SW_Zona_Principal->setCurrentIndex(11);
    Arrows();
    widget_PP.icon_Arrow_7->setVisible(true);
}

