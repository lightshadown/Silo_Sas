/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Login.cpp
 * Author: StudioMac
 *
 * Created on 9 de marzo de 2020, 10:32
 */

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-copy"


#include <chrono>

#include "Login.h"
#include "Generales.h"
#include "Silo_SaS.h"
//#include "../Qt-Frameless-Window-DarkStyle/DarkStyle.h"  // se debia agregar el DarkStyle.cpp a sources files del projecto
//#include "../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.h"  // tambien se agrega el Framelesswindow.cpp al sources files


#pragma GCC diagnostic pop

Login::Login(){ //(QString appDir, QApplication app) {
    widget_Login.setupUi(this);
    QObject::connect(widget_Login.Serial_edit, &QLineEdit::returnPressed, this,&Login::Check_Enter);   // (widget_Login.Serial_edit, SIGNAL(returnPressed()), this, SLOT(Check_Enter()));  // senal de enter al introducir el serial
    QObject::connect(widget_Login.Aceptar, &QAbstractButton::clicked, this, &Login::BotonAceptar);    // (widget_Login.Aceptar, SIGNAL(clicked()), this, SLOT(BotonAceptar()));  // boton de Aceptar
    QObject::connect(widget_Login.Cancelar, &QAbstractButton::clicked, this, &Login::close);   // (widget_Login.Cancelar, SIGNAL(clicked()), this, SLOT(close()));
}

Login::~Login() {
}


QStringList Login::getMacAddress(){   //https://stackoverflow.com/questions/13646621/how-to-get-mac-address-in-windows-with-c
    PIP_ADAPTER_INFO AdapterInfo;
    DWORD dwBufLen = sizeof(IP_ADAPTER_INFO);
    char *mac_addr = (char*)malloc(18);
    //QStringList listaMAC, listaIP;
    QStringList salida;
    Gen silo;
    
    AdapterInfo = (IP_ADAPTER_INFO *) malloc(sizeof(IP_ADAPTER_INFO));
    if(AdapterInfo == NULL){
        silo.Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
        free(mac_addr);
        //return NULL;
    }
    
    if(GetAdaptersInfo(AdapterInfo, &dwBufLen) == ERROR_BUFFER_OVERFLOW ){
        free(AdapterInfo);
        AdapterInfo = (IP_ADAPTER_INFO *) malloc(dwBufLen);
        if (AdapterInfo == NULL){
           silo.Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
            free(mac_addr);
            //return NULL;
        }
    }
    
    if (GetAdaptersInfo(AdapterInfo, &dwBufLen) == NO_ERROR){
        // contains pointer to actual adapter mac address
        PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;
        do {
            snprintf(mac_addr, 19, "%02X:%02X:%02X:%02X:%02X:%02X:",   //snprintf imprime la informacion a una cadena string
                    pAdapterInfo->Address[0], pAdapterInfo->Address[1],
                    pAdapterInfo->Address[2], pAdapterInfo->Address[3],
                    pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
            //Log("Antes del vector \n" + QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) + " ... " + QString::fromLatin1(mac_addr)); // revisar cuantas MAC entrega
            
            salida << QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) << QString::fromLatin1(mac_addr);
           //salida << (QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) + "_" + QString::fromLatin1(mac_addr));
           
            pAdapterInfo = pAdapterInfo->Next;
        } while(pAdapterInfo);
    }
    free(AdapterInfo);
    return salida;
    //return mac_addr;  // caller must free
}

QString Login::CheckSerial(QString Cb){ // convierte de Hexa a Deci
//    Silo* silo = new Silo;

    QString serial;
    Cb.remove(':');
    QByteArray dat = Cb.toLocal8Bit();
    const char *CBchar = dat.data();
    int len =strlen(CBchar);
    std::uint64_t base = 1;
    std::uint64_t deci = 0;
    for (int i = len-1; i>=0; i-- ){
        if (Cb[i] >= '0' && Cb[i] <= '9' ){
            deci += (CBchar[i] - 48) * base;
            base = base * 16;
        }else if (Cb[i] >= 'A' && Cb[i] <= 'F') {
            deci += (CBchar[i] - 55) * base;
            base = base * 16;
        }
    }
    //dias = widget.Days_ComboBox->currentText();
    //silo->Log("Valor de temp --> " + QString::number(deci));// + "\nValor de dias" + dias);
    serial = QString::number(deci);// + "-" + dias);
    //widget.Serial_edit->setText(serial);
    return serial;
}

