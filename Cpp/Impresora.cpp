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

//#include <future>

#include "../Headers/Impresora.h"

Impresora::Impresora() {
    
}

Impresora::~Impresora() {
}

void Impresora::imprimir_Boleta( QWidget *parent, const std::vector<Data> &print ){  // este es el bueno
     
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
    Imp_Boleta_Liquidacion(e, print);
}

void Impresora::imprimir_RegInd( QWidget *parent, const std::vector<Data> &print ){  // Impresion de todas las boletas por Productor
    Gen silo;
    QPrinter *printer;
    QPrintDialog dialog(parent);
    std::vector<Data> page;
    int NoPage{0};
    
    dialog.setWindowTitle("Impresion de Boletas");
    if (dialog.exec() == QDialog::Rejected)
        return;
    
    printer = dialog.printer();
    printer->setFullPage(true);
    printer->setPaperSize(QPrinter::Letter);  // especifica el tamaño del papel
    printer->setPageSize(QPagedPaintDevice::Letter);  // especifica el tamaño de la pagina
    
    QPainter Imp(printer);
    Imp.scale(0.97,0.97); // usar para ajustar el tamaño de la impresion
    
    //silo.Log("antes de imp_RegIndiv_boletas");
    
    if( print.size()>12 ){
        //silo.Log("Mayor a 12 elementos " + QString::number(print.size()));
        NoPage = print.size() / 15;
        for (auto j{0}; j<NoPage+1 ;j++){
            Imp_RegIndiv_Boletas(Imp, print, j);     // revisar como usar std::async
            //data.waitForFinished();
            if(j<NoPage)
            {printer->newPage();}
        }
    }else{
        Imp_RegIndiv_Boletas(Imp, print, 0);
    }
    
//     async wont work with mingw, its a bug from the compiler, must use qt
//    std::async(std::launch::async, [&]() { //&Imp, &print, &printer](){
//        
//        if( print.size()>12 ){
//            silo.Log("Mayor a 12 elementos " + QString::number(print.size()));
//            NoPage = print.size() / 15;
//            for (auto j{0}; j<NoPage+1 ;j++){
//                Imp_RegIndiv_Boletas(Imp, print, j);     // revisar como usar std::async
//                //data.waitForFinished();
//                if(j<NoPage)
//                {printer->newPage();}
//            }
//        }else{
//            Imp_RegIndiv_Boletas(Imp, print, 0);
//        }
//    });
}

void Impresora::imprimir_RegGen( QWidget *parent, const std::vector<Data> &print ){  // cambiar los valores que se le pasan a registros generales
    Gen silo;
    QPrinter *printer;
    QPrintDialog dialog(parent);
    std::vector<Data> page;
    int NoPage{0};
    
    dialog.setWindowTitle("Impresion de Boletas");
    if (dialog.exec() == QDialog::Rejected)
        return;
    
    printer = dialog.printer();
    printer->setFullPage(true);
    printer->setPaperSize(QPrinter::Letter);  // especifica el tamaño del papel
    printer->setPageSize(QPagedPaintDevice::Letter);  // especifica el tamaño de la pagina
    
    QPainter Imp(printer);
    Imp.scale(0.97,0.97); // usar para ajustar el tamaño de la impresion
    
    //silo.Log("antes de imp_RegGenerales_boletas");
    
    if( print.size()>12 ){
        //silo.Log("Mayor a 12 elementos " + QString::number(print.size()));
        NoPage = print.size() / 15;
        for (auto j{0}; j<NoPage+1 ;j++){
            Imp_RegGenerales_Boletas(Imp, print, j); 
            if(j<NoPage)
            {printer->newPage();}
        }
    }else{
        Imp_RegGenerales_Boletas(Imp, print, 0);
    }
}

void Impresora::imprimir_RegComp( QWidget *parent, const std::vector<Data> &print ){  // imprime las boletas emitidas a los Compradores
    Gen silo;
    QPrinter *printer;
    QPrintDialog dialog(parent);
    std::vector<Data> page;
    int NoPage{0};
    
    dialog.setWindowTitle("Impresion de Boletas");
    if (dialog.exec() == QDialog::Rejected)
        return;
    
    printer = dialog.printer();
    printer->setFullPage(true);
    printer->setPaperSize(QPrinter::Letter);  // especifica el tamaño del papel
    printer->setPageSize(QPagedPaintDevice::Letter);  // especifica el tamaño de la pagina
    
    QPainter Imp(printer);
    Imp.scale(0.97,0.97); // usar para ajustar el tamaño de la impresion
    
    //silo.Log("antes de imp_RegGenerales_boletas");
    
    if( print.size()>12 ){
        //silo.Log("Mayor a 12 elementos " + QString::number(print.size()));
        NoPage = print.size() / 15;
        for (auto j{0}; j<NoPage+1 ;j++){
            Imp_RegGenerales_Boletas(Imp, print, j); 
            if(j<NoPage)
            {printer->newPage();}
        }
    }else{
        Imp_RegGenerales_Boletas(Imp, print, 0);
    }
}


        // usar vector<QString> &Dinamic_Data para pasarle la info de la Db
