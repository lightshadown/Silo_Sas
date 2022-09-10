/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Generales.h
 * Author: Patron
 *
 * Created on 23 de septiembre de 2021, 22:15
 */

#ifndef GENERALES_H
#define GENERALES_H

#include <QString>
#include <iostream>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>   
#include <fstream>  // hacer stream para escribir en un archivo
#include <windows.h> // funciones de windows, funciones para abrir y cerrar directorios 
#include <ctime>
#include <vector>
#include <QMessageBox>
#include <QPushButton>

class Gen {
    private:
    
    public:
        Gen();
        virtual ~Gen();
        void Log(QString);
        void LogData(QString);
};



#endif /* GENERALES_H */
