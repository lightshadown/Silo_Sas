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
#include "Generales.h"
#include <QString>
#include <QColor>

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
    void imprimir_Boleta( QWidget*, const std::vector<Data>& );    //  Impresion de boleta en Liquidacion
    void imprimir_RegInd( QWidget*, const std::vector<Data>& );    //  Impresion de todas las boletas por Productor
    void imprimir_RegGen( QWidget *, const std::vector<Data>& );     //   Impresion boletas en General
    void imprimir_RegComp(QWidget *, const std::vector<Data>& );     //   Impresion boletas Compradores
    void Imp_Boleta_Liquidacion(QPainter&, const std::vector<Data> &);
    void Imp_RegIndiv_Boletas(QPainter&, const std::vector<Data>&, int);
    void Imp_RegGenerales_Boletas(QPainter &, const std::vector<Data> &, int);
    
private:

};

#endif /* IMPRESORA_H */