void Impresora::Imp_Boleta_Liquidacion(QPainter &painter, const std::vector<Data> &Dinamic_Data ){   // revisar   https://stackoverflow.com/questions/36249645/qt-reusable-paint-functions-with-custom-arguments
    
    //painter = p;
    //painter(this); // declara el tipo de qpainter, se puede pasar un Qprinter por referencia, &printer para mandar a impresion
    QPen pen;  // Dinamicos
    QPen pen2; // Estaticos                       declara la qpen para los ajustes de lineas
    // painter.begin(&printer);  // inicializa el dispositivo para impresion, terminar con painter.end
    QPixmap Imagen;
    int UbicX{0};
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
    UbicX = 25;
    //  "Pinta" la info de la boleta
    //  ESTATICOS
    painter.drawText(QRect(390,30,400,20), 0, "AGROINDUSTRIAS LOMA COLORADA S.P.R. DE R.L.", &boundingRect); // en mac se debe agregar tr antes del texto entre comillas
    painter.drawText(QRect(500,50,400,20), 0, "RFC: ALC170201PG1", &boundingRect);
    painter.drawText(QRect(410,70,400,20), 0, "LIBRAMIENTO SAN FERNANDO KM. 14,69 S/N", &boundingRect);
    painter.drawText(QRect(430,90,400,20), 0, "MUNICIPIO SAN FERNANDO TAMAULIPAS", &boundingRect);
    painter.drawText(QRect(470,110,400,20), 0, "CP: 87624  TEL: (841) 8460120", &boundingRect);
    painter.drawText(QRect(435,130,400,20), 0, "agroindustriaslomacolorada@hotmail.com", &boundingRect);
    // painter.drawText(QRect(435,160,400,20), 0, "agroindustriaslomacolorada@hotmail.com", &boundingRect);
    painter.drawText(QRect(335,230,200,20), 0, "Ciclo Agricola 2019-2020", &boundingRect); // dibuja el texto o se le puede pasar una variable
    
    painter.drawText(QRect(120,300,130,20), 0, "Productor: ", &boundingRect);
    painter.drawText(QRect(102,320,150,20), 0, "Procedencia: ", &boundingRect);
    painter.drawText(QRect(130,340,150,20), 0, "Vehiculo: ", &boundingRect);
    painter.drawText(QRect(145,360,150,20), 0, "Placas: ", &boundingRect);
    painter.drawText(QRect(145,380,100,20), 0, "Chofer: ", &boundingRect);
    
    painter.drawText(QRect(550,300,100,20), 0, "Folio: ", &boundingRect);
    painter.drawText(QRect(550,340,100,20), 0, "Fecha: ", &boundingRect);
    painter.drawText(QRect(550,380,120,20), 0, "Comprador: ", &boundingRect);
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
    painter.drawText(QRect(574 - UbicX,520,100,20), 0, "Peso Bruto: ", &boundingRect);
    painter.drawText(QRect(582 - UbicX,542,100,20), 0, "Peso Tara: ", &boundingRect);
    painter.drawText(QRect(580 - UbicX,565,100,20), 0, "Peso Neto: ", &boundingRect);
    painter.drawText(QRect(548 - UbicX,588,120,20), 0, "- Deducciones: ", &boundingRect);
    painter.drawText(QRect(542 - UbicX,613,150,20), 0, "Peso Analizado: ", &boundingRect);
    painter.drawText(QRect(780 - UbicX,520,30,20), 0, "Tons", &boundingRect);  // bruto
    painter.drawText(QRect(780 - UbicX,542,40,20), 0, "Tons", &boundingRect);  // tara
    painter.drawText(QRect(780 - UbicX,565,40,20), 0, "Tons", &boundingRect);  // neto
    painter.drawText(QRect(780 - UbicX,588,40,20), 0, "Kgs", &boundingRect);   // deduc
    painter.drawText(QRect(780 - UbicX,612,40,20), 0, "Tons", &boundingRect);  //analizado
    
    painter.drawText(QRect(60,700,200,20), 0, "PRECIO TONELADAS $: ", &boundingRect);
    painter.drawText(QRect(350,700,100,20), 0, "Mx:", &boundingRect);
    painter.drawText(QRect(530,700,100,20), 0, "TOTAL $:", &boundingRect);
    painter.drawText(QRect(740,700,100,20), 0, "Mx", &boundingRect);
    painter.drawText(QRect(450,790,200,20), 0, "SUB TOTAL(SECADO) $ ", &boundingRect);
    painter.drawText(QRect(590,815,100,20), 0, "IVA $", &boundingRect);
    painter.drawText(QRect(482,838,200,20), 0, "TOTAL (SECADO) $", &boundingRect);
    painter.drawText(QRect(305,890,350,20), 0, "CUOTA DE CONSERVACION DE GRANOS $", &boundingRect);
    painter.drawText(QRect(468,940,300,20), 0, "SANIDAD VEGETAL $", &boundingRect);
      
    //painter.drawRect(50,480,400,120);   // CUADRO #1 Izquierdo HUMEDAD Y PREVENCION MERMA
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
    
    painter.drawRect(520 - 25,480,250,160); // Cuadro #2 Derecho PESO
    painter.drawRect(520 - 25,480,250,40);
    painter.drawRect(520 - 25,520,150,120);
    
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
    
    painter.drawText(QRect(620,300,100,20), 0, Dinamic_Data[0].Folio, &boundingRect);              // No folio       
    painter.drawText(QRect(620,340,200,20), 0, Dinamic_Data[0].Fecha, &boundingRect);              //  Fecha     
    painter.drawText(QRect(650,380,120,20), 0, Dinamic_Data[0].Comprador, &boundingRect);     // Comprador
    
    painter.drawText(QRect(190,530,50,20), 0, Dinamic_Data[0].Humedad, &boundingRect);             //  % de Humedad                     
    painter.drawText(QRect(250,530,100,20), 0, Dinamic_Data[0].KilosxTon, &boundingRect);          //  Kilos x Ton      
    painter.drawText(QRect(350,530,180,20), 0, Dinamic_Data[0].Deduc, &boundingRect);              //  Deducciones
    painter.drawText(QRect(185,570,50,20), 0, "1%", &boundingRect);                               // merma 1% simbolo
    painter.drawText(QRect(350,570,100,20), 0, Dinamic_Data[0].Merma, &boundingRect);             // Prevencio de Merma        
    painter.drawText(QRect(350,610,200,20), 0, Dinamic_Data[0].DeducTotal, &boundingRect);        //Total Deducciones
    
    painter.drawText(QRect(680 - UbicX,520,100,20), 0, Dinamic_Data[0].Bruto, &boundingRect);             // peso bruto                  
    painter.drawText(QRect(680 - UbicX,542,100,20), 0, Dinamic_Data[0].Tara, &boundingRect);              // Tara                         
    painter.drawText(QRect(680 - UbicX,565,100,20), 0, Dinamic_Data[0].Neto, &boundingRect);              // Neto                         
    painter.drawText(QRect(680 - UbicX,588,120,20), 0, Dinamic_Data[0].DeducTotal, &boundingRect);        //Deducciones                    
    painter.drawText(QRect(680 - UbicX,613,150,20), 0, Dinamic_Data[0].Analizado, &boundingRect);         // Peso Analizado              

    painter.drawText(QRect(280,700,200,20), 0, Dinamic_Data[0].PrecioTon, &boundingRect);         // precio tonelada               
    painter.drawText(QRect(640,700,200,20), 0, Dinamic_Data[0].Total, &boundingRect);             //total                
    
    painter.drawText(QRect(650,790,250,20), 0, Dinamic_Data[0].Secado, &boundingRect);            //Subtotal secado               
    painter.drawText(QRect(650,815,250,20), 0, Dinamic_Data[0].SecadoIva, &boundingRect);         //iva                           
    painter.drawText(QRect(650,838,250,20), 0, Dinamic_Data[0].TotalSecado, &boundingRect);       //total secado
    painter.drawText(QRect(650,890,250,20), 0, Dinamic_Data[0].Cuota_Conserv, &boundingRect);     //cuota consv                  
    painter.drawText(QRect(650,940,250,20), 0, Dinamic_Data[0].Sanidad, &boundingRect);           //Sanidad Vegetal              
    
 }

