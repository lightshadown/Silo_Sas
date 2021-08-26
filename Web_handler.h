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
#include "curl/curl.h"
#include "curl/easy.h"
#include <openssl/ssl.h>    // Manejo de Coneccion segura SSL


#include "Silo_SaS.h"

class Server{
    public:
        Server();
        virtual ~Server();
        bool RPI_Request();
    private:
};

#endif /* WEB_HANDLER_H */