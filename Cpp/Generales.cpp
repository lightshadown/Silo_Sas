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

#include "../Headers/Generales.h"

Gen::Gen(){
    
}

Gen::~Gen(){
    
}

void Gen::LogData(QString data){
    std::time_t now_c;
    std::chrono::time_point<std::chrono::system_clock> now;
    struct tm * timeinfo;
    char bufferIn[80];     
    std::ofstream archivo; 
    QString log;

    now = std::chrono::system_clock::now();
    now_c = std::chrono::system_clock::to_time_t(now);
    time (&now_c);
    timeinfo = localtime(&now_c);
    strftime(bufferIn, sizeof(bufferIn), "%Y-%m-%d %H:%M:%S", timeinfo);
    std::string str(bufferIn);
    
    archivo.open("Logs/LogsDb.txt", std::ios::in | std::ios::app);
    if (!archivo.is_open()){
      // QMessageBox::warning(this , "Error", "No se Pudo encontrar el archivo Logs");   
     }else{
        if (data.trimmed().isEmpty()){
           data = "empty";
        }
      archivo << str << " -- " << data.toStdString() << std::endl;
      archivo.close();
     }
    
}

void Gen::Log(QString save){
    
    std::time_t now_c;
    std::chrono::time_point<std::chrono::system_clock> now;
    struct tm * timeinfo;
    char bufferIn[80];     
    std::ofstream archivo; 
    QString log;

    now = std::chrono::system_clock::now();
    now_c = std::chrono::system_clock::to_time_t(now);
    time (&now_c);
    timeinfo = localtime(&now_c);
    strftime(bufferIn, sizeof(bufferIn), "%Y-%m-%d %H:%M:%S", timeinfo);
    std::string str(bufferIn);
    
    archivo.open("Logs/LogSaS.txt", std::ios::in | std::ios::app);
    if(!archivo.is_open()){
      //QMessageBox::warning(this , "Error", "No se Pudo encontrar el archivo Logs");
    }else{
      if (save.trimmed().isEmpty()){
           save = "empty";
        }
      
      log.append(QString::fromStdString(str));
      log.append(" -- ");
      log.append(save);
      archivo << log.toStdString() << std::endl;
      archivo.close();
    }
}



/// aqui van los log, validadores y otras herramientas