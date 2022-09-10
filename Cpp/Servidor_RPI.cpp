
/* 
 * File:   Web_handler.cpp
 * Author: Patron
 * 
 * Created on 5 de agosto de 2021, 18:21
 */

#include "../Headers/Servidor_RPI.h"
//#include "Silo_SaS.h"


Server::Server(){
    Gen gen;
//    bool check;
    //Silo silo;
    //Silo* silo = new Silo();
    //Silo* silo = new Silo; 
    TCP_socket = new QTcpSocket();
    UDP_socket = new QUdpSocket();
    UDP_socket->bind(8000, QUdpSocket::ShareAddress);
    
    //QObject::connect(silo, SIGNAL(start_backup()), this, SLOT(TCP_Request_Send()));    // start all the backup process asyncronous mode
//    if (check == true){
//        gen.Log("se recive la senal");
//    }
//    if (check == false){
//        gen.Log("Error senal NO recibida");
//    }
    //QObject::connect(Silo, &Silo::start_backup, this, &Server::TCP_Request_Send);  
    
    QObject::connect(UDP_socket, &QUdpSocket::readyRead, this, &Server::UDP_Broadcast_Process);
    
    QObject::connect(TCP_socket, &QTcpSocket::hostFound, [&](){
        gen.Log("Host encontrado");
        
    } );
    
//    QObject::connect(TCP_socket, &QTcpSocket::connected, [&](){     // escrituta cuando se conecta
//        gen.Log("tcp conectado");
//    } ); 
    
    QObject::connect(TCP_socket, &QTcpSocket::disconnected, [&](){
        gen.Log("Desconectado del servidor");
        TCP_socket->deleteLater();
        UDP_socket->deleteLater();
    });
                                                          
    QObject::connect(TCP_socket, &QTcpSocket::readyRead, [&](){    // lectura de datos
//        gen.Log("dentro de readyRead");
//        QString dataread;
//        QByteArray data, block_file;
//        //QFile Archivo;
//        QDataStream salida(TCP_socket);
//        QStringList File_Name;     // lista con los nombres de los archivos
//        QDir directorio("Data/");
//        bool yes;
//        
//        File_Name = directorio.entryList(QStringList() << "*.db" << "*.DB" << "*.Db" << "*.dB" , QDir::Files);
//        
//        data = TCP_socket->readAll();     // read the recive name to be send back
//        dataread.append(data);
//       
//        foreach (QString lista, File_Name){   // check all the elements on the folder, if its found it sends the data
//            block_file.clear();
//            if (lista == dataread){
//                QFile Archivo("Data/" + lista);  
//                Archivo.open(QIODevice::ReadOnly);  // open the file
//                block_file = Archivo.readAll();
//                gen.Log(lista);
//            }
//            
//            if (TCP_socket->isValid()) { // && TCP_socket->state() == QAbstractSocket::ConnectedState) {
//                gen.Log("antes de escribir");
//                salida.writeRawData((char*)(block_file.data()), block_file.size() );  // send info of the file
//                yes = TCP_socket->flush();
//                TCP_socket->waitForBytesWritten();
//            
//                yes == true ? gen.Log("datos enviados: " + lista) : gen.Log("No se envio la data del archivo: " + lista);
//            }
//        }

        gen.Log("datos recibidos");
    //    MBox.exec();
    });
    
    
    // manejo de erores
    
    QObject::connect(TCP_socket, &QTcpSocket::stateChanged, [&](){
        switch (TCP_socket->state()){
            case QAbstractSocket::UnconnectedState:
                //TCP_socket->disconnectFromHost();
                gen.Log("sin coneccion");
                break;
            case QAbstractSocket::HostLookupState:
                gen.Log("Buscando host");
                break;
            case QAbstractSocket::ConnectingState:
                gen.Log("Conectando");
                break;
            case QAbstractSocket::ConnectedState:
                gen.Log("Coneccion exitosa");
                break;
            case QAbstractSocket::ListeningState:
                gen.Log("En escucha");
                break;
            case QAbstractSocket::BoundState:
                gen.Log("Bound state");
                break;
            case QAbstractSocket::ClosingState:
                gen.Log("Cerrando socket");
                break;
        
        }
    
    });
    
    //QObject::connect(TCP_socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), [&](QAbstractSocket::SocketError error) {
    QObject::connect(TCP_socket, static_cast<void (QTcpSocket::*)(QAbstractSocket::SocketError)> (&QAbstractSocket::error), [&](QAbstractSocket::SocketError error){   
        gen.Log("Funcion de Error");
        error = TCP_socket->error();
        //gen.Log(TCP_socket->errorString());
        
        switch(error){
            case QAbstractSocket::RemoteHostClosedError:
                gen.Log("El servidor Cerro la coneccion, Error 500");
                break;
                
            case QAbstractSocket::HostNotFoundError:
                gen.Log("No se encontro el servidor, Error 404");
                break;
                
            case QAbstractSocket::SocketAccessError:
                gen.Log("Error de acceso al Socket, falta de privilegios");
                break;
                
            case QAbstractSocket::SocketResourceError:
                gen.Log("Too many sockets active");
                break;
                
            case QAbstractSocket::SocketTimeoutError:
                gen.Log("socket timeout");
                break;
                
            case QAbstractSocket::DatagramTooLargeError:
                gen.Log("datagram demaciado grande");
                break;
                
            case QAbstractSocket::NetworkError:
                gen.Log("A ocurrido un error de Red");
                break;
                
            case QAbstractSocket::AddressInUseError:
                gen.Log("Error con la direccion, ya esta en uso");
                break;
                
            case QAbstractSocket::SocketAddressNotAvailableError:
                gen.Log("Error con la direccion, No pertenece al host");
                break;
                
            case QAbstractSocket::UnsupportedSocketOperationError:
                gen.Log("la operacion del socket no esta permitida por el Sistema operativo");
                break;
                
            case QAbstractSocket::ProxyAuthenticationRequiredError:
                gen.Log("Se requiere autentificacoin del Proxy");
                break;
                
            case QAbstractSocket::SslHandshakeFailedError:
                gen.Log("Error de handshake con el SSL/SSH");
                break;
                
            case QAbstractSocket::UnfinishedSocketOperationError:
                gen.Log("La ultima operacion del socket no ah terminado");
                break;
                
            case QAbstractSocket::ProxyConnectionRefusedError:
                gen.Log("No se puede conectar con el proxy por que fue rechazado");
                break;
                
            case QAbstractSocket::ProxyConnectionClosedError:
                gen.Log("La conecccion con el servidor proxy fue cerrado inesperadamente");
                break;
                
            case QAbstractSocket::ProxyConnectionTimeoutError:
                gen.Log("coneccion con el proxy timeout, dejo de responder");
                break;
                
            case QAbstractSocket::ProxyNotFoundError:
                gen.Log("La direccion proxy no fue encontrado");
                break;
                
            case QAbstractSocket::ProxyProtocolError:
                gen.Log("Conneccion con el servidor proxy fallo");
                break;
                
            case QAbstractSocket::OperationError:
                gen.Log("Error de operacion del Socket");
                break;
                
            case QAbstractSocket::SslInternalError:
                gen.Log("Error Interno de SSL");
                break;
                
            case QAbstractSocket::SslInvalidUserDataError:
                gen.Log("Error Invalid SSL Data");
                break;
                
            case QAbstractSocket::TemporaryError:
                gen.Log("Error Temporal");
                break;
                
            case QAbstractSocket::ConnectionRefusedError:
                gen.Log("La coneecion fue rechazada por el Servidor, error 403");
                break;
                
            case QAbstractSocket::UnknownSocketError:
                gen.Log("Error Desconocido");
                break;
                
            default:
                gen.Log("Error inesperado");
            
        }
    });
    
}

