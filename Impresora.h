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

class Impresora {
public:
    Impresora();
    virtual ~Impresora();
    void imprimir(QWidget*, const std::vector<QString>&);
    void pintarCarta(QPainter&, const std::vector<QString>&);
private:

};

#endif /* IMPRESORA_H */

