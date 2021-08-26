/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Impresora.h
 * Author: Patron
 *
 * Created on 11 de diciembre de 2020, 18:11
 */

#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include "Silo_SaS.h"
//#include <QWidget>
//#include <QObject>
//#include <QPrinter>
//#include <QPrintDialog>
//#include <QPainter>
#include <QString>

//struct Data {
//
//    QString Nombre, Procedencia,Vehiculo, Placas, Chofer, Fecha ;
//    int Folio;
//    float Humedad, KilosxTon, Deduc, Merma, DeducTotal;
//    float Bruto, Tara, Neto, Analizado, PrecioTon;
//    float Secado, SecadoIva, Cuota_Conserv, Sanidad;
//};

class Impresora {
public:
    Impresora();
    virtual ~Impresora();
    void imprimir(QWidget*, const std::vector<Data>&);
    void Impresion_Carta(QPainter&, const std::vector<Data> &);
private:

};

#endif /* IMPRESORA_H */