bool Login::SortMAC(const QStringList &sort, QString serial){  // compara el serial con la lista de Macs de la maquina
    Gen silo;
    bool ready = false;
    QString MAC_addrs;
    
    if (serial.contains("::")){
            serial.chop(23);
            //silo->Log(serial);
        }
    
    for (int i = 0; i < sort.size(); i +=2 ){
        //silo->Log("Antes del IF --->  " + sort.at(i));
        if(sort[i] != "0.0.0.0" && sort[i] != "0000:0000:0000:0000:0000:0000:0000:0000"){
           //silo->Log("verdadero \nIP: " + sort[i] + "\nMAC: " + sort[i+1]);
           MAC_addrs = CheckSerial(sort[i+1]);
        }
        
       
        if (serial.isEmpty() == false && serial == MAC_addrs){
            // create file for config
            //silo->Log(" valor de serial: " + serial + "\nMac addres: " + MAC_addrs);
            ready = true;
            break;
        }
    }
    if (ready == false){
        silo.Log("la mac no es correcta");
    }
    return ready;
}

void Login::BotonAceptar(){
 
    emit ShowMainSignal(InitApp);     // show Pantalla Principal
    this->hide();
}

void Login::Check_Enter(){  //(QString AppDir, QApplication){    
    Gen silo;
    QString serial;
    
     // obtain the current time with std::chrono and convert to struct tm * so it can be convert to an std::string
    std::time_t now_c;
    std::chrono::time_point<std::chrono::system_clock> now;
    struct tm * timeinfo;
    char bufferIn[80]; 
    
    now = std::chrono::system_clock::now();
    now_c = std::chrono::system_clock::to_time_t(now);
    time (&now_c);
    timeinfo = localtime(&now_c);
    strftime(bufferIn, sizeof(bufferIn), "%Y-%m-%d %H:%M:%S", timeinfo);
    std::string str(bufferIn);
    
    serial = widget_Login.Serial_edit->text();
    serial.replace("-","::");
    serial += QString::fromStdString(str);
    
    QString DirFile = InitApp;
    if (SortMAC(getMacAddress(), serial)){  // compares and check if the serial provided is valid
            silo.Log("Serial Valido");
            widget_Login.Serial_aviso->setStyleSheet("color:green");
            widget_Login.Serial_aviso->setText("Serial Valido");
            widget_Login.Aceptar->setCheckable(true);
            widget_Login.Aceptar->setVisible(true);
            widget_Login.Aceptar->setStyleSheet("background-color:green;color:black; border-radius:10px");
          //  widget_Login.Aceptar->setStyleSheet("background-color:rgba(255,255,255,0.5); border-radius:10px; color:black;");
            CreateConfigFile(DirFile, serial);  // Create config File, pass the valid serial here
    }else{
            silo.Log("Serial NO VALIDO");                         //  serial its not valid
            widget_Login.Serial_aviso->setStyleSheet("color:red");
            widget_Login.Serial_aviso->setText("No Valido, intentelo de Nuevo");
           
        }
    
}

