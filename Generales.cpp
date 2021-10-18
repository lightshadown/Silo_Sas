/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Generales.cpp
 * Author: Patron
 * 
 * Created on 23 de septiembre de 2021, 22:15
 */

#include "Generales.h"

Gen::Gen(){
    
}

Gen::~Gen(){
    
}

void Gen::LogData(QString data){
    std::ofstream archivo; 
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    MBox.setWindowTitle("Error");
    MBox.setDefaultButton(boton_OK);
    MBox.setText("No se Pudo encontrar el archivo Logs");
    
    archivo.open("Logs/LogsDb.txt", std::ios::in | std::ios::app);
    if (!archivo.is_open()){
        MBox.exec();
     }else{
        if (data.trimmed().isEmpty()){
           data = "empty";
        }
      archivo << "========================================" << timer << data.toStdString() << std::endl;
      archivo.close();
     }
    
}

void Gen::Log(QString save){
    std::ofstream archivo; 
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    MBox.setWindowTitle("Error");
    MBox.setDefaultButton(boton_OK);
    MBox.setText("No se Pudo encontrar el archivo Logs");
    
    archivo.open("Logs/LogSaS.txt", std::ios::in | std::ios::app);
    if(!archivo.is_open()){
        MBox.exec();
    }else{
      if (save.trimmed().isEmpty()){
           save = "empty";
        }
      archivo << "========================================" << timer << save.toStdString() << std::endl;
      archivo.close();
    }
}



/// aqui van los log, validadores y otras herramientas