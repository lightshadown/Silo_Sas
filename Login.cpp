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


#include "Login.h"
#include "Silo_SaS.h"
//#include "../Qt-Frameless-Window-DarkStyle/DarkStyle.h"  // se debia agregar el DarkStyle.cpp a sources files del projecto
//#include "../Qt-Frameless-Window-DarkStyle/framelesswindow/framelesswindow.h"  // tambien se agrega el Framelesswindow.cpp al sources files


#pragma GCC diagnostic pop

Login::Login(){ //(QString appDir, QApplication app) {
    widget_Login.setupUi(this);
    QObject::connect(widget_Login.Serial_edit, SIGNAL(returnPressed()), this, SLOT(Check()));  // senal de enter al introducir el serial
    QObject::connect(widget_Login.Aceptar, SIGNAL(clicked()), this, SLOT(BotonAceptar()));  // boton de Aceptar
    QObject::connect(widget_Login.Cancelar, SIGNAL(clicked()), this, SLOT(close()));
}

Login::~Login() {
}


QStringList Login::getMacAddress(){   //https://stackoverflow.com/questions/13646621/how-to-get-mac-address-in-windows-with-c
    PIP_ADAPTER_INFO AdapterInfo;
    DWORD dwBufLen = sizeof(IP_ADAPTER_INFO);
    char *mac_addr = (char*)malloc(18);
    //QStringList listaMAC, listaIP;
    QStringList salida;
    Silo* silo = new Silo;
    
    AdapterInfo = (IP_ADAPTER_INFO *) malloc(sizeof(IP_ADAPTER_INFO));
    if(AdapterInfo == NULL){
        silo->Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
        free(mac_addr);
        //return NULL;
    }
    
    if(GetAdaptersInfo(AdapterInfo, &dwBufLen) == ERROR_BUFFER_OVERFLOW ){
        free(AdapterInfo);
        AdapterInfo = (IP_ADAPTER_INFO *) malloc(dwBufLen);
        if (AdapterInfo == NULL){
           silo->Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
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
    Silo* silo = new Silo;
    bool ready = false;
    QString MAC_addrs;
    
    for (int i = 0; i < sort.size(); i +=2 ){
        //silo->Log("Antes del IF --->  " + sort.at(i));
        if(sort[i] != "0.0.0.0" && sort[i] != "0000:0000:0000:0000:0000:0000:0000:0000"){
           //silo->Log("verdadero \nIP: " + sort[i] + "\nMAC: " + sort[i+1]);
           MAC_addrs = CheckSerial(sort[i+1]);
        }
        
        //serial = widget_Login.Serial_edit->text();  // me jala el serial dela pantalla de login
        if (serial.contains("-")){
            serial.chop(3);
            //silo->Log(serial);
        }
       
        if (serial.isEmpty() == false && serial == MAC_addrs){
            // create file for config
            //silo->Log(" valor de serial: " + serial + "\nMac addres: " + MAC_addrs);
            ready = true;
            break;
        }
    }
    if (ready == false){
        silo->Log("la mac no es correcta");
    }
    return ready;
}

void Login::BotonAceptar(){
   /* QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    
    MBox.setDefaultButton(boton_OK);
    //MBox.setIconPixmap(QPixmap("images/Icono_App_Silo_1.png"));
    MBox.setWindowIcon(QPixmap("images/Icono_App_Silo_1.png"));
    MBox.setWindowTitle("Boton Aceptar");
    MBox.setText("Funciono");
    MBox.exec();
    */
    emit ShowMainSignal(InitApp);     // show Pantalla Principal
    this->hide();
}

void Login::Check(){  //(QString AppDir, QApplication){    
    Silo* silo = new Silo();
    
    QString DirFile = InitApp;
    if (SortMAC(getMacAddress(), widget_Login.Serial_edit->text())){  // compares and check if the serial provided is valid
            silo->Log("Serial Valido");
            widget_Login.Serial_aviso->setStyleSheet("color:green");
            widget_Login.Serial_aviso->setText("Serial Valido");
            widget_Login.Aceptar->setCheckable(true);
            widget_Login.Aceptar->setStyleSheet("background-color:rgba(255,255,255,0.5); border-radius:10px; color:black;");
            silo->CreateConfigFile(DirFile, widget_Login.Serial_edit->text());  // Create config File, pass the valid serial here
        }else{
            silo->Log("Serial NO VALIDO");                         //  serial its not valid
            widget_Login.Serial_aviso->setStyleSheet("color:red");
            widget_Login.Serial_aviso->setText("No Valido, intentelo de Nuevo");
           
        }
    
}

void Login::CheckLogin(){
    
    //********* Manejo del Serial y mostrar pantallas *********************//
    
    Silo* silo = new Silo();
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
       silo->CrearDB(InitApp, "Config.db");
       QSqlQuery mac(QSqlDatabase::database("Config.db"));
       mac.exec("SELECT Mac FROM Config");
       if(mac.lastError().isValid()){
           silo->Log("No se Puede obtener la Mac \n" + mac.lastError().text());
       }
       mac.first();
       MacSql = mac.value("Mac").toString();
       //silo->Log("Valor mac de config " + MacSql + "\n" + mac.lastError().text());
       widget_Login.Serial_edit->setVisible(false);   // hide or show serial_edit
       if(SortMAC(getMacAddress(), MacSql) == true){   // return true or false SortMac mac comparision goes here   
           widget_Login.Aceptar->setCheckable(true);                         //  set enable
           widget_Login.Aceptar->setStyleSheet("background-color:green;color:black; border-radius:10px");   // everything its fine continue to log on
           widget_Login.Serial_edit->setVisible(false);   // hide or show serial_edit
       } else{
           widget_Login.Aceptar->setCheckable(false);              // not enable
           widget_Login.Serial_edit->setVisible(true);
           widget_Login.Serial_aviso->setText("No se Puede leer Config");   // cant read table config
           silo->Log("No se puede comparar la Mac");
       }
    
      }else{   // Config file dosnt exist
        widget_Login.Aceptar->setCheckable(false); // hide button
        widget_Login.Aceptar->setStyleSheet("border-width:0px;background-color:white;");  // change button color
        widget_Login.Serial_edit->setVisible(true);   //show lineiedit for serial
        widget_Login.Serial_aviso->setText("Por favor Introduzca un Serial Valido");
        silo->CreateConfigFile(InitApp,"");  // creates the Config file
        silo->Log("Si config no existe, se crea");
       /*
        //   login->Check();
           if(login->validSerial == true){  //if serial is valid, triger when Check() happends   como carajos llamo la funcion Check aqui???
           login->findChild<QPushButton*>("Aceptar")->setCheckable(true); // 
           login->findChild<QPushButton*>("Aceptar")->setStyleSheet("border-width:1px; background-color:transparent; color:red");  // change button color
           //winPrin.show();    // base.show()  pantalla principal;
           base->CreateConfigFile(app.applicationDirPath(), "");  // Create config File, pass the valid serial here
         }
         if (login->validSerial == true){base->Log("Hubo un cambio, valid serial es true ");} else{base->Log("valid serial es False"); }
      */
    }
    


}

bool Login::checkConfigFile(QString Dir){  // pasa la direccion de la aplicacion
    Silo* silo = new Silo;
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
        silo->Log("No se pudo encontrar el archivo " + file);
    }else{
        fileConfig = true;
        silo->Log("Config Correcto");
    }
    return fileConfig;
}

