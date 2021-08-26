/*
 * Progama para La bodega Loma Colorada SA de CV
 * Se conecta a la bascula y medidor de Humedad
 */

/* 
 * File:   Impresora.cpp
 * Author: Patron
 * 
 * Created on 11 de diciembre de 2020, 18:12
 */

#include "Impresora.h"

Impresora::Impresora() {
    
}

Impresora::~Impresora() {
}

void Impresora::imprimir( QWidget *parent, const std::vector<Data> &print ){  // este es el bueno
     
    QPrinter *printer;
    QPrintDialog dialog(parent);
    
  //  printer->setResolution(10000);  // especifica la resolucion en DPI
    
    dialog.setWindowTitle("Impresion de Documento");
    if (dialog.exec() == QDialog::Rejected)
        return;
    
    printer = dialog.printer();
    printer->setFullPage(true);
    printer->setPaperSize(QPrinter::Letter);  // especifica el tamaño del papel
    printer->setPageSize(QPagedPaintDevice::Letter);  // especifica el tamaño de la pagina
    //printer->setResolution(QPrinter::PrinterResolution);
    
    
    QPainter e(printer);
    e.scale(0.97,0.97); // usar para ajustar el tamaño de la impresion
    
    // vector<QString> Dinamic_Data
    Impresion_Carta(e, print);
}

        // usar vector<QString> &Dinamic_Data para pasarle la info de la Db
