/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Web_handler.h
 * Author: Patron
 *
 * Created on 5 de agosto de 2021, 18:21
 */

#ifndef WEB_HANDLER_H
#define WEB_HANDLER_H

#include <QString>
#include <string>
#include <iostream>
#include <QMessageBox>
#include <QPushButton>
#include <QtNetwork>
#include <QTcpSocket>
#include <QFile>
#include <QFileInfo>
//#include <curl/curl.h>
//#include <curl/easy.h>
//#include <openssl/ssl.h>    // Manejo de Coneccion segura SSL
//#include <nlohmann/json.hpp>

#include "Silo_SaS.h"
#include "Generales.h"

class Server : public QObject{
    Q_OBJECT
    public:
        Server();
        virtual ~Server();
        void TCP_Request_Send();             // Send the Database File
        //void TCP_Request_Recieve();          // Recieve the Database File from the RPi server
        void UDP_Broadcast();                // send a broadcast to all devices on the network
        void UDP_Broadcast_Process();
        QTcpSocket *TCP_socket = nullptr;
        QUdpSocket *UDP_socket;
        // void RPI_Subir_Archivo();//(QString); // sube un archivo al Servidor
    public slots:
       
    signals:
        
    private:
        //QTcpSocket *TCP_socket;
        //QUdpSocket *UDP_socket;
};

#endif /* WEB_HANDLER_H */