void Impresora::Imp_RegIndiv_Boletas(QPainter &painter, const std::vector<Data> &boletas, int NoPage) { 
    // como imprimir varias hojas
    // https://stackoverflow.com/questions/43526087/how-to-print-multiple-qwidgets-to-a-pdf-in-different-pages-using-qpainter
    
    auto Total_Bruto{0.0}, Total_Tara{0.0}, Total_Neto{0.0}, Total_Analizado{0.0}, Total_Boletas{0.0}; 
    auto Secado{0.0}, ConsGrano{0.0}, subtotal{0.0};
    Gen silo;
    std::time_t now_c;
    std::chrono::time_point<std::chrono::system_clock> now;       // current time of printing
    struct tm * timeinfo;
    char bufferIn[80]; 
    
    QPen pen;  // Dinamicos declara la qpen para los ajustes de lineas
    QImage Imagen("images/Logo.png");
   
    painter.drawImage( QRect(10, 20, 80, 60), Imagen, QRect(0, 0, 70, 40) );

    QRect boundingRect;
    QFont font = painter.font();
    pen.setColor(QColor(0,0,0));
    painter.setPen(pen);
    font.setPixelSize(20); 
    painter.setFont(font);
    painter.drawText(QRect(270,340,520,300), 0, "LIQUIDACION DE SORGO ", &boundingRect); // 
    painter.drawText(QRect(510,340,520,300), 0, "OI 20-21 ", &boundingRect);
    
    font.setPixelSize(16);  // especifica el tamaÃ±o en pixeles
    painter.setFont(font);
    //silo.Log("antes de los estaticos");
    //  "Pinta" la info de la boleta
    //  ESTATICOS
    painter.drawText(QRect(390,30,400,20), 0, "AGROINDUSTRIAS LOMA COLORADA S.P.R. DE R.L.", &boundingRect);
    painter.drawText(QRect(500,50,400,20), 0, "RFC: ALC170201PG1", &boundingRect);
    painter.drawText(QRect(410,70,400,20), 0, "LIBRAMIENTO SAN FERNANDO KM. 14,69 S/N", &boundingRect);
    painter.drawText(QRect(430,90,400,20), 0, "MUNICIPIO SAN FERNANDO TAMAULIPAS", &boundingRect);
    painter.drawText(QRect(470,110,400,20), 0, "CP: 87624  TEL: (841) 8460120", &boundingRect);
    painter.drawText(QRect(435,130,400,20), 0, "agroindustriaslomacolorada@hotmail.com", &boundingRect);
    
    painter.drawText(QRect(40,200,150,20), 0, "Vendedor:", &boundingRect);
    painter.drawText(QRect(470,200,150,20), 0, "Comprador:", &boundingRect);
    painter.drawText(QRect(130,260,150,20), 0, "Contrato:", &boundingRect);
    painter.drawText(QRect(45,280,350,20), 0, "Precio Usd Contrato:", &boundingRect);
    painter.drawText(QRect(95,305,100,20), 0, "Dif en Precio:", &boundingRect);
    painter.drawText(QRect(520,305,200,20), 0, "Tipo de Cambio:", &boundingRect);
    painter.drawText(QRect(520,280,200,20), 0, "Precio Usd Futuro:", &boundingRect);
    painter.drawText(QRect(550,170,100,20), 0, "Fecha:", &boundingRect);
    
    painter.drawText(QRect(30,380,100,20), 0, "Boleta:", &boundingRect);
    painter.drawText(QRect(110,380,100,20), 0, "Fecha:", &boundingRect);
    painter.drawText(QRect(215,380,100,20), 0, "P. Bruto:", &boundingRect);
    painter.drawText(QRect(300,380,100,20), 0, "P. Tara:", &boundingRect);
    painter.drawText(QRect(380,380,100,20), 0, "P. Neto:", &boundingRect);
    painter.drawText(QRect(461,380,60,20), 0, "Hum:", &boundingRect);
    painter.drawText(QRect(520,380,100,20), 0, "Analizado:", &boundingRect);
    painter.drawText(QRect(620,380,100,20), 0, "Precio:", &boundingRect);
    painter.drawText(QRect(720,380,100,20), 0, "Total Boleta:", &boundingRect);
    //silo.Log( "Antes del if totales " + QString::number(NoPage) + " ..."+ QString::number(((int)boletas.size())/15) );
    if ( NoPage >= ((int)boletas.size())/15 ){
        
        painter.drawText(QRect(110,780,120,20), 0, "Totales", &boundingRect);
        painter.drawText(QRect(200,740,120,20), 0, "Bruto", &boundingRect);
        painter.drawText(QRect(300,740,120,20), 0, "Tara", &boundingRect);
        painter.drawText(QRect(430,740,120,20), 0, "Neto", &boundingRect);
        painter.drawText(QRect(550,740,120,20), 0, "Analizado", &boundingRect);
        painter.drawText(QRect(95,820,180,20), 0, "Secado:", &boundingRect);
        painter.drawText(QRect(38,840,250,20), 0, "Cons de Grano:", &boundingRect);
        painter.drawText(QRect(30,860,250,20), 0, "Sanidad Vegetal:", &boundingRect);
        painter.drawText(QRect(600,820,180,20), 0, "Sub Total:", &boundingRect);
        painter.drawText(QRect(600,840,250,20), 0, "Anticipos:", &boundingRect);
        painter.drawText(QRect(522,860,250,20), 0, "Cobertura X Accion:", &boundingRect);
        painter.drawText(QRect(635,880,250,20), 0, "Total:", &boundingRect);
    }
    font.setPixelSize(14);  // especifica el tamaÃ±o en pixeles
    painter.setFont(font);
    painter.drawText(QRect(370,980,200,20), 0, "FIRMA DE RECIBIDO ", &boundingRect);
    painter.drawText(QRect(750,1200,220,20), 0, "Hoja #  ", &boundingRect);             // numero de hoja actual
    
    // Linea
    painter.drawRect(20,330,810,5);    
    painter.drawRect(290,950,300,1);

    
    //silo.Log("antes de los dinamicos");
    // DINAMICOS
    //  poner un ciclo for que ponga cada boleta segun la posicion
    //
    // Sunset Orange  rgba(246, 71, 71, 1)
    // Old Brick  rgba(150, 40, 27, 1)
    // Lynch   rgb(108, 122, 137)
    //  Persian blue rgb(77, 19, 209)   <-- valores dinamicos
    
    now = std::chrono::system_clock::now();
    now_c = std::chrono::system_clock::to_time_t(now);
    time (&now_c);
    timeinfo = localtime(&now_c);
    strftime(bufferIn, sizeof(bufferIn), "%d %b %Y %I:%M %p", timeinfo);
    std::string Fecha(bufferIn);
    
    pen.setColor(QColor(77,19,209)); // QColor especifica los colores en modo RGBA, se puede hacer transparente, 
                         //se tiene que usar este para que pase la opacidad --> QRgba64::fromRgba(150,40,27,100))
    painter.setPen(pen);
    font.setPixelSize(16);
    painter.setFont(font);
    
    painter.drawText(QRect(150,200,300,20), 0, boletas[0].Nombre, &boundingRect);                  // Nombre, Apellidos
    painter.drawText(QRect(570,200,500,20), 0, boletas[0].Comprador, &boundingRect);              // Comprador
    painter.drawText(QRect(610,170,210,20), 0, QString::fromStdString(Fecha), &boundingRect);     // Fecha

    painter.drawText(QRect(220,260,180,20), 0, boletas[0].Contrato, &boundingRect);               // Numero contrato
    painter.drawText(QRect(220,280,180,20), 0, boletas[0].Precio_Contrato, &boundingRect);        // precio usd contrato
    painter.drawText(QRect(220,305,180,20), 0, "No disponible", &boundingRect);                    // diferencia de precio
    painter.drawText(QRect(680,280,180,20), 0, boletas[0].Precio_Futuro, &boundingRect);          // precio a futuro
    painter.drawText(QRect(680,305,180,20), 0, boletas[0].Tipo_Cambio, &boundingRect);            // tipo de cambio
    
    // aqui va un for que itera los valores del vector
    auto L0{30}, Lx{0}, bol{0}, index{0}, a{0};
    for ( index = bol+(NoPage*15) ; index< (int)boletas.size(); index++){   // cada que sean 15 elementos, imprimir una nueva hoja
        //silo.Log(QString::number(index));
        painter.drawText(QRect(45,410 + Lx,100,20), 0, boletas[index].Folio, &boundingRect);              // Boleta 00
        painter.drawText(QRect(100,410 + Lx,100,20), 0, boletas[index].Fecha, &boundingRect);             // Fecha
        painter.drawText(QRect(220,410 + Lx,100,20), 0, boletas[index].Bruto, &boundingRect);             // Peso Bruto
        painter.drawText(QRect(300,410 + Lx,100,20), 0, boletas[index].Tara, &boundingRect);              // Peso Tara
        painter.drawText(QRect(380,410 + Lx,100,20), 0, boletas[index].Neto, &boundingRect);              // Peso Neto
        painter.drawText(QRect(465,410 + Lx,100,20), 0, boletas[index].Humedad, &boundingRect);           // Humedad
        painter.drawText(QRect(545,410 + Lx,100,20), 0, boletas[index].Analizado, &boundingRect);         // Analizado
        painter.drawText(QRect(620,410 + Lx,100,20), 0, boletas[index].PrecioTon, &boundingRect);         // Precio Tonelada
        painter.drawText(QRect(720,410 + Lx,200,20), 0, boletas[index].Total, &boundingRect);             // Total
        if( a>=14 ){
            break;
        }
        Lx += L0;
        a++;
    }    
    //  suma de totales
    for (auto tr{0} ; tr< (int)boletas.size(); tr++){   
        Total_Bruto += boletas[tr].Bruto.toFloat();
        Total_Tara += boletas[tr].Tara.toFloat();
        Total_Neto += boletas[tr].Neto.toFloat();
        Total_Analizado += boletas[tr].Analizado.toFloat();
        Total_Boletas += boletas[tr].Total.toFloat();
        ConsGrano += boletas[tr].Cuota_Conserv.toFloat();
        Secado += boletas[tr].Secado.toFloat() + boletas[tr].SecadoIva.toFloat() ; 
                                                       
    }
    
    subtotal = Total_Boletas - Secado - ConsGrano - boletas[0].Sanidad.toFloat();  // Descuentos aplicados
    
    if( NoPage >= ((int)boletas.size()) /15) {
        // solo aparece si el numero de boletas es menor a 12, si es mayor se borra y se pone en una hoja aparte
        painter.drawText(QRect(170,820,180,20), 0, QString::number(Secado, 'f', 2), &boundingRect);             // Secado
        painter.drawText(QRect(170,840,250,20), 0, QString::number(ConsGrano, 'f', 2), &boundingRect);          // Cuota Grano
        painter.drawText(QRect(170,860,250,20), 0, boletas[0].Sanidad, &boundingRect);                          // Sanidad
        painter.drawText(QRect(700,820,180,20), 0, QString::number(subtotal, 'f', 2), &boundingRect);           // SubTotal
        painter.drawText(QRect(700,840,250,20), 0, "100,000,000.00", &boundingRect);                            // Anticipos
        painter.drawText(QRect(700,860,250,20), 0, boletas[0].Cobertura , &boundingRect);                       // Coberturas
        painter.drawText(QRect(700,880,250,20), 0, "100,500,000.00", &boundingRect);                            // Total a pagar
        painter.drawText(QRect(190,780,200,20), 0, QString::number(Total_Bruto, 'f', 3), &boundingRect);        // Total P Bruto
        painter.drawText(QRect(300,780,200,20), 0, QString::number(Total_Tara, 'f', 3), &boundingRect);         // Total Peso Tara
        painter.drawText(QRect(410,780,200,20), 0, QString::number(Total_Neto, 'f', 3), &boundingRect);         // Total Peso Neto
        painter.drawText(QRect(550,780,200,20), 0, QString::number(Total_Analizado, 'f', 3), &boundingRect);    // Total Analizado
        //painter.drawText(QRect(700,780,200,20), 0, QString::number(Total_Boletas, 'f', 3), &boundingRect);      // Total total, cambiar~!!!!!
    }
    painter.drawText(QRect(350,960,300,20), 0, boletas[0].Nombre, &boundingRect);   // NOMBRE DEL PRODUCTOR
    painter.drawText(QRect(800,1200,220,20), 0, QString::number(NoPage+1), &boundingRect);             // numero de hoja actual
    silo.Log("final de impresion");
//    auto L0{30}, L1{60}, L2{90}, L3{120}, L4{150}, L5{180}, L6{210}, L7{240}, L8{270}, L9{300};
//    // poner cada boleta en una linea nueva
//    painter.drawText(QRect(30,410 + L0,100,20), 0, "00202", &boundingRect);   
//    painter.drawText(QRect(30,410 + L1,100,20), 0, "00254", &boundingRect);              // Boleta 01
//    painter.drawText(QRect(30,410 + L2,100,20), 0, "00260", &boundingRect);              // Boleta 02
//    painter.drawText(QRect(30,410 + L3,100,20), 0, "00630", &boundingRect);              // Boleta 03
//    painter.drawText(QRect(30,410 + L4,100,20), 0, "00650", &boundingRect);              // Boleta 04
//    painter.drawText(QRect(30,410 + L5,100,20), 0, "00698", &boundingRect);              // Boleta 05
//    painter.drawText(QRect(30,410 + L6,100,20), 0, "00723", &boundingRect);              // Boleta 06
//    painter.drawText(QRect(30,410 + L7,100,20), 0, "05620", &boundingRect);              // Boleta 07
//    painter.drawText(QRect(30,410 + L8,100,20), 0, "07650", &boundingRect);              // Boleta 08
//    painter.drawText(QRect(30,410 + L9,100,20), 0, "09254", &boundingRect);              // Boleta 09

}

