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
#include "framelesswindow.h"
#include "Impresora.h"
#include "Serial.h"
//#include "filesystem"  // hace la busqueda de archivos mas facil, c++ 17

   //**************  se usan en ciclo_actual() ********//
    //static constexpr int DAY_OFFSET = 0;
    //static constexpr int DAY_LENGTH = 3;

    static constexpr int MONTH_OFFSET = 4;
    static constexpr int MONTH_LENGTH = 3;

    //static constexpr int DAY_NUMBER_OFFSET = 8;
    //static constexpr int DAY_NUMBER_LENGTH = 2;

    //static constexpr int HOUR_OFFSET = 11;
    //static constexpr int HOUR_LENGTH = 8;

    static constexpr int YEAR_OFFSET = 20;
    static constexpr int YEAR_LENGTH = 4;
    // ***********************************************//
    

   //extern QString ciclo_actual();
   //extern QString users();
   //extern QString adeudos();   

Silo::Silo() {
    widget_PP.setupUi(this);

    // Conecciones
    //************ Botonera Principal *********//
    
    QObject::connect(widget_PP.push_Boletas, SIGNAL(clicked()), this, SLOT(C_Ent()));    // boletas
    QObject::connect(widget_PP.push_Registros, SIGNAL(clicked()), this, SLOT(C_Reg()));   //  Registros
    //QObject::connect(widget_PP.push_Adeudos, SIGNAL(clicked()), this, SLOT(C_Ade()));    // Adeudos
    QObject::connect(widget_PP.push_Productores, SIGNAL(clicked()), this, SLOT(C_Pro()));   //productores
    QObject::connect(widget_PP.push_Compradores, SIGNAL(clicked()), this, SLOT(C_Comp()));  // Compradores
    QObject::connect(widget_PP.push_Liquidacion, SIGNAL(clicked()), this, SLOT(C_Liq()));  //Liquidaciones
    
    //************* Nuevo Registro ***********//
    
    QObject::connect(widget_PP.push_Nuevo, SIGNAL(clicked()), this, SLOT(Productor()));    
    QObject::connect(widget_PP.Prod_Guardar, SIGNAL(clicked()), this, SLOT(Productor_New()));
    //***************************************//
   
    QObject::connect(widget_PP.RegInd_Ciclo_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(RegIndProd(QString)));  // Registros Individual 
    QObject::connect(widget_PP.RegInd_Prod_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(TablaRegInd(QString)));  // Registros Individual 
    QObject::connect(widget_PP.RegGen_Ciclo_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(TablaRegGen(QString)));  // Registros Generales 
    QObject::connect(widget_PP.Liq_Prod_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(Liquidaciones(QString))); // Liquidaciones
    QObject::connect(widget_PP.Liq_Boletas_Lista, SIGNAL(cellClicked(int,int)), this, SLOT(Liquidaciones_Data(int, int))); // Liquidaciones Data
    QObject::connect(widget_PP.Prod_sal_CB, SIGNAL(currentIndexChanged(const QString)), this, SLOT(AdeudosProdu(QString))); // Adeudos
    QObject::connect(widget_PP.Prod_ComboBox, SIGNAL(currentIndexChanged(const QString)), this, SLOT(NumProdu(QString))); // num productor boletas
    QObject::connect(widget_PP.Productores_Lista, SIGNAL(cellClicked(int,int)), this, SLOT(mostrar_Produc(int, int))); // Productores
    QObject::connect(widget_PP.Compradores_Lista, SIGNAL(cellClicked(int,int)), this, SLOT(mostrar_Compra(int, int))); // Compradores
    //QObject::connect(widget_PP.RegInd_Print, SIGNAL(clicked()), this, SLOT(TablaRegInd()));
    //QObject::connect(widget_PP.RegGen_Print, SIGNAL(clicked()), this, SLOT(TablaRegGen()));
    
    //************* Menu ************//
    
    QObject::connect(widget_PP.About, SIGNAL(triggered()), this, SLOT(Ventana_About()));
    QObject::connect(widget_PP.actionAcerda_de, SIGNAL(triggered()), this, SLOT(About()));
    QObject::connect(widget_PP.actionSalir, SIGNAL(triggered()), this, SLOT(closeEvent()));
     
    QObject::connect(widget_PP.actionEntradas, SIGNAL(triggered()), this, SLOT(C_Ent()));  // Menu Boletas
    QObject::connect(widget_PP.actionRegistros, SIGNAL(triggered()), this, SLOT(C_Reg()));  // Menu Registros
    QObject::connect(widget_PP.actionProductores, SIGNAL(triggered()), this, SLOT(C_Pro()));  // Menu Productores
    QObject::connect(widget_PP.actionCompradores, SIGNAL(triggered()), this, SLOT(C_Comp()));  // Menu Compradores
    QObject::connect(widget_PP.actionSalidas, SIGNAL(triggered()), this, SLOT(C_Liq()));  // Menu Liquidaciones
    
    //*********** Impresion **********//
    
    QObject::connect(widget_PP.push_Borrar, SIGNAL(clicked()),this, SLOT(Impresion()));
    
}

