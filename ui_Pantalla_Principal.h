/********************************************************************************
** Form generated from reading UI file 'Pantalla_Principal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLA_PRINCIPAL_H
#define UI_PANTALLA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pantalla_Principal
{
public:
    QAction *actionSalir;
    QAction *About;
    QAction *actionEntradas;
    QAction *actionSalidas;
    QAction *actionProductores;
    QAction *actionCompradores;
    QAction *actionAdeudps;
    QAction *actionBascula;
    QAction *actionAcerda_de;
    QAction *actionBase_de_Datos;
    QAction *actionRespaldar;
    QWidget *centralwidget;
    QStackedWidget *SW_Zona_Principal;
    QWidget *page_Landing;
    QLabel *BodegaName;
    QLabel *SplashScreenLogo;
    QWidget *page_Boletas;
    QFrame *frame_5;
    QLabel *Predio_Ubicacion;
    QLineEdit *Predio_Nombre_edit;
    QLineEdit *Predio_Ubicacion_edit;
    QLabel *Predio;
    QLabel *Predio_Nombre;
    QLabel *Productor;
    QLabel *Nombres_Prod_SocioNum;
    QLineEdit *Nombres_edit;
    QLineEdit *Apellidos_edit;
    QFrame *line_4;
    QLabel *Nombres_Prod;
    QLabel *Apellido1_Prod;
    QSpinBox *spinBox;
    QPushButton *push_Nuevo;
    QFrame *line_6;
    QLabel *Panel_Boletas;
    QLabel *Camion1;
    QLabel *Folio;
    QLabel *FolioNum;
    QFrame *frame_4;
    QLCDNumber *lcd_pesa;
    QFrame *frame;
    QLabel *Peso_Tara;
    QLabel *Ton3;
    QLineEdit *Peso_Neto_edit;
    QLineEdit *Peso_Bruto_edit;
    QLabel *Ton2;
    QLabel *Peso_Neto;
    QLineEdit *Peso_Tara_edit;
    QLabel *Ton1;
    QLabel *Peso_Bruto;
    QFrame *line_3;
    QLabel *Humedad_grados;
    QLineEdit *Humedad_edit;
    QLabel *Humedad;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *Peso;
    QPushButton *push_Cam1;
    QPushButton *push_Cam2;
    QLabel *Camion2;
    QFrame *frame_2;
    QLineEdit *Camion_Tipo_edit;
    QLineEdit *Nombres_Chofer_edit;
    QLabel *Apellido1_Chofer;
    QLineEdit *Placas_Camion_edit;
    QLineEdit *Camion_Color_edit;
    QLabel *Camion_Tipo;
    QLabel *Chofer;
    QFrame *line_5;
    QLineEdit *Apellidos_Chofer_edit;
    QLabel *Camion_Color;
    QLabel *Nombres_Chofer;
    QLabel *Placas_Camion;
    QFrame *frame_3;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *push_Grabar;
    QPushButton *push_Imp;
    QFrame *frame_14;
    QTableWidget *Tabla_Folios;
    QLineEdit *Ciclo_Actual;
    QLabel *Ciclo;
    QWidget *page_Registros;
    QGridLayout *gridLayout_3;
    QLabel *Panel_Registros;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *Registros_Ind;
    QPushButton *Reg_Ind_Print;
    QFrame *frame_16;
    QLineEdit *RegInd_NoCont_edit;
    QLabel *No_cont_2;
    QComboBox *RegInd_Ciclo_CB;
    QComboBox *RegInd_Prod_CB;
    QLabel *Ciclo_sal_2;
    QLabel *Prod_sal_2;
    QWidget *tab_2;
    QLabel *Ciclo_sal_3;
    QComboBox *Ciclo_Sal_CB_3;
    QTableWidget *Registros_General;
    QPushButton *Reg_Gen_Print;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_50;
    QLabel *label_49;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_35;
    QFrame *line_37;
    QFrame *line_45;
    QFrame *line_47;
    QWidget *page_Adeudos;
    QLabel *Panel_Adeudos;
    QLabel *Prod_sal;
    QLabel *Ciclo_sal;
    QFrame *frame_18;
    QLabel *Observaciones;
    QFrame *frame_10;
    QLabel *RetenCuotaConservacion;
    QLabel *RetenCuotaConservacion_edit;
    QLabel *label_10;
    QLabel *RetenSecado;
    QLabel *RetenPIFSV;
    QLabel *RetenModSanFer;
    QLabel *RetenTotal;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *RetenSecado_edit;
    QLabel *RetenPIFSV_edit;
    QLabel *RetenModSanFer_edit;
    QLabel *RetenTotal_edit;
    QLabel *RetenLiquidaObs;
    QFrame *frame_11;
    QLabel *ExcedTonsDerecho;
    QLabel *ExcedTonsDerecho_edit;
    QLabel *ExcedTonsEntregada;
    QLabel *ExcedTonsEntregada_edit;
    QLabel *ExcedTonsExce;
    QLabel *ExcedPagar;
    QLabel *ExcedTonsExce_edit;
    QLabel *ExcedPagar_edit;
    QLabel *label_123;
    QLabel *label_124;
    QLabel *label_125;
    QLabel *label_126;
    QLabel *CalculoExcedentes;
    QLabel *ExcedentesCalculo_edit;
    QFrame *frame_29;
    QLabel *PrimaTonsCont;
    QLabel *PrimaTonsCont_edit;
    QLabel *PrimaMontoTon;
    QLabel *PrimaMontoTon_edit;
    QLabel *PrimaImporte;
    QLabel *PrimaPagar;
    QLabel *PrimaImporte_edit;
    QLabel *PrimaPagar_edit;
    QLabel *CalculoPrimaCobertura;
    QLabel *PrimaCalculoCobertura_edit;
    QFrame *frame_32;
    QLabel *label_129;
    QLabel *label_132;
    QLabel *label_133;
    QLabel *label_134;
    QLabel *label_135;
    QLabel *label_136;
    QFrame *line_9;
    QFrame *line_20;
    QFrame *line_21;
    QFrame *line_22;
    QFrame *line_23;
    QLabel *label_144;
    QFrame *frame_34;
    QLabel *label_131;
    QLabel *label_142;
    QLabel *label_143;
    QLabel *label_145;
    QFrame *line_31;
    QFrame *line_32;
    QFrame *line_33;
    QLabel *label_199;
    QTableWidget *tableSemilla;
    QTableWidget *tablePagoSorgo;
    QFrame *frame_9;
    QLabel *LiquidacionGeneralSorgo;
    QLabel *TotalRetencionesAdeudos;
    QLabel *NetoPagar;
    QLabel *label_202;
    QLabel *LiquidacionGeneralSorgo_edit;
    QLabel *label_204;
    QLabel *TotalRetencionesAdeudos_edit;
    QLabel *label_206;
    QLabel *NetoPagar_edit;
    QLabel *Totales;
    QTableWidget *tableDiesel;
    QFrame *frame_35;
    QLabel *label_137;
    QLabel *label_146;
    QLabel *label_147;
    QLabel *label_149;
    QFrame *line_36;
    QFrame *line_38;
    QFrame *line_39;
    QLabel *label_200;
    QComboBox *Prod_sal_CB;
    QComboBox *Ciclo_Sal_CB;
    QLabel *N_contrato;
    QFrame *frame_8;
    QFrame *frame_33;
    QLabel *NoAcciones;
    QLabel *RetenLiquidaTotal;
    QLabel *ExcedentedeCiclo;
    QLabel *AnticipoPagoSorgo;
    QLabel *PagoSemilla;
    QLabel *TotalRetenAdeudos;
    QFrame *line_25;
    QFrame *line_26;
    QFrame *line_27;
    QFrame *line_28;
    QFrame *line_29;
    QFrame *line_30;
    QFrame *line_34;
    QLabel *PrimaCobertura;
    QLabel *NoAcciones_edit;
    QLabel *RetenLiquidaTotal_edit;
    QLabel *label_34;
    QLabel *ExcedentedeCiclo_edit;
    QLabel *label_36;
    QLabel *PrimaCobertura_edit;
    QLabel *label_148;
    QLabel *AnticipoPagoSorgo_edit;
    QLabel *label_150;
    QLabel *PagoSemilla_edit;
    QLabel *label_152;
    QLabel *TotalRetenAdeudos_edit;
    QLabel *label_154;
    QLineEdit *N_contrato_reg;
    QLabel *ExcedNoProd;
    QLabel *ExcedNoProd_edit;
    QWidget *page_Empleados;
    QLabel *Panel_Productores;
    QLabel *ListaProductores;
    QFrame *frame_12;
    QLineEdit *Nombre_Lista_Prod_edit;
    QLabel *Nombre;
    QLineEdit *Predio_Lista_Prod_edit;
    QLabel *Predio_Lista_Prod_2;
    QLabel *Ciudad_Lista_Prod;
    QLineEdit *Apellidos_Lista_Prod_edit;
    QLineEdit *Tel_Lista_Prod_edit;
    QLabel *Acciones_Lista_Prod;
    QLineEdit *Email_Lista_Prod_edit;
    QLineEdit *Direccion_Lista_Prod_edit;
    QLineEdit *Whats_Lista_Prod_edit;
    QLabel *Direccion_Lista_Prod;
    QSpinBox *No_Cliente_Spin;
    QLabel *No_Cliente;
    QLabel *Apellidos_Lista_Prod;
    QLabel *Email_Lista_Prod;
    QSpinBox *No_Acciones_Spin;
    QLabel *Tel_Lista_Pro;
    QLineEdit *Ciudad_Lista_Prod_edit;
    QLineEdit *SocioRef_Lista_Prod_edit;
    QLabel *Whats_Lista_Prod;
    QLabel *SocioRef_Lista_Prod;
    QLabel *TipoSocio_Lista_Prod;
    QLineEdit *TipoSocio_Lista_Prod_edit;
    QTableWidget *Productores_Lista;
    QPushButton *Prod_Guardar;
    QLabel *DatosProductor;
    QWidget *page_Compradores;
    QLabel *Panel_Compradores;
    QTableWidget *Compradores_Lista;
    QFrame *frame_13;
    QLabel *Razon_Social;
    QLineEdit *Contacto_edit;
    QLabel *Contacto;
    QLineEdit *Razon_Social_edit;
    QLabel *Direccion;
    QLabel *Whatsapp;
    QLineEdit *Direccion_edit;
    QLineEdit *Telefono_edit;
    QLabel *Telefono;
    QLineEdit *Whatsapp_edit;
    QLabel *Email;
    QLineEdit *Estado_edit;
    QLineEdit *Ciudad_edit;
    QLineEdit *Email_edit;
    QLabel *Ciudad;
    QLabel *Estado;
    QLabel *ListaProductores_2;
    QLabel *Comprador;
    QFrame *frame_6;
    QFrame *frame_Botones;
    QPushButton *push_Registros;
    QPushButton *push_Adeudos;
    QPushButton *push_Productores;
    QPushButton *push_Compradores;
    QPushButton *push_Boletas;
    QLabel *Usuario_Actual;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuAyuda;

    void setupUi(QMainWindow *Pantalla_Principal)
    {
        if (Pantalla_Principal->objectName().isEmpty())
            Pantalla_Principal->setObjectName(QStringLiteral("Pantalla_Principal"));
        Pantalla_Principal->setWindowModality(Qt::NonModal);
        Pantalla_Principal->resize(1920, 1080);
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift"));
        font.setPointSize(12);
        Pantalla_Principal->setFont(font);
        Pantalla_Principal->setWindowTitle(QStringLiteral("Sistema Silo"));
        Pantalla_Principal->setStyleSheet(QStringLiteral(""));
        actionSalir = new QAction(Pantalla_Principal);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        About = new QAction(Pantalla_Principal);
        About->setObjectName(QStringLiteral("About"));
        actionEntradas = new QAction(Pantalla_Principal);
        actionEntradas->setObjectName(QStringLiteral("actionEntradas"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        actionEntradas->setFont(font1);
        actionSalidas = new QAction(Pantalla_Principal);
        actionSalidas->setObjectName(QStringLiteral("actionSalidas"));
        actionProductores = new QAction(Pantalla_Principal);
        actionProductores->setObjectName(QStringLiteral("actionProductores"));
        actionCompradores = new QAction(Pantalla_Principal);
        actionCompradores->setObjectName(QStringLiteral("actionCompradores"));
        actionAdeudps = new QAction(Pantalla_Principal);
        actionAdeudps->setObjectName(QStringLiteral("actionAdeudps"));
        actionBascula = new QAction(Pantalla_Principal);
        actionBascula->setObjectName(QStringLiteral("actionBascula"));
        actionAcerda_de = new QAction(Pantalla_Principal);
        actionAcerda_de->setObjectName(QStringLiteral("actionAcerda_de"));
        actionBase_de_Datos = new QAction(Pantalla_Principal);
        actionBase_de_Datos->setObjectName(QStringLiteral("actionBase_de_Datos"));
        actionRespaldar = new QAction(Pantalla_Principal);
        actionRespaldar->setObjectName(QStringLiteral("actionRespaldar"));
        centralwidget = new QWidget(Pantalla_Principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift Condensed"));
        centralwidget->setFont(font2);
        SW_Zona_Principal = new QStackedWidget(centralwidget);
        SW_Zona_Principal->setObjectName(QStringLiteral("SW_Zona_Principal"));
        SW_Zona_Principal->setGeometry(QRect(271, 0, 1640, 1035));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        SW_Zona_Principal->setPalette(palette);
        SW_Zona_Principal->setAutoFillBackground(false);
        SW_Zona_Principal->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Bahnschrift\";\n"
"border:1px solid black;\n"
"border-radius:0px;"));
        SW_Zona_Principal->setFrameShape(QFrame::WinPanel);
        SW_Zona_Principal->setFrameShadow(QFrame::Sunken);
        SW_Zona_Principal->setLineWidth(2);
        page_Landing = new QWidget();
        page_Landing->setObjectName(QStringLiteral("page_Landing"));
        BodegaName = new QLabel(page_Landing);
        BodegaName->setObjectName(QStringLiteral("BodegaName"));
        BodegaName->setGeometry(QRect(440, 420, 578, 162));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        BodegaName->setPalette(palette1);
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        BodegaName->setFont(font3);
        BodegaName->setAutoFillBackground(false);
        BodegaName->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 0%);\n"
"border-width:0PX;"));
        BodegaName->setTextFormat(Qt::AutoText);
        BodegaName->setScaledContents(false);
        BodegaName->setAlignment(Qt::AlignCenter);
        SplashScreenLogo = new QLabel(page_Landing);
        SplashScreenLogo->setObjectName(QStringLiteral("SplashScreenLogo"));
        SplashScreenLogo->setGeometry(QRect(0, 0, 1641, 1031));
        SplashScreenLogo->setStyleSheet(QStringLiteral("background-image: url(:/loma/SorgoPlanta1.jpg);"));
        SplashScreenLogo->setPixmap(QPixmap(QString::fromUtf8(":/loma/SorgoPlanta1.jpg")));
        SplashScreenLogo->setScaledContents(true);
        SW_Zona_Principal->addWidget(page_Landing);
        SplashScreenLogo->raise();
        BodegaName->raise();
        page_Boletas = new QWidget();
        page_Boletas->setObjectName(QStringLiteral("page_Boletas"));
        frame_5 = new QFrame(page_Boletas);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(30, 80, 470, 410));
        frame_5->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-width:2px;\n"
"border-style:solid;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        Predio_Ubicacion = new QLabel(frame_5);
        Predio_Ubicacion->setObjectName(QStringLiteral("Predio_Ubicacion"));
        Predio_Ubicacion->setGeometry(QRect(30, 320, 101, 25));
        Predio_Ubicacion->setFont(font3);
        Predio_Ubicacion->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Predio_Nombre_edit = new QLineEdit(frame_5);
        Predio_Nombre_edit->setObjectName(QStringLiteral("Predio_Nombre_edit"));
        Predio_Nombre_edit->setGeometry(QRect(20, 280, 250, 30));
        Predio_Nombre_edit->setFont(font3);
        Predio_Nombre_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Predio_Ubicacion_edit = new QLineEdit(frame_5);
        Predio_Ubicacion_edit->setObjectName(QStringLiteral("Predio_Ubicacion_edit"));
        Predio_Ubicacion_edit->setGeometry(QRect(20, 350, 381, 30));
        Predio_Ubicacion_edit->setFont(font3);
        Predio_Ubicacion_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Predio = new QLabel(frame_5);
        Predio->setObjectName(QStringLiteral("Predio"));
        Predio->setGeometry(QRect(190, 210, 71, 25));
        Predio->setFont(font3);
        Predio->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Predio_Nombre = new QLabel(frame_5);
        Predio_Nombre->setObjectName(QStringLiteral("Predio_Nombre"));
        Predio_Nombre->setGeometry(QRect(30, 250, 81, 25));
        Predio_Nombre->setFont(font3);
        Predio_Nombre->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Productor = new QLabel(frame_5);
        Productor->setObjectName(QStringLiteral("Productor"));
        Productor->setGeometry(QRect(180, 10, 101, 25));
        Productor->setFont(font3);
        Productor->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Nombres_Prod_SocioNum = new QLabel(frame_5);
        Nombres_Prod_SocioNum->setObjectName(QStringLiteral("Nombres_Prod_SocioNum"));
        Nombres_Prod_SocioNum->setGeometry(QRect(320, 45, 81, 25));
        Nombres_Prod_SocioNum->setFont(font3);
        Nombres_Prod_SocioNum->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Nombres_edit = new QLineEdit(frame_5);
        Nombres_edit->setObjectName(QStringLiteral("Nombres_edit"));
        Nombres_edit->setGeometry(QRect(20, 80, 240, 30));
        Nombres_edit->setFont(font3);
        Nombres_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Apellidos_edit = new QLineEdit(frame_5);
        Apellidos_edit->setObjectName(QStringLiteral("Apellidos_edit"));
        Apellidos_edit->setGeometry(QRect(20, 160, 381, 30));
        Apellidos_edit->setFont(font3);
        Apellidos_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        line_4 = new QFrame(frame_5);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(160, 40, 118, 3));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        Nombres_Prod = new QLabel(frame_5);
        Nombres_Prod->setObjectName(QStringLiteral("Nombres_Prod"));
        Nombres_Prod->setGeometry(QRect(30, 50, 101, 25));
        Nombres_Prod->setFont(font3);
        Nombres_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Nombres_Prod->setAlignment(Qt::AlignCenter);
        Apellido1_Prod = new QLabel(frame_5);
        Apellido1_Prod->setObjectName(QStringLiteral("Apellido1_Prod"));
        Apellido1_Prod->setGeometry(QRect(30, 130, 111, 25));
        Apellido1_Prod->setFont(font3);
        Apellido1_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Apellido1_Prod->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(frame_5);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(310, 81, 80, 30));
        spinBox->setMinimumSize(QSize(80, 30));
        spinBox->setMaximumSize(QSize(80, 30));
        spinBox->setFont(font3);
        spinBox->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        spinBox->setWrapping(false);
        spinBox->setFrame(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox->setProperty("showGroupSeparator", QVariant(false));
        push_Nuevo = new QPushButton(frame_5);
        push_Nuevo->setObjectName(QStringLiteral("push_Nuevo"));
        push_Nuevo->setGeometry(QRect(300, 280, 127, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(173, 173, 173, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        push_Nuevo->setPalette(palette2);
        QFont font4;
        font4.setFamily(QStringLiteral("Bahnschrift"));
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        push_Nuevo->setFont(font4);
        push_Nuevo->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));
        line_6 = new QFrame(frame_5);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(160, 240, 118, 3));
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        Panel_Boletas = new QLabel(page_Boletas);
        Panel_Boletas->setObjectName(QStringLiteral("Panel_Boletas"));
        Panel_Boletas->setGeometry(QRect(9, 9, 170, 40));
        Panel_Boletas->setMinimumSize(QSize(0, 0));
        Panel_Boletas->setMaximumSize(QSize(170, 40));
        QFont font5;
        font5.setFamily(QStringLiteral("Bahnschrift"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        Panel_Boletas->setFont(font5);
        Panel_Boletas->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Boletas->setFrameShape(QFrame::Box);
        Panel_Boletas->setFrameShadow(QFrame::Raised);
        Panel_Boletas->setLineWidth(2);
        Panel_Boletas->setMidLineWidth(0);
        Panel_Boletas->setAlignment(Qt::AlignCenter);
        Camion1 = new QLabel(page_Boletas);
        Camion1->setObjectName(QStringLiteral("Camion1"));
        Camion1->setGeometry(QRect(1180, 100, 91, 25));
        Camion1->setFont(font3);
        Camion1->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Folio = new QLabel(page_Boletas);
        Folio->setObjectName(QStringLiteral("Folio"));
        Folio->setGeometry(QRect(597, 40, 111, 25));
        Folio->setFont(font3);
        Folio->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        FolioNum = new QLabel(page_Boletas);
        FolioNum->setObjectName(QStringLiteral("FolioNum"));
        FolioNum->setGeometry(QRect(600, 70, 101, 25));
        QPalette palette3;
        QBrush brush4(QColor(252, 0, 15, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        FolioNum->setPalette(palette3);
        FolioNum->setFont(font3);
        FolioNum->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        FolioNum->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(page_Boletas);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(1110, 160, 500, 350));
        frame_4->setStyleSheet(QStringLiteral("border-color: rgb(218, 218, 218);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        lcd_pesa = new QLCDNumber(page_Boletas);
        lcd_pesa->setObjectName(QStringLiteral("lcd_pesa"));
        lcd_pesa->setGeometry(QRect(580, 120, 471, 111));
        QPalette palette4;
        QBrush brush5(QColor(0, 0, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        lcd_pesa->setPalette(palette4);
        lcd_pesa->setFont(font3);
        lcd_pesa->setAutoFillBackground(false);
        lcd_pesa->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-color: rgb(57, 39, 255);\n"
"border-width:2px;\n"
"border-style:solid;"));
        lcd_pesa->setFrameShape(QFrame::StyledPanel);
        lcd_pesa->setFrameShadow(QFrame::Sunken);
        lcd_pesa->setLineWidth(3);
        lcd_pesa->setSmallDecimalPoint(true);
        lcd_pesa->setDigitCount(8);
        frame = new QFrame(page_Boletas);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(570, 250, 491, 271));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-color: rgba(23, 38, 255,0.3);\n"
"border-width:2px;\n"
"border-style:solid;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        Peso_Tara = new QLabel(frame);
        Peso_Tara->setObjectName(QStringLiteral("Peso_Tara"));
        Peso_Tara->setGeometry(QRect(190, 60, 61, 25));
        Peso_Tara->setFont(font3);
        Peso_Tara->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso_Tara->setAlignment(Qt::AlignCenter);
        Ton3 = new QLabel(frame);
        Ton3->setObjectName(QStringLiteral("Ton3"));
        Ton3->setGeometry(QRect(440, 90, 38, 27));
        Ton3->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso_Neto_edit = new QLineEdit(frame);
        Peso_Neto_edit->setObjectName(QStringLiteral("Peso_Neto_edit"));
        Peso_Neto_edit->setGeometry(QRect(330, 90, 110, 30));
        Peso_Neto_edit->setFont(font3);
        Peso_Neto_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Peso_Bruto_edit = new QLineEdit(frame);
        Peso_Bruto_edit->setObjectName(QStringLiteral("Peso_Bruto_edit"));
        Peso_Bruto_edit->setGeometry(QRect(20, 90, 110, 30));
        Peso_Bruto_edit->setFont(font3);
        Peso_Bruto_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Ton2 = new QLabel(frame);
        Ton2->setObjectName(QStringLiteral("Ton2"));
        Ton2->setGeometry(QRect(280, 90, 36, 25));
        Ton2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso_Neto = new QLabel(frame);
        Peso_Neto->setObjectName(QStringLiteral("Peso_Neto"));
        Peso_Neto->setGeometry(QRect(350, 60, 71, 25));
        Peso_Neto->setFont(font3);
        Peso_Neto->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso_Neto->setAlignment(Qt::AlignCenter);
        Peso_Tara_edit = new QLineEdit(frame);
        Peso_Tara_edit->setObjectName(QStringLiteral("Peso_Tara_edit"));
        Peso_Tara_edit->setGeometry(QRect(170, 90, 110, 30));
        Peso_Tara_edit->setFont(font3);
        Peso_Tara_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Ton1 = new QLabel(frame);
        Ton1->setObjectName(QStringLiteral("Ton1"));
        Ton1->setGeometry(QRect(130, 90, 36, 25));
        Ton1->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso_Bruto = new QLabel(frame);
        Peso_Bruto->setObjectName(QStringLiteral("Peso_Bruto"));
        Peso_Bruto->setGeometry(QRect(40, 60, 71, 25));
        Peso_Bruto->setFont(font3);
        Peso_Bruto->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso_Bruto->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(180, 44, 118, 3));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Humedad_grados = new QLabel(frame);
        Humedad_grados->setObjectName(QStringLiteral("Humedad_grados"));
        Humedad_grados->setGeometry(QRect(140, 210, 81, 27));
        Humedad_grados->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Humedad_grados->setAlignment(Qt::AlignCenter);
        Humedad_edit = new QLineEdit(frame);
        Humedad_edit->setObjectName(QStringLiteral("Humedad_edit"));
        Humedad_edit->setGeometry(QRect(20, 210, 121, 30));
        Humedad_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Humedad = new QLabel(frame);
        Humedad->setObjectName(QStringLiteral("Humedad"));
        Humedad->setGeometry(QRect(50, 180, 101, 25));
        Humedad->setFont(font3);
        Humedad->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Humedad->setAlignment(Qt::AlignCenter);
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(360, 149, 90, 40));
        radioButton->setFont(font3);
        radioButton->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(360, 200, 90, 40));
        radioButton_2->setFont(font3);
        radioButton_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso = new QLabel(frame);
        Peso->setObjectName(QStringLiteral("Peso"));
        Peso->setGeometry(QRect(210, 10, 61, 33));
        Peso->setFont(font3);
        Peso->setAutoFillBackground(false);
        Peso->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Peso->setFrameShape(QFrame::NoFrame);
        Peso->setFrameShadow(QFrame::Raised);
        Peso->setLineWidth(4);
        Peso->setMidLineWidth(0);
        Peso->setMargin(4);
        push_Cam1 = new QPushButton(page_Boletas);
        push_Cam1->setObjectName(QStringLiteral("push_Cam1"));
        push_Cam1->setGeometry(QRect(1350, 90, 149, 32));
        push_Cam1->setFont(font4);
        push_Cam1->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));
        push_Cam2 = new QPushButton(page_Boletas);
        push_Cam2->setObjectName(QStringLiteral("push_Cam2"));
        push_Cam2->setGeometry(QRect(1350, 530, 153, 32));
        push_Cam2->setFont(font4);
        push_Cam2->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));
        Camion2 = new QLabel(page_Boletas);
        Camion2->setObjectName(QStringLiteral("Camion2"));
        Camion2->setGeometry(QRect(1180, 540, 101, 25));
        Camion2->setFont(font3);
        Camion2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_2 = new QFrame(page_Boletas);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(570, 540, 491, 381));
        frame_2->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-color: rgba(23, 38, 255,0.3);\n"
"border-width:2px;\n"
"border-style:solid;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Camion_Tipo_edit = new QLineEdit(frame_2);
        Camion_Tipo_edit->setObjectName(QStringLiteral("Camion_Tipo_edit"));
        Camion_Tipo_edit->setGeometry(QRect(180, 320, 261, 30));
        Camion_Tipo_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Nombres_Chofer_edit = new QLineEdit(frame_2);
        Nombres_Chofer_edit->setObjectName(QStringLiteral("Nombres_Chofer_edit"));
        Nombres_Chofer_edit->setGeometry(QRect(40, 80, 240, 30));
        Nombres_Chofer_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Apellido1_Chofer = new QLabel(frame_2);
        Apellido1_Chofer->setObjectName(QStringLiteral("Apellido1_Chofer"));
        Apellido1_Chofer->setGeometry(QRect(50, 130, 121, 27));
        Apellido1_Chofer->setFont(font3);
        Apellido1_Chofer->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Apellido1_Chofer->setAlignment(Qt::AlignCenter);
        Placas_Camion_edit = new QLineEdit(frame_2);
        Placas_Camion_edit->setObjectName(QStringLiteral("Placas_Camion_edit"));
        Placas_Camion_edit->setGeometry(QRect(180, 220, 261, 30));
        Placas_Camion_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Camion_Color_edit = new QLineEdit(frame_2);
        Camion_Color_edit->setObjectName(QStringLiteral("Camion_Color_edit"));
        Camion_Color_edit->setGeometry(QRect(180, 270, 261, 30));
        Camion_Color_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Camion_Tipo = new QLabel(frame_2);
        Camion_Tipo->setObjectName(QStringLiteral("Camion_Tipo"));
        Camion_Tipo->setGeometry(QRect(70, 320, 61, 27));
        Camion_Tipo->setFont(font3);
        Camion_Tipo->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Chofer = new QLabel(frame_2);
        Chofer->setObjectName(QStringLiteral("Chofer"));
        Chofer->setGeometry(QRect(210, 10, 91, 27));
        Chofer->setFont(font3);
        Chofer->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Chofer->setAlignment(Qt::AlignCenter);
        line_5 = new QFrame(frame_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(200, 40, 118, 3));
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        Apellidos_Chofer_edit = new QLineEdit(frame_2);
        Apellidos_Chofer_edit->setObjectName(QStringLiteral("Apellidos_Chofer_edit"));
        Apellidos_Chofer_edit->setGeometry(QRect(40, 160, 381, 30));
        Apellidos_Chofer_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Camion_Color = new QLabel(frame_2);
        Camion_Color->setObjectName(QStringLiteral("Camion_Color"));
        Camion_Color->setGeometry(QRect(62, 270, 71, 27));
        Camion_Color->setFont(font3);
        Camion_Color->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Nombres_Chofer = new QLabel(frame_2);
        Nombres_Chofer->setObjectName(QStringLiteral("Nombres_Chofer"));
        Nombres_Chofer->setGeometry(QRect(50, 50, 101, 27));
        Nombres_Chofer->setFont(font3);
        Nombres_Chofer->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Nombres_Chofer->setAlignment(Qt::AlignCenter);
        Placas_Camion = new QLabel(frame_2);
        Placas_Camion->setObjectName(QStringLiteral("Placas_Camion"));
        Placas_Camion->setGeometry(QRect(30, 220, 141, 27));
        Placas_Camion->setFont(font3);
        Placas_Camion->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_3 = new QFrame(page_Boletas);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(1110, 610, 500, 350));
        frame_3->setStyleSheet(QStringLiteral("border-color:rgb(218, 218, 218);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(page_Boletas);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(60, 920, 411, 59));
        frame_7->setStyleSheet(QStringLiteral("border-color:rgb(255,255,255);"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_7);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        push_Grabar = new QPushButton(frame_7);
        push_Grabar->setObjectName(QStringLiteral("push_Grabar"));
        push_Grabar->setFont(font4);
        push_Grabar->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:black;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));

        horizontalLayout->addWidget(push_Grabar);

        push_Imp = new QPushButton(frame_7);
        push_Imp->setObjectName(QStringLiteral("push_Imp"));
        push_Imp->setFont(font4);
        push_Imp->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));

        horizontalLayout->addWidget(push_Imp);

        frame_14 = new QFrame(page_Boletas);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(30, 500, 478, 410));
        frame_14->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-color: rgba(23, 38, 255,0.3);\n"
"border-width:2px;\n"
"border-style:solid;"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        Tabla_Folios = new QTableWidget(frame_14);
        if (Tabla_Folios->columnCount() < 3)
            Tabla_Folios->setColumnCount(3);
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font6);
        Tabla_Folios->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font7;
        font7.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font7);
        Tabla_Folios->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font7);
        Tabla_Folios->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        Tabla_Folios->setObjectName(QStringLiteral("Tabla_Folios"));
        Tabla_Folios->setGeometry(QRect(5, 10, 470, 391));
        Tabla_Folios->setStyleSheet(QLatin1String("border-width:0px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;"));
        Tabla_Folios->verticalHeader()->setVisible(false);
        Ciclo_Actual = new QLineEdit(page_Boletas);
        Ciclo_Actual->setObjectName(QStringLiteral("Ciclo_Actual"));
        Ciclo_Actual->setGeometry(QRect(770, 80, 210, 30));
        Ciclo_Actual->setFont(font3);
        Ciclo_Actual->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Ciclo = new QLabel(page_Boletas);
        Ciclo->setObjectName(QStringLiteral("Ciclo"));
        Ciclo->setGeometry(QRect(820, 40, 121, 25));
        Ciclo->setFont(font3);
        Ciclo->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        SW_Zona_Principal->addWidget(page_Boletas);
        page_Registros = new QWidget();
        page_Registros->setObjectName(QStringLiteral("page_Registros"));
        gridLayout_3 = new QGridLayout(page_Registros);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Panel_Registros = new QLabel(page_Registros);
        Panel_Registros->setObjectName(QStringLiteral("Panel_Registros"));
        Panel_Registros->setMinimumSize(QSize(0, 0));
        Panel_Registros->setMaximumSize(QSize(190, 40));
        Panel_Registros->setFont(font5);
        Panel_Registros->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Registros->setFrameShape(QFrame::Box);
        Panel_Registros->setFrameShadow(QFrame::Raised);
        Panel_Registros->setLineWidth(2);
        Panel_Registros->setMidLineWidth(0);
        Panel_Registros->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Panel_Registros, 0, 0, 1, 1);

        tabWidget = new QTabWidget(page_Registros);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setFont(font3);
        tabWidget->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-left-width:1px;\n"
"border-top-width:0px;\n"
"border-style:solid;"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(25, 25));
        tabWidget->setElideMode(Qt::ElideMiddle);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Registros_Ind = new QTableWidget(tab);
        if (Registros_Ind->columnCount() < 10)
            Registros_Ind->setColumnCount(10);
        QFont font8;
        font8.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font8);
        Registros_Ind->setHorizontalHeaderItem(9, __qtablewidgetitem12);
        Registros_Ind->setObjectName(QStringLiteral("Registros_Ind"));
        Registros_Ind->setGeometry(QRect(10, 131, 1550, 311));
        Registros_Ind->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border-color: rgb(108, 108, 108);\n"
"border-width:2px;\n"
"border-style:solid;"));
        Registros_Ind->setLineWidth(1);
        Registros_Ind->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Registros_Ind->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
        Registros_Ind->setShowGrid(true);
        Registros_Ind->setGridStyle(Qt::SolidLine);
        Registros_Ind->setRowCount(0);
        Registros_Ind->horizontalHeader()->setVisible(false);
        Registros_Ind->horizontalHeader()->setCascadingSectionResizes(false);
        Registros_Ind->horizontalHeader()->setDefaultSectionSize(152);
        Registros_Ind->horizontalHeader()->setHighlightSections(true);
        Registros_Ind->verticalHeader()->setVisible(false);
        Reg_Ind_Print = new QPushButton(tab);
        Reg_Ind_Print->setObjectName(QStringLiteral("Reg_Ind_Print"));
        Reg_Ind_Print->setGeometry(QRect(50, 450, 181, 61));
        Reg_Ind_Print->setFont(font4);
        Reg_Ind_Print->setToolTipDuration(-1);
        Reg_Ind_Print->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));
        frame_16 = new QFrame(tab);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setGeometry(QRect(20, 40, 1191, 72));
        frame_16->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(28, 35, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        RegInd_NoCont_edit = new QLineEdit(frame_16);
        RegInd_NoCont_edit->setObjectName(QStringLiteral("RegInd_NoCont_edit"));
        RegInd_NoCont_edit->setGeometry(QRect(1010, 20, 141, 32));
        RegInd_NoCont_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        RegInd_NoCont_edit->setReadOnly(true);
        No_cont_2 = new QLabel(frame_16);
        No_cont_2->setObjectName(QStringLiteral("No_cont_2"));
        No_cont_2->setGeometry(QRect(880, 20, 141, 23));
        No_cont_2->setFont(font3);
        No_cont_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        No_cont_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RegInd_Ciclo_CB = new QComboBox(frame_16);
        RegInd_Ciclo_CB->setObjectName(QStringLiteral("RegInd_Ciclo_CB"));
        RegInd_Ciclo_CB->setGeometry(QRect(130, 20, 260, 32));
        RegInd_Ciclo_CB->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        RegInd_Ciclo_CB->setEditable(true);
        RegInd_Prod_CB = new QComboBox(frame_16);
        RegInd_Prod_CB->setObjectName(QStringLiteral("RegInd_Prod_CB"));
        RegInd_Prod_CB->setGeometry(QRect(560, 20, 271, 32));
        RegInd_Prod_CB->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        RegInd_Prod_CB->setEditable(false);
        RegInd_Prod_CB->setFrame(true);
        Ciclo_sal_2 = new QLabel(frame_16);
        Ciclo_sal_2->setObjectName(QStringLiteral("Ciclo_sal_2"));
        Ciclo_sal_2->setGeometry(QRect(70, 20, 71, 23));
        Ciclo_sal_2->setFont(font3);
        Ciclo_sal_2->setLayoutDirection(Qt::LeftToRight);
        Ciclo_sal_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Ciclo_sal_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Prod_sal_2 = new QLabel(frame_16);
        Prod_sal_2->setObjectName(QStringLiteral("Prod_sal_2"));
        Prod_sal_2->setGeometry(QRect(460, 20, 111, 23));
        Prod_sal_2->setFont(font3);
        Prod_sal_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Prod_sal_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Ciclo_sal_2->raise();
        Prod_sal_2->raise();
        No_cont_2->raise();
        RegInd_Ciclo_CB->raise();
        RegInd_Prod_CB->raise();
        RegInd_NoCont_edit->raise();
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Ciclo_sal_3 = new QLabel(tab_2);
        Ciclo_sal_3->setObjectName(QStringLiteral("Ciclo_sal_3"));
        Ciclo_sal_3->setGeometry(QRect(80, 30, 71, 23));
        Ciclo_sal_3->setFont(font3);
        Ciclo_sal_3->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Ciclo_sal_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Ciclo_Sal_CB_3 = new QComboBox(tab_2);
        Ciclo_Sal_CB_3->setObjectName(QStringLiteral("Ciclo_Sal_CB_3"));
        Ciclo_Sal_CB_3->setGeometry(QRect(140, 30, 260, 32));
        Ciclo_Sal_CB_3->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Ciclo_Sal_CB_3->setEditable(true);
        Ciclo_Sal_CB_3->setMaxCount(20);
        Registros_General = new QTableWidget(tab_2);
        if (Registros_General->columnCount() < 9)
            Registros_General->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font8);
        Registros_General->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font8);
        Registros_General->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFont(font8);
        Registros_General->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFont(font8);
        Registros_General->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFont(font8);
        Registros_General->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font8);
        Registros_General->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font8);
        Registros_General->setHorizontalHeaderItem(6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font8);
        Registros_General->setHorizontalHeaderItem(7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font8);
        Registros_General->setHorizontalHeaderItem(8, __qtablewidgetitem21);
        Registros_General->setObjectName(QStringLiteral("Registros_General"));
        Registros_General->setGeometry(QRect(10, 170, 1550, 311));
        Registros_General->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        Registros_General->horizontalHeader()->setDefaultSectionSize(160);
        Registros_General->horizontalHeader()->setMinimumSectionSize(30);
        Reg_Gen_Print = new QPushButton(tab_2);
        Reg_Gen_Print->setObjectName(QStringLiteral("Reg_Gen_Print"));
        Reg_Gen_Print->setGeometry(QRect(90, 490, 181, 61));
        Reg_Gen_Print->setFont(font4);
        Reg_Gen_Print->setToolTipDuration(-1);
        Reg_Gen_Print->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 90, 1561, 72));
        scrollArea->setStyleSheet(QStringLiteral("border-width:0px;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1561, 72));
        scrollAreaWidgetContents_2->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(28, 35, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        label_41 = new QLabel(scrollAreaWidgetContents_2);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(140, 20, 101, 33));
        label_41->setFont(font3);
        label_41->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_41->setAlignment(Qt::AlignCenter);
        label_42 = new QLabel(scrollAreaWidgetContents_2);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(394, 15, 121, 28));
        label_42->setFont(font3);
        label_42->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_42->setAlignment(Qt::AlignCenter);
        label_43 = new QLabel(scrollAreaWidgetContents_2);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(534, 10, 111, 46));
        label_43->setFont(font3);
        label_43->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_43->setAlignment(Qt::AlignCenter);
        label_44 = new QLabel(scrollAreaWidgetContents_2);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(662, 10, 101, 48));
        label_44->setFont(font3);
        label_44->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_44->setAlignment(Qt::AlignCenter);
        label_45 = new QLabel(scrollAreaWidgetContents_2);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(793, 10, 111, 56));
        label_45->setFont(font3);
        label_45->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_45->setAlignment(Qt::AlignCenter);
        label_46 = new QLabel(scrollAreaWidgetContents_2);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(924, 10, 101, 56));
        label_46->setFont(font3);
        label_46->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_46->setAlignment(Qt::AlignCenter);
        label_47 = new QLabel(scrollAreaWidgetContents_2);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(1060, 10, 111, 41));
        label_47->setFont(font3);
        label_47->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_47->setAlignment(Qt::AlignCenter);
        label_50 = new QLabel(scrollAreaWidgetContents_2);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(1230, 10, 111, 41));
        label_50->setFont(font3);
        label_50->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_50->setAlignment(Qt::AlignCenter);
        label_49 = new QLabel(scrollAreaWidgetContents_2);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(1421, 20, 71, 33));
        label_49->setFont(font4);
        label_49->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_49->setAlignment(Qt::AlignCenter);
        line_16 = new QFrame(scrollAreaWidgetContents_2);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(370, 0, 3, 500));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(scrollAreaWidgetContents_2);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(530, 0, 3, 500));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(scrollAreaWidgetContents_2);
        line_18->setObjectName(QStringLiteral("line_18"));
        line_18->setGeometry(QRect(650, -10, 3, 500));
        line_18->setFrameShape(QFrame::VLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(scrollAreaWidgetContents_2);
        line_19->setObjectName(QStringLiteral("line_19"));
        line_19->setGeometry(QRect(780, -10, 3, 500));
        line_19->setFrameShape(QFrame::VLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_35 = new QFrame(scrollAreaWidgetContents_2);
        line_35->setObjectName(QStringLiteral("line_35"));
        line_35->setGeometry(QRect(910, -10, 3, 500));
        line_35->setFrameShape(QFrame::VLine);
        line_35->setFrameShadow(QFrame::Sunken);
        line_37 = new QFrame(scrollAreaWidgetContents_2);
        line_37->setObjectName(QStringLiteral("line_37"));
        line_37->setGeometry(QRect(1040, -10, 3, 500));
        line_37->setFrameShape(QFrame::VLine);
        line_37->setFrameShadow(QFrame::Sunken);
        line_45 = new QFrame(scrollAreaWidgetContents_2);
        line_45->setObjectName(QStringLiteral("line_45"));
        line_45->setGeometry(QRect(1190, -10, 3, 500));
        line_45->setFrameShape(QFrame::VLine);
        line_45->setFrameShadow(QFrame::Sunken);
        line_47 = new QFrame(scrollAreaWidgetContents_2);
        line_47->setObjectName(QStringLiteral("line_47"));
        line_47->setGeometry(QRect(1370, 0, 3, 500));
        line_47->setFrameShape(QFrame::VLine);
        line_47->setFrameShadow(QFrame::Sunken);
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        label_43->raise();
        label_41->raise();
        label_42->raise();
        label_44->raise();
        label_45->raise();
        label_46->raise();
        label_47->raise();
        label_50->raise();
        label_49->raise();
        line_16->raise();
        line_17->raise();
        line_18->raise();
        line_19->raise();
        line_35->raise();
        line_37->raise();
        line_45->raise();
        line_47->raise();
        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 1, 0, 1, 1);

        SW_Zona_Principal->addWidget(page_Registros);
        page_Adeudos = new QWidget();
        page_Adeudos->setObjectName(QStringLiteral("page_Adeudos"));
        Panel_Adeudos = new QLabel(page_Adeudos);
        Panel_Adeudos->setObjectName(QStringLiteral("Panel_Adeudos"));
        Panel_Adeudos->setGeometry(QRect(9, 9, 190, 40));
        Panel_Adeudos->setMinimumSize(QSize(0, 0));
        Panel_Adeudos->setMaximumSize(QSize(190, 40));
        Panel_Adeudos->setFont(font5);
        Panel_Adeudos->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Adeudos->setFrameShape(QFrame::Box);
        Panel_Adeudos->setFrameShadow(QFrame::Raised);
        Panel_Adeudos->setLineWidth(2);
        Panel_Adeudos->setMidLineWidth(0);
        Panel_Adeudos->setAlignment(Qt::AlignCenter);
        Prod_sal = new QLabel(page_Adeudos);
        Prod_sal->setObjectName(QStringLiteral("Prod_sal"));
        Prod_sal->setGeometry(QRect(230, 90, 111, 29));
        Prod_sal->setFont(font3);
        Prod_sal->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Prod_sal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Ciclo_sal = new QLabel(page_Adeudos);
        Ciclo_sal->setObjectName(QStringLiteral("Ciclo_sal"));
        Ciclo_sal->setGeometry(QRect(900, 90, 71, 25));
        Ciclo_sal->setFont(font3);
        Ciclo_sal->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Ciclo_sal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_18 = new QFrame(page_Adeudos);
        frame_18->setObjectName(QStringLiteral("frame_18"));
        frame_18->setGeometry(QRect(60, 310, 1491, 701));
        frame_18->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        Observaciones = new QLabel(frame_18);
        Observaciones->setObjectName(QStringLiteral("Observaciones"));
        Observaciones->setGeometry(QRect(10, 10, 151, 27));
        Observaciones->setFont(font3);
        Observaciones->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_10 = new QFrame(frame_18);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(50, 70, 441, 181));
        frame_10->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        RetenCuotaConservacion = new QLabel(frame_10);
        RetenCuotaConservacion->setObjectName(QStringLiteral("RetenCuotaConservacion"));
        RetenCuotaConservacion->setGeometry(QRect(20, 20, 271, 27));
        RetenCuotaConservacion->setFont(font3);
        RetenCuotaConservacion->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenCuotaConservacion_edit = new QLabel(frame_10);
        RetenCuotaConservacion_edit->setObjectName(QStringLiteral("RetenCuotaConservacion_edit"));
        RetenCuotaConservacion_edit->setGeometry(QRect(330, 20, 81, 20));
        RetenCuotaConservacion_edit->setFont(font3);
        RetenCuotaConservacion_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenCuotaConservacion_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(frame_10);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 20, 23, 27));
        label_10->setFont(font3);
        label_10->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenSecado = new QLabel(frame_10);
        RetenSecado->setObjectName(QStringLiteral("RetenSecado"));
        RetenSecado->setGeometry(QRect(20, 50, 81, 27));
        RetenSecado->setFont(font3);
        RetenSecado->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenPIFSV = new QLabel(frame_10);
        RetenPIFSV->setObjectName(QStringLiteral("RetenPIFSV"));
        RetenPIFSV->setGeometry(QRect(20, 80, 71, 27));
        RetenPIFSV->setFont(font3);
        RetenPIFSV->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenModSanFer = new QLabel(frame_10);
        RetenModSanFer->setObjectName(QStringLiteral("RetenModSanFer"));
        RetenModSanFer->setGeometry(QRect(20, 110, 201, 27));
        RetenModSanFer->setFont(font3);
        RetenModSanFer->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenTotal = new QLabel(frame_10);
        RetenTotal->setObjectName(QStringLiteral("RetenTotal"));
        RetenTotal->setGeometry(QRect(20, 140, 191, 27));
        RetenTotal->setFont(font3);
        RetenTotal->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(frame_10);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 50, 23, 27));
        label_15->setFont(font3);
        label_15->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_16 = new QLabel(frame_10);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(280, 80, 23, 27));
        label_16->setFont(font3);
        label_16->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_18 = new QLabel(frame_10);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(280, 110, 23, 27));
        label_18->setFont(font3);
        label_18->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_19 = new QLabel(frame_10);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(280, 140, 23, 27));
        label_19->setFont(font3);
        label_19->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenSecado_edit = new QLabel(frame_10);
        RetenSecado_edit->setObjectName(QStringLiteral("RetenSecado_edit"));
        RetenSecado_edit->setGeometry(QRect(330, 50, 81, 20));
        RetenSecado_edit->setFont(font3);
        RetenSecado_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenSecado_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenPIFSV_edit = new QLabel(frame_10);
        RetenPIFSV_edit->setObjectName(QStringLiteral("RetenPIFSV_edit"));
        RetenPIFSV_edit->setGeometry(QRect(330, 80, 81, 20));
        RetenPIFSV_edit->setFont(font3);
        RetenPIFSV_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenPIFSV_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenModSanFer_edit = new QLabel(frame_10);
        RetenModSanFer_edit->setObjectName(QStringLiteral("RetenModSanFer_edit"));
        RetenModSanFer_edit->setGeometry(QRect(330, 110, 81, 20));
        RetenModSanFer_edit->setFont(font3);
        RetenModSanFer_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenModSanFer_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenTotal_edit = new QLabel(frame_10);
        RetenTotal_edit->setObjectName(QStringLiteral("RetenTotal_edit"));
        RetenTotal_edit->setGeometry(QRect(330, 140, 81, 20));
        RetenTotal_edit->setFont(font3);
        RetenTotal_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenTotal_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenCuotaConservacion_edit->raise();
        RetenSecado->raise();
        RetenPIFSV->raise();
        RetenModSanFer->raise();
        RetenTotal->raise();
        label_15->raise();
        label_16->raise();
        label_18->raise();
        label_19->raise();
        RetenSecado_edit->raise();
        RetenPIFSV_edit->raise();
        RetenModSanFer_edit->raise();
        RetenTotal_edit->raise();
        RetenCuotaConservacion->raise();
        label_10->raise();
        RetenLiquidaObs = new QLabel(frame_18);
        RetenLiquidaObs->setObjectName(QStringLiteral("RetenLiquidaObs"));
        RetenLiquidaObs->setGeometry(QRect(160, 40, 231, 27));
        RetenLiquidaObs->setFont(font3);
        RetenLiquidaObs->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_11 = new QFrame(frame_18);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(580, 70, 391, 181));
        frame_11->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        ExcedTonsDerecho = new QLabel(frame_11);
        ExcedTonsDerecho->setObjectName(QStringLiteral("ExcedTonsDerecho"));
        ExcedTonsDerecho->setGeometry(QRect(10, 20, 171, 27));
        ExcedTonsDerecho->setFont(font3);
        ExcedTonsDerecho->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedTonsDerecho->setAlignment(Qt::AlignCenter);
        ExcedTonsDerecho_edit = new QLabel(frame_11);
        ExcedTonsDerecho_edit->setObjectName(QStringLiteral("ExcedTonsDerecho_edit"));
        ExcedTonsDerecho_edit->setGeometry(QRect(190, 25, 121, 21));
        ExcedTonsDerecho_edit->setFont(font3);
        ExcedTonsDerecho_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedTonsDerecho_edit->setAlignment(Qt::AlignCenter);
        ExcedTonsEntregada = new QLabel(frame_11);
        ExcedTonsEntregada->setObjectName(QStringLiteral("ExcedTonsEntregada"));
        ExcedTonsEntregada->setGeometry(QRect(15, 60, 191, 27));
        ExcedTonsEntregada->setFont(font3);
        ExcedTonsEntregada->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedTonsEntregada->setAlignment(Qt::AlignCenter);
        ExcedTonsEntregada_edit = new QLabel(frame_11);
        ExcedTonsEntregada_edit->setObjectName(QStringLiteral("ExcedTonsEntregada_edit"));
        ExcedTonsEntregada_edit->setGeometry(QRect(190, 65, 121, 21));
        ExcedTonsEntregada_edit->setFont(font3);
        ExcedTonsEntregada_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedTonsEntregada_edit->setAlignment(Qt::AlignCenter);
        ExcedTonsExce = new QLabel(frame_11);
        ExcedTonsExce->setObjectName(QStringLiteral("ExcedTonsExce"));
        ExcedTonsExce->setGeometry(QRect(15, 100, 201, 27));
        ExcedTonsExce->setFont(font3);
        ExcedTonsExce->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedTonsExce->setAlignment(Qt::AlignCenter);
        ExcedPagar = new QLabel(frame_11);
        ExcedPagar->setObjectName(QStringLiteral("ExcedPagar"));
        ExcedPagar->setGeometry(QRect(15, 140, 131, 27));
        ExcedPagar->setFont(font3);
        ExcedPagar->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedPagar->setAlignment(Qt::AlignCenter);
        ExcedTonsExce_edit = new QLabel(frame_11);
        ExcedTonsExce_edit->setObjectName(QStringLiteral("ExcedTonsExce_edit"));
        ExcedTonsExce_edit->setGeometry(QRect(190, 105, 121, 21));
        ExcedTonsExce_edit->setFont(font3);
        ExcedTonsExce_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedTonsExce_edit->setAlignment(Qt::AlignCenter);
        ExcedPagar_edit = new QLabel(frame_11);
        ExcedPagar_edit->setObjectName(QStringLiteral("ExcedPagar_edit"));
        ExcedPagar_edit->setGeometry(QRect(190, 145, 121, 21));
        ExcedPagar_edit->setFont(font3);
        ExcedPagar_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedPagar_edit->setAlignment(Qt::AlignCenter);
        label_123 = new QLabel(frame_11);
        label_123->setObjectName(QStringLiteral("label_123"));
        label_123->setGeometry(QRect(310, 20, 37, 27));
        label_123->setFont(font3);
        label_123->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_123->setAlignment(Qt::AlignCenter);
        label_124 = new QLabel(frame_11);
        label_124->setObjectName(QStringLiteral("label_124"));
        label_124->setGeometry(QRect(310, 60, 37, 27));
        label_124->setFont(font3);
        label_124->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_124->setAlignment(Qt::AlignCenter);
        label_125 = new QLabel(frame_11);
        label_125->setObjectName(QStringLiteral("label_125"));
        label_125->setGeometry(QRect(310, 100, 37, 27));
        label_125->setFont(font3);
        label_125->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_125->setAlignment(Qt::AlignCenter);
        label_126 = new QLabel(frame_11);
        label_126->setObjectName(QStringLiteral("label_126"));
        label_126->setGeometry(QRect(310, 140, 37, 27));
        label_126->setFont(font3);
        label_126->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_126->setAlignment(Qt::AlignCenter);
        ExcedPagar_edit->raise();
        ExcedTonsDerecho_edit->raise();
        ExcedTonsEntregada_edit->raise();
        ExcedTonsExce_edit->raise();
        ExcedTonsDerecho->raise();
        ExcedTonsEntregada->raise();
        ExcedTonsExce->raise();
        ExcedPagar->raise();
        label_123->raise();
        label_124->raise();
        label_125->raise();
        label_126->raise();
        CalculoExcedentes = new QLabel(frame_18);
        CalculoExcedentes->setObjectName(QStringLiteral("CalculoExcedentes"));
        CalculoExcedentes->setGeometry(QRect(620, 40, 295, 28));
        CalculoExcedentes->setFont(font3);
        CalculoExcedentes->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedentesCalculo_edit = new QLabel(frame_18);
        ExcedentesCalculo_edit->setObjectName(QStringLiteral("ExcedentesCalculo_edit"));
        ExcedentesCalculo_edit->setGeometry(QRect(800, 40, 49, 27));
        ExcedentesCalculo_edit->setFont(font3);
        ExcedentesCalculo_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_29 = new QFrame(frame_18);
        frame_29->setObjectName(QStringLiteral("frame_29"));
        frame_29->setGeometry(QRect(1050, 70, 381, 181));
        frame_29->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        PrimaTonsCont = new QLabel(frame_29);
        PrimaTonsCont->setObjectName(QStringLiteral("PrimaTonsCont"));
        PrimaTonsCont->setGeometry(QRect(30, 20, 161, 27));
        PrimaTonsCont->setFont(font3);
        PrimaTonsCont->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaTonsCont_edit = new QLabel(frame_29);
        PrimaTonsCont_edit->setObjectName(QStringLiteral("PrimaTonsCont_edit"));
        PrimaTonsCont_edit->setGeometry(QRect(200, 25, 131, 21));
        PrimaTonsCont_edit->setFont(font3);
        PrimaTonsCont_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaTonsCont_edit->setAlignment(Qt::AlignCenter);
        PrimaMontoTon = new QLabel(frame_29);
        PrimaMontoTon->setObjectName(QStringLiteral("PrimaMontoTon"));
        PrimaMontoTon->setGeometry(QRect(30, 60, 121, 27));
        PrimaMontoTon->setFont(font3);
        PrimaMontoTon->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaMontoTon_edit = new QLabel(frame_29);
        PrimaMontoTon_edit->setObjectName(QStringLiteral("PrimaMontoTon_edit"));
        PrimaMontoTon_edit->setGeometry(QRect(200, 65, 131, 21));
        PrimaMontoTon_edit->setFont(font3);
        PrimaMontoTon_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaMontoTon_edit->setAlignment(Qt::AlignCenter);
        PrimaImporte = new QLabel(frame_29);
        PrimaImporte->setObjectName(QStringLiteral("PrimaImporte"));
        PrimaImporte->setGeometry(QRect(30, 100, 91, 27));
        PrimaImporte->setFont(font3);
        PrimaImporte->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaPagar = new QLabel(frame_29);
        PrimaPagar->setObjectName(QStringLiteral("PrimaPagar"));
        PrimaPagar->setGeometry(QRect(30, 140, 131, 27));
        PrimaPagar->setFont(font3);
        PrimaPagar->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaImporte_edit = new QLabel(frame_29);
        PrimaImporte_edit->setObjectName(QStringLiteral("PrimaImporte_edit"));
        PrimaImporte_edit->setGeometry(QRect(200, 105, 131, 21));
        PrimaImporte_edit->setFont(font3);
        PrimaImporte_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaImporte_edit->setAlignment(Qt::AlignCenter);
        PrimaPagar_edit = new QLabel(frame_29);
        PrimaPagar_edit->setObjectName(QStringLiteral("PrimaPagar_edit"));
        PrimaPagar_edit->setGeometry(QRect(200, 140, 131, 21));
        PrimaPagar_edit->setFont(font3);
        PrimaPagar_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaPagar_edit->setAlignment(Qt::AlignCenter);
        CalculoPrimaCobertura = new QLabel(frame_18);
        CalculoPrimaCobertura->setObjectName(QStringLiteral("CalculoPrimaCobertura"));
        CalculoPrimaCobertura->setGeometry(QRect(1050, 40, 385, 28));
        CalculoPrimaCobertura->setFont(font3);
        CalculoPrimaCobertura->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaCalculoCobertura_edit = new QLabel(frame_18);
        PrimaCalculoCobertura_edit->setObjectName(QStringLiteral("PrimaCalculoCobertura_edit"));
        PrimaCalculoCobertura_edit->setGeometry(QRect(1320, 40, 58, 27));
        PrimaCalculoCobertura_edit->setFont(font3);
        PrimaCalculoCobertura_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_32 = new QFrame(frame_18);
        frame_32->setObjectName(QStringLiteral("frame_32"));
        frame_32->setGeometry(QRect(20, 300, 811, 41));
        frame_32->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        label_129 = new QLabel(frame_32);
        label_129->setObjectName(QStringLiteral("label_129"));
        label_129->setGeometry(QRect(0, 5, 121, 27));
        label_129->setFont(font3);
        label_132 = new QLabel(frame_32);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setGeometry(QRect(170, 5, 81, 27));
        label_132->setFont(font3);
        label_133 = new QLabel(frame_32);
        label_133->setObjectName(QStringLiteral("label_133"));
        label_133->setGeometry(QRect(340, 5, 91, 27));
        label_133->setFont(font3);
        label_133->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_134 = new QLabel(frame_32);
        label_134->setObjectName(QStringLiteral("label_134"));
        label_134->setGeometry(QRect(470, 5, 91, 27));
        label_134->setFont(font3);
        label_135 = new QLabel(frame_32);
        label_135->setObjectName(QStringLiteral("label_135"));
        label_135->setGeometry(QRect(590, 5, 71, 27));
        label_135->setFont(font3);
        label_136 = new QLabel(frame_32);
        label_136->setObjectName(QStringLiteral("label_136"));
        label_136->setGeometry(QRect(680, 5, 121, 27));
        label_136->setFont(font3);
        line_9 = new QFrame(frame_32);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(100, 0, 3, 200));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_20 = new QFrame(frame_32);
        line_20->setObjectName(QStringLiteral("line_20"));
        line_20->setGeometry(QRect(280, 0, 3, 200));
        line_20->setFrameShape(QFrame::VLine);
        line_20->setFrameShadow(QFrame::Sunken);
        line_21 = new QFrame(frame_32);
        line_21->setObjectName(QStringLiteral("line_21"));
        line_21->setGeometry(QRect(450, 0, 3, 200));
        line_21->setFrameShape(QFrame::VLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(frame_32);
        line_22->setObjectName(QStringLiteral("line_22"));
        line_22->setGeometry(QRect(550, 0, 3, 200));
        line_22->setFrameShape(QFrame::VLine);
        line_22->setFrameShadow(QFrame::Sunken);
        line_23 = new QFrame(frame_32);
        line_23->setObjectName(QStringLiteral("line_23"));
        line_23->setGeometry(QRect(670, 0, 3, 200));
        line_23->setFrameShape(QFrame::VLine);
        line_23->setFrameShadow(QFrame::Sunken);
        label_144 = new QLabel(frame_18);
        label_144->setObjectName(QStringLiteral("label_144"));
        label_144->setGeometry(QRect(390, 270, 91, 27));
        label_144->setFont(font3);
        label_144->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_144->setAlignment(Qt::AlignCenter);
        frame_34 = new QFrame(frame_18);
        frame_34->setObjectName(QStringLiteral("frame_34"));
        frame_34->setGeometry(QRect(840, 300, 641, 41));
        frame_34->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);
        label_131 = new QLabel(frame_34);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setGeometry(QRect(20, 5, 131, 27));
        label_131->setFont(font3);
        label_142 = new QLabel(frame_34);
        label_142->setObjectName(QStringLiteral("label_142"));
        label_142->setGeometry(QRect(160, 5, 71, 27));
        label_142->setFont(font3);
        label_143 = new QLabel(frame_34);
        label_143->setObjectName(QStringLiteral("label_143"));
        label_143->setGeometry(QRect(310, 5, 121, 27));
        label_143->setFont(font3);
        label_145 = new QLabel(frame_34);
        label_145->setObjectName(QStringLiteral("label_145"));
        label_145->setGeometry(QRect(540, 5, 91, 27));
        label_145->setFont(font3);
        line_31 = new QFrame(frame_34);
        line_31->setObjectName(QStringLiteral("line_31"));
        line_31->setGeometry(QRect(130, 0, 3, 200));
        line_31->setFrameShape(QFrame::VLine);
        line_31->setFrameShadow(QFrame::Sunken);
        line_32 = new QFrame(frame_34);
        line_32->setObjectName(QStringLiteral("line_32"));
        line_32->setGeometry(QRect(230, 0, 3, 200));
        line_32->setFrameShape(QFrame::VLine);
        line_32->setFrameShadow(QFrame::Sunken);
        line_33 = new QFrame(frame_34);
        line_33->setObjectName(QStringLiteral("line_33"));
        line_33->setGeometry(QRect(510, 0, 3, 200));
        line_33->setFrameShape(QFrame::VLine);
        line_33->setFrameShadow(QFrame::Sunken);
        label_199 = new QLabel(frame_18);
        label_199->setObjectName(QStringLiteral("label_199"));
        label_199->setGeometry(QRect(1040, 270, 231, 27));
        label_199->setFont(font3);
        label_199->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_199->setAlignment(Qt::AlignCenter);
        tableSemilla = new QTableWidget(frame_18);
        tableSemilla->setObjectName(QStringLiteral("tableSemilla"));
        tableSemilla->setGeometry(QRect(10, 330, 811, 151));
        tableSemilla->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        tablePagoSorgo = new QTableWidget(frame_18);
        tablePagoSorgo->setObjectName(QStringLiteral("tablePagoSorgo"));
        tablePagoSorgo->setGeometry(QRect(840, 330, 641, 151));
        tablePagoSorgo->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_9 = new QFrame(frame_18);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(10, 520, 691, 161));
        frame_9->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        LiquidacionGeneralSorgo = new QLabel(frame_9);
        LiquidacionGeneralSorgo->setObjectName(QStringLiteral("LiquidacionGeneralSorgo"));
        LiquidacionGeneralSorgo->setGeometry(QRect(80, 40, 271, 29));
        LiquidacionGeneralSorgo->setFont(font3);
        LiquidacionGeneralSorgo->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        TotalRetencionesAdeudos = new QLabel(frame_9);
        TotalRetencionesAdeudos->setObjectName(QStringLiteral("TotalRetencionesAdeudos"));
        TotalRetencionesAdeudos->setGeometry(QRect(80, 80, 281, 29));
        TotalRetencionesAdeudos->setFont(font3);
        TotalRetencionesAdeudos->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        NetoPagar = new QLabel(frame_9);
        NetoPagar->setObjectName(QStringLiteral("NetoPagar"));
        NetoPagar->setGeometry(QRect(80, 120, 131, 29));
        NetoPagar->setFont(font3);
        NetoPagar->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_202 = new QLabel(frame_9);
        label_202->setObjectName(QStringLiteral("label_202"));
        label_202->setGeometry(QRect(410, 40, 21, 25));
        label_202->setFont(font3);
        label_202->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        LiquidacionGeneralSorgo_edit = new QLabel(frame_9);
        LiquidacionGeneralSorgo_edit->setObjectName(QStringLiteral("LiquidacionGeneralSorgo_edit"));
        LiquidacionGeneralSorgo_edit->setGeometry(QRect(450, 40, 81, 29));
        LiquidacionGeneralSorgo_edit->setFont(font3);
        LiquidacionGeneralSorgo_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        LiquidacionGeneralSorgo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_204 = new QLabel(frame_9);
        label_204->setObjectName(QStringLiteral("label_204"));
        label_204->setGeometry(QRect(410, 80, 21, 25));
        label_204->setFont(font3);
        label_204->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        TotalRetencionesAdeudos_edit = new QLabel(frame_9);
        TotalRetencionesAdeudos_edit->setObjectName(QStringLiteral("TotalRetencionesAdeudos_edit"));
        TotalRetencionesAdeudos_edit->setGeometry(QRect(450, 80, 81, 29));
        TotalRetencionesAdeudos_edit->setFont(font3);
        TotalRetencionesAdeudos_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        TotalRetencionesAdeudos_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_206 = new QLabel(frame_9);
        label_206->setObjectName(QStringLiteral("label_206"));
        label_206->setGeometry(QRect(410, 120, 21, 25));
        label_206->setFont(font3);
        label_206->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        NetoPagar_edit = new QLabel(frame_9);
        NetoPagar_edit->setObjectName(QStringLiteral("NetoPagar_edit"));
        NetoPagar_edit->setGeometry(QRect(450, 120, 81, 29));
        NetoPagar_edit->setFont(font3);
        NetoPagar_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        NetoPagar_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Totales = new QLabel(frame_9);
        Totales->setObjectName(QStringLiteral("Totales"));
        Totales->setGeometry(QRect(20, 10, 72, 25));
        Totales->setFont(font3);
        Totales->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        tableDiesel = new QTableWidget(frame_18);
        tableDiesel->setObjectName(QStringLiteral("tableDiesel"));
        tableDiesel->setGeometry(QRect(840, 550, 641, 141));
        tableDiesel->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_35 = new QFrame(frame_18);
        frame_35->setObjectName(QStringLiteral("frame_35"));
        frame_35->setGeometry(QRect(840, 520, 641, 41));
        frame_35->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        label_137 = new QLabel(frame_35);
        label_137->setObjectName(QStringLiteral("label_137"));
        label_137->setGeometry(QRect(20, 5, 131, 27));
        label_137->setFont(font3);
        label_146 = new QLabel(frame_35);
        label_146->setObjectName(QStringLiteral("label_146"));
        label_146->setGeometry(QRect(160, 5, 71, 27));
        label_146->setFont(font3);
        label_147 = new QLabel(frame_35);
        label_147->setObjectName(QStringLiteral("label_147"));
        label_147->setGeometry(QRect(310, 5, 121, 27));
        label_147->setFont(font3);
        label_149 = new QLabel(frame_35);
        label_149->setObjectName(QStringLiteral("label_149"));
        label_149->setGeometry(QRect(540, 5, 91, 27));
        label_149->setFont(font3);
        line_36 = new QFrame(frame_35);
        line_36->setObjectName(QStringLiteral("line_36"));
        line_36->setGeometry(QRect(130, 0, 3, 200));
        line_36->setFrameShape(QFrame::VLine);
        line_36->setFrameShadow(QFrame::Sunken);
        line_38 = new QFrame(frame_35);
        line_38->setObjectName(QStringLiteral("line_38"));
        line_38->setGeometry(QRect(230, 0, 3, 200));
        line_38->setFrameShape(QFrame::VLine);
        line_38->setFrameShadow(QFrame::Sunken);
        line_39 = new QFrame(frame_35);
        line_39->setObjectName(QStringLiteral("line_39"));
        line_39->setGeometry(QRect(510, 0, 3, 200));
        line_39->setFrameShape(QFrame::VLine);
        line_39->setFrameShadow(QFrame::Sunken);
        label_200 = new QLabel(frame_18);
        label_200->setObjectName(QStringLiteral("label_200"));
        label_200->setGeometry(QRect(1100, 490, 101, 27));
        label_200->setFont(font3);
        label_200->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_200->setAlignment(Qt::AlignCenter);
        label_200->raise();
        frame_34->raise();
        Observaciones->raise();
        frame_10->raise();
        RetenLiquidaObs->raise();
        frame_11->raise();
        CalculoExcedentes->raise();
        frame_29->raise();
        CalculoPrimaCobertura->raise();
        PrimaCalculoCobertura_edit->raise();
        frame_32->raise();
        label_199->raise();
        tableSemilla->raise();
        label_144->raise();
        ExcedentesCalculo_edit->raise();
        tablePagoSorgo->raise();
        frame_9->raise();
        frame_35->raise();
        tableDiesel->raise();
        Prod_sal_CB = new QComboBox(page_Adeudos);
        Prod_sal_CB->setObjectName(QStringLiteral("Prod_sal_CB"));
        Prod_sal_CB->setGeometry(QRect(330, 90, 281, 25));
        Prod_sal_CB->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;"));
        Prod_sal_CB->setFrame(true);
        Ciclo_Sal_CB = new QComboBox(page_Adeudos);
        Ciclo_Sal_CB->setObjectName(QStringLiteral("Ciclo_Sal_CB"));
        Ciclo_Sal_CB->setGeometry(QRect(960, 90, 191, 25));
        Ciclo_Sal_CB->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;"));
        N_contrato = new QLabel(page_Adeudos);
        N_contrato->setObjectName(QStringLiteral("N_contrato"));
        N_contrato->setGeometry(QRect(1200, 90, 151, 25));
        N_contrato->setFont(font3);
        N_contrato->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        N_contrato->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_8 = new QFrame(page_Adeudos);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(130, 150, 1350, 140));
        frame_8->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
""));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_33 = new QFrame(frame_8);
        frame_33->setObjectName(QStringLiteral("frame_33"));
        frame_33->setGeometry(QRect(10, 10, 1330, 120));
        frame_33->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border:0px;\n"
""));
        frame_33->setFrameShape(QFrame::StyledPanel);
        frame_33->setFrameShadow(QFrame::Plain);
        NoAcciones = new QLabel(frame_33);
        NoAcciones->setObjectName(QStringLiteral("NoAcciones"));
        NoAcciones->setGeometry(QRect(13, 17, 131, 23));
        NoAcciones->setFont(font3);
        NoAcciones->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RetenLiquidaTotal = new QLabel(frame_33);
        RetenLiquidaTotal->setObjectName(QStringLiteral("RetenLiquidaTotal"));
        RetenLiquidaTotal->setGeometry(QRect(190, 2, 141, 56));
        RetenLiquidaTotal->setFont(font3);
        RetenLiquidaTotal->setAlignment(Qt::AlignCenter);
        ExcedentedeCiclo = new QLabel(frame_33);
        ExcedentedeCiclo->setObjectName(QStringLiteral("ExcedentedeCiclo"));
        ExcedentedeCiclo->setGeometry(QRect(350, 20, 161, 28));
        ExcedentedeCiclo->setFont(font3);
        ExcedentedeCiclo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        AnticipoPagoSorgo = new QLabel(frame_33);
        AnticipoPagoSorgo->setObjectName(QStringLiteral("AnticipoPagoSorgo"));
        AnticipoPagoSorgo->setGeometry(QRect(740, 10, 141, 46));
        AnticipoPagoSorgo->setFont(font3);
        AnticipoPagoSorgo->setAlignment(Qt::AlignCenter);
        PagoSemilla = new QLabel(frame_33);
        PagoSemilla->setObjectName(QStringLiteral("PagoSemilla"));
        PagoSemilla->setGeometry(QRect(910, 20, 151, 28));
        PagoSemilla->setFont(font3);
        PagoSemilla->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TotalRetenAdeudos = new QLabel(frame_33);
        TotalRetenAdeudos->setObjectName(QStringLiteral("TotalRetenAdeudos"));
        TotalRetenAdeudos->setGeometry(QRect(1110, 4, 181, 56));
        TotalRetenAdeudos->setFont(font3);
        TotalRetenAdeudos->setAlignment(Qt::AlignCenter);
        line_25 = new QFrame(frame_33);
        line_25->setObjectName(QStringLiteral("line_25"));
        line_25->setGeometry(QRect(150, 0, 3, 120));
        line_25->setFrameShape(QFrame::VLine);
        line_25->setFrameShadow(QFrame::Sunken);
        line_26 = new QFrame(frame_33);
        line_26->setObjectName(QStringLiteral("line_26"));
        line_26->setGeometry(QRect(340, 0, 3, 120));
        line_26->setFrameShape(QFrame::VLine);
        line_26->setFrameShadow(QFrame::Sunken);
        line_27 = new QFrame(frame_33);
        line_27->setObjectName(QStringLiteral("line_27"));
        line_27->setGeometry(QRect(510, 0, 3, 120));
        line_27->setFrameShape(QFrame::VLine);
        line_27->setFrameShadow(QFrame::Sunken);
        line_28 = new QFrame(frame_33);
        line_28->setObjectName(QStringLiteral("line_28"));
        line_28->setGeometry(QRect(890, 0, 3, 120));
        line_28->setFrameShape(QFrame::VLine);
        line_28->setFrameShadow(QFrame::Sunken);
        line_29 = new QFrame(frame_33);
        line_29->setObjectName(QStringLiteral("line_29"));
        line_29->setGeometry(QRect(1060, 0, 3, 120));
        line_29->setFrameShape(QFrame::VLine);
        line_29->setFrameShadow(QFrame::Sunken);
        line_30 = new QFrame(frame_33);
        line_30->setObjectName(QStringLiteral("line_30"));
        line_30->setGeometry(QRect(0, 60, 1330, 3));
        line_30->setFrameShape(QFrame::HLine);
        line_30->setFrameShadow(QFrame::Sunken);
        line_34 = new QFrame(frame_33);
        line_34->setObjectName(QStringLiteral("line_34"));
        line_34->setGeometry(QRect(700, 0, 3, 120));
        line_34->setFrameShape(QFrame::VLine);
        line_34->setFrameShadow(QFrame::Sunken);
        PrimaCobertura = new QLabel(frame_33);
        PrimaCobertura->setObjectName(QStringLiteral("PrimaCobertura"));
        PrimaCobertura->setGeometry(QRect(530, 20, 171, 28));
        PrimaCobertura->setFont(font3);
        PrimaCobertura->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        NoAcciones_edit = new QLabel(frame_33);
        NoAcciones_edit->setObjectName(QStringLiteral("NoAcciones_edit"));
        NoAcciones_edit->setGeometry(QRect(10, 70, 131, 31));
        NoAcciones_edit->setFont(font3);
        NoAcciones_edit->setAlignment(Qt::AlignCenter);
        RetenLiquidaTotal_edit = new QLabel(frame_33);
        RetenLiquidaTotal_edit->setObjectName(QStringLiteral("RetenLiquidaTotal_edit"));
        RetenLiquidaTotal_edit->setGeometry(QRect(220, 70, 71, 31));
        RetenLiquidaTotal_edit->setFont(font3);
        RetenLiquidaTotal_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_34 = new QLabel(frame_33);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(180, 70, 21, 31));
        label_34->setFont(font3);
        label_34->setAlignment(Qt::AlignCenter);
        ExcedentedeCiclo_edit = new QLabel(frame_33);
        ExcedentedeCiclo_edit->setObjectName(QStringLiteral("ExcedentedeCiclo_edit"));
        ExcedentedeCiclo_edit->setGeometry(QRect(410, 70, 71, 31));
        ExcedentedeCiclo_edit->setFont(font3);
        ExcedentedeCiclo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_36 = new QLabel(frame_33);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(370, 70, 21, 31));
        label_36->setFont(font3);
        label_36->setAlignment(Qt::AlignCenter);
        PrimaCobertura_edit = new QLabel(frame_33);
        PrimaCobertura_edit->setObjectName(QStringLiteral("PrimaCobertura_edit"));
        PrimaCobertura_edit->setGeometry(QRect(590, 70, 71, 31));
        PrimaCobertura_edit->setFont(font3);
        PrimaCobertura_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_148 = new QLabel(frame_33);
        label_148->setObjectName(QStringLiteral("label_148"));
        label_148->setGeometry(QRect(550, 70, 21, 31));
        label_148->setFont(font3);
        label_148->setAlignment(Qt::AlignCenter);
        AnticipoPagoSorgo_edit = new QLabel(frame_33);
        AnticipoPagoSorgo_edit->setObjectName(QStringLiteral("AnticipoPagoSorgo_edit"));
        AnticipoPagoSorgo_edit->setGeometry(QRect(770, 70, 71, 31));
        AnticipoPagoSorgo_edit->setFont(font3);
        AnticipoPagoSorgo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_150 = new QLabel(frame_33);
        label_150->setObjectName(QStringLiteral("label_150"));
        label_150->setGeometry(QRect(730, 70, 21, 31));
        label_150->setFont(font3);
        label_150->setAlignment(Qt::AlignCenter);
        PagoSemilla_edit = new QLabel(frame_33);
        PagoSemilla_edit->setObjectName(QStringLiteral("PagoSemilla_edit"));
        PagoSemilla_edit->setGeometry(QRect(960, 70, 71, 31));
        PagoSemilla_edit->setFont(font3);
        PagoSemilla_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_152 = new QLabel(frame_33);
        label_152->setObjectName(QStringLiteral("label_152"));
        label_152->setGeometry(QRect(910, 70, 21, 31));
        label_152->setFont(font3);
        label_152->setAlignment(Qt::AlignCenter);
        TotalRetenAdeudos_edit = new QLabel(frame_33);
        TotalRetenAdeudos_edit->setObjectName(QStringLiteral("TotalRetenAdeudos_edit"));
        TotalRetenAdeudos_edit->setGeometry(QRect(1180, 70, 71, 31));
        TotalRetenAdeudos_edit->setFont(font3);
        TotalRetenAdeudos_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_154 = new QLabel(frame_33);
        label_154->setObjectName(QStringLiteral("label_154"));
        label_154->setGeometry(QRect(1130, 70, 21, 31));
        label_154->setFont(font3);
        label_154->setAlignment(Qt::AlignCenter);
        N_contrato_reg = new QLineEdit(page_Adeudos);
        N_contrato_reg->setObjectName(QStringLiteral("N_contrato_reg"));
        N_contrato_reg->setGeometry(QRect(1330, 90, 150, 25));
        N_contrato_reg->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;"));
        N_contrato_reg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        N_contrato_reg->setReadOnly(true);
        ExcedNoProd = new QLabel(page_Adeudos);
        ExcedNoProd->setObjectName(QStringLiteral("ExcedNoProd"));
        ExcedNoProd->setGeometry(QRect(660, 90, 141, 27));
        ExcedNoProd->setFont(font3);
        ExcedNoProd->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedNoProd->setAlignment(Qt::AlignCenter);
        ExcedNoProd_edit = new QLabel(page_Adeudos);
        ExcedNoProd_edit->setObjectName(QStringLiteral("ExcedNoProd_edit"));
        ExcedNoProd_edit->setGeometry(QRect(780, 93, 91, 21));
        ExcedNoProd_edit->setFont(font3);
        ExcedNoProd_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedNoProd_edit->setAlignment(Qt::AlignCenter);
        SW_Zona_Principal->addWidget(page_Adeudos);
        Ciclo_sal->raise();
        N_contrato->raise();
        Prod_sal->raise();
        ExcedNoProd_edit->raise();
        Panel_Adeudos->raise();
        frame_8->raise();
        frame_18->raise();
        ExcedNoProd->raise();
        Prod_sal_CB->raise();
        N_contrato_reg->raise();
        Ciclo_Sal_CB->raise();
        page_Empleados = new QWidget();
        page_Empleados->setObjectName(QStringLiteral("page_Empleados"));
        Panel_Productores = new QLabel(page_Empleados);
        Panel_Productores->setObjectName(QStringLiteral("Panel_Productores"));
        Panel_Productores->setGeometry(QRect(9, 9, 190, 40));
        Panel_Productores->setMinimumSize(QSize(0, 0));
        Panel_Productores->setMaximumSize(QSize(190, 40));
        Panel_Productores->setFont(font5);
        Panel_Productores->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Productores->setFrameShape(QFrame::Box);
        Panel_Productores->setFrameShadow(QFrame::Raised);
        Panel_Productores->setLineWidth(2);
        Panel_Productores->setMidLineWidth(0);
        Panel_Productores->setAlignment(Qt::AlignCenter);
        ListaProductores = new QLabel(page_Empleados);
        ListaProductores->setObjectName(QStringLiteral("ListaProductores"));
        ListaProductores->setGeometry(QRect(80, 80, 182, 33));
        ListaProductores->setFont(font3);
        ListaProductores->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ListaProductores->setAlignment(Qt::AlignCenter);
        frame_12 = new QFrame(page_Empleados);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(700, 110, 711, 571));
        frame_12->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        Nombre_Lista_Prod_edit = new QLineEdit(frame_12);
        Nombre_Lista_Prod_edit->setObjectName(QStringLiteral("Nombre_Lista_Prod_edit"));
        Nombre_Lista_Prod_edit->setGeometry(QRect(30, 100, 300, 25));
        Nombre_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Nombre_Lista_Prod_edit->setFrame(true);
        Nombre_Lista_Prod_edit->setReadOnly(false);
        Nombre = new QLabel(frame_12);
        Nombre->setObjectName(QStringLiteral("Nombre"));
        Nombre->setGeometry(QRect(50, 60, 81, 27));
        Nombre->setFont(font3);
        Nombre->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Nombre->setAlignment(Qt::AlignCenter);
        Predio_Lista_Prod_edit = new QLineEdit(frame_12);
        Predio_Lista_Prod_edit->setObjectName(QStringLiteral("Predio_Lista_Prod_edit"));
        Predio_Lista_Prod_edit->setGeometry(QRect(370, 100, 300, 25));
        Predio_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Predio_Lista_Prod_edit->setReadOnly(false);
        Predio_Lista_Prod_2 = new QLabel(frame_12);
        Predio_Lista_Prod_2->setObjectName(QStringLiteral("Predio_Lista_Prod_2"));
        Predio_Lista_Prod_2->setGeometry(QRect(380, 70, 81, 27));
        Predio_Lista_Prod_2->setFont(font3);
        Predio_Lista_Prod_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Predio_Lista_Prod_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Ciudad_Lista_Prod = new QLabel(frame_12);
        Ciudad_Lista_Prod->setObjectName(QStringLiteral("Ciudad_Lista_Prod"));
        Ciudad_Lista_Prod->setGeometry(QRect(40, 300, 121, 27));
        Ciudad_Lista_Prod->setFont(font3);
        Ciudad_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Ciudad_Lista_Prod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Apellidos_Lista_Prod_edit = new QLineEdit(frame_12);
        Apellidos_Lista_Prod_edit->setObjectName(QStringLiteral("Apellidos_Lista_Prod_edit"));
        Apellidos_Lista_Prod_edit->setGeometry(QRect(30, 170, 300, 25));
        Apellidos_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Apellidos_Lista_Prod_edit->setFrame(true);
        Apellidos_Lista_Prod_edit->setReadOnly(false);
        Tel_Lista_Prod_edit = new QLineEdit(frame_12);
        Tel_Lista_Prod_edit->setObjectName(QStringLiteral("Tel_Lista_Prod_edit"));
        Tel_Lista_Prod_edit->setGeometry(QRect(370, 170, 300, 25));
        Tel_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Tel_Lista_Prod_edit->setReadOnly(false);
        Acciones_Lista_Prod = new QLabel(frame_12);
        Acciones_Lista_Prod->setObjectName(QStringLiteral("Acciones_Lista_Prod"));
        Acciones_Lista_Prod->setGeometry(QRect(390, 470, 141, 20));
        Acciones_Lista_Prod->setFont(font3);
        Acciones_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Acciones_Lista_Prod->setAlignment(Qt::AlignCenter);
        Email_Lista_Prod_edit = new QLineEdit(frame_12);
        Email_Lista_Prod_edit->setObjectName(QStringLiteral("Email_Lista_Prod_edit"));
        Email_Lista_Prod_edit->setGeometry(QRect(370, 330, 300, 25));
        Email_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Email_Lista_Prod_edit->setReadOnly(false);
        Direccion_Lista_Prod_edit = new QLineEdit(frame_12);
        Direccion_Lista_Prod_edit->setObjectName(QStringLiteral("Direccion_Lista_Prod_edit"));
        Direccion_Lista_Prod_edit->setGeometry(QRect(30, 250, 300, 25));
        Direccion_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Direccion_Lista_Prod_edit->setReadOnly(false);
        Whats_Lista_Prod_edit = new QLineEdit(frame_12);
        Whats_Lista_Prod_edit->setObjectName(QStringLiteral("Whats_Lista_Prod_edit"));
        Whats_Lista_Prod_edit->setGeometry(QRect(370, 250, 300, 25));
        Whats_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Whats_Lista_Prod_edit->setReadOnly(false);
        Direccion_Lista_Prod = new QLabel(frame_12);
        Direccion_Lista_Prod->setObjectName(QStringLiteral("Direccion_Lista_Prod"));
        Direccion_Lista_Prod->setGeometry(QRect(50, 220, 91, 27));
        Direccion_Lista_Prod->setFont(font3);
        Direccion_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Direccion_Lista_Prod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        No_Cliente_Spin = new QSpinBox(frame_12);
        No_Cliente_Spin->setObjectName(QStringLiteral("No_Cliente_Spin"));
        No_Cliente_Spin->setGeometry(QRect(160, 500, 71, 34));
        No_Cliente_Spin->setFont(font3);
        No_Cliente_Spin->setWrapping(false);
        No_Cliente_Spin->setReadOnly(false);
        No_Cliente_Spin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        No_Cliente_Spin->setMaximum(500);
        No_Cliente = new QLabel(frame_12);
        No_Cliente->setObjectName(QStringLiteral("No_Cliente"));
        No_Cliente->setGeometry(QRect(120, 470, 161, 20));
        No_Cliente->setFont(font3);
        No_Cliente->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        No_Cliente->setAlignment(Qt::AlignCenter);
        Apellidos_Lista_Prod = new QLabel(frame_12);
        Apellidos_Lista_Prod->setObjectName(QStringLiteral("Apellidos_Lista_Prod"));
        Apellidos_Lista_Prod->setGeometry(QRect(20, 140, 151, 27));
        Apellidos_Lista_Prod->setFont(font3);
        Apellidos_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Apellidos_Lista_Prod->setAlignment(Qt::AlignCenter);
        Email_Lista_Prod = new QLabel(frame_12);
        Email_Lista_Prod->setObjectName(QStringLiteral("Email_Lista_Prod"));
        Email_Lista_Prod->setGeometry(QRect(380, 300, 71, 27));
        Email_Lista_Prod->setFont(font3);
        Email_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Email_Lista_Prod->setAlignment(Qt::AlignCenter);
        No_Acciones_Spin = new QSpinBox(frame_12);
        No_Acciones_Spin->setObjectName(QStringLiteral("No_Acciones_Spin"));
        No_Acciones_Spin->setGeometry(QRect(420, 500, 71, 34));
        No_Acciones_Spin->setFont(font3);
        No_Acciones_Spin->setWrapping(false);
        No_Acciones_Spin->setReadOnly(false);
        No_Acciones_Spin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        No_Acciones_Spin->setAccelerated(false);
        No_Acciones_Spin->setMaximum(500);
        Tel_Lista_Pro = new QLabel(frame_12);
        Tel_Lista_Pro->setObjectName(QStringLiteral("Tel_Lista_Pro"));
        Tel_Lista_Pro->setGeometry(QRect(380, 140, 81, 27));
        Tel_Lista_Pro->setFont(font3);
        Tel_Lista_Pro->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Tel_Lista_Pro->setAlignment(Qt::AlignCenter);
        Ciudad_Lista_Prod_edit = new QLineEdit(frame_12);
        Ciudad_Lista_Prod_edit->setObjectName(QStringLiteral("Ciudad_Lista_Prod_edit"));
        Ciudad_Lista_Prod_edit->setGeometry(QRect(30, 330, 300, 25));
        Ciudad_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Ciudad_Lista_Prod_edit->setReadOnly(false);
        SocioRef_Lista_Prod_edit = new QLineEdit(frame_12);
        SocioRef_Lista_Prod_edit->setObjectName(QStringLiteral("SocioRef_Lista_Prod_edit"));
        SocioRef_Lista_Prod_edit->setGeometry(QRect(150, 420, 90, 25));
        SocioRef_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        SocioRef_Lista_Prod_edit->setReadOnly(false);
        Whats_Lista_Prod = new QLabel(frame_12);
        Whats_Lista_Prod->setObjectName(QStringLiteral("Whats_Lista_Prod"));
        Whats_Lista_Prod->setGeometry(QRect(380, 210, 91, 27));
        Whats_Lista_Prod->setFont(font3);
        Whats_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Whats_Lista_Prod->setAlignment(Qt::AlignCenter);
        SocioRef_Lista_Prod = new QLabel(frame_12);
        SocioRef_Lista_Prod->setObjectName(QStringLiteral("SocioRef_Lista_Prod"));
        SocioRef_Lista_Prod->setGeometry(QRect(120, 390, 150, 27));
        SocioRef_Lista_Prod->setFont(font3);
        SocioRef_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        SocioRef_Lista_Prod->setAlignment(Qt::AlignCenter);
        TipoSocio_Lista_Prod = new QLabel(frame_12);
        TipoSocio_Lista_Prod->setObjectName(QStringLiteral("TipoSocio_Lista_Prod"));
        TipoSocio_Lista_Prod->setGeometry(QRect(390, 390, 121, 27));
        TipoSocio_Lista_Prod->setFont(font3);
        TipoSocio_Lista_Prod->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        TipoSocio_Lista_Prod->setAlignment(Qt::AlignCenter);
        TipoSocio_Lista_Prod_edit = new QLineEdit(frame_12);
        TipoSocio_Lista_Prod_edit->setObjectName(QStringLiteral("TipoSocio_Lista_Prod_edit"));
        TipoSocio_Lista_Prod_edit->setGeometry(QRect(410, 420, 81, 25));
        TipoSocio_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        TipoSocio_Lista_Prod_edit->setReadOnly(false);
        Productores_Lista = new QTableWidget(page_Empleados);
        Productores_Lista->setObjectName(QStringLiteral("Productores_Lista"));
        Productores_Lista->setGeometry(QRect(60, 110, 600, 850));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(Productores_Lista->sizePolicy().hasHeightForWidth());
        Productores_Lista->setSizePolicy(sizePolicy);
        Productores_Lista->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(30, 30, 30);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        Productores_Lista->setFrameShape(QFrame::StyledPanel);
        Productores_Lista->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Productores_Lista->setIconSize(QSize(0, 0));
        Productores_Lista->horizontalHeader()->setVisible(false);
        Productores_Lista->horizontalHeader()->setDefaultSectionSize(600);
        Productores_Lista->horizontalHeader()->setHighlightSections(true);
        Productores_Lista->verticalHeader()->setVisible(false);
        Prod_Guardar = new QPushButton(page_Empleados);
        Prod_Guardar->setObjectName(QStringLiteral("Prod_Guardar"));
        Prod_Guardar->setGeometry(QRect(740, 750, 181, 61));
        Prod_Guardar->setFont(font4);
        Prod_Guardar->setToolTipDuration(-1);
        Prod_Guardar->setStyleSheet(QLatin1String("QPushButton{\n"
"font:23px;\n"
"color:white;\n"
"background-color:rgb(173, 173, 173);\n"
"border-color:rgb(106,106,106);\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(255, 85, 33);\n"
"}\n"
""));
        DatosProductor = new QLabel(page_Empleados);
        DatosProductor->setObjectName(QStringLiteral("DatosProductor"));
        DatosProductor->setGeometry(QRect(970, 95, 171, 27));
        DatosProductor->setFont(font3);
        DatosProductor->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        DatosProductor->setAlignment(Qt::AlignCenter);
        SW_Zona_Principal->addWidget(page_Empleados);
        ListaProductores->raise();
        Panel_Productores->raise();
        frame_12->raise();
        Productores_Lista->raise();
        Prod_Guardar->raise();
        DatosProductor->raise();
        page_Compradores = new QWidget();
        page_Compradores->setObjectName(QStringLiteral("page_Compradores"));
        Panel_Compradores = new QLabel(page_Compradores);
        Panel_Compradores->setObjectName(QStringLiteral("Panel_Compradores"));
        Panel_Compradores->setGeometry(QRect(10, 10, 190, 40));
        Panel_Compradores->setMinimumSize(QSize(0, 0));
        Panel_Compradores->setMaximumSize(QSize(190, 40));
        Panel_Compradores->setFont(font5);
        Panel_Compradores->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Compradores->setFrameShape(QFrame::Box);
        Panel_Compradores->setFrameShadow(QFrame::Raised);
        Panel_Compradores->setLineWidth(2);
        Panel_Compradores->setMidLineWidth(0);
        Panel_Compradores->setAlignment(Qt::AlignCenter);
        Compradores_Lista = new QTableWidget(page_Compradores);
        Compradores_Lista->setObjectName(QStringLiteral("Compradores_Lista"));
        Compradores_Lista->setGeometry(QRect(60, 110, 600, 850));
        Compradores_Lista->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(30, 30, 30);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        Compradores_Lista->setFrameShape(QFrame::StyledPanel);
        Compradores_Lista->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Compradores_Lista->setIconSize(QSize(0, 0));
        Compradores_Lista->horizontalHeader()->setVisible(false);
        Compradores_Lista->horizontalHeader()->setDefaultSectionSize(600);
        Compradores_Lista->horizontalHeader()->setHighlightSections(true);
        Compradores_Lista->verticalHeader()->setVisible(false);
        frame_13 = new QFrame(page_Compradores);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(700, 110, 711, 431));
        frame_13->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgba(23, 38, 255,0.3);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        Razon_Social = new QLabel(frame_13);
        Razon_Social->setObjectName(QStringLiteral("Razon_Social"));
        Razon_Social->setGeometry(QRect(400, 60, 131, 27));
        Razon_Social->setFont(font3);
        Razon_Social->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Razon_Social->setAlignment(Qt::AlignCenter);
        Contacto_edit = new QLineEdit(frame_13);
        Contacto_edit->setObjectName(QStringLiteral("Contacto_edit"));
        Contacto_edit->setGeometry(QRect(30, 100, 300, 25));
        Contacto_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Contacto_edit->setFrame(true);
        Contacto_edit->setReadOnly(true);
        Contacto = new QLabel(frame_13);
        Contacto->setObjectName(QStringLiteral("Contacto"));
        Contacto->setGeometry(QRect(50, 60, 161, 27));
        Contacto->setFont(font3);
        Contacto->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Contacto->setAlignment(Qt::AlignCenter);
        Razon_Social_edit = new QLineEdit(frame_13);
        Razon_Social_edit->setObjectName(QStringLiteral("Razon_Social_edit"));
        Razon_Social_edit->setGeometry(QRect(370, 100, 300, 25));
        Razon_Social_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Razon_Social_edit->setReadOnly(true);
        Direccion = new QLabel(frame_13);
        Direccion->setObjectName(QStringLiteral("Direccion"));
        Direccion->setGeometry(QRect(50, 140, 101, 27));
        Direccion->setFont(font3);
        Direccion->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Direccion->setAlignment(Qt::AlignCenter);
        Whatsapp = new QLabel(frame_13);
        Whatsapp->setObjectName(QStringLiteral("Whatsapp"));
        Whatsapp->setGeometry(QRect(40, 210, 121, 27));
        Whatsapp->setFont(font3);
        Whatsapp->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Whatsapp->setAlignment(Qt::AlignCenter);
        Direccion_edit = new QLineEdit(frame_13);
        Direccion_edit->setObjectName(QStringLiteral("Direccion_edit"));
        Direccion_edit->setGeometry(QRect(30, 170, 300, 25));
        Direccion_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Direccion_edit->setFrame(true);
        Direccion_edit->setReadOnly(true);
        Telefono_edit = new QLineEdit(frame_13);
        Telefono_edit->setObjectName(QStringLiteral("Telefono_edit"));
        Telefono_edit->setGeometry(QRect(370, 170, 300, 25));
        Telefono_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Telefono_edit->setReadOnly(true);
        Telefono = new QLabel(frame_13);
        Telefono->setObjectName(QStringLiteral("Telefono"));
        Telefono->setGeometry(QRect(390, 140, 121, 27));
        Telefono->setFont(font3);
        Telefono->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Telefono->setAlignment(Qt::AlignCenter);
        Whatsapp_edit = new QLineEdit(frame_13);
        Whatsapp_edit->setObjectName(QStringLiteral("Whatsapp_edit"));
        Whatsapp_edit->setGeometry(QRect(30, 250, 300, 25));
        Whatsapp_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Whatsapp_edit->setFrame(true);
        Whatsapp_edit->setReadOnly(true);
        Email = new QLabel(frame_13);
        Email->setObjectName(QStringLiteral("Email"));
        Email->setGeometry(QRect(390, 210, 91, 27));
        Email->setFont(font3);
        Email->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Email->setAlignment(Qt::AlignCenter);
        Estado_edit = new QLineEdit(frame_13);
        Estado_edit->setObjectName(QStringLiteral("Estado_edit"));
        Estado_edit->setGeometry(QRect(370, 330, 300, 25));
        Estado_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Estado_edit->setReadOnly(true);
        Ciudad_edit = new QLineEdit(frame_13);
        Ciudad_edit->setObjectName(QStringLiteral("Ciudad_edit"));
        Ciudad_edit->setGeometry(QRect(30, 330, 300, 25));
        Ciudad_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Ciudad_edit->setReadOnly(true);
        Email_edit = new QLineEdit(frame_13);
        Email_edit->setObjectName(QStringLiteral("Email_edit"));
        Email_edit->setGeometry(QRect(370, 250, 300, 25));
        Email_edit->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;"));
        Email_edit->setReadOnly(true);
        Ciudad = new QLabel(frame_13);
        Ciudad->setObjectName(QStringLiteral("Ciudad"));
        Ciudad->setGeometry(QRect(40, 290, 91, 27));
        Ciudad->setFont(font3);
        Ciudad->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Ciudad->setAlignment(Qt::AlignCenter);
        Estado = new QLabel(frame_13);
        Estado->setObjectName(QStringLiteral("Estado"));
        Estado->setGeometry(QRect(390, 290, 91, 27));
        Estado->setFont(font3);
        Estado->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Estado->setAlignment(Qt::AlignCenter);
        ListaProductores_2 = new QLabel(page_Compradores);
        ListaProductores_2->setObjectName(QStringLiteral("ListaProductores_2"));
        ListaProductores_2->setGeometry(QRect(90, 80, 191, 33));
        ListaProductores_2->setFont(font3);
        ListaProductores_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ListaProductores_2->setAlignment(Qt::AlignCenter);
        Comprador = new QLabel(page_Compradores);
        Comprador->setObjectName(QStringLiteral("Comprador"));
        Comprador->setGeometry(QRect(960, 95, 191, 27));
        Comprador->setFont(font3);
        Comprador->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Comprador->setAlignment(Qt::AlignCenter);
        SW_Zona_Principal->addWidget(page_Compradores);
        ListaProductores_2->raise();
        Panel_Compradores->raise();
        Compradores_Lista->raise();
        frame_13->raise();
        Comprador->raise();
        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(0, 0, 271, 1081));
        frame_6->setStyleSheet(QLatin1String("border-width:0px;\n"
"background-color:rgb(133, 186, 255);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_Botones = new QFrame(frame_6);
        frame_Botones->setObjectName(QStringLiteral("frame_Botones"));
        frame_Botones->setGeometry(QRect(40, 240, 190, 311));
        QPalette palette5;
        QBrush brush6(QColor(133, 186, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        frame_Botones->setPalette(palette5);
        frame_Botones->setAutoFillBackground(false);
        frame_Botones->setStyleSheet(QLatin1String("border-radius:20px;\n"
"border:0px solid black;"));
        frame_Botones->setFrameShape(QFrame::Panel);
        frame_Botones->setFrameShadow(QFrame::Sunken);
        frame_Botones->setLineWidth(1);
        push_Registros = new QPushButton(frame_Botones);
        push_Registros->setObjectName(QStringLiteral("push_Registros"));
        push_Registros->setGeometry(QRect(20, 70, 160, 50));
        push_Registros->setMinimumSize(QSize(160, 50));
        QFont font9;
        font9.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font9.setPointSize(28);
        push_Registros->setFont(font9);
        push_Registros->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;"));
        push_Registros->setFlat(true);
        push_Adeudos = new QPushButton(frame_Botones);
        push_Adeudos->setObjectName(QStringLiteral("push_Adeudos"));
        push_Adeudos->setGeometry(QRect(20, 125, 160, 50));
        push_Adeudos->setMinimumSize(QSize(160, 50));
        push_Adeudos->setFont(font9);
        push_Adeudos->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;"));
        push_Adeudos->setFlat(true);
        push_Productores = new QPushButton(frame_Botones);
        push_Productores->setObjectName(QStringLiteral("push_Productores"));
        push_Productores->setGeometry(QRect(20, 180, 160, 53));
        push_Productores->setMinimumSize(QSize(160, 50));
        QFont font10;
        font10.setFamily(QStringLiteral("Bahnschrift Condensed"));
        font10.setPointSize(28);
        font10.setBold(false);
        font10.setWeight(50);
        push_Productores->setFont(font10);
        push_Productores->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;"));
        push_Productores->setFlat(true);
        push_Compradores = new QPushButton(frame_Botones);
        push_Compradores->setObjectName(QStringLiteral("push_Compradores"));
        push_Compradores->setGeometry(QRect(10, 240, 170, 53));
        push_Compradores->setMinimumSize(QSize(160, 50));
        push_Compradores->setFont(font10);
        push_Compradores->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;"));
        push_Compradores->setFlat(true);
        push_Boletas = new QPushButton(frame_Botones);
        push_Boletas->setObjectName(QStringLiteral("push_Boletas"));
        push_Boletas->setGeometry(QRect(20, 20, 160, 50));
        push_Boletas->setMinimumSize(QSize(160, 50));
        QFont font11;
        font11.setFamily(QStringLiteral("Bahnschrift SemiCondensed"));
        font11.setPointSize(28);
        push_Boletas->setFont(font11);
        push_Boletas->setStyleSheet(QStringLiteral("border:0px;"));
        push_Boletas->setFlat(true);
        Usuario_Actual = new QLabel(frame_6);
        Usuario_Actual->setObjectName(QStringLiteral("Usuario_Actual"));
        Usuario_Actual->setGeometry(QRect(30, 70, 202, 74));
        Usuario_Actual->setMinimumSize(QSize(0, 0));
        Usuario_Actual->setMaximumSize(QSize(240, 100));
        QFont font12;
        font12.setFamily(QStringLiteral("Bahnschrift"));
        font12.setPointSize(23);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(50);
        Usuario_Actual->setFont(font12);
        Usuario_Actual->setStyleSheet(QLatin1String("font: 23pt \"Bahnschrift\";\n"
"border:0px solid black;"));
        Usuario_Actual->setFrameShape(QFrame::Box);
        Usuario_Actual->setFrameShadow(QFrame::Raised);
        Usuario_Actual->setLineWidth(0);
        Usuario_Actual->setMidLineWidth(0);
        Usuario_Actual->setAlignment(Qt::AlignCenter);
        Pantalla_Principal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Pantalla_Principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setFont(font1);
        Pantalla_Principal->setStatusBar(statusbar);
        menubar = new QMenuBar(Pantalla_Principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 25));
        QFont font13;
        font13.setFamily(QStringLiteral("Times New Roman"));
        font13.setPointSize(12);
        font13.setBold(false);
        font13.setWeight(50);
        menubar->setFont(font13);
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuArchivo->setFont(font1);
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        Pantalla_Principal->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionEntradas);
        menuArchivo->addAction(actionSalidas);
        menuArchivo->addAction(actionAdeudps);
        menuArchivo->addAction(actionProductores);
        menuArchivo->addAction(actionCompradores);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuAyuda->addAction(actionBascula);
        menuAyuda->addAction(actionBase_de_Datos);
        menuAyuda->addAction(actionRespaldar);
        menuAyuda->addAction(actionAcerda_de);
        menuAyuda->addSeparator();

        retranslateUi(Pantalla_Principal);

        SW_Zona_Principal->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pantalla_Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Pantalla_Principal)
    {
        actionSalir->setText(QApplication::translate("Pantalla_Principal", "Salir              Alt+ Q", nullptr));
        About->setText(QApplication::translate("Pantalla_Principal", "Acerca de...", nullptr));
        actionEntradas->setText(QApplication::translate("Pantalla_Principal", "Boletas", nullptr));
        actionSalidas->setText(QApplication::translate("Pantalla_Principal", "Registros", nullptr));
        actionProductores->setText(QApplication::translate("Pantalla_Principal", "Productores", nullptr));
        actionCompradores->setText(QApplication::translate("Pantalla_Principal", "Compradores", nullptr));
        actionAdeudps->setText(QApplication::translate("Pantalla_Principal", "Adeudos", nullptr));
        actionBascula->setText(QApplication::translate("Pantalla_Principal", "Bascula", nullptr));
        actionAcerda_de->setText(QApplication::translate("Pantalla_Principal", "Acerca de...", nullptr));
        actionBase_de_Datos->setText(QApplication::translate("Pantalla_Principal", "Base de Datos", nullptr));
        actionRespaldar->setText(QApplication::translate("Pantalla_Principal", "Respaldar", nullptr));
        BodegaName->setText(QApplication::translate("Pantalla_Principal", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font:Times New Roman; font-weight:600;\">AgroIndustrias </span></p><p align=\"center\"><span style=\" font-size:36pt;font:Times New Roman; font-weight:600;\">Loma Colorada S.A</span></p></body></html>", nullptr));
        SplashScreenLogo->setText(QString());
        Predio_Ubicacion->setText(QApplication::translate("Pantalla_Principal", "Ubicacion", nullptr));
        Predio->setText(QApplication::translate("Pantalla_Principal", "Predio", nullptr));
        Predio_Nombre->setText(QApplication::translate("Pantalla_Principal", "Nombre", nullptr));
        Productor->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        Nombres_Prod_SocioNum->setText(QApplication::translate("Pantalla_Principal", "# Socio", nullptr));
        Nombres_Prod->setText(QApplication::translate("Pantalla_Principal", "Nombres", nullptr));
        Apellido1_Prod->setText(QApplication::translate("Pantalla_Principal", "Apellidos", nullptr));
        push_Nuevo->setText(QApplication::translate("Pantalla_Principal", "Nuevo", nullptr));
        Panel_Boletas->setText(QApplication::translate("Pantalla_Principal", "BOLETAS", nullptr));
        Camion1->setText(QApplication::translate("Pantalla_Principal", "Camion 1", nullptr));
        Folio->setText(QApplication::translate("Pantalla_Principal", "Folio Boleta", nullptr));
        FolioNum->setText(QApplication::translate("Pantalla_Principal", "#00000000", nullptr));
        Peso_Tara->setText(QApplication::translate("Pantalla_Principal", "Tara", nullptr));
        Ton3->setText(QApplication::translate("Pantalla_Principal", "Ton", nullptr));
        Ton2->setText(QApplication::translate("Pantalla_Principal", "Ton", nullptr));
        Peso_Neto->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        Ton1->setText(QApplication::translate("Pantalla_Principal", "Ton", nullptr));
        Peso_Bruto->setText(QApplication::translate("Pantalla_Principal", "Bruto", nullptr));
        Humedad_grados->setText(QApplication::translate("Pantalla_Principal", "grados", nullptr));
        Humedad->setText(QApplication::translate("Pantalla_Principal", "Humedad", nullptr));
        radioButton->setText(QApplication::translate("Pantalla_Principal", "Silo 1", nullptr));
        radioButton_2->setText(QApplication::translate("Pantalla_Principal", "Silo 2", nullptr));
        Peso->setText(QApplication::translate("Pantalla_Principal", "Peso", nullptr));
        push_Cam1->setText(QApplication::translate("Pantalla_Principal", "Set Camion 1", nullptr));
        push_Cam2->setText(QApplication::translate("Pantalla_Principal", "Set Camion 2", nullptr));
        Camion2->setText(QApplication::translate("Pantalla_Principal", "Camion 2", nullptr));
        Apellido1_Chofer->setText(QApplication::translate("Pantalla_Principal", "Apellidos", nullptr));
        Camion_Tipo->setText(QApplication::translate("Pantalla_Principal", "Tipo", nullptr));
        Chofer->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        Camion_Color->setText(QApplication::translate("Pantalla_Principal", "Color", nullptr));
        Nombres_Chofer->setText(QApplication::translate("Pantalla_Principal", "Nombres", nullptr));
        Placas_Camion->setText(QApplication::translate("Pantalla_Principal", "Placas Camion", nullptr));
        push_Grabar->setText(QApplication::translate("Pantalla_Principal", "cambiar widget o borrar", nullptr));
        push_Imp->setText(QApplication::translate("Pantalla_Principal", "Borrar Todo", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Tabla_Folios->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Pantalla_Principal", "Folio", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Tabla_Folios->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Tabla_Folios->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        Ciclo->setText(QApplication::translate("Pantalla_Principal", "Ciclo Actual", nullptr));
        Panel_Registros->setText(QApplication::translate("Pantalla_Principal", "REGISTROS", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Registros_Ind->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Pantalla_Principal", "Folio #", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Registros_Ind->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Registros_Ind->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Pantalla_Principal", "Bruto", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Registros_Ind->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("Pantalla_Principal", "Tara", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Registros_Ind->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Registros_Ind->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("Pantalla_Principal", "Humedad", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Registros_Ind->horizontalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("Pantalla_Principal", "Impuresas", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = Registros_Ind->horizontalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("Pantalla_Principal", "Merma", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Registros_Ind->horizontalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("Pantalla_Principal", "Peso Neto Analizado", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Registros_Ind->horizontalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("Pantalla_Principal", "Total", nullptr));
#ifndef QT_NO_TOOLTIP
        Reg_Ind_Print->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Reg_Ind_Print->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Reg_Ind_Print->setText(QApplication::translate("Pantalla_Principal", "Imprimir", nullptr));
        No_cont_2->setText(QApplication::translate("Pantalla_Principal", "No de Contrato:", nullptr));
        Ciclo_sal_2->setText(QApplication::translate("Pantalla_Principal", "Ciclo :", nullptr));
        Prod_sal_2->setText(QApplication::translate("Pantalla_Principal", "Productor :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Pantalla_Principal", "Individual", nullptr));
        Ciclo_sal_3->setText(QApplication::translate("Pantalla_Principal", "Ciclo:", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = Registros_General->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = Registros_General->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("Pantalla_Principal", "Contrato #", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = Registros_General->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("Pantalla_Principal", "Ton Contratadas", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = Registros_General->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("Pantalla_Principal", "Ton Entregadas", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = Registros_General->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("Pantalla_Principal", "Precio de Contrato", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = Registros_General->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("Pantalla_Principal", "Precio Fix Dollar", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = Registros_General->horizontalHeaderItem(6);
        ___qtablewidgetitem19->setText(QApplication::translate("Pantalla_Principal", "Precio x Ton", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = Registros_General->horizontalHeaderItem(7);
        ___qtablewidgetitem20->setText(QApplication::translate("Pantalla_Principal", "Descuentos", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = Registros_General->horizontalHeaderItem(8);
        ___qtablewidgetitem21->setText(QApplication::translate("Pantalla_Principal", "Total", nullptr));
#ifndef QT_NO_TOOLTIP
        Reg_Gen_Print->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Reg_Gen_Print->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Reg_Gen_Print->setText(QApplication::translate("Pantalla_Principal", "Imprimir", nullptr));
        label_41->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        label_42->setText(QApplication::translate("Pantalla_Principal", "# de Contrato", nullptr));
        label_43->setText(QApplication::translate("Pantalla_Principal", "Toneladas \n"
" Contratadas", nullptr));
        label_44->setText(QApplication::translate("Pantalla_Principal", "Toneladas \n"
" Entregadas", nullptr));
        label_45->setText(QApplication::translate("Pantalla_Principal", "Precio \n"
" de Contrato", nullptr));
        label_46->setText(QApplication::translate("Pantalla_Principal", "Precio Fix \n"
" Dollar ", nullptr));
        label_47->setText(QApplication::translate("Pantalla_Principal", "Precio X Ton", nullptr));
        label_50->setText(QApplication::translate("Pantalla_Principal", "Descuentos", nullptr));
        label_49->setText(QApplication::translate("Pantalla_Principal", "Total", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Pantalla_Principal", "General", nullptr));
        Panel_Adeudos->setText(QApplication::translate("Pantalla_Principal", "ADEUDOS", nullptr));
        Prod_sal->setText(QApplication::translate("Pantalla_Principal", "Productor:", nullptr));
        Ciclo_sal->setText(QApplication::translate("Pantalla_Principal", "Ciclo:", nullptr));
        Observaciones->setText(QApplication::translate("Pantalla_Principal", "OBSERVACIONES:", nullptr));
        RetenCuotaConservacion->setText(QApplication::translate("Pantalla_Principal", "Cuota de Conservacion de Grano:", nullptr));
        RetenCuotaConservacion_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_10->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        RetenSecado->setText(QApplication::translate("Pantalla_Principal", "Secado", nullptr));
        RetenPIFSV->setText(QApplication::translate("Pantalla_Principal", "PIFSV", nullptr));
        RetenModSanFer->setText(QApplication::translate("Pantalla_Principal", "MOD. San Fernando Sur", nullptr));
        RetenTotal->setText(QApplication::translate("Pantalla_Principal", "Total de Retenciones:", nullptr));
        label_15->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        label_16->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        label_18->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        label_19->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        RetenSecado_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        RetenPIFSV_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        RetenModSanFer_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        RetenTotal_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        RetenLiquidaObs->setText(QApplication::translate("Pantalla_Principal", "Retenciones de Liquidacion", nullptr));
        ExcedTonsDerecho->setText(QApplication::translate("Pantalla_Principal", "Tons con derechos", nullptr));
        ExcedTonsDerecho_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        ExcedTonsEntregada->setText(QApplication::translate("Pantalla_Principal", "Toneladas Entregadas", nullptr));
        ExcedTonsEntregada_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        ExcedTonsExce->setText(QApplication::translate("Pantalla_Principal", "Toneladas Excedentes :", nullptr));
        ExcedPagar->setText(QApplication::translate("Pantalla_Principal", "Total a Pagar:", nullptr));
        ExcedTonsExce_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        ExcedPagar_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_123->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        label_124->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        label_125->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        label_126->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        CalculoExcedentes->setText(QApplication::translate("Pantalla_Principal", "Calculo de Excedentes (             x Ton):", nullptr));
        ExcedentesCalculo_edit->setText(QApplication::translate("Pantalla_Principal", "0000", nullptr));
        PrimaTonsCont->setText(QApplication::translate("Pantalla_Principal", "Tons Contratadas", nullptr));
        PrimaTonsCont_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        PrimaMontoTon->setText(QApplication::translate("Pantalla_Principal", "Monto x Ton", nullptr));
        PrimaMontoTon_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        PrimaImporte->setText(QApplication::translate("Pantalla_Principal", "Importe", nullptr));
        PrimaPagar->setText(QApplication::translate("Pantalla_Principal", "Total a Pagar:", nullptr));
        PrimaImporte_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        PrimaPagar_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        CalculoPrimaCobertura->setText(QApplication::translate("Pantalla_Principal", "Calculo de Prima de Cobertura ( $                x Ton):", nullptr));
        PrimaCalculoCobertura_edit->setText(QApplication::translate("Pantalla_Principal", "00000", nullptr));
        label_129->setText(QApplication::translate("Pantalla_Principal", "No. de Orden", nullptr));
        label_132->setText(QApplication::translate("Pantalla_Principal", "Marca", nullptr));
        label_133->setText(QApplication::translate("Pantalla_Principal", "Variedad", nullptr));
        label_134->setText(QApplication::translate("Pantalla_Principal", "Cantidad", nullptr));
        label_135->setText(QApplication::translate("Pantalla_Principal", "Precio", nullptr));
        label_136->setText(QApplication::translate("Pantalla_Principal", "Total a Pagar", nullptr));
        label_144->setText(QApplication::translate("Pantalla_Principal", "Semilla:", nullptr));
        label_131->setText(QApplication::translate("Pantalla_Principal", "No. de Cheque", nullptr));
        label_142->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        label_143->setText(QApplication::translate("Pantalla_Principal", "Beneficiario", nullptr));
        label_145->setText(QApplication::translate("Pantalla_Principal", "Importe", nullptr));
        label_199->setText(QApplication::translate("Pantalla_Principal", "Anticipos a Pago de Sorgo:", nullptr));
        LiquidacionGeneralSorgo->setText(QApplication::translate("Pantalla_Principal", "LIQUIDACION GENERAL DE SORGO:", nullptr));
        TotalRetencionesAdeudos->setText(QApplication::translate("Pantalla_Principal", "TOTAL DE RETENCIONES Y ADEUDOS:", nullptr));
        NetoPagar->setText(QApplication::translate("Pantalla_Principal", "NETO A PAGAR", nullptr));
        label_202->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        LiquidacionGeneralSorgo_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_204->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        TotalRetencionesAdeudos_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_206->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        NetoPagar_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Totales->setText(QApplication::translate("Pantalla_Principal", "Totales: ", nullptr));
        label_137->setText(QApplication::translate("Pantalla_Principal", "No. de Cheque", nullptr));
        label_146->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        label_147->setText(QApplication::translate("Pantalla_Principal", "Beneficiario", nullptr));
        label_149->setText(QApplication::translate("Pantalla_Principal", "Importe", nullptr));
        label_200->setText(QApplication::translate("Pantalla_Principal", "Diesel", nullptr));
        N_contrato->setText(QApplication::translate("Pantalla_Principal", "No de Contrato:", nullptr));
        NoAcciones->setText(QApplication::translate("Pantalla_Principal", "No. de Acciones", nullptr));
        RetenLiquidaTotal->setText(QApplication::translate("Pantalla_Principal", "Retenciones de \n"
" Liquidacion", nullptr));
        ExcedentedeCiclo->setText(QApplication::translate("Pantalla_Principal", "Excedente de Ciclo", nullptr));
        AnticipoPagoSorgo->setText(QApplication::translate("Pantalla_Principal", "Anticipo a Pago \n"
" de Sorgo", nullptr));
        PagoSemilla->setText(QApplication::translate("Pantalla_Principal", "Pago por Semilla", nullptr));
        TotalRetenAdeudos->setText(QApplication::translate("Pantalla_Principal", "Total de Retenciones \n"
" y Adeudos", nullptr));
        PrimaCobertura->setText(QApplication::translate("Pantalla_Principal", "Prima de Cobertura", nullptr));
        NoAcciones_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        RetenLiquidaTotal_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_34->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        ExcedentedeCiclo_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_36->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        PrimaCobertura_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_148->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        AnticipoPagoSorgo_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_150->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        PagoSemilla_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_152->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        TotalRetenAdeudos_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_154->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        ExcedNoProd->setText(QApplication::translate("Pantalla_Principal", "No. Productor :", nullptr));
        ExcedNoProd_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Panel_Productores->setText(QApplication::translate("Pantalla_Principal", "PRODUCTORES", nullptr));
        ListaProductores->setText(QApplication::translate("Pantalla_Principal", "Lista de Productores", nullptr));
        Nombre->setText(QApplication::translate("Pantalla_Principal", "Nombre", nullptr));
        Predio_Lista_Prod_2->setText(QApplication::translate("Pantalla_Principal", "Predio", nullptr));
        Ciudad_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Ciudad, Ejido", nullptr));
        Acciones_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "No de Acciones", nullptr));
        Direccion_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Direccion", nullptr));
        No_Cliente->setText(QApplication::translate("Pantalla_Principal", "Numero Productor", nullptr));
        Apellidos_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Apellidos", nullptr));
        Email_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Email", nullptr));
        Tel_Lista_Pro->setText(QApplication::translate("Pantalla_Principal", "Telefono", nullptr));
        Whats_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Whatsapp", nullptr));
        SocioRef_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Socio Referencia", nullptr));
        TipoSocio_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Tipo de Socio", nullptr));
#ifndef QT_NO_TOOLTIP
        Prod_Guardar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Prod_Guardar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Prod_Guardar->setText(QApplication::translate("Pantalla_Principal", "Crear Registros", nullptr));
        DatosProductor->setText(QApplication::translate("Pantalla_Principal", "Datos de Productor", nullptr));
        Panel_Compradores->setText(QApplication::translate("Pantalla_Principal", "COMPRADORES", nullptr));
        Razon_Social->setText(QApplication::translate("Pantalla_Principal", "Razon Social", nullptr));
        Contacto->setText(QApplication::translate("Pantalla_Principal", "Nombre Contacto", nullptr));
        Direccion->setText(QApplication::translate("Pantalla_Principal", "Direccion", nullptr));
        Whatsapp->setText(QApplication::translate("Pantalla_Principal", "Whatsapp", nullptr));
        Telefono->setText(QApplication::translate("Pantalla_Principal", "Telefono", nullptr));
        Email->setText(QApplication::translate("Pantalla_Principal", "Email", nullptr));
        Ciudad->setText(QApplication::translate("Pantalla_Principal", "Ciudad", nullptr));
        Estado->setText(QApplication::translate("Pantalla_Principal", "Estado", nullptr));
        ListaProductores_2->setText(QApplication::translate("Pantalla_Principal", "Lista de Compradores", nullptr));
        Comprador->setText(QApplication::translate("Pantalla_Principal", "Datos del Comprador", nullptr));
        push_Registros->setText(QApplication::translate("Pantalla_Principal", "Registros", nullptr));
        push_Adeudos->setText(QApplication::translate("Pantalla_Principal", "Adeudos", nullptr));
        push_Productores->setText(QApplication::translate("Pantalla_Principal", "Productores", nullptr));
        push_Compradores->setText(QApplication::translate("Pantalla_Principal", "Compradores", nullptr));
        push_Boletas->setText(QApplication::translate("Pantalla_Principal", "Boletas", nullptr));
        Usuario_Actual->setText(QApplication::translate("Pantalla_Principal", "Bienvenido, \n"
" Nombre Usuario", nullptr));
        menuArchivo->setTitle(QApplication::translate("Pantalla_Principal", "Archivo", nullptr));
        menuAyuda->setTitle(QApplication::translate("Pantalla_Principal", "Ayuda", nullptr));
        Q_UNUSED(Pantalla_Principal);
    } // retranslateUi

};

namespace Ui {
    class Pantalla_Principal: public Ui_Pantalla_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLA_PRINCIPAL_H
