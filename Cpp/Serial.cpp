/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Serial.cpp
 * Author: Patron
 * 
 * Created on 9 de enero de 2021, 12:18
 */

#include "../Headers/Serial.h"

//   Hacer un widget para modificar los datos del puerto


Serial::Serial(){  //pasar los datos de coneecion por un vector
    
}

Serial::~Serial(){  // Destructor de Clase
    
}

void Serial::Connect_RS232(/*QString puerto*/){ 
    
    QSerialPort* USB_Serial = new QSerialPort;
    QSerialPortInfo* Serial_Info = new QSerialPortInfo;
    Silo* silo = new Silo;
    QList<QSerialPortInfo> puertos = QSerialPortInfo::availablePorts(); // puertos disponibles
    QList<QSerialPortInfo>::iterator i;
    
    if (Serial_Info->availablePorts().length() > 0){
        silo->Log("Existen Puertos disponibles" + Serial_Info->availablePorts().length());
       // USB_Serial.setPortName(puerto); // pasa el puerto a usar
       // USB_Serial.setBaudRate(QSerialPort::Baud9600); // la frecuencia de trabajo
       // USB_Serial.dataBits(QSerialPort::Data8);
       // USB_Serial.parity(QSerialPort::NoParity);
       // USB_Serial.stopBits(QSerialPort::TwoStop);
       // USB_Serial.setFlowControl(QSerialPort::NoFlowControl);
       // USB_Serial.open(QIODevice::ReadWrite);    
    }else{silo->Log("No hay Puertos Disponibles");}
    
    for(i = puertos.begin(); i != puertos.end(); i++ ){
        silo->Log("....................");
        silo->Log("Puerto: " + (*i).portName());
        silo->Log("Descripcion: " + (*i).description());
        silo->Log("Fabricante: " + (*i).manufacturer());
        silo->Log("Numero de Serie: " + (*i).serialNumber());
        silo->Log("Ubicacion: " + (*i).systemLocation());
        silo->Log("....................");
    }
}

/*
 * Coneeccion usar la API de windows
 * 
  
int Serial::Connect_RS232(){
  //  QString ruta = "COM1";
   // std::wstring wDb = ruta.toStdWString();
   // LPCSTR device = wDb.c_str();
    return Connect_RS232(L"COM1");
   
}

int Serial::Connect_RS232(wchar_t *device){
    
    // buscar y configurar el puerto para la Bascula
    // manejo RS-232
    int error = 0;
   // std::wstring wDb = com.toStdWString();
   // LPCWSTR puerto = wDb.c_str();
    DCB serialParams; // parametros del puerto, hacer un dialog de opciones, opcional
     
    memset(&serialParams,0,sizeof(serialParams));
            // opciones de RS-232
    serialParams.DCBlength = sizeof(serialParams);
    serialParams.BaudRate = 9600;
    serialParams.ByteSize = 8;
    serialParams.StopBits = TWOSTOPBITS;
    serialParams.Parity = NOPARITY;
            //Set timeouts
    COMMTIMEOUTS timeout;
    timeout.ReadIntervalTimeout = 50;
    timeout.ReadTotalTimeoutConstant = 50;
    timeout.ReadTotalTimeoutMultiplier = 50;
    timeout.WriteTotalTimeoutConstant = 50;
    timeout.WriteTotalTimeoutMultiplier = 50;

    if (!SetCommTimeouts(serialHandle, &timeout)){
        silo->Log("SetCommTimeouts fallo, " + GetLastError());
    }

    if (!GetCommState(serialHandle, &serialParams)){
        silo->Log( "GetCommState fallo, no se puede inicializar el puerto, " + GetLastError());
    }
    
    serialHandle = CreateFile(device , GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    
    if (serialHandle != INVALID_HANDLE_VALUE){
        if (!SetCommState(serialHandle,&serialParams)){
            error = 2; 
            silo->Log("SetCommState fallo, " + GetLastError());
        } else {error = 1;}
    }else{
        if (error != 0){Disconect_RS232();} else {clear();}
        silo->Log("Error al inicializar el puerto Com1");
    }
    return error;
}

void Serial::Disconect_RS232(){
    CloseHandle(serialHandle);
    //serialHandle = INVALID_HANDLE_VALUE
}

int Serial::sendData(unsigned char *buffer, int leng){
    unsigned long result;
    WriteFile( serialHandle, buffer, leng, &result, NULL);
    return result;
}

int Serial::reciveData(unsigned char *buffer, int leng){
    unsigned long read_data;
    read_data = 0;
    ReadFile( serialHandle, buffer, leng, &read_data, NULL);
    return ((int) read_data);
}

void Serial::clear(){
    PurgeComm (serialHandle, PURGE_RXCLEAR | PURGE_TXCLEAR);
}

*/