Silo::~Silo() {  //Destructor de Clase
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
    QString ciclo;
    int ano2{0}, mes{0}, ano2_ant{0};
    //meses mes2;
    //std::string day(date.begin() + DAY_OFFSET, date.begin() + DAY_OFFSET + DAY_LENGTH); // el primer argumento pone el cursor al principio de donde quiero leer
    std::string month(date.begin() + MONTH_OFFSET, date.begin() + MONTH_OFFSET + MONTH_LENGTH);  // el segundo argumento le dices asta que direccion de memoria 
    //std::string dayNumber(date.begin() + DAY_NUMBER_OFFSET, date.begin() + DAY_NUMBER_OFFSET + DAY_NUMBER_LENGTH); // vas a leer
    //std::string hours(date.begin() + HOUR_OFFSET, date.begin() + HOUR_OFFSET + HOUR_LENGTH); // inicializacion c++11/14
    std::string year(date.begin() + YEAR_OFFSET, date.begin() + YEAR_OFFSET + YEAR_LENGTH); 
    ano2 = stoi(year);   // stoi combierte de string a int  
   
    if (month == "Jan"){mes = 1; /*mes2 = Jan;*/}
    if (month == "Feb"){mes = 2;}
    if (month == "Mar"){mes = 3;}
    if (month == "Apr"){mes = 4;}
    if (month == "May"){mes = 5;}
    if (month == "Jun"){mes = 6;}
    if (month == "Jul"){mes = 7;}
    if (month == "Agu"){mes = 8;}
    if (month == "Sep"){mes = 9;}
    if (month == "Oct"){mes = 10;}
    if (month == "Nov"){mes = 11;}
    if (month == "Dec"){mes = 12;}
    
    if (mes > 0 && mes <4 ){  // entre Enero, Feb y Marzo
           ano2_ant = ano2 - 1;
           ciclo = "Ciclo_OI_" + QString::number(ano2_ant)  + "_" + QString::fromStdString(year) + ".db";    //ciclo OI
    }
    if (mes > 9 && mes <13 ){   // entre Oct, Nov y Dic
           ano2_ant = ano2 - 1;
           ciclo = "Ciclo_OI_" + QString::number(ano2_ant)  + "_" + QString::fromStdString(year) + ".db";    //ciclo OI
    }
    
    if (mes>=4 && mes<=9){  // entre abril y Septiembre
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


QString Silo::users(){return QStringLiteral("Utilisateurs.db");}
 
QString Silo::adeudos()
{
    return QStringLiteral("Dettes_OI_19-20.db");
    // modificar igual que ciclo actual segun la fecha del ano
}

//int Silo::TonsXaccion(){return TonsXaccion = 50;}
//*****************************************************************
//*****************************************************************

//*********** crea nuevo registro en boletas ***********//

void Silo::Productor(){
  
    // sacar de la boleta o la base de datos la info del productor
    
    QString prodNum = widget_PP.SocioNum_edit->text(); // recupera el numero de productor del formulario, ponerlo como protegido
    
    QString predio = widget_PP.Predio_Nombre_edit->text();
    QString ubicacion = widget_PP.Predio_Ubicacion_edit->text();
   
    QString c_nombre = widget_PP.Nombres_Chofer_edit->text();
    QString c_apellidos = widget_PP.Apellidos_Chofer_edit->text();
    QString placas = widget_PP.Placas_Camion_edit->text();
    QString color = widget_PP.Camion_Color_edit->text();
    QString tipo = widget_PP.Camion_Tipo_edit->text();
    QString bruto = widget_PP.Peso_Bruto_edit->text();
    QString tara = widget_PP.Peso_Tara_edit->text();
    QString humedad = widget_PP.Humedad_edit->text();  
    QString silo; // traer cual silo esta seleccionado
    int neto = 0;
   
    if (bruto.toInt() < tara.toInt())   // se asegura que el peso bruto nunca sea mayor que la tara, dando valores negativos
    {
        QMessageBox::information( this, "  Error Peso  ", " Error, la Tara no puede ser mayor al Bruto");
        widget_PP.Peso_Bruto_edit->clear();
        widget_PP.Peso_Tara_edit->clear();
    } else{
        neto = bruto.toInt() - tara.toInt();
    }
    
    std::time_t now = time(0);
    QString fecha = ctime(&now);
    
    widget_PP.Silo_1->isChecked() ? silo="1" : silo="2";
    
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    valor.prepare( "INSERT INTO Boletas_Entradas ( Prod_Num, Chofer_Nombre, Chofer_Apellidos, Placas, Color, Tipo, Humedad, "
                   " Bruto, Tara, Neto, Silo, Ciclo, Fecha ) " // agregar las fotos al ultimo, foto_Cam1, foto_Cam2,
                   "VALUES ( :Prod_Num, :Chofer_Nombre, :Chofer_Apellidos, :Placas, :Color, :Tipo, :Humedad,"
                   " :Bruto, :Tara, :Neto, :Silo, :Ciclo, :Fecha )"); // :foto_Cam1, :foto_Cam2,
   // valor.bindValue(":Folio", Folio_Num());  // hacer funcion que genere los Folios segun el ciclo_actual
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
//    valor.bindValue(":foto_Cam1", );  // conectar con opencv camara1 y camara 2, se guardan como binario
//    valor.bindValue(":foto_Cam2", );
    valor.bindValue(":Ciclo", ciclo_actual());  // hacer script que identifique la fecha actual y defina el ciclo
    LogData("Ciclo -- " + ciclo_actual());
    valor.bindValue(":Fecha", fecha);
    LogData("Fecha -- " + fecha);
    valor.bindValue(":Bruto", bruto);
    LogData("Bruto -- " + bruto);
    valor.bindValue(":Tara", tara);
    LogData("Tara -- " + tara);
    valor.bindValue(":Neto", neto);
    LogData("Neto -- " + neto);
    valor.bindValue(":Silo", silo);
    LogData("Silo -- " + silo);
    if(valor.exec()){
        Log("Registro creado Productor \n" + valor.executedQuery() + "\n" + valor.lastError().text());
        QMessageBox::information( this, "Nuevo Registro", "\n Creado");
        return;
        }
    else {
        Log("Error al agregar Valores \n" + valor.executedQuery() + "\n" + valor.lastError().text());
        QMessageBox::warning( this, "Error", valor.lastError().text());
        return;
        }
    
    widget_PP.SocioNum_edit->clear(); 
    widget_PP.Predio_Nombre_edit->clear();
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


}

void Silo::listaBoletasProd(){  // llenar el combo box productor boletas
    
    widget_PP.Prod_ComboBox->clear();
    widget_PP.Predio_Nombre_edit->clear();
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
    /***************** borrar al terminar ****************
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Ciclo_OI_2020_2021.db");
    ********************************************/
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));
    prod.exec("SELECT Prod_Apellidos, Prod_Nombre, Prod_Num FROM Productores");
    if(prod.lastError().isValid()){
        Log( "QcomboBox lista productores boletas \n" + prod.executedQuery() + "\n" + prod.lastError().text());
    }
    
    while (prod.next()){
      widget_PP.Prod_ComboBox->addItem(prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
    }
    
}

void Silo::NumProdu(QString ComboBox){   // poner el numero del socio boletas
    
     /***************** borrar al terminar ****************
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Ciclo_OI_2020_2021.db");
    ********************************************/
    
    QSqlQuery busq(QSqlDatabase::database(ciclo_actual()));
    busq.exec("SELECT Prod_Apellidos, Prod_Nombre, Prod_Num FROM Productores");

    if(busq.lastError().isValid()){
        Log("Num Productor en Boletas \n" + busq.executedQuery() + "\n" + busq.lastError().text());
    }
    int contador = 0;  // super importante NO BORRAR!!!!!!!!!!!!!!!
    QString prod;
    bool check = false;
   
    widget_PP.SocioNum_edit->setReadOnly(true);// isEnabled(); // solo lectura
    do{
        prod = busq.value("Prod_Apellidos").toString() + ", " + busq.value("Prod_Nombre").toString();
        if(prod == ", "){
            Log("Num prod empty \n" + prod + "\n" + ComboBox);
        }
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
    
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    valor.prepare( "INSERT INTO Productores ( Prod_Nombre, Prod_Apellidos, Prod_Direccion, Predio_Nombre, Ciudad, "
                   "Tipo_Prod, Socio_Ref, Num_Acciones, Email, Whattsapp, Telefono ) "
                   "VALUES (:Prod_Nombre, :Prod_Apellidos, :Prod_Direccion, :Predio_Nombre, :Ciudad, :Tipo_Prod, "
                   ":Socio_Ref, :Num_Acciones, :Email, :Whattsapp, :Telefono )");
    
    LogData("Productor_New");
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
    valor.exec();
    
    if(valor.lastError().isValid()){
        Log("Productor_New \n" + valor.lastError().text() +  valor.lastQuery());
    }
    
    valor.finish();
    Productores_Lista(); // lo llamo para actualizar la lista
}

void Silo::Comprador_New(){
    
    // ver por que no son editables los qlineEdit
    widget_PP.Contacto_edit->setReadOnly(false);
    
    QString contacto = widget_PP.Contacto_edit->text();
    QString razon_social = widget_PP.Razon_Social_edit->text();
    QString direccion = widget_PP.Direccion_edit->text(); 
    QString email = widget_PP.Email_edit->text();
    QString whatsapp = widget_PP.Whatsapp_edit->text();
    QString telefono = widget_PP.Telefono_edit->text();
    QString ciudad = widget_PP.Ciudad_edit->text();
    QString estado = widget_PP.Estado_edit->text();
    //QString num_Comprador = ; // spin box
    
    QSqlQuery valor(QSqlDatabase::database(ciclo_actual()));
    valor.prepare( "INSERT INTO Compradores ( Razon_Social, Direccion, Contacto,"
                   " Telefono, Whattsapp, Email, Ciudad, Estado )"
                   "VALUES (:Razon_Social, :Direccion, :Contacto, :Telefono,"
                   " :Whattsapp, :Email, :Ciudad, :Estado )"
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
    valor.exec();
    
    if(valor.lastError().isValid()){
        Log("Comprador_New \n" + valor.lastError().text() + "\n" + valor.lastQuery());
    }
    
    valor.finish();
    
    Compradores_Lista(); // actualiza la lista de compradores
}
    
void Silo::RegistroInd(){    // comboBox del Ciclo
    QStringList filename = {"ciclo*.db", "Ciclo*.db", "CICLO*.db"};
   /* QSqlQuery reg(QSqlDatabase::database(ciclo_actual())); // usar buscarArchivos() para usar la db seleccionada en el combobox

    reg.exec("SELECT Prod_Apellidos, Prod_Nombre, Prod_Num FROM Productores");
    if(reg.lastError().isValid()){
         Log( reg.executedQuery(), reg.lastError().text(),"RegistrosInd");
    }
    */
    QStringList ciclos = buscarArchivos(filename, "Data");
    widget_PP.RegInd_Ciclo_CB->clear();
    widget_PP.RegInd_Prod_CB->clear();
    widget_PP.RegInd_NoCont_edit->clear();
    if (ciclos.size() <= 0){
        Log("Registros Individual, No se Pueden Encontrar los archivos: " + filename.at(0) );//QString::number(ciclos.size()));
    }
    
    for(int i = 0; i <ciclos.size(); i++){                       // en esencia es un foreach que pone cada ciclo dentro del Combobox
        if (!ciclos.at(i).isEmpty()){
            widget_PP.RegInd_Ciclo_CB->addItem(ciclos.at(i));
            //Log("despues de llamar buscarArchivos dentro de RegistroInd = " + QString::number(i) + " " + ciclos.at(i));    
        }
    };
   // widget_PP.RegInd_Ciclo_CB->addItem(ciclo_actual());
    /*
    while(reg.next()){
        widget_PP.RegInd_Prod_CB->addItem(reg.value("Prod_Apellidos").toString() + ", " + reg.value("Prod_Nombre").toString());
    }
    Log("Mostrar Registros");
     */
/*
  QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));
    reg.exec("SELECT Prod_Apellidos, Prod_Nombre, Prod_Num FROM Productores");
    Log( prod.executedQuery(), prod.lastError().text(),"QcomboBox lista productores boletas");
   
    while (prod.next()){
      widget_PP.Prod_ComboBox->addItem(prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
    }
*/
}

void Silo::RegIndProd(QString ComboBox){  // comboBox de los productores
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    widget_PP.RegInd_Prod_CB->clear();
    CrearDB(QString::fromStdWString(DirFile), ComboBox);
    QSqlQuery reg(QSqlDatabase::database(ComboBox)); // usar buscarArchivos() para usar la db seleccionada en el combobox
    reg.exec("SELECT Prod_Apellidos, Prod_Nombre FROM Productores");
    if(reg.lastError().isValid()){
         Log( "RegIndProd \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    while(reg.next()){
        widget_PP.RegInd_Prod_CB->addItem(reg.value("Prod_Apellidos").toString() + ", " + reg.value("Prod_Nombre").toString());
    }
    //Log("Mostrar Registros Ind Prod");

}

void Silo::TablaRegInd(QString ComboBox){  // Tabla con la informacion
    
    int contador = 0;  // super importante NO BORRAR!!!!!!!!!!!!!!!
    QString info;  // hace las comparacions contra el ComboBox
    QString folioNum;
//  QString Prod_Num = registros.value("Prod_Num").toString();
    QString Chofer;
    QString C_Apellidos;
    QString Placas;
    QString Color;
    QString Tipo;
    QString Humedad;
    QString Bruto;
    QString Tara;
    QString Neto;
    QString Silo;
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    
    QString Db= widget_PP.RegInd_Ciclo_CB->currentText();
    //CrearDB(QString::fromStdWString(DirFile), Db);
    
    QSqlQuery prod(QSqlDatabase::database(Db));  // haces la busqueda de boletas
    // filtrar solo por el nombre y apellido del productor
    //Log(ComboBox + "\n" + Db);
    prod.exec("SELECT a.Prod_Nombre, a.Prod_Apellidos, b.* FROM Productores AS a JOIN Boletas_Entradas AS b ON a.Prod_Num=b.Prod_Num");
    if(prod.lastError().isValid()){
        Log("Lectura Tabla Registros Individual \n" + prod.executedQuery() + "\n" + prod.lastError().text() ); 
    }
    widget_PP.Registros_Ind->clear();
    widget_PP.Registros_Ind->setRowCount(0);
    //widget_PP.Liq_Boletas_Lista->setColumnCount(3);
    widget_PP.Registros_Ind->horizontalHeader()->hide();
    //widget_PP.Liq_Boletas_Lista->horizontalHeader()->setDefaultSectionSize(200);
    widget_PP.Registros_Ind->verticalHeader()->hide();
    widget_PP.Registros_Ind->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    
    
    //widget_PP.RegInd_NoCont_edit->setText(registros.value("Num_Contrato").toString());
    
    do {
        info = prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString();
        if (info == ", "){
            Log( "TablaRegInd\n" + info + "\n" + ComboBox);
        }
        if(ComboBox == info){
    
              widget_PP.Registros_Ind->setRowCount(widget_PP.Registros_Ind->rowCount() + 1);
              int filas = widget_PP.Registros_Ind->rowCount() - 1;
        
              folioNum = prod.value("Folio").toString();
          //  QString Prod_Num = registros.value("Prod_Num").toString();
              Chofer = prod.value("Chofer_Nombre").toString();
              C_Apellidos = prod.value("Chofer_Apellidos").toString();
              Placas = prod.value("Placas").toString();
              Color = prod.value("Color").toString();
              Tipo = prod.value("Tipo").toString();
              Humedad = prod.value("Humedad").toString();
              Bruto = prod.value("Bruto").toString();
              Tara = prod.value("Tara").toString();
              Neto = prod.value("Neto").toString();
              Silo = prod.value("Silo").toString();
          //  QString foto1 = registros.value("foto_Cam1").toString();
          //  QString foto2 = registros.value("foto_Cam2").toString();
    
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(folioNum);
              widget_PP.Registros_Ind->setItem(filas,0,obj0);
              QTableWidgetItem *obj1 = new QTableWidgetItem;
              obj1->setText(Chofer);
              widget_PP.Registros_Ind->setItem(filas,1,obj1);
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(C_Apellidos);
              widget_PP.Registros_Ind->setItem(filas,2,obj2);
              QTableWidgetItem *obj3 = new QTableWidgetItem;
              obj3->setText(Placas);
              widget_PP.Registros_Ind->setItem(filas,3,obj3);
              QTableWidgetItem *obj4 = new QTableWidgetItem;
              obj4->setText(Color);
              widget_PP.Registros_Ind->setItem(filas,4,obj4);
              QTableWidgetItem *obj5 = new QTableWidgetItem;
              obj5->setText(Tipo);
              widget_PP.Registros_Ind->setItem(filas,5,obj5);    
              QTableWidgetItem *obj6 = new QTableWidgetItem;
              obj6->setText(Humedad);
              widget_PP.Registros_Ind->setItem(filas,6,obj6);
              QTableWidgetItem *obj7 = new QTableWidgetItem;
              obj7->setText(Bruto);
              widget_PP.Registros_Ind->setItem(filas,7,obj7);
              QTableWidgetItem *obj8 = new QTableWidgetItem;
              obj8->setText(Tara);
              widget_PP.Registros_Ind->setItem(filas,8,obj8);
              QTableWidgetItem *obj9 = new QTableWidgetItem;
              obj9->setText(Neto);
              widget_PP.Registros_Ind->setItem(filas,9,obj9);
              QTableWidgetItem *obj10 = new QTableWidgetItem;
              obj10->setText(Silo);
              widget_PP.Registros_Ind->setItem(filas,10,obj10);

    } else {
          if (info.trimmed() == ","){contador++;}
        }
        
      if( contador >= 5){
        QMessageBox::warning( this, "Error", " No Existe ese Usuario");
     
       }
  } while(prod.next()); 
}

void Silo::RegistroGeneral(){
    QStringList filename = {"ciclo*.db", "Ciclo*.db", "CICLO*.db"};
    QStringList ciclos = buscarArchivos(filename, "Data");
    
    //QSqlQuery reg(QSqlDatabase::database(ciclo_actual()));

    //reg.exec("SELECT * FROM Productores");
    //Log("Registros Generales");
    
    widget_PP.RegGen_Ciclo_CB->clear();
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


void Silo::TablaRegGen(QString ComboBox){  // tabla registros generales
  
    QString Productor;
    QString Num_Contrato;
    QString Tons_Contrato;
    QString Tons_Entregado;
    QString Precio_Contrato;
    QString Precio_Fix;
    QString Precio_Ton;
    QString Descuentos;
    QString Total;

    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ComboBox);
    //Log("TablaRegGen, Antes del query " + ComboBox);
    QSqlQuery prod(QSqlDatabase::database(ComboBox));  // haces la busqueda de boletas
    // filtrar solo por el nombre y apellido del productor
   
    prod.exec("SELECT * FROM Boletas_Entradas AS a JOIN Productores AS b ON a.Prod_Num=b.Prod_Num ORDER BY Folio");
    if(prod.lastError().isValid()){
        Log( "Fallo Lectura Tabla Registros Generales \n" + prod.executedQuery() + "\n" + prod.lastError().text() ); 
    }
    widget_PP.Registros_General->clear();
    widget_PP.Registros_General->setRowCount(0);
    
    widget_PP.Registros_General->setColumnCount(9);
    widget_PP.Registros_General->horizontalHeader()->hide();
    widget_PP.Registros_General->horizontalHeader()->setDefaultSectionSize(200);
    //widget_PP.Liq_Boletas_Lista->setHorizontalHeaderLabels(list);
    widget_PP.Registros_General->verticalHeader()->hide();
    widget_PP.Registros_General->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    
    //Log( "TablaRegGen dentro del ciclo \n" + ComboBox);
  
        while(prod.next()){
            //Log (prod.value("Prod_Nombre").toString());
              widget_PP.Registros_General->setRowCount(widget_PP.Registros_General->rowCount() + 1);
              int filas = widget_PP.Registros_General->rowCount() - 1;
        
              Productor = prod.value("Prod_Nombre").toString() + " " + prod.value("Prod_Apellidos").toString();
              Num_Contrato = prod.value("Chofer_Nombre").toString();
              Tons_Contrato = prod.value("Chofer_Apellidos").toString();
              Tons_Entregado = prod.value("Placas").toString();
              Precio_Contrato = prod.value("Color").toString();
              Precio_Fix = prod.value("Tipo").toString();
              Precio_Ton = prod.value("Humedad").toString();
              Descuentos = prod.value("Bruto").toString();
              Total = prod.value("Tara").toString();
        
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(Productor);
              widget_PP.Registros_General->setItem(filas,0,obj0);
              QTableWidgetItem *obj1 = new QTableWidgetItem;
              obj1->setText(Num_Contrato);
              widget_PP.Registros_General->setItem(filas,1,obj1);
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(Tons_Contrato);
              widget_PP.Registros_General->setItem(filas,2,obj2);
              QTableWidgetItem *obj3 = new QTableWidgetItem;
              obj3->setText(Tons_Entregado);
              widget_PP.Registros_General->setItem(filas,3,obj3);
              QTableWidgetItem *obj4 = new QTableWidgetItem;
              obj4->setText(Precio_Contrato);
              widget_PP.Registros_General->setItem(filas,4,obj4);
              QTableWidgetItem *obj5 = new QTableWidgetItem;
              obj5->setText(Precio_Fix);
              widget_PP.Registros_General->setItem(filas,5,obj5);    
              QTableWidgetItem *obj6 = new QTableWidgetItem;
              obj6->setText(Precio_Ton);
              widget_PP.Registros_General->setItem(filas,6,obj6);
              QTableWidgetItem *obj7 = new QTableWidgetItem;
              obj7->setText(Descuentos);
              widget_PP.Registros_General->setItem(filas,7,obj7);
              QTableWidgetItem *obj8 = new QTableWidgetItem;
              obj8->setText(Total);
              widget_PP.Registros_General->setItem(filas,8,obj8);
             
    } 
   /*     
      if( contador >= 5){
        QMessageBox::warning( this, "Error", " No Existe ese Usuario");
     
       }
     */
 
}

void Silo::Productores_Lista(){   // Lista de Productores

    QSqlQuery registros(QSqlDatabase::database(ciclo_actual()));
    registros.exec("SELECT * FROM Productores ORDER BY Prod_Apellidos ASC"); // primero organizar alphabeticamente por apellidos y luego mostrar en la tabla
    if(registros.lastError().isValid()){
        Log( "Lista de Productores \n" + registros.executedQuery() + "\n" + registros.lastError().text() );
    }
    widget_PP.Productores_Lista->clear();
    widget_PP.Productores_Lista->setColumnCount(1);
    widget_PP.Productores_Lista->setColumnWidth(0,350);
    widget_PP.Productores_Lista->setRowCount(0);
    
    while (registros.next()){
       widget_PP.Productores_Lista->setRowCount(widget_PP.Productores_Lista->rowCount() + 1);
       int filas = widget_PP.Productores_Lista->rowCount() - 1;
       QTableWidgetItem *obj0 = new QTableWidgetItem;
       obj0->setText(registros.value("Prod_Apellidos").toString() + ", " + registros.value("Prod_Nombre").toString());
       widget_PP.Productores_Lista->setItem(filas,0,obj0);
    }
    registros.finish();
}

//#pragma GCC diagnostic push                         // con esto evitas las notificaciones
//#pragma GCC diagnostic ignored "-Wunused-parameter"
void Silo::mostrar_Produc(int fila, int columna){ // carga la informacion de los productores y la muestra
   
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
}

//#pragma GCC diagnostic pop

void Silo::Compradores_Lista(){  // Lista de compradores
    
    QSqlQuery registros(QSqlDatabase::database(ciclo_actual()));
    registros.exec("SELECT * FROM Compradores ORDER BY Razon_Social ASC"); // organizar los compradores por Razon Social
    if(registros.lastError().isValid()){
        Log("Lista de Compradores \n" + registros.executedQuery() + "\n" +registros.lastError().text() );   
    }
    widget_PP.Compradores_Lista->clear();
    widget_PP.Compradores_Lista->setColumnCount(1);
    widget_PP.Compradores_Lista->setColumnWidth(0,350);
    widget_PP.Compradores_Lista->setRowCount(0);
    
    while (registros.next()) {
      widget_PP.Compradores_Lista->setRowCount(widget_PP.Compradores_Lista->rowCount() + 1);
      int filas = widget_PP.Compradores_Lista->rowCount() - 1;
      QTableWidgetItem *obj0 = new QTableWidgetItem;
      obj0->setText(registros.value("Razon_Social").toString());
      widget_PP.Compradores_Lista->setItem(filas,0,obj0);
    }    
    registros.finish();
  }

void Silo::mostrar_Compra(int fila, int columna){   // Carga la info de los productores y la muestra
    
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
         widget_PP.Estado_edit->setText(reg.value("Num_Acciones").toString());
        LogData("Acciones" + reg.value("Num_Acciones").toString());
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
}


void Silo::PopuAdeudos(){
    
    widget_PP.Prod_sal_CB->clear();
    widget_PP.Ciclo_Sal_CB->clear();
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));
    prod.exec("SELECT Prod_Apellidos, Prod_Nombre FROM Productores");
    if(prod.lastError().isValid()){
        Log( "llenado QcomboBox lista productores adeudos \n" + prod.executedQuery() + "\n" + prod.lastError().text() );
    }
    widget_PP.Ciclo_Sal_CB->addItem(ciclo_actual()); // populates a combo box for the cicle 
    while (prod.next()){
      widget_PP.Prod_sal_CB->addItem(prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString()); //populates the combobox for users, this is one i need to know who is selected
    }
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
void Silo::AdeudosProdu(QString ComboBox){              // Manejo de Adeudos
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));
    //QSqlQuery adeudos(QSqlDatabase::database(users()));
    
    prod.exec("SELECT a.Prod_Num, a.Prod_Apellidos, a.Prod_Nombre, a.Num_Acciones, b.Sorgo_Contrato, b.Sorgo_Entregado"
              " FROM Productores AS a JOIN Contrato AS b"
              " ON a.Prod_Num = b.Prod_Num");

   // adeudos.exec("SELECT * FROM Semilla");  //  query sobre los adeudos y creditos
    
    if(prod.lastError().isValid()){
        Log("Manejo de Adeudos \n" + prod.executedQuery() + "\n" + prod.lastError().text() );
    }
    int contador = 0;  // super importante NO BORRAR!!!!!!!!!!!!!!!
    QString info;
    bool check = false;
    float ton_contrato, ton_entregada, ton_derecho, excedente, Conser, Patronato, Modulo, prima_Monto, prima_Importe, exced_Pagar ;
   
    do{
        // llenado Num acciones
        info = prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString();
        if(info == ", "){
            Log("Adeudos \n" + info + "\n" + ComboBox);
        }
        //QStringList lista = ComboBox.split(',',QString::SkipEmptyParts);
 
           if(ComboBox == info){
           // Calculo de los excedentes del ciclo
           // revisar bien la ecuacion del excedente, ton_contrato
            
            /*    calculo Cuota de Conservacion de GRanos
             *    cuota del Patronato
             *    Mod San Fernando Sur
             *
             */   
               
               
            Conser = ton_entregada * 0.8;   // cuota de conservacion del grano es el 8% al millar
            //QString conser;
            //conser = conser.setNum(float,Conser,3);
            ton_derecho = prod.value("Num_Acciones").toFloat() * TonsXaccion; // Num_Acciones * TonsXaccion
            ton_entregada = prod.value("Sorgo_Entregado").toFloat();  // viene del total de boletas entregadas
            ton_contrato = prod.value("Sorgo_Contrato").toFloat();
        
            if (ton_entregada > ton_derecho){ // Execedentes de ciclo si lo hai
                excedente = ton_entregada - ton_derecho ;
                widget_PP.Exced_TonsExce_edit->setText(QString::number(excedente));
                Log("Calculo de Excedentes \n" + prod.executedQuery() + "\n" + prod.lastError().text());
            }else{Log("no se calculo el excedente");}
        
            // Calculo de Prima
            float CostoPrima = 11.47; // precio en dollars, mayo 21

            widget_PP.NoAcciones_edit->setText(prod.value("Num_Acciones").toString());
            widget_PP.RetenLiquidaTotal_edit->setText("XX");
            widget_PP.ExcedentedeCiclo_edit->setText("XX");
            widget_PP.PrimaCobertura_edit->setText("XX");
            widget_PP.AnticipoPagoSorgo_edit->setText("XX");
            widget_PP.PagoSemilla_edit->setText("XX");
            widget_PP.TotalRetenAdeudos_edit->setText("XX");
            
            widget_PP.RetenCuotaConservacion_edit->setNum(Conser);//setText(Conser);  
            widget_PP.RetenSecado_edit->setText("XX");
            widget_PP.RetenPIFSV_edit->setText("XX");
            widget_PP.RetenModSanFer_edit->setText("XX");
            widget_PP.RetenTotal_edit->setText("XX");
            
            // widget_PP.ExcedPagar_edit->setText();   // Falta calcular el total a pagar por los excedentes
            widget_PP.Exced_TonsEntregada_edit->setText(QString::number(ton_entregada));
            widget_PP.ExcedNoProd_edit->setText(prod.value("Prod_Num").toString());
            widget_PP.Exced_TonsDerecho_edit->setText(QString::number(ton_derecho));
            widget_PP.Exced_Pagar_edit->setText("XX");
            
            widget_PP.PrimaCalculoCobertura_edit->setText(QString::number(CostoPrima)); // el valor de la prima es en base a una tabla que da aserca son los PUT y CALL
            widget_PP.PrimaTonsCont_edit->setText(QString::number(ton_contrato));
            widget_PP.PrimaMontoTon_edit->setText("XX");   //  monto total
            widget_PP.PrimaImporte_edit->setText("XX");    //  importe
            widget_PP.PrimaPagar_edit->setText("XX");      //  total a pagar
         
            check = true;}
            else {
               if (info.trimmed() == ","){contador++;}
               prod.next();
            }
        
        if( contador >= 5){
            QMessageBox::warning( this, "Error", " No Existe ese Usuario");
            //Borro los valores del registro anterior
        /*  widget_PP.ExcedTonsEntregada_edit->setNum(0);
            widget_PP.NoAcciones_edit->setNum(0);
            widget_PP.ExcedNoProd_edit->setNum(0);
            widget_PP.ExcedTonsDerecho_edit->setText(QString::number(0));
            widget_PP.PrimaCalculoCobertura_edit->setNum(0); 
            widget_PP.PrimaTonsCont_edit->setText(QString::number(0));            
        */
            widget_PP.NoAcciones_edit->setText(QString::number(0));
            
            widget_PP.RetenCuotaConservacion_edit->setText(QString::number(0));
            widget_PP.RetenSecado_edit->setText(QString::number(0));
            widget_PP.RetenPIFSV_edit->setText(QString::number(0));
            widget_PP.RetenModSanFer_edit->setText(QString::number(0));
            widget_PP.RetenTotal_edit->setText(QString::number(0));
            
            widget_PP.Exced_Pagar_edit->setText(QString::number(0));
            widget_PP.Exced_TonsEntregada_edit->setText(QString::number(0));
            widget_PP.ExcedNoProd_edit->setText(QString::number(0));
            widget_PP.Exced_TonsDerecho_edit->setText(QString::number(0));
            widget_PP.Exced_Pagar_edit->setText(QString::number(0));
            
            widget_PP.PrimaCalculoCobertura_edit->setText(QString::number(0));
            widget_PP.PrimaTonsCont_edit->setText(QString::number(0));
            widget_PP.PrimaMontoTon_edit->setText(QString::number(0)); 
            widget_PP.PrimaImporte_edit->setText(QString::number(0));
            widget_PP.PrimaPagar_edit->setText(QString::number(0)); 

            check = true;
        }   
        
    }while (check == false);
    
    // retenciones de liquidacion
    RetencionesLiquidacion();
   
    // Anticipo de Sorgo, si lo hay
    AdeudosSemilla();
    // Descuento por Semilla, si lo hay
    AnticiposSorgo();
    
    // <<<---- Totales ---->>>
    // Liquidacion general del sorgo
    // Total de Retenciones y adeudos
    // y el total Neto a pagar
    
    //Log("llenado Adeudos"); 
    prod.finish();
}
#pragma GCC diagnostic pop

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

void Silo::RetencionesLiquidacion(){
    
}
void Silo::CalculoExcedentes(){
   
}

void Silo::CalculoPrima(){
    // Calcular la prima de cobertura, el monto por toneladas y el total
}

void Silo::AdeudosSemilla(){
    // poner el # de orden, la variedad, marca, cantidad de bolsas, el precio y el total a pagar
}

void Silo::AnticiposSorgo(){
    // # de cheque pagado, fecha, Nombre del Beneficiario y valor del cheque
}

/*
virtual void Silo::mousePressEvent(QMouseEvent *evento) override{
 *  Hacer aqui todo lo que se necesite cuando den click, solo para situaciones especificas 
 * 
 * 
 *     QMainWindow::mousePressEvent(Evento); 
}
*/

void Silo::show_Liquidacion(){
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    //Log("Se llamo show_Liquidacion");
    //QString Db = widget_PP.RegGen_Ciclo_CB->currentText();
    CrearDB(QString::fromStdWString(DirFile), ciclo_actual());
    //Log("TablaRegGen, Antes del query " + ComboBox);
    QSqlQuery Liq(QSqlDatabase::database(ciclo_actual()));  // haces la busqueda de boletas
    Liq.exec("SELECT * FROM Productores");
    if(Liq.lastError().isValid()){
        Log("Error en Liquidaciones \n" + Liq.lastQuery() + "\n" + Liq.lastError().text() );
    }
    while(Liq.next()){
        widget_PP.Liq_Prod_CB->addItem(Liq.value("Prod_Apellidos").toString() + ", " + Liq.value("Prod_Nombre").toString());
    }
    Liq.finish();
}

void Silo::Liquidaciones(QString ComboBox){
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    QString info;
    QString Folio;
    QString Fecha;
    QString Tons;
    
    widget_PP.Liq_Ciclo_edit->setText(ciclo_actual());
    //CrearDB(QString::fromStdWString(DirFile), ComboBox);
    //Log("Liquidaciones, Antes del query " + ComboBox);
    QSqlQuery prod(QSqlDatabase::database(ciclo_actual()));  // haces la busqueda de boletas
    
    if(prod.lastError().isValid()){
        Log("Error al buscar en Liquidaciones" + prod.lastQuery() + "\n" + prod.lastError().text());
    }
   
    prod.exec("SELECT * FROM Boletas_Entradas AS a JOIN Productores AS b ON a.Prod_Num=b.Prod_Num ORDER BY Folio");
    if(prod.lastError().isValid()){
        Log( "Lectura fallida \n" + prod.executedQuery() + "\n" + prod.lastError().text() ); 
    }
    //***************** borrar los valores en pantalla****************
    widget_PP.Liq_Boletas_Lista->clear();
    widget_PP.Liq_Boletas_Lista->setRowCount(0);
    widget_PP.Liq_Boletas_Lista->setColumnCount(3);
    widget_PP.Liq_Boletas_Lista->horizontalHeader()->hide();
    widget_PP.Liq_Boletas_Lista->horizontalHeader()->setDefaultSectionSize(170);
    //widget_PP.Liq_Boletas_Lista->setHorizontalHeaderLabels(list);
    widget_PP.Liq_Boletas_Lista->verticalHeader()->hide();
    widget_PP.Liq_Boletas_Lista->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    //Log( "TablaRegGen dentro del ciclo \n" + ComboBox);
  
    do{
        info = prod.value("Prod_Apellidos").toString() + ", " + prod.value("Prod_Nombre").toString();
        if (info == ", "){
            Log( "Liquidaciones\n" + info + "\n" + ComboBox);
        }
        if(ComboBox == info){
    
              //Log ("dentro del while");
              widget_PP.Liq_Boletas_Lista->setRowCount(widget_PP.Liq_Boletas_Lista->rowCount() + 1);
              int filas = widget_PP.Liq_Boletas_Lista->rowCount() - 1;
              
              Folio = prod.value("Folio").toString();
              Fecha = prod.value("Fecha").toString();
              Tons = prod.value("Neto").toString();
              //Log("Valores boletas_Entradas: " + Fecha + " ....... " + Tons + " ...... " + filas);
              
              QTableWidgetItem *obj0 = new QTableWidgetItem;
              obj0->setText(Folio);
              widget_PP.Liq_Boletas_Lista->setItem(filas,0,obj0);
              
              QTableWidgetItem *obj1 = new QTableWidgetItem; 
              obj1->setText(Fecha);
             
              widget_PP.Liq_Boletas_Lista->setItem(filas,1,obj1);
              
              QTableWidgetItem *obj2 = new QTableWidgetItem;
              obj2->setText(Tons);
              widget_PP.Liq_Boletas_Lista->setItem(filas,2,obj2);
        }         
    }while(prod.next()); 
    widget_PP.Liq_Boletas_Lista->sortItems(0,Qt::AscendingOrder);
    prod.finish();
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
void Silo::Liquidaciones_Data(int row, int col){
    
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual 
    
    CrearDB(QString::fromStdWString(DirFile), "Humedad_Secado.db");
    
    bool correcto = false;
    bool correcto_Hum = false;
    QSqlQuery reg(QSqlDatabase::database(ciclo_actual()));
    reg.exec("SELECT * FROM Boletas_Entradas AS a JOIN Productores AS b JOIN Contrato As c ON a.Prod_Num=b.Prod_Num=c.Prod_Num ORDER BY Folio"); // orderna alphabeticamente por Apellidos   
    if(reg.lastError().isValid()){
        Log( "Error Liquidaciones data \n" + reg.executedQuery() + "\n" + reg.lastError().text());
    }
    
    QSqlQuery Hmd(QSqlDatabase::database("Humedad_Secado.db"));
    if(Hmd.lastError().isValid()){
        Log("Error Humedad y Secado \n" + Hmd.executedQuery() + "\n" + Hmd.lastError().text());
    }
    
    QTableWidgetItem* item = widget_PP.Liq_Boletas_Lista->item(row,0);  // item entrega el objeto en fila y columna
    int contador = 0; // evita el bucle infinito
    
    //Log(item->text(), "Antes del ciclo", "Productores");
    Log("Antes del ciclo Liquidaciones_Data");
    do {
       
        QString table = reg.value("Folio").toString(); 
        if (table == item->text()){  // ver cual renglon esta activo y comparararlo con table
            Log("Dentro del If en Liquidaciones_Data \n" + table + "\n"+ item->text());
            
            float DeduX_norma, Humd_Kilos_Restar, Merma_1Ciento, unoCiento;
            float Total_Deduc, Peso_Anali, Tons_Exced, Sub_Total, Total_Pagar, Secado;
            float Iva_Secado, Reten_Total;
            float Cuota_Cons, Sanidad, PIFSV, Modulo;  // revisar las cuotas del patronato y consv
            
            //   Calculo Excedentes
            if(reg.value("Sorgo_Contrato").toFloat() <= reg.value("Sorgo_Entregado").toFloat() ){
                Tons_Exced = reg.value("Sorgo_Entregado").toFloat() - reg.value("Sorgo_Contrato").toFloat() ;
            }else{
                Tons_Exced = 0.0;
            }
            
            // Calculo Deducciones
            do{
                if(reg.value("Humedad").toFloat() == Hmd.value("Porcentaje").toFloat()){
                    Humd_Kilos_Restar = Hmd.value("Kgs/Ton").toFloat();  // Kilos a restar por Ton
                    correcto_Hum = true;
                }else{
                    Hmd.next();
                }
            } while (correcto_Hum == true);
            
            unoCiento = Humd_Kilos_Restar / 1000;  
            DeduX_norma = unoCiento * reg.value("Neto").toFloat(); // Kilos a restar al neto
            Merma_1Ciento = reg.value("Neto").toFloat() * 0.01;  // 1% merma de la boleta
            Total_Deduc = DeduX_norma + Merma_1Ciento;  // total de deducciones
            Peso_Anali = reg.value("Neto").toFloat() - Total_Deduc ;  
            
            // Calculo Retenciones de Liquidacion
            Cuota_Cons = 0;
            Sanidad = 0;
            PIFSV = 0;
            Modulo = 0;
            //  Subtotal y total
            Sub_Total = (Peso_Anali / 1000) * reg.value("Precio_Ton").toFloat();
            Secado = (Total_Deduc / 1000) * reg.value("Precio_Ton").toFloat();
            Iva_Secado = Secado * 0.16;
            Total_Pagar = Sub_Total + (Secado + Iva_Secado) + Reten_Total;
            //Info General Boleta
            widget_PP.Liq_Prod_Info_edit->setText(reg.value("Prod_Nombre").toString() + " " + reg.value("Prod_Apellidos").toString());         
            widget_PP.Liq_Proce_Info_edit->setText("Rancho");  // revisar la procedencia del rancho              
            widget_PP.Liq_Vehi_Info_edit->setText(reg.value("Tipo").toString());            
            widget_PP.Liq_Placas_Info_edit->setText(reg.value("Placas").toString());        
            widget_PP.Liq_Chofer_Info_edit->setText(reg.value("Chofer_Nombre").toString() + " " + reg.value("Chofer_Apellidos").toString());        
            widget_PP.Liq_Fecha_Info_edit->setText(reg.value("Fecha").toString());        
            widget_PP.Liq_Folio_Info_edit->setText(reg.value("Folio").toString());       
            widget_PP.Liq_Bruto_Info_edit->setText(reg.value("Bruto").toString());            
            widget_PP.Liq_Tara_Info_edit->setText(reg.value("Tara").toString());
            widget_PP.Liq_Neto_Info_edit->setText(reg.value("Neto").toString());
            //Excedentes
            widget_PP.Liq_Excd_Derecho_edit->setText(reg.value("Sorgo_Contrato").toString());      // Tons con derecho
            widget_PP.Liq_Excd_Entrega_edit->setText(reg.value("Sorgo_Entregado").toString());      // Tons Entregadas
            widget_PP.Liq_Excd_Excede_edit->setText(QString::number(Tons_Exced, 'g', 4));       //  tons Excentes
            widget_PP.Liq_Excd_Pagar_edit->setText("nll");        // Total a pagar
            //Retenciones de Liquidacion
            widget_PP.Liq_Reten_ConsGrano_edit->setText("nll");   // Cuota Conservacion de Grano
            widget_PP.Liq_Total_Secado_edit->setText("nll");      //  Cuota por secado
            widget_PP.Liq_Reten_Sanidad_edit->setText("nll");     // sanidad vegetal
            widget_PP.Liq_Reten_PIFSV_edit->setText("nll");       // Patronato
            widget_PP.Liq_Reten_Modulo_edit->setText("nll");      //  Modulo sur
            widget_PP.Liq_Reten_Total_edit->setText("nll");       // Total de retenciones
            // Deducciones
            widget_PP.Liq_Dedc_Humedad_edit->setText(reg.value("Humedad").toString());
            widget_PP.Liq_Dedc_Merma_edit->setText(QString::number(Merma_1Ciento, 'g', 4));         // prevencion merma
            widget_PP.Liq_Dedc_Deducciones_edit->setText(QString::number(Total_Deduc, 'g', 4));   // Deducciones
            widget_PP.Liq_Dedc_Analizado_edit->setText(QString::number(Peso_Anali, 'g', 3));     // Peso Analizado
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
}
#pragma GCC diagnostic pop

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
               "(Prod_Num INTEGER NOT NULL, Cantidad INTEGER, "
               "Tipo_Interes FLOAT, fecha_Credito VARCHAR(30), fecha_Pago VARCHAR(30))");
    if(valor.lastError().isValid()){
        Log("Error al crear Creditos_Cosecha \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Semilla"
               "(Prod_Num INTEGER NOT NULL, Tipo_semilla VARCHAR(250), "
               "Cant_Bolsas INTEGER, Precio_Bolsas FLOAT, "
               "fecha_Credito VARCHAR(30), fecha_Pago VARCHAR(30), "
               "Tipo_Interes FLOAT)");
    if(valor.lastError().isValid()){
        Log("Error al crear Semilla \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Diesel"
               "(Prod_Num INTEGER NOT NULL, Cantidad FLOAT,"
               "Precio FLOAT, fecha_Carga VARCHAR(30), fecha_pago VARCHAR(30) )");
    if(valor.lastError().isValid()){
        Log("Error al crear Diesel" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    if(!valor.lastError().isValid()){
        Log("Creacion de Cred ");
    }

}

void Silo::Ciclo(){
   
    // Creacion de tablas en base de datos del Ciclo
    
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
               "(Prod_Num INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "Prod_Nombre VARCHAR(100), Prod_Apellidos VARCHAR(250), "
               "Predio_Nombre VARCHAR(100), Prod_Direccion TEXT, "
               "Ciudad VARCHAR(250), Tipo_Prod TINYINT, "
               "Socio_Ref INTEGER, Num_Acciones INTEGER, "
               "Email VARCHAR(250), Whattsapp INTEGER,"
               "Telefono INTEGER)");
                //"RFC VARCHAR(13)"   // agregar y Ordenar por RFC
    if(valor.lastError().isValid()){
        Log("Error al crear Productores \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Boletas_Entradas "
               "(Folio INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
               "Prod_Num INTEGER, "
               "Chofer_Nombre VARCHAR(100) , Chofer_Apellidos VARCHAR(250), "
               "Placas VARCHAR(8) , Color VARCHAR(20), "
               "Tipo VARCHAR(30), Humedad FLOAT, "
               "Bruto FLOAT, Tara FLOAT, "
               "Neto FLOAT, Silo TINYINT, "
               "foto_Cam1 VARBINARY, foto_Cam2 VARBINARY, " // VARBINARY(MAX) soporta imagenes/pdf/word etc
               "Fecha VARCHAR(30), Ciclo VARCHAR(20) )");  
    if(valor.lastError().isValid()){
        Log("Error al crear Boletas_Entradas \n " + valor.lastQuery() + "\n" + valor.lastError().text() );
    }
    
    valor.exec("CREATE TABLE IF NOT EXISTS Boletas_Salidas "
               "(Folio INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "Comp_Num INTEGER, "
               "Chofer_Nombre VARCHAR(100), Chofer_Apellidos VARCHAR(250),"
               "Placas VARCHAR(8), Color VARCHAR(20), Tipo VARCHAR(30), "
               "Bruto FLOAT, Tara FLOAT, Neto FLOAT,"
               "foto_Cam1 VARBINARY, foto_Cam2 VARBINARY,"
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
               "(Comp_Num INTEGER, Razon_Social VARCHAR(250), "
               "Direccion VARCHAR(500), Ciudad VARCHAR(250), Estado VARCHAR(250), "
               "Contacto VARCHAR(500), Telefono INTEGER, "
               "Whattsapp INTEGER, Email VARCHAR(250) )");
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

/* *************** Funcion antigua muy redundante
void Silo::Log(QString p1, QString p2, QString p3 ){  // std::vector<QString> log 
    std::ofstream archivo; 
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    archivo.open("Logs/LogSaS.txt", std::ios::in | std::ios::app);
   
   // if (!log.empty()){
   //     archivo2 << "-----------" << timer << "Usando Vectores" << std::endl;
   //     for(std::vector<QString>::const_iterator i = log.begin(); i != log.end(); ++i ){
   //         archivo2 << log[i] << " " << *i;
   //     }    
    //};
    if(!archivo.is_open()){
        QMessageBox::warning(this , "Error", "No se Pudo encontrar el archivo Logs/regdb.txt");
    }else{
        if (p1.trimmed().isEmpty()){
            p1 = "empty";
        }
        if (p2.trimmed().isEmpty()){
            p2 = "empty";
        }
        if (p3.trimmed().isEmpty()){
            p3 = "empty";
        }
    
    archivo << "========================================" << timer << p1.toStdString() << std::endl << p2.toStdString() << std::endl << p3.toStdString() << std::endl;
    archivo.close();
    }
} 
  */

/*
void Silo::closeEvent(QCloseEvent *event){   // override al evento closeEvent
    QMessageBox::StandardButton out = QMessageBox::question(this, "Silo SaS", tr("Seguro que deseas salir?\n"), QMessageBox::Cancel|QMessageBox::Yes);
    out!=QMessageBox::Yes ? event->ignore(): event->accept() ;  // se pasa el estado al evento, ignore no hace nada, accept deja que se cierre la app

}
*/

void Silo::closeEvent(QCloseEvent *event)
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


void Silo::Salir(){
/*
    QMessageBox box = QMessageBox::information( this, "Salir", "¿Seguro que desea Salir?", QMessageBox::Yes | QMessageBox::No);
    
    int boton = box.exec();
    
    switch (boton){
        case QMessageBox::Yes :
            close();
        case QMessageBox::No :
            return; 
        default :
            break;
    }
  */      
    close();
}

//
//Botones
//

/*
int Silo::Generator_UUID(){  // generador de UUID, un numero unico para esta maquina, hacer un programa aparte para generarlos como licensias
    UUID id;
    UuidCreate(&id);
    char *str;
    UuidToStringA(&id, &str);   // (RPC_CSTR*)
    RpcStringFreeA(&str);  //(RPC_CSTR*)
    return 0;
}
*/

void Silo::Impresion(){
    std::vector<QString> vector;
    Impresora* print = new Impresora;
    print->imprimir(this, vector);
    
}

void Silo::C_Ent(){  // Boletas de entrada
    
    widget_PP.Ciclo_edit->setText(ciclo_actual());  
    widget_PP.SW_Zona_Principal->setCurrentIndex(1);
    listaBoletasProd();
 }

void Silo::C_Reg(){  // Registros
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(2);
    widget_PP.Registros_Ind->horizontalHeader()->setVisible(true);
    RegistroInd();
    RegistroGeneral();
}

void Silo::C_Ade(){   // Adeudos
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(3);
    PopuAdeudos();
}

void Silo::C_Pro(){    // Productores
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(4);
    Productores_Lista();
}

void Silo::C_Comp(){   // Compradores
    
    widget_PP.SW_Zona_Principal->setCurrentIndex(5);
    Compradores_Lista();
}

void Silo::C_Liq(){  // Liquidaciones

    widget_PP.SW_Zona_Principal->setCurrentIndex(6);
    show_Liquidacion();
}

/*  Usar SpinBox
 QSpinBox myInt;
myInt.setMinimum(-5);
myInt.setMaximum(5);
myInt.setSingleStep(1);// Will increment the current value with 1 (if you use up arrow key) (if you use down arrow key => -1)
myInt.setValue(2);// Default/begining value
myInt.value();// Get the current value
//connect(&myInt, SIGNAL(valueChanged(int)), this, SLOT(myValueChanged(int)));
 
 
 
 */