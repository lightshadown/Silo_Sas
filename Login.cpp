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
#include <QObject>
#include <QString>
#include <QMessageBox>

#include "Login.h"
#include "Silo_SaS.h"

#pragma GCC diagnostic pop

Login::Login() {
    widget_Login.setupUi(this);
    QObject::connect(widget_Login.Serial_edit, SIGNAL(returnPressed()), this, SLOT(Check()));  // senal de enter al introducir el serial
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

bool Login::SortMAC(const QStringList &sort){
    Silo* silo = new Silo;
    bool ready = false;
    QString MAC_addrs, serial;
    
    for (int i = 0; i < sort.size(); i +=2 ){
        //silo->Log("Antes del IF --->  " + sort.at(i));
        if(sort[i] != "0.0.0.0" && sort[i] != "0000:0000:0000:0000:0000:0000:0000:0000"){
           silo->Log("verdadero \nIP: " + sort[i] + "\nMAC: " + sort[i+1]);
           MAC_addrs = CheckSerial(sort[i+1]);
        }
        
        serial = widget_Login.Serial_edit->text();
        serial.chop(3);
        if (serial.isEmpty() == false && serial == MAC_addrs){
            // create file for config
            ready = true;
            break;
        }
    }
    return ready;
}

void Login::Check(){
    Silo* silo = new Silo;
    if (SortMAC(getMacAddress())){
            silo->Log("Serial Valido");
            widget_Login.Serial_aviso->setStyleSheet("color:green");
            widget_Login.Serial_aviso->setText("Serial Valido");
            validSerial = true;
        }else{
            silo->Log("Serial NO VALIDO");
            widget_Login.Serial_aviso->setStyleSheet("color:red");
            widget_Login.Serial_aviso->setText("No Valido, intentelo de Nuevo");
            validSerial = false;
        }

}

bool Login::checkConfigFile(QString Dir){
    Silo* silo = new Silo;
    bool fileConfig = false;
    //QStringList Silo::buscarArchivos(QStringList file, QString SearchDir){  // checar https://doc.qt.io/qt-5/qtwidgets-dialogs-findfiles-example.html  esta en el messenger
    
    //********************* how to get current directory*************************//
    //****** https://stackoverflow.com/questions/875249/how-to-get-current-directory ******//
    std::wstring DirFile;
    TCHAR buffer[MAX_PATH] = {0};
    GetModuleFileName(NULL, buffer, MAX_PATH);
    std::wstring::size_type pos = std::wstring(buffer).find_last_of(L"\\/");
    DirFile = std::wstring(buffer).substr(0, pos);   // ubicacion de la carpeta actual
    HANDLE fileHandle;
    WIN32_FIND_DATA archivo;
    QString file = Dir + "/config";
    std::wstring wDb = file.toStdWString();
    //std::wstring go = DirFile + wDb;
    LPCWSTR findDb = wDb.c_str();
    
    fileHandle = FindFirstFile(findDb,&archivo);
    if (fileHandle == INVALID_HANDLE_VALUE){
        fileConfig = false;
        silo->Log("No se pudo encontrar el archivo " + file);
    }else{
        fileConfig = true;
        silo->Log("Se encontro el archivo " + file);
    }
    return fileConfig;
}

void Login::createConfig(QString MAC){  // if MAC its empty create file config, otherwise append the MAC address 
    std::ofstream archivo; 
    Silo* silo = new Silo;
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    
    archivo.open("config", std::ios::in | std::ios::app);
    if(!archivo.is_open()){silo->Log("Error No se Pudo crear el archivo config");}
    if (!MAC.trimmed().isEmpty()){archivo <<timer << std::endl << "[" << MAC.toStdString() << "]" << std::endl;}
    /*
    if (!MAC.trimmed().isEmpty()){
        archivo.open("config", std::ios::in | std::ios::app);
        if(!archivo.is_open()){silo->Log("Error", "No se Pudo crear el archivo config");}
    }else {
        archivo.open("config", std::ios::in | std::ios::app);
        if(!archivo.is_open()){
            silo->Log("Error No se Pudo encontrar el archivo config"); 
        }else{
        archivo <<timer << std::endl << "[" << MAC.toStdString() << "]" << std::endl;
       
    }
    } */
    archivo.close();
}