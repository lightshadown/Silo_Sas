/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Web_handler.cpp
 * Author: Patron
 * 
 * Created on 5 de agosto de 2021, 18:21
 */

#include "Servidor_RPI.h"

using json = nlohmann::json;

static std::size_t callback(const char* in,std::size_t size, std::size_t num, std::string* out) {
    Gen silo;    
    const std::size_t totalBytes(size * num);
    std::string data = std::to_string(totalBytes);
    silo.Log("Total Bytes recive " + QString::fromStdString(data));
    out->append(in, totalBytes);
    //silo.Log("Data: " + QString::fromStdString(out->c_str()));
    return totalBytes;
}  


Server::Server(){
    
}

Server::~Server(){
    
}

void Server::RPI_Request(){
    
    Gen silo;
    //Silo* silo = new Silo();
    //curl_global_init(CURL_GLOBAL_ALL);
    //CURLM *curl_Multi = curl_multi_init();
    CURL *curl = curl_easy_init();
    const std::string url_A("http://date.jsontest.com/");
    const std::string url_B("https://jsonplaceholder.typicode.com/todos/1");   // necesito una coneccion segura para los https
    const std::string url_C("https://www.google.com/");
    const std::string url_D("www.columbia.edu/~fdc/sample.html");   // funciona al no ser coneccion segura
    
    QMessageBox MBox;
    QPushButton *boton_OK = MBox.addButton("Ok", QMessageBox::AcceptRole);
    //QPushButton *boton_CANCEL = MBox.addButton(QMessageBox::Cancel);
    MBox.setWindowTitle("Error ");
    MBox.setDefaultButton(boton_OK);
   
    if (curl){
        CURLcode res;
        std::string ss;
        ss.append("localhost, localhost:8000") ;
        //curl_multi_add_handle(curl_Multi, curl);
        // set Ip Direction
        curl_easy_setopt(curl, CURLOPT_URL, "http://192.168.1.67:8000");   // cambiarlo para buscar el RPi en la red actual
        //curl_easy_setopt(curl, CURLOPT_DNS_LOCAL_IP4, "192.168.1.67");
        // Don't bother trying IPv6, which would increase DNS resolution time.
        //curl_easy_setopt(curl, CURLOPT_IPRESOLVE, CURL_IPRESOLVE_V4);

        // Don't wait forever, time out after 10 seconds.
        silo.Log("antes de timeout");
        //curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10);
 
        // Follow HTTP redirects if necessary.
        //curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        // Response information.
        long httpCode(0);
        std::string httpData;
        //std::unique_ptr<std::string> httpData(new std::string());
        
         // Hook up data container (will be passed as the last parameter to the
        // callback handling function).  Can be any pointer type, since it will
        // internally be passed as a void pointer.
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &httpData);
        
        // Hook up data handling function.
        silo.Log("antes de write function");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback);

        // Run our HTTP GET command, capture the HTTP response code, and clean up.
        silo.Log("antes de easy perform");
        res = curl_easy_perform(curl);
        
        std::string error = curl_easy_strerror(res);
        
        
        silo.Log("Error de res " + QString::fromStdString(error));
        silo.Log(QString::fromStdString(httpData));
        
        if (res != CURLE_OK){   
          curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
          silo.Log("Hay pedo no se conecto " + QString::fromStdString(url_D) + "\nRespuesta de httpCode: " + QString::number(httpCode) + "\nRespuesta curl: " + QString::number(res) );
          MBox.setText("No se Pudo hacer la coneccion ");
          MBox.setInformativeText("Error: " + QString::number(httpCode));
          MBox.exec();
        
        } else {
          curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
          silo.Log("Coneccion establecida con " + QString::fromStdString(url_D) + "\nRespuesta de httpCode: " + QString::number(httpCode) + "\nRespuesta curl: " + QString::number(res));   
          MBox.setWindowTitle("Correcto");
          MBox.setText("Coneccion establecida ");
          MBox.exec();
  
        }
     
        curl_easy_cleanup(curl);
        //curl_global_cleanup();
    }
    
}
   
/// checar y cambiar el json por json for modern Cpp

//#include <cstdint>
//#include <iostream>
//#include <memory>
//#include <string>
//
//#include <curl/curl.h>
//#include <json/json.h>
//
//namespace
//{
//    std::size_t callback(
//            const char* in,
//            std::size_t size,
//            std::size_t num,
//            std::string* out)
//    {
//        const std::size_t totalBytes(size * num);
//        out->append(in, totalBytes);
//        return totalBytes;
//    }
//}
//
//int main()
//{
//    const std::string url("http://date.jsontest.com/");
//
//    CURL* curl = curl_easy_init();
//
//    // Set remote URL.
//    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
//
//    // Don't bother trying IPv6, which would increase DNS resolution time.
//    curl_easy_setopt(curl, CURLOPT_IPRESOLVE, CURL_IPRESOLVE_V4);
//
//    // Don't wait forever, time out after 10 seconds.
//    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10);
//
//    // Follow HTTP redirects if necessary.
//    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
//
//    // Response information.
//    long httpCode(0);
//    std::unique_ptr<std::string> httpData(new std::string());
//
//    // Hook up data handling function.
//    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callback);
//
//    // Hook up data container (will be passed as the last parameter to the
//    // callback handling function).  Can be any pointer type, since it will
//    // internally be passed as a void pointer.
//    curl_easy_setopt(curl, CURLOPT_WRITEDATA, httpData.get());
//
//    // Run our HTTP GET command, capture the HTTP response code, and clean up.
//    curl_easy_perform(curl);
//    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
//    curl_easy_cleanup(curl);
//
//    if (httpCode == 200)
//    {
//        std::cout << "\nGot successful response from " << url << std::endl;
//
//        // Response looks good - done using Curl now.  Try to parse the results
//        // and print them out.
//        Json::Value jsonData;
//        Json::Reader jsonReader;
//
//        if (jsonReader.parse(*httpData.get(), jsonData))
//        {
//            std::cout << "Successfully parsed JSON data" << std::endl;
//            std::cout << "\nJSON data received:" << std::endl;
//            std::cout << jsonData.toStyledString() << std::endl;
//
//            const std::string dateString(jsonData["date"].asString());
//            const std::size_t unixTimeMs(
//                    jsonData["milliseconds_since_epoch"].asUInt64());
//            const std::string timeString(jsonData["time"].asString());
//
//            std::cout << "Natively parsed:" << std::endl;
//            std::cout << "\tDate string: " << dateString << std::endl;
//            std::cout << "\tUnix timeMs: " << unixTimeMs << std::endl;
//            std::cout << "\tTime string: " << timeString << std::endl;
//            std::cout << std::endl;
//        }
//        else
//        {
//            std::cout << "Could not parse HTTP data as JSON" << std::endl;
//            std::cout << "HTTP data was:\n" << *httpData.get() << std::endl;
//            return 1;
//        }
//    }
//    else
//    {
//        std::cout << "Couldn't GET from " << url << " - exiting" << std::endl;
//        return 1;
//    }
//
//    return 0;
//}
//