Server::~Server(){
    delete TCP_socket;
    delete UDP_socket;
}

void Server::UDP_Broadcast(){
    QByteArray datagram = "Broadcast";
    UDP_socket->writeDatagram(datagram, QHostAddress::Broadcast, 8000);
}

void Server::UDP_Broadcast_Process(){
    Gen L;
    QByteArray datagram;
    QString ip;
            
    while (UDP_socket->hasPendingDatagrams()){
        datagram.resize(int (UDP_socket->pendingDatagramSize()) );
        UDP_socket->readDatagram(datagram.data(), datagram.size() );
        ip = QString::fromUtf8(datagram.constData(), datagram.size());
        L.Log("Datagrama recibido: " + ip);
    }
}

void Server::TCP_Request_Send(){   
    //**  1. buscar los archivos existentes en la carpeta Data  
    //**  2. abrir cada archivo y ver cual es su tama;o
    //**  3. guardar en union Tamano el tama;o y nombre del archivo actual
    //**  4. enviar la info del archivo y esperar a que el servidor responda <OK> o <BAD>
    //**  5.1. si es <OK> enviar la data del archivo y esperar respuesta
    //**  5.2  si es <BAD> reenviar la info del archivo
    //**  6.  enviar la Data del archivo a respaldar y esperar respuesta
    //**  7.1  si es <OK> cerrar el archivo actual y empezar con el archivo siguiente
    //**  7.2  si es <BAD> reenviar la Data del archivo asta que se reciba <OK> o pase 5 intentos
    
    
    Gen L;
    QString Ip("192.168.1.123");    // add function to do a broadcast
    //QString data_info, list, size_8_byte, data_info_8_byte;
    qint64 filesize;
    bool yes = false;
    QByteArray block, block_file; //, block_recieve;   // bloques de datos a enviar
    QStringList File_Name;     // lista con los nombres de los archivos
    QDir directorio("Data/");
    
    File_Name = directorio.entryList(QStringList() << "*.db" << "*.DB" << "*.Db" << "*.dB" , QDir::Files);
    File_Name.append("<FIN>");
    
    //UDP_Broadcast();  // do a broadcast to retrieve ip
    L.Log("........Lista de archivos");
    
    
    if (TCP_socket->state() == QAbstractSocket::UnconnectedState){

        L.Log("antes de coneccion");
        TCP_socket->connectToHost( Ip, 8000, QIODevice::WriteOnly);   // do a broadcast and search for servers ip
        if (TCP_socket->waitForConnected(5000)){        
            
            QDataStream salida(TCP_socket);

            foreach( QString files, File_Name){   // itera cada archivo de la lista y los envia

                QFile Archivo("Data/" + files);      
                //std::string nombre = "files_" + static_cast<char>(cnt); ;
                std::string nombre = files.toStdString();
                L.Log(QString::fromStdString(nombre));
                Archivo.open(QIODevice::ReadOnly);  // open the file
                block_file = Archivo.readAll();
                filesize = Archivo.size();       // gets the file size

                block.clear();    // limpia el block y evita que se repita la info
                if(files == "<FIN>"){
                    block.append("<FIN>");
                } else{
                    block.append(QString::fromStdString(nombre) + "<SEP>" + QString::number(filesize) + "<SEP>");
                    block.append(block_file);
                    block.append("<SEP>");
                    if (block.isEmpty() == true){
                        continue;                  // SI ESTA VACIO EL REGISTRO EL FOREACH CONTINUA
                    }
                }

                L.Log("despues de block");
                if (TCP_socket->isValid()) { // && TCP_socket->state() == QAbstractSocket::ConnectedState) {
                    L.Log("antes de escribir");

                    salida.writeRawData((char*)(block.data()), block.size() );  // send info of the file
                    //yes = TCP_socket->flush();
                    yes = TCP_socket->waitForBytesWritten();

                    //L.Log(QString::fromUtf8(block.constData(), block.size() ));
                    yes == true ? L.Log("nombre " + files + " enviado") :L.Log("no se pudo enviar el nombre: " + files );

                }

//            TCP_socket->waitForReadyRead(3000);   // espera la respuesta del servidor (3seg), si llego o no
//            if (TCP_socket->bytesAvailable() > 0){
//                L.Log("Datos disponibles");
//                block_recieve.append(TCP_socket->readAll());
//                if (block_recieve.toStdString() == files.toStdString()){
//                    salida.writeRawData((char*)(block_file.data()), block_file.size() );  // send info of the file
//                    //yes = TCP_socket->flush();
//                    yes = TCP_socket->waitForBytesWritten();
//                    yes == true ? L.Log("archivo " + files + " enviado") :L.Log("no se pudo enviar el archivo: " + files + " de la lista" );
//                } else{
//                    L.Log("Error no es el archivo enviado");
//                }
//            }            

                Archivo.close();                 // close the file
                //list.append( files + ","+ QString::number(filesize) + ",");
            };
        }
    }
    
//    if (TCP_socket->state() == QAbstractSocket::ConnectedState){
//        TCP_socket->waitForReadyRead();
//        if (TCP_socket->bytesAvailable() > 0){
//            block.clear();
//            L.Log("Datos disponibles");
//            block = TCP_socket->readAll();
//            if (block == "<BAD>"){
//                L.Log("Hay pedo");
//                ready = false;
//            }
//            if (block == "<OK>"){
//                L.Log("Todo bien");
//                ready = true;
//            }
//        }
//    }
//    
    
    /*
    if (TCP_socket->state() == QAbstractSocket::UnconnectedState){

            L.Log("antes de coneccion");
            TCP_socket->connectToHost( Ip, 8000, QIODevice::WriteOnly);   // do a broadcast and search for servers ip
            TCP_socket->waitForConnected();        
            //TCP_socket->readAll();

            QDataStream salida(TCP_socket);

            Archivo.open(QIODevice::ReadOnly);  // open the file
            block_file = Archivo.readAll();
            block.append(block_file);
            filesize = Archivo.size();       // gets the file size
            Archivo.close();                 // close the file
            //data_info = File_Data + "<SEPARATOR>" + QString::number(filesize) + "<SEPARATOR>";
            //data_info_8_byte = data_info.rightJustified(8,' ')
            //block.prepend(data_info.toUtf8());


            //size = QString::number(block.size());
            //size_8_byte = size.rightJustified(8,' ');
            //block.prepend(size_8_byte.toUtf8());

    //        salida.device()->seek(0);
    //        salida << (quint32)(block.size() - sizeof(quint32));

            //salida << "Enviando desde laptop ";
            //block.append("Enviando desde Laptop");

            if (TCP_socket->isValid()) { // && TCP_socket->state() == QAbstractSocket::ConnectedState) {
                L.Log("antes de escribir");
         //       while (x < block.size()){

                //block_info.append(data_info);
                //salida.writeRawData((char*)(block_info.data()), block_info.size() );         // send filename + <SEPARATOR> + filesize
                salida.writeRawData((char*)(block.data()), block.size() );                   // send file to copy
    //                quint64 y = TCP_socket->write(block);
    //                x += y;
                yes = TCP_socket->flush();
                TCP_socket->waitForBytesWritten();
                //L.Log("Dentro del while");
               // }
                L.Log(block.data());
            if (yes == true){ L.Log("datos enviados");} else {L.Log("no se envio los datos");}
            //TCP_socket->disconnectFromHost();
            //TCP_socket->close();
            //TCP_socket->abort();
            L.Log("coneecion terminada");
            }
        }   
    */
}