void Login::CheckLogin(){
    
    //********* Manejo del Serial y mostrar pantallas *********************//
    
    Silo* silo = new Silo;
    QString MacSql;
    
    QPixmap logo;
    QString fondo = InitApp + "/images/SorgoPlanta1.jpg";
    
    if (!logo.load(fondo)){
        silo->Log("imposible cargar la imagen: " + fondo);
    }else{   
        widget_Login.LoginSplash->setPixmap(logo);
    }
    
    if(checkConfigFile(InitApp) == true){   //check if file exist
       // check mac inside config vs machines mac  
       widget_Login.Serial_edit->setVisible(false);   // hide or show serial_edit
       widget_Login.Serial_edit->setStyleSheet("background-color:white; font:20px; font-color:black;"
                                               "border-width:1px; border-style:solid; border-radius:5px "); 
       silo->CrearDB(InitApp, "Config.db");
       QSqlQuery mac(QSqlDatabase::database("Config.db"));
       mac.exec("SELECT Mac FROM Config");
       if(mac.lastError().isValid()){
           silo->Log("Cannot retrieve Mac \n" + mac.lastError().text());
       }
       
       mac.first();
       MacSql = mac.value("Mac").toString();
       if(mac.next() == true){
           silo->Log("Erase extra rows");
           mac.exec("DELETE FROM Config WHERE Ton_Socio IS NULL AND Actulz IS NULL");   
        }
       
       if (MacSql == ""){
           silo->Log("Mac its empty");
           widget_Login.Serial_aviso->setText("Error de Serial, Introdusca un Serial Valido");
           widget_Login.Aceptar->setCheckable(false);
           widget_Login.Aceptar->setVisible(false);
           widget_Login.Serial_edit->setVisible(true);
       }else{
            QString quedan;
            auto ChopMac = MacSql.split(":"); 
            QStringList Join;
            Join << ChopMac[2] << ":" << ChopMac[3] << ":" << ChopMac[4];
            auto fechaCompleta = Join.join("");
            auto fecha = fechaCompleta.remove(0,2); 
            QString dias = ChopMac[2];
            dias.chop(13);
           
            std::chrono::time_point<std::chrono::system_clock> now; 
            std::chrono::time_point<std::chrono::system_clock> end;
            struct std::tm tm;
            std::istringstream ss(fecha.toStdString());

            ss >> std::get_time( &tm, "%Y-%m-%d %H:%M:%S");
            std::time_t time = mktime(&tm);
            end = std::chrono::system_clock::from_time_t(time);
            now = std::chrono::system_clock::now();
            auto tiempo = ((std::chrono::duration_cast<std::chrono::minutes>(now - end).count() / 60) /24 );
            std::string dif = std::to_string(tiempo);
            
            //silo->Log("Chopped Mac " + dias + " Fecha " + fecha + " Diferencia de tiempo " + QString::fromStdString(dif) );
            quedan = QString::fromStdString(dif);
            
           if(SortMAC(getMacAddress(), MacSql) == true){                      // return true or false SortMac   
               widget_Login.Aceptar->setCheckable(true);                      //  set enable, Start Application
               widget_Login.Aceptar->setStyleSheet("background-color:green;color:black; border-radius:10px");   // everything its fine continue to log on
               widget_Login.Serial_edit->setVisible(false);                  // hide or show serial_edit
               if( quedan.toInt()<dias.toInt() && dias != "00"){
                   widget_Login.Serial_aviso->setVisible(true);
                   widget_Login.Serial_aviso->setText("Quedan: " + quedan + " dias");
                } else {
                   widget_Login.Serial_aviso->setVisible(true);
                   widget_Login.Serial_aviso->setText("Periodo de Prueba Agotado");
                   widget_Login.Serial_edit->setVisible(true);
                   widget_Login.Aceptar->setVisible(false);
                }
               if (dias == "00"){
                   widget_Login.Serial_edit->setVisible(false);
                   widget_Login.Serial_aviso->setVisible(false);
                   widget_Login.Aceptar->setVisible(true);
               }
           } else{
               widget_Login.Aceptar->setCheckable(false);                    // not enable
               widget_Login.Aceptar->setVisible(false);
               widget_Login.Serial_edit->setVisible(true);
               widget_Login.Serial_aviso->setText("El serial no es Valido");   // cant read table config
               silo->Log("No se puede comparar la Mac");
           }
           
        }
        
      }else{   // Config file dosnt exist
        widget_Login.Aceptar->setCheckable(false); // hide button
        widget_Login.Aceptar->setStyleSheet("border-width:0px;background-color:white;");  // change button color
        widget_Login.Serial_edit->setVisible(true);   //show lineiedit for serial
        widget_Login.Serial_aviso->setText("Por favor Introduzca un Serial Valido");
        CreateConfigFile(InitApp,"");  // creates the Config file
        silo->Log("Si config no existe, se crea");
  
    }
    


}