void Impresora::Impresion_Carta(QPainter &painter, const std::vector<Data> &Dinamic_Data ){   // revisar   https://stackoverflow.com/questions/36249645/qt-reusable-paint-functions-with-custom-arguments
    
    //painter = p;
    //painter(this); // declara el tipo de qpainter, se puede pasar un Qprinter por referencia, &printer para mandar a impresion
    QPen pen;  // Dinamicos
    QPen pen2; // Estaticos                       declara la qpen para los ajustes de lineas
    // painter.begin(&printer);  // inicializa el dispositivo para impresion, terminar con painter.end
    QPixmap Imagen;
    
    pen2.setColor(Qt::green);   // color de linea
    pen2.setWidth(2); // ancho de linea
    
//    const QRect rectangle = QRect(0, 0, 850, 1000);  // rectangulo general donde va todo
    QRect boundingRect;
    
    Imagen.load("Imagenes/Logo.png");
    //painter.setBackgroundMode(Qt::TransparentMode);
    painter.drawPixmap(QRect(0,0,80,60), Imagen, QRect(0,0,70,40));
    QFont font = painter.font();
    
    font.setPixelSize(28);  //  usar una variable
    painter.setFont(font);
    painter.drawText(QRect(318,200,520,300), 0, "Entrada de Almacen", &boundingRect); // 
   
    font.setPixelSize(16);  // especifica el tamaño en pixeles
    painter.setFont(font);
   
    //  "Pinta" la info de la boleta
    //  ESTATICOS
    painter.drawText(QRect(390,30,400,20), 0, "AGROINDUSTRIAS LOMA COLORADA S.P.R. DE R.L.", &boundingRect); // en mac se debe agregar tr antes del texto entre comillas
    painter.drawText(QRect(500,50,400,20), 0, "RFC: ALC170201PG1", &boundingRect);
    painter.drawText(QRect(410,70,400,20), 0, "LIBRAMIENTO SAN FERNANDO KM. 14,69 S/N", &boundingRect);
    painter.drawText(QRect(430,90,400,20), 0, "MUNICIPIO SAN FERNANDO TAMAULIPAS", &boundingRect);
    painter.drawText(QRect(470,110,400,20), 0, "CP: 87624  TEL: (841) 8460120", &boundingRect);
    painter.drawText(QRect(435,160,400,20), 0, "agroindustriaslomacolorada@hotmail.com", &boundingRect);
    painter.drawText(QRect(335,230,200,20), 0, "Ciclo Agricola 2019-2020", &boundingRect); // dibuja el texto o se le puede pasar una variable
    
    painter.drawText(QRect(120,300,130,20), 0, "Productor: ", &boundingRect);
    painter.drawText(QRect(102,320,150,20), 0, "Procedencia: ", &boundingRect);
    painter.drawText(QRect(130,340,150,20), 0, "Vehiculo: ", &boundingRect);
    painter.drawText(QRect(145,360,150,20), 0, "Placas: ", &boundingRect);
    painter.drawText(QRect(145,380,100,20), 0, "Chofer: ", &boundingRect);
    
    painter.drawText(QRect(550,300,100,20), 0, "Folio: ", &boundingRect);
    painter.drawText(QRect(550,340,100,20), 0, "Fecha: ", &boundingRect);
    painter.drawText(QRect(300,450,280,20), 0, "ANALISIS DE VOLUMEN RECIBIDO", &boundingRect);
    
    painter.drawText(QRect(65,490,100,20), 0, "CONCEPTO", &boundingRect);
    painter.drawText(QRect(195,490,20,20), 0, "%", &boundingRect);
    painter.drawText(QRect(260,482,70,50), 0, "Kilos \nx Ton", &boundingRect);
    painter.drawText(QRect(330,480,120,40), Qt::AlignCenter, "Deduccion \nx Normas/Kgs", &boundingRect);
    painter.drawText(QRect(620,490,80,20), 0, "PESO", &boundingRect);
    painter.drawText(QRect(70,530,80,20), 0, "Humedad", &boundingRect);  // QRect (posX, posY, Ancho, Alto)
    painter.drawText(QRect(55,560,110,40), Qt::AlignCenter, "1% Prevencion \nde Merma", &boundingRect);
    
    painter.drawText(QRect(280,610,50,40), 0, "Total: ", &boundingRect);
    painter.drawText(QRect(460,610,50,40), 0, "KGs", &boundingRect);
    painter.drawText(QRect(574,520,100,20), 0, "Peso Bruto: ", &boundingRect);
    painter.drawText(QRect(582,542,100,20), 0, "Peso Tara: ", &boundingRect);
    painter.drawText(QRect(580,565,100,20), 0, "Peso Neto: ", &boundingRect);
    painter.drawText(QRect(548,588,120,20), 0, "- Deducciones: ", &boundingRect);
    painter.drawText(QRect(542,613,150,20), 0, "Peso Analizado: ", &boundingRect);
    painter.drawText(QRect(780,520,30,20), 0, "Tons", &boundingRect);
    painter.drawText(QRect(780,542,30,20), 0, "Tons", &boundingRect);
    painter.drawText(QRect(780,565,30,20), 0, "Tons", &boundingRect);
    painter.drawText(QRect(780,588,30,20), 0, "Kgs", &boundingRect);
    painter.drawText(QRect(780,612,30,20), 0, "Tons", &boundingRect);
    
    painter.drawText(QRect(60,700,200,20), 0, "PRECIO TONELADAS $: ", &boundingRect);
    painter.drawText(QRect(350,700,100,20), 0, "Mx:", &boundingRect);
    painter.drawText(QRect(530,700,100,20), 0, "TOTAL $:", &boundingRect);
    painter.drawText(QRect(740,700,100,20), 0, "Mx", &boundingRect);
    painter.drawText(QRect(450,790,200,20), 0, "SUB TOTAL(SECADO) $ ", &boundingRect);
    painter.drawText(QRect(590,815,100,20), 0, "IVA $", &boundingRect);
    painter.drawText(QRect(482,838,200,20), 0, "TOTAL (SECADO) $", &boundingRect);
    painter.drawText(QRect(305,890,350,20), 0, "CUOTA DE CONSERVACION DE GRANOS $", &boundingRect);
    painter.drawText(QRect(468,940,300,20), 0, "SANIDAD VEGETAL $", &boundingRect);
      
    //painter.drawRect(50,480,400,120);   // CUADRO #1 Izquierdo
    painter.drawRect(50,480,120,40);    
    painter.drawRect(170,480,60,40);     
    painter.drawRect(230,480,100,40);   
    painter.drawRect(330,480,120,40);   
    
    painter.drawRect(50,520,120,40);    
    painter.drawRect(170,520,60,40);
    painter.drawRect(230,520,100,40);
    painter.drawRect(330,520,120,40);
    
    painter.drawRect(50,560,120,40);
    painter.drawRect(170,560,60,40);
    painter.drawRect(230,560,100,40);
    painter.drawRect(330,560,120,40);
    painter.drawRect(330,600,120,40); // ultimo cuadro, total
    
    painter.drawRect(520,480,250,160); // Cuadro #2 Derecho
    painter.drawRect(520,480,250,40);
    painter.drawRect(520,520,150,120);
    
    // painter.setPen(pen2);
    // painter.drawRect(0,0,850,1035);
   
    // DINAMICOS
    //  Cambiar los valores por variables de un vector
    //
    // Sunset Orange  rgba(246, 71, 71, 1)
    // Old Brick  rgba(150, 40, 27, 1)
    // Lynch   rgb(108, 122, 137)
    //  Persian blue rgb(77, 19, 209)   <-- valores dinamicos
    
    pen.setColor(QColor(77,19,209)); // QColor especifica los colores en modo RGBA, se puede hacer transparente,  se tiene que usar este para que pase la opacidad --> QRgba64::fromRgba(150,40,27,100))
    painter.setPen(pen);
    
    
    // toda la info viene de un std::vector<Data>
    painter.drawText(QRect(215,300,300,20), 0, Dinamic_Data[0].Nombre, &boundingRect);             // Nombre, Apellidos
    painter.drawText(QRect(215,320,300,20), 0, Dinamic_Data[0].Procedencia , &boundingRect);       // Procedencia   
    painter.drawText(QRect(215,340,150,20), 0, Dinamic_Data[0].Vehiculo , &boundingRect);          // Vehiculo      
    painter.drawText(QRect(215,360,150,20), 0, Dinamic_Data[0].Placas, &boundingRect);             // Placas        
    painter.drawText(QRect(215,380,300,20), 0, Dinamic_Data[0].Chofer, &boundingRect);             // Chofer        
    
    painter.drawText(QRect(650,300,100,20), 0, Dinamic_Data[0].Folio, &boundingRect);              // No folio       
    painter.drawText(QRect(650,340,100,20), 0, Dinamic_Data[0].Fecha, &boundingRect);              //  Fecha      
    
    painter.drawText(QRect(180,530,50,20), 0, Dinamic_Data[0].Humedad, &boundingRect);             //  % de Humedad                     
    painter.drawText(QRect(250,530,100,20), 0, Dinamic_Data[0].KilosxTon, &boundingRect);          //  Kilos x Ton      
    painter.drawText(QRect(350,530,180,20), 0, Dinamic_Data[0].Deduc, &boundingRect);              //  Deducciones
    painter.drawText(QRect(185,570,50,20), 0, "1%", &boundingRect);                               // merma 1% simbolo
    painter.drawText(QRect(350,570,100,20), 0, Dinamic_Data[0].Merma, &boundingRect);             // Prevencio de Merma        
    painter.drawText(QRect(350,610,200,20), 0, Dinamic_Data[0].DeducTotal, &boundingRect);        //Total Deducciones
    
    painter.drawText(QRect(680,520,100,20), 0, Dinamic_Data[0].Bruto, &boundingRect);             // peso bruto                  
    painter.drawText(QRect(680,542,100,20), 0, Dinamic_Data[0].Tara, &boundingRect);              // Tara                         
    painter.drawText(QRect(680,565,100,20), 0, Dinamic_Data[0].Neto, &boundingRect);              // Neto                         
    painter.drawText(QRect(680,588,120,20), 0, Dinamic_Data[0].DeducTotal, &boundingRect);        //Deducciones                    
    painter.drawText(QRect(680,613,150,20), 0, Dinamic_Data[0].Analizado, &boundingRect);         // Peso Analizado              

    painter.drawText(QRect(250,700,200,20), 0, Dinamic_Data[0].PrecioTon, &boundingRect);         // precio tonelada               
    painter.drawText(QRect(610,700,200,20), 0, Dinamic_Data[0].Total, &boundingRect);             //total                
    
    painter.drawText(QRect(650,790,250,20), 0, Dinamic_Data[0].Secado, &boundingRect);            //Subtotal secado               
    painter.drawText(QRect(650,815,250,20), 0, Dinamic_Data[0].SecadoIva, &boundingRect);         //iva                           
    painter.drawText(QRect(650,838,250,20), 0, Dinamic_Data[0].TotalSecado, &boundingRect);       //total secado
    painter.drawText(QRect(650,890,250,20), 0, Dinamic_Data[0].Cuota_Conserv, &boundingRect);     //cuota consv                  
    painter.drawText(QRect(650,940,250,20), 0, Dinamic_Data[0].Sanidad, &boundingRect);           //Sanidad Vegetal              
    
 }