void Impresora::Imp_RegGenerales_Boletas(QPainter &painter, const std::vector<Data> &boletas, int NoPage) { 
    // Imprime los valores de todas las boletas de cada productor
    // cambiar los valores que se le tienen que pasar
    
    auto Total_Secado{0.0}, Total_Grano{0.0}, Total_Sanidad{0.0}, Total_Neto{0.0}, Total_Analizado{0.0}, Total_Totales{0.0}; 
    Gen silo;
    std::time_t now_c;
    std::chrono::time_point<std::chrono::system_clock> now;       // current time of printing
    struct tm * timeinfo;
    char bufferIn[80]; 
    
    QPen pen;  // Dinamicos declara la qpen para los ajustes de lineas
    QImage Imagen("/images/Logo.png");
   
    painter.drawImage( QRect(10, 20, 80, 60), Imagen, QRect(0, 0, 70, 40) );

    QRect boundingRect;
    QFont font = painter.font();
    pen.setColor(QColor(0,0,0));
    painter.setPen(pen);
    font.setPixelSize(20); 
    painter.setFont(font);
    painter.drawText(QRect(250,200,520,300), 0, "TOTALES SORGO ENTREGADO ", &boundingRect); // titulo
    painter.drawText(QRect(530,200,520,300), 0, "OI 20-21 ", &boundingRect);
    
    font.setPixelSize(16);  // especifica el tamaÃ±o en pixeles
    painter.setFont(font);
    //silo.Log("antes de los estaticos");
    //  "Pinta" la info de la boleta
    //  ESTATICOS
    painter.drawText(QRect(390,30,400,20), 0, "AGROINDUSTRIAS LOMA COLORADA S.P.R. DE R.L.", &boundingRect);
    painter.drawText(QRect(500,50,400,20), 0, "RFC: ALC170201PG1", &boundingRect);
    painter.drawText(QRect(410,70,400,20), 0, "LIBRAMIENTO SAN FERNANDO KM. 14,69 S/N", &boundingRect);
    painter.drawText(QRect(430,90,400,20), 0, "MUNICIPIO SAN FERNANDO TAMAULIPAS", &boundingRect);
    painter.drawText(QRect(470,110,400,20), 0, "CP: 87624  TEL: (841) 8460120", &boundingRect);
    painter.drawText(QRect(435,130,400,20), 0, "agroindustriaslomacolorada@hotmail.com", &boundingRect);
  
    painter.drawText(QRect(550,170,100,20), 0, "Fecha:", &boundingRect);
    
    painter.drawText(QRect(30,250,100,20), 0, "Productor:", &boundingRect);
    //painter.drawText(QRect(175,250,100,20), 0, "# Boletas", &boundingRect);
    painter.drawText(QRect(260,250,100,20), 0, "P. Neto:", &boundingRect);
    painter.drawText(QRect(265,270,100,20), 0, "Tons", &boundingRect);
    painter.drawText(QRect(340,250,100,20), 0, "Analizado", &boundingRect);
    painter.drawText(QRect(350,270,100,20), 0, "Tons", &boundingRect);
    painter.drawText(QRect(435,250,100,20), 0, "Secado", &boundingRect);
    painter.drawText(QRect(450,270,100,20), 0, "Mxn", &boundingRect);
    painter.drawText(QRect(530,250,270,20), 0, "Consv Grano", &boundingRect);
    painter.drawText(QRect(560,270,100,20), 0, "Mxn", &boundingRect);
    painter.drawText(QRect(650,250,100,20), 0, "Sanidad", &boundingRect);
    painter.drawText(QRect(670,270,100,20), 0, "Mxn", &boundingRect);
    painter.drawText(QRect(750,250,100,20), 0, "Total:", &boundingRect);
    painter.drawText(QRect(760,270,100,20), 0, "Mxn", &boundingRect);
    
    //silo.Log( "Antes del if totales " + QString::number(NoPage) + " ..."+ QString::number(((int)boletas.size())/15) );
    if ( NoPage >= ((int)boletas.size())/15 ){
        
        painter.drawText(QRect(300,900,180,20), 0, "--- Totales ---", &boundingRect);
        //painter.drawText(QRect(70,930,250,20), 0, "Num Boletas:", &boundingRect);
        painter.drawText(QRect(130,930,250,20), 0, "Neto:", &boundingRect);
        painter.drawText(QRect(90,950,180,20), 0, "Analizado:", &boundingRect);
        painter.drawText(QRect(110,970,250,20), 0, "Secado:", &boundingRect);
        painter.drawText(QRect(560,930,250,20), 0, "Consv Grano:", &boundingRect);
        painter.drawText(QRect(560,950,250,20), 0, "Desc Sanidad:", &boundingRect);
        painter.drawText(QRect(570,970,250,20), 0, "Sorgo Total:", &boundingRect);
    }
    
    // Linea
    painter.drawRect(20,230,810,5);    

    //silo.Log("antes de los dinamicos");
    // DINAMICOS
    //  poner un ciclo for que ponga cada boleta segun la posicion
    //
    // Sunset Orange  rgba(246, 71, 71, 1)
    // Old Brick  rgba(150, 40, 27, 1)
    // Lynch   rgb(108, 122, 137)
    //  Persian blue rgb(77, 19, 209)   <-- valores dinamicos
    
    now = std::chrono::system_clock::now();
    now_c = std::chrono::system_clock::to_time_t(now);
    time (&now_c);
    timeinfo = localtime(&now_c);
    strftime(bufferIn, sizeof(bufferIn), "%d %b %Y %I:%M %p", timeinfo);
    std::string Fecha(bufferIn);
    
    pen.setColor(QColor(77,19,209)); // QColor especifica los colores en modo RGBA, se puede hacer transparente, 
                         //se tiene que usar este para que pase la opacidad --> QRgba64::fromRgba(150,40,27,100))
    painter.setPen(pen);
    font.setPixelSize(16);
    painter.setFont(font);

    painter.drawText(QRect(610,170,210,20), 0, QString::fromStdString(Fecha), &boundingRect);     // Fecha

    
    // aqui va un for que itera los valores del vector
    auto L0{30}, Lx{0}, bol{0}, index{0}, a{0};
    for ( index = bol+(NoPage*15) ; index< (int)boletas.size(); index++){   // cada que sean 15 elementos, imprimir una nueva hoja
        //silo.Log(QString::number(index));
        painter.drawText(QRect(30,300 + Lx,250,20), 0, boletas[index].Nombre, &boundingRect);                 // nombre
        //painter.drawText(QRect(200,300 + Lx,50,20), 0, "50", &boundingRect);                    // Num de boletas, modificar tabla
        painter.drawText(QRect(260,300 + Lx,100,20), 0, boletas[index].Neto, &boundingRect);                  // Peso Neto
        painter.drawText(QRect(355,300 + Lx,100,20), 0, boletas[index].Analizado, &boundingRect);             // Peso Analizado
        painter.drawText(QRect(440,300 + Lx,100,20), 0, boletas[index].Secado, &boundingRect);                // Secado 
        painter.drawText(QRect(530,300 + Lx,100,20), 0, boletas[index].Cuota_Conserv, &boundingRect);         // Conservacion de Grano
        painter.drawText(QRect(640,300 + Lx,100,20), 0, boletas[index].Sanidad, &boundingRect);               // Sanidad
        painter.drawText(QRect(740,300 + Lx,150,20), 0, boletas[index].Total, &boundingRect);                 // Total
        if( a>=14 ){
            break;
        }
        Lx += L0;
        a++;
    }    
    
    for (auto tr{0} ; tr< (int)boletas.size(); tr++){   // totales
        //Total_Neto += boletas[tr].Neto.toFloat();
        Total_Analizado += boletas[tr].Analizado.toFloat();
        Total_Secado += boletas[tr].Secado.toFloat();
        Total_Grano += boletas[tr].Cuota_Conserv.toFloat();
        Total_Sanidad += boletas[tr].Sanidad.toFloat();
        Total_Totales += boletas[tr].Total.toFloat();
    }
    if( NoPage >= ((int)boletas.size()) /15) {
        // solo aparece si el numero de boletas es menor a 12, si es mayor se borra y se pone en una hoja aparte
        //painter.drawText(QRect(180,930,250,20), 0, "000", &boundingRect);                // Total de Boletas
        painter.drawText(QRect(180,930,180,20), 0, QString::number(Total_Neto, 'f', 3) , &boundingRect);         // Neto
        painter.drawText(QRect(180,950,250,20), 0, QString::number(Total_Analizado, 'f', 3), &boundingRect);     // total analizado
        painter.drawText(QRect(180,970,250,20), 0, QString::number(Total_Secado, 'f', 3), &boundingRect);        // Secado
        painter.drawText(QRect(680,930,180,20), 0, QString::number(Total_Grano, 'f', 2), &boundingRect);         // Conservacion de Grano
        painter.drawText(QRect(680,950,250,20), 0, QString::number(Total_Sanidad, 'f', 2), &boundingRect);       // Sanidad vegetal
        painter.drawText(QRect(680,970,250,20), 0, QString::number(Total_Totales, 'f', 3) , &boundingRect);      // Total

    }
    
    painter.drawText(QRect(800,1200,220,20), 0, QString::number(NoPage+1), &boundingRect);             // numero de hoja actual
    silo.Log("final de impresion");


}