bool Login::checkConfigFile(QString Dir){  // pasa la direccion de la aplicacion
    Gen silo;
    bool fileConfig = false;
    //QStringList Silo::buscarArchivos(QStringList file, QString SearchDir){  // checar https://doc.qt.io/qt-5/qtwidgets-dialogs-findfiles-example.html  esta en el messenger
    
    //********************* how to get current directory*************************//
    //****** https://stackoverflow.com/questions/875249/how-to-get-current-directory ******//
    /*
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    */
    HANDLE fileHandle;
    WIN32_FIND_DATA archivo;
    QString file = Dir + "/Data/config.db";   // base de datos con la configuracion del usuario
    std::wstring wDb = file.toStdWString();
    //std::wstring go = DirFile + wDb;
    LPCWSTR findDb = wDb.c_str();
    
    fileHandle = FindFirstFile(findDb,&archivo);
    if (fileHandle == INVALID_HANDLE_VALUE){
        fileConfig = false;
        silo.Log("No se pudo encontrar el archivo " + file);
    }else{
        fileConfig = true;
        silo.Log("Config Correcto");
    }
    return fileConfig;
}

void Login::CreateConfigFile(QString DirFile, QString MAC){
    // creates the DB Config 
    // if the Mac its empty creates the file
    // if the Mac its pass, it updates the mac inside Config table
    // if the config file exist but the Mac field its empty, it updates that field
    // if the Mac field its diferent, the program its not valid
    
    Silo* silo = new Silo;
    if (MAC.isEmpty()){   // si esta vacio la mac crea el archivo
        silo->CrearDB(DirFile, "Config.db");
    
        QSqlQuery valor(QSqlDatabase::database("Config.db"));
       
        valor.exec("CREATE TABLE IF NOT EXISTS Config"
               "(Mac VARCHAR(18), Ton_Socio FLOAT, Sanidad FLOAT,"
               " Cuota FLOAT, Modulo FLOAT, Actulz INTEGER, Precio_Fix FLOAT )");
        if(valor.lastError().isValid()){
            silo->Log("Config file failed to be created \n" + valor.lastQuery() + "\n" + valor.lastError().text() );
        } else{
            silo->Log("Creation of Config");
        }
    
        valor.finish();
        //KillDB();
    }else{
        // here i update the mac address inside the config file
        silo->CrearDB(DirFile, "Config.db");                            // creates conecction to DB
        QSqlQuery valor(QSqlDatabase::database("Config.db"));     // set query
    
        valor.exec("SELECT * FROM Config");
        if(valor.lastError().isValid()){
            silo->Log("Error \n" + valor.executedQuery() + "\n" + valor.lastError().text() );
        }
        silo->Log("Before database management");
        valor.first();    //  if mac row its empty && Actulz is not empty OR mac row its diferent from Mac && Actulz is not empty, UPDATE
        if((valor.value("Mac").toString() == "" && valor.value("Actulz").toString() != "") || 
                (valor.value("Mac").toString() != MAC && valor.value("Actulz").toString() != "") ){
           silo->Log("Mac is empty/diferent, update");
           valor.prepare("UPDATE Config SET Mac = :serial");
           valor.bindValue(":serial", MAC);
           valor.exec();
           if(valor.lastError().isValid()){
              silo->Log("Error \n" + valor.executedQuery() + "\n" + valor.lastError().text() );
           }
        }else{
            silo->Log("Rows are empty creating new one");
            valor.prepare("INSERT INTO Config (Mac, Actulz) VALUES (:serial, :act)");
            valor.bindValue(":serial", MAC);
            valor.bindValue(":act", 1);
            valor.exec();
            if(valor.lastError().isValid()){
                silo->Log("No se puede crear el registro\n" + valor.lastQuery() + "\n" + valor.lastError().text() );
            }
        }
       
        valor.finish();
        //KillDB();
    }
} 