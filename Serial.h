/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Serial.h
 * Author: Patron
 *
 * Created on 9 de enero de 2021, 12:18
 */

#ifndef SERIAL_H
#define SERIAL_H

#endif /* SERIAL_H */


//#include "../QtSerialPort/QtSerialPort"
#include "../QtSerialPort/qserialportinfo.h"
#include "../QtSerialPort/qserialport.h"
#include "Silo_SaS.h"
#include <QList>
//#include <windows.h>   // se me cuelga el programa con esto



class Serial {
    
public:
    Serial();
    virtual ~Serial();
    void Connect_RS232(/*QString*/);
    
    
    
    // coneccion con la API de Windows
    /*
    int Connect_RS232();
    int Connect_RS232(wchar_t *device);
    void Disconect_RS232();
    int sendData(unsigned char *buffer, int leng);
    int reciveData(unsigned char *buffer, int leng);
    void clear();
    HANDLE serialHandle;
    */
    
private:
    
};