/********************************************************************************
** Form generated from reading UI file 'Pantalla_Principal V2.7.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLA_PRINCIPAL_20_V2_H
#define UI_PANTALLA_PRINCIPAL_20_V2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QAction *actionBascula;
    QAction *actionAcerda_de;
    QAction *actionBase_de_Datos;
    QAction *actionRespaldar;
    QAction *actionOpciones;
    QAction *actionHumedad_y_secado;
    QAction *actionIndividuales;
    QAction *actionGenerales;
    QWidget *centralwidget;
    QStackedWidget *SW_Zona_Principal;
    QWidget *page_Landing;
    QLabel *SplashScreenLogo;
    QLabel *Nombre_Programa_Landing;
    QWidget *page_Boletas;
    QFrame *BOLETAS;
    QLabel *Predio_Ubicacion;
    QLineEdit *Predio_Ubicacion_edit;
    QLabel *Predio;
    QLabel *Productor;
    QLabel *SocioNum;
    QLabel *Nombres_Prod;
    QLineEdit *Placas_Camion_edit;
    QLineEdit *Nombres_Chofer_edit;
    QLabel *Apellido1_Chofer;
    QLabel *Placas_Camion;
    QLineEdit *Apellidos_Chofer_edit;
    QLineEdit *Camion_Color_edit;
    QLabel *Camion_Tipo;
    QLabel *Camion_Color;
    QLabel *Nombres_Chofer;
    QLineEdit *Camion_Tipo_edit;
    QLabel *Chofer;
    QComboBox *Prod_ComboBox;
    QLabel *SocioNum_edit;
    QFrame *frame;
    QLabel *Peso_Tara;
    QLineEdit *Peso_Bruto_edit;
    QLineEdit *Peso_Tara_edit;
    QLabel *Peso_Bruto;
    QLineEdit *Humedad_edit;
    QLabel *Humedad;
    QLabel *Ton_1;
    QLabel *Ton_2;
    QLabel *Ton_3;
    QRadioButton *Silo_1;
    QRadioButton *Silo_2;
    QLabel *Peso_Espe;
    QLineEdit *Peso_Espe_edit;
    QLabel *Peso_Neto;
    QLabel *Ton_4;
    QLabel *Peso_Neto_edit;
    QFrame *frame_7;
    QFrame *frame_14;
    QTableWidget *Tabla_Entradas_Folios;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *frame_2;
    QLabel *Folio;
    QLabel *Ciclo;
    QLabel *Ciclo_edit;
    QLabel *Fecha;
    QLineEdit *Folio_edit;
    QLabel *Fondo_1;
    QPushButton *push_Entradas_Nuevo;
    QPushButton *push_Entrada_Borrar;
    QPushButton *push_Entrada_Limpiar;
    QWidget *page_Registros;
    QFrame *frame_19;
    QTabWidget *Registros_Tab;
    QWidget *Individual;
    QTableWidget *Registros_Ind;
    QPushButton *RegInd_Print;
    QComboBox *RegInd_Ciclo_CB;
    QLabel *Ciclo_Ind;
    QLabel *Prod_Ind;
    QComboBox *RegInd_Prod_CB;
    QLabel *Ciclo_Ind_2;
    QLabel *Ciclo_Ind_3;
    QLabel *Ciclo_Ind_5;
    QLabel *Ciclo_Ind_6;
    QLabel *Ciclo_Ind_7;
    QLabel *Ciclo_Ind_8;
    QLabel *Ciclo_Ind_9;
    QLabel *Ciclo_Ind_10;
    QLabel *Ciclo_Ind_11;
    QLabel *label_48;
    QLabel *label_51;
    QLabel *GranoEntregado;
    QWidget *General;
    QLabel *Ciclo_Gen;
    QComboBox *RegGen_Ciclo_CB;
    QTableWidget *Registros_General;
    QPushButton *RegGen_Print;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_49;
    QLabel *label_41;
    QLabel *label_47;
    QLabel *TotalGranoEntregado;
    QLabel *label_50;
    QLabel *Fondo_2;
    QWidget *page_Adeudos;
    QLabel *Panel_Adeudos;
    QFrame *frame_18;
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
    QLabel *Exced_TonsDerecho;
    QLabel *Exced_TonsDerecho_edit;
    QLabel *Exced_TonsEntregada;
    QLabel *Exced_TonsEntregada_edit;
    QLabel *Exced_TonsExce;
    QLabel *Exced_Pagar;
    QLabel *Exced_TonsExce_edit;
    QLabel *Exced_Pagar_edit;
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
    QFrame *frame_34;
    QLabel *label_131;
    QLabel *label_142;
    QLabel *label_143;
    QLabel *label_145;
    QTableWidget *table_Semilla;
    QTableWidget *table_PagoSorgo;
    QTableWidget *table_Diesel;
    QFrame *frame_35;
    QLabel *label_137;
    QLabel *label_146;
    QLabel *label_147;
    QLabel *label_149;
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
    QFrame *frame_3;
    QLineEdit *N_contrato_reg;
    QLabel *Ciclo_sal;
    QLabel *ExcedNoProd_edit;
    QLabel *ExcedNoProd;
    QLabel *Prod_sal;
    QComboBox *Ciclo_Sal_CB;
    QLabel *N_contrato;
    QComboBox *Prod_sal_CB;
    QLabel *Totales;
    QPushButton *Prod_Guardar_2;
    QFrame *frame_9;
    QFrame *frame_36;
    QLabel *LiquidacionGeneralSorgo;
    QLabel *TotalRetencionesAdeudos;
    QLabel *NetoPagar;
    QLabel *NetoPagar_edit;
    QLabel *TotalRetAdeu_edit;
    QLabel *LiqGenSorgo_edit;
    QLabel *label_206;
    QLabel *label_204;
    QLabel *label_202;
    QLabel *Fondo_3;
    QWidget *page_Empleados;
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
    QLabel *No_Cliente;
    QLabel *Apellidos_Lista_Prod;
    QLabel *Email_Lista_Prod;
    QLabel *Tel_Lista_Pro;
    QLineEdit *Ciudad_Lista_Prod_edit;
    QLabel *Whats_Lista_Prod;
    QLineEdit *No_Cliente_edit;
    QLabel *DatosProductor;
    QLineEdit *Acciones_Lista_Prod_edit;
    QLineEdit *RFC_Lista_Prod_edit;
    QLabel *RFC_Lista_Prod;
    QPushButton *Prod_Guardar;
    QFrame *frame_15;
    QTableWidget *Productores_Lista;
    QLabel *ListaProductores;
    QLabel *Fondo_4;
    QPushButton *Prod_Limpiar;
    QPushButton *Prod_Borrar;
    QWidget *page_Compradores;
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
    QLabel *Comprador;
    QLineEdit *RFC_edit;
    QLabel *RFC;
    QLineEdit *Precio_Ton_edit;
    QLabel *Precio_Ton;
    QFrame *frame_17;
    QTableWidget *Compradores_Lista;
    QLabel *ListaCompradores;
    QLabel *Fondo_5;
    QPushButton *Comp_Borrar;
    QPushButton *Comp_Limpiar;
    QPushButton *Comp_Guardar;
    QWidget *page_Liquidacion;
    QFrame *frame_4;
    QFrame *frame_5;
    QComboBox *Liq_Prod_CB;
    QLabel *Liq_Prod;
    QLabel *Liq_Ciclo;
    QLabel *Liq_Ciclo_edit;
    QComboBox *Liq_Comp_CB;
    QLabel *Liq_Comp;
    QFrame *frame_20;
    QTableWidget *Liq_Boletas_Lista;
    QLabel *Liq_Folio;
    QLabel *Liq_Fecha;
    QLabel *Liq_Tons;
    QFrame *frame_21;
    QLabel *Liq_Prod_Info;
    QLabel *Liq_Proce_Info;
    QLabel *Liq_Vehi_Info;
    QLabel *Liq_Placas_Info;
    QLabel *Liq_Chofer_Info;
    QLabel *Liq_Neto_Info;
    QLabel *Liq_Folio_Info;
    QLabel *Liq_Fecha_Info;
    QLabel *Liq_Bruto_Info;
    QLabel *Liq_Tara_Info;
    QLabel *Liq_Prod_Info_edit;
    QLabel *Liq_Proce_Info_edit;
    QLabel *Liq_Vehi_Info_edit;
    QLabel *Liq_Placas_Info_edit;
    QLabel *Liq_Chofer_Info_edit;
    QLabel *Liq_Fecha_Info_edit;
    QLabel *Liq_Folio_Info_edit;
    QLabel *Liq_Bruto_Info_edit;
    QLabel *Liq_Tara_Info_edit;
    QLabel *Liq_Neto_Info_edit;
    QLabel *Liq_Dedc_Humedad;
    QLabel *Liq_Dedc_Humedad_edit;
    QLabel *Liq_NoProd;
    QLabel *Liq_NoProd_edit;
    QLabel *kgs_10;
    QLabel *kgs_11;
    QLabel *kgs_12;
    QFrame *frame_23;
    QLabel *Liq_Reten_ConsGrano;
    QLabel *Liq_Reten_Sanidad;
    QLabel *Liq_Reten_IvaSecado;
    QLabel *Liq_Reten_Total;
    QLabel *Liq_Reten_ConsGrano_edit;
    QLabel *Liq_Reten_Sanidad_edit;
    QLabel *Liq_Reten_Secado_edit;
    QLabel *Liq_Reten_Total_edit;
    QLabel *dlls_1;
    QLabel *dlls_3;
    QLabel *dlls_5;
    QLabel *dlls_6;
    QLabel *Liq_Reten_Secado;
    QLabel *Liq_Reten_IvaSecado_edit;
    QLabel *dlls_4;
    QFrame *frame_24;
    QLabel *Liq_Dedc_Merma;
    QLabel *Liq_Dedc_Deducciones;
    QLabel *Liq_Dedc_Merma_edit;
    QLabel *Liq_Dedc_Deducciones_edit;
    QLabel *kgs_5;
    QLabel *kgs_6;
    QPushButton *Liq_Liquidacion;
    QLabel *Boletas;
    QLabel *Retenciones;
    QLabel *Deducciones;
    QFrame *frame_26;
    QLabel *Liq_Total_Pagar;
    QLabel *Liq_Total_Pagar_edit;
    QLabel *Liq_Total_PrecioTon;
    QLabel *Liq_Total_Analizado;
    QLabel *Liq_Total_Analizado_edit;
    QLabel *Liq_Total_PrecioTon_edit;
    QLabel *kgs_7;
    QLabel *kgs_8;
    QLabel *kgs_9;
    QLabel *Deducciones_2;
    QPushButton *Liq_Imp_Boleta;
    QLabel *Fondo_6;
    QWidget *page_Opciones;
    QLabel *Panel_Opciones;
    QFrame *frame_16;
    QFrame *frame_28;
    QLineEdit *Cuotas_Sanidad_edit;
    QLineEdit *Cuotas_Grano_edit;
    QLineEdit *Cuotas_Modulo_edit;
    QCheckBox *Cuotas_Sanidad;
    QCheckBox *Cuotas_Grano;
    QCheckBox *Cuotas_Modulo;
    QLabel *Cuotas;
    QFrame *frame_31;
    QCheckBox *Actual;
    QComboBox *Tipo_Grano_CB;
    QLabel *Tipo_Grano;
    QLineEdit *Socios_TonsxSocio_edit;
    QLabel *Socios_TonsxSocio;
    QLabel *otros;
    QFrame *frame_37;
    QCheckBox *User_Add;
    QLabel *User_Add_usuario;
    QLineEdit *User_Add_usuario_edit;
    QLabel *User_Add_pass;
    QLineEdit *User_Add_pass_edit;
    QLabel *User_Add_nombre;
    QLineEdit *User_Add_nombre_edit;
    QLabel *User_Add_apellidos;
    QLineEdit *User_Add_apellidos_edit;
    QLabel *User_Add_direccion;
    QLineEdit *User_Add_direccion_edit;
    QLabel *User_Add_telefono;
    QLineEdit *User_Add_telefono_edit;
    QLabel *User_Add_puesto;
    QLineEdit *User_Add_puesto_edit;
    QCheckBox *User_Del;
    QComboBox *User_Del_CB;
    QPushButton *User_Del_Push;
    QPushButton *User_Add_Push;
    QLabel *otros_2;
    QLabel *Fondo_7;
    QWidget *page_DrynWet;
    QLabel *Panel_DrynWet;
    QFrame *HumSec;
    QLabel *label_12;
    QLineEdit *HumSec_CB1_edit;
    QFrame *Valores_14;
    QLabel *HumSec_val149;
    QLabel *label_21;
    QLabel *label_25;
    QLabel *HumSec_val142;
    QLabel *label_14;
    QLabel *label_22;
    QLabel *HumSec_val145;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_23;
    QLabel *HumSec_val147;
    QLabel *HumSec_val143;
    QLabel *HumSec_val146;
    QLabel *HumSec_val141;
    QLabel *HumSec_val144;
    QLabel *label_20;
    QLabel *label_17;
    QLabel *HumSec_val148;
    QComboBox *HumSec_CB1;
    QFrame *Valores_15;
    QLabel *HumSec_val159;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *HumSec_val152;
    QLabel *label_53;
    QLabel *HumSec_val150;
    QLabel *label_55;
    QLabel *HumSec_val155;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *HumSec_val157;
    QLabel *HumSec_val153;
    QLabel *HumSec_val156;
    QLabel *HumSec_val151;
    QLabel *HumSec_val154;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
    QLabel *HumSec_val158;
    QFrame *Valores_16;
    QLabel *HumSec_val169;
    QLabel *label_70;
    QLabel *label_71;
    QLabel *HumSec_val162;
    QLabel *label_73;
    QLabel *HumSec_val160;
    QLabel *label_75;
    QLabel *HumSec_val165;
    QLabel *label_77;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *HumSec_val167;
    QLabel *HumSec_val163;
    QLabel *HumSec_val166;
    QLabel *HumSec_val161;
    QLabel *HumSec_val164;
    QLabel *label_85;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *HumSec_val168;
    QFrame *Valores_17;
    QLabel *HumSec_val179;
    QLabel *label_90;
    QLabel *label_91;
    QLabel *HumSec_val172;
    QLabel *label_93;
    QLabel *HumSec_val170;
    QLabel *label_95;
    QLabel *HumSec_val175;
    QLabel *label_97;
    QLabel *label_98;
    QLabel *label_99;
    QLabel *HumSec_val177;
    QLabel *HumSec_val173;
    QLabel *HumSec_val176;
    QLabel *HumSec_val171;
    QLabel *HumSec_val174;
    QLabel *label_105;
    QLabel *label_106;
    QLabel *label_107;
    QLabel *HumSec_val178;
    QFrame *Valores_18;
    QLabel *HumSec_val189;
    QLabel *label_110;
    QLabel *label_111;
    QLabel *HumSec_val182;
    QLabel *label_113;
    QLabel *HumSec_val180;
    QLabel *label_115;
    QLabel *HumSec_val185;
    QLabel *label_117;
    QLabel *label_118;
    QLabel *label_119;
    QLabel *HumSec_val187;
    QLabel *HumSec_val183;
    QLabel *HumSec_val186;
    QLabel *HumSec_val181;
    QLabel *HumSec_val184;
    QLabel *label_130;
    QLabel *label_138;
    QLabel *label_139;
    QLabel *HumSec_val188;
    QFrame *Valores_19;
    QLabel *HumSec_val199;
    QLabel *label_144;
    QLabel *label_151;
    QLabel *HumSec_val192;
    QLabel *label_155;
    QLabel *HumSec_val190;
    QLabel *label_157;
    QLabel *HumSec_val195;
    QLabel *label_159;
    QLabel *label_160;
    QLabel *label_161;
    QLabel *HumSec_val197;
    QLabel *HumSec_val193;
    QLabel *HumSec_val196;
    QLabel *HumSec_val191;
    QLabel *HumSec_val194;
    QLabel *label_167;
    QLabel *label_168;
    QLabel *label_169;
    QLabel *HumSec_val198;
    QFrame *Valores_20;
    QLabel *HumSec_val209;
    QLabel *label_172;
    QLabel *label_173;
    QLabel *HumSec_val202;
    QLabel *label_175;
    QLabel *HumSec_val200;
    QLabel *label_177;
    QLabel *HumSec_val205;
    QLabel *label_179;
    QLabel *label_180;
    QLabel *label_181;
    QLabel *HumSec_val207;
    QLabel *HumSec_val203;
    QLabel *HumSec_val206;
    QLabel *HumSec_val201;
    QLabel *HumSec_val204;
    QLabel *label_187;
    QLabel *label_188;
    QLabel *label_189;
    QLabel *HumSec_val208;
    QFrame *Valores_21;
    QLabel *HumSec_val219;
    QLabel *label_192;
    QLabel *label_193;
    QLabel *HumSec_val212;
    QLabel *label_195;
    QLabel *HumSec_val210;
    QLabel *label_197;
    QLabel *HumSec_val215;
    QLabel *label_199;
    QLabel *label_200;
    QLabel *label_201;
    QLabel *HumSec_val217;
    QLabel *HumSec_val213;
    QLabel *HumSec_val216;
    QLabel *HumSec_val211;
    QLabel *HumSec_val214;
    QLabel *label_210;
    QLabel *label_211;
    QLabel *label_212;
    QLabel *HumSec_val218;
    QFrame *Valores_22;
    QLabel *HumSec_val229;
    QLabel *label_215;
    QLabel *label_216;
    QLabel *HumSec_val222;
    QLabel *label_218;
    QLabel *HumSec_val220;
    QLabel *label_220;
    QLabel *HumSec_val225;
    QLabel *label_222;
    QLabel *label_223;
    QLabel *label_224;
    QLabel *HumSec_val227;
    QLabel *HumSec_val223;
    QLabel *HumSec_val226;
    QLabel *HumSec_val221;
    QLabel *HumSec_val224;
    QLabel *label_230;
    QLabel *label_231;
    QLabel *label_232;
    QLabel *HumSec_val228;
    QFrame *Valores_23;
    QLabel *HumSec_val239;
    QLabel *label_235;
    QLabel *label_236;
    QLabel *HumSec_val232;
    QLabel *label_238;
    QLabel *HumSec_val230;
    QLabel *label_240;
    QLabel *HumSec_val235;
    QLabel *label_242;
    QLabel *label_243;
    QLabel *label_244;
    QLabel *HumSec_val237;
    QLabel *HumSec_val233;
    QLabel *HumSec_val236;
    QLabel *HumSec_val231;
    QLabel *HumSec_val234;
    QLabel *label_250;
    QLabel *label_251;
    QLabel *label_252;
    QLabel *HumSec_val238;
    QFrame *Valores_24;
    QLabel *HumSec_val249;
    QLabel *label_255;
    QLabel *label_256;
    QLabel *HumSec_val242;
    QLabel *label_258;
    QLabel *HumSec_val240;
    QLabel *label_260;
    QLabel *HumSec_val245;
    QLabel *label_262;
    QLabel *label_263;
    QLabel *label_264;
    QLabel *HumSec_val247;
    QLabel *HumSec_val243;
    QLabel *HumSec_val246;
    QLabel *HumSec_val241;
    QLabel *HumSec_val244;
    QLabel *label_270;
    QLabel *label_271;
    QLabel *label_272;
    QLabel *HumSec_val248;
    QFrame *Valores_25;
    QLabel *HumSec_val259;
    QLabel *label_275;
    QLabel *label_276;
    QLabel *HumSec_val252;
    QLabel *label_278;
    QLabel *HumSec_val250;
    QLabel *label_280;
    QLabel *HumSec_val255;
    QLabel *label_282;
    QLabel *label_283;
    QLabel *label_284;
    QLabel *HumSec_val257;
    QLabel *HumSec_val253;
    QLabel *HumSec_val256;
    QLabel *HumSec_val251;
    QLabel *HumSec_val254;
    QLabel *label_290;
    QLabel *label_291;
    QLabel *label_292;
    QLabel *HumSec_val258;
    QLabel *HumSec_DedxTon;
    QPushButton *push_NextTable;
    QLabel *Fondo_8;
    QWidget *page_DrynWet_2;
    QLabel *Fondo_9;
    QFrame *frame_27;
    QLabel *label_535;
    QLineEdit *HumSec_CB2_edit;
    QFrame *Valores_38;
    QLabel *HumSec_val269;
    QLabel *label_537;
    QLabel *label_538;
    QLabel *HumSec_val262;
    QLabel *label_540;
    QLabel *HumSec_val260;
    QLabel *label_542;
    QLabel *HumSec_val265;
    QLabel *label_544;
    QLabel *label_545;
    QLabel *label_546;
    QLabel *HumSec_val267;
    QLabel *HumSec_val263;
    QLabel *HumSec_val266;
    QLabel *HumSec_val261;
    QLabel *HumSec_val264;
    QLabel *label_552;
    QLabel *label_553;
    QLabel *label_554;
    QLabel *HumSec_val268;
    QComboBox *HumSec_CB2;
    QFrame *Valores_39;
    QLabel *HumSec_val279;
    QLabel *label_557;
    QLabel *label_558;
    QLabel *HumSec_val272;
    QLabel *label_560;
    QLabel *HumSec_val270;
    QLabel *label_562;
    QLabel *HumSec_val275;
    QLabel *label_564;
    QLabel *label_565;
    QLabel *label_566;
    QLabel *HumSec_val277;
    QLabel *HumSec_val273;
    QLabel *HumSec_val276;
    QLabel *HumSec_val271;
    QLabel *HumSec_val274;
    QLabel *label_572;
    QLabel *label_573;
    QLabel *label_574;
    QLabel *HumSec_val278;
    QFrame *Valores_40;
    QLabel *HumSec_val289;
    QLabel *label_577;
    QLabel *label_578;
    QLabel *HumSec_val282;
    QLabel *label_580;
    QLabel *HumSec_val280;
    QLabel *label_582;
    QLabel *HumSec_val285;
    QLabel *label_584;
    QLabel *label_585;
    QLabel *label_586;
    QLabel *HumSec_val287;
    QLabel *HumSec_val283;
    QLabel *HumSec_val286;
    QLabel *HumSec_val281;
    QLabel *HumSec_val284;
    QLabel *label_592;
    QLabel *label_593;
    QLabel *label_594;
    QLabel *HumSec_val288;
    QFrame *Valores_41;
    QLabel *HumSec_val299;
    QLabel *label_597;
    QLabel *label_598;
    QLabel *HumSec_val292;
    QLabel *label_600;
    QLabel *HumSec_val290;
    QLabel *label_602;
    QLabel *HumSec_val295;
    QLabel *label_604;
    QLabel *label_605;
    QLabel *label_606;
    QLabel *HumSec_val297;
    QLabel *HumSec_val293;
    QLabel *HumSec_val296;
    QLabel *HumSec_val291;
    QLabel *HumSec_val294;
    QLabel *label_612;
    QLabel *label_613;
    QLabel *label_614;
    QLabel *HumSec_val298;
    QLabel *HumSec_val300;
    QLabel *label_634;
    QFrame *Valores_44;
    QLabel *label_657;
    QLabel *HumSec_Tarifa_161_170;
    QLabel *label_660;
    QLabel *HumSec_Tarifa_141_150;
    QLabel *label_662;
    QLabel *HumSec_Tarifa_191_200;
    QLabel *label_664;
    QLabel *label_666;
    QLabel *HumSec_Tarifa_211_220;
    QLabel *HumSec_Tarifa_171_180;
    QLabel *HumSec_Tarifa_201_210;
    QLabel *HumSec_Tarifa_151_160;
    QLabel *HumSec_Tarifa_181_190;
    QLabel *label_672;
    QLabel *label_673;
    QLabel *label_674;
    QFrame *Valores_45;
    QLabel *label_677;
    QLabel *HumSec_Tarifa_241_250;
    QLabel *label_680;
    QLabel *HumSec_Tarifa_221_230;
    QLabel *label_682;
    QLabel *HumSec_Tarifa_271_280;
    QLabel *label_684;
    QLabel *label_686;
    QLabel *HumSec_Tarifa_291_300;
    QLabel *HumSec_Tarifa_251_260;
    QLabel *HumSec_Tarifa_281_290;
    QLabel *HumSec_Tarifa_231_240;
    QLabel *HumSec_Tarifa_261_270;
    QLabel *label_692;
    QLabel *label_693;
    QLabel *label_694;
    QLineEdit *HumSec_CB3_edit;
    QLabel *label_656;
    QComboBox *HumSec_CB3;
    QLabel *label_665;
    QLabel *label_675;
    QPushButton *push_BeforeTable;
    QLabel *Panel_DrynWet_2;
    QWidget *page;
    QLabel *Fondo_11;
    QFrame *frame_6;
    QLabel *Peso_Tara_2;
    QLineEdit *Salidas_Bruto_edit;
    QLineEdit *Salidas_Tara_edit;
    QLabel *Peso_Bruto_2;
    QLineEdit *Salidas_Humedad_edit;
    QLabel *Humedad_2;
    QLabel *Ton_5;
    QLabel *Ton_6;
    QLabel *Ton_7;
    QRadioButton *Salidas_Silo_1;
    QRadioButton *Salidas_Silo_2;
    QLabel *Peso_Espe_2;
    QLineEdit *Salidas_Espe_edit;
    QLabel *Salidas_Neto;
    QLabel *Ton_8;
    QLabel *Salidas_Neto_edit;
    QPushButton *push_Salidas_Nuevo;
    QPushButton *push_Salidas_Limpiar;
    QFrame *frame_38;
    QLabel *Folio_Salida;
    QLabel *Ciclo_Salida;
    QLabel *Ciclo_edit_Salida;
    QLabel *Fecha_Salida;
    QLineEdit *Folio_Salida_edit;
    QFrame *BOLETAS_Salidas;
    QLabel *Salida_Destino;
    QLineEdit *Salidas_Destino_edit;
    QLabel *Comprador_Salida;
    QLabel *SocioNum_Comp;
    QLabel *Salida_Razon_Social;
    QLineEdit *Salidas_Placas_edit;
    QLineEdit *Salidas_Chofer_Nombre_edit;
    QLabel *Salidas_Chofer_Apellidos;
    QLabel *Salidas_Placas;
    QLineEdit *Salidas_Chofer_Apellidos_edit;
    QLineEdit *Salidas_Color_edit;
    QLabel *Salidas_Tipo;
    QLabel *Salidas_Color;
    QLabel *Salidas_Chofer_Nombre;
    QLineEdit *Salidas_Tipo_edit;
    QLabel *Chofer_Salida;
    QComboBox *Salida_Razon_Social_edit;
    QLabel *SocioNum_Comp_edit;
    QFrame *frame_39;
    QTableWidget *Tabla_Salidas_Folios;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *push_Salidas_Borrar;
    QWidget *page_2;
    QLabel *Panel_Silos;
    QLabel *Fondo_10;
    QLabel *Silo_Total_1;
    QLabel *Silo_Total_2;
    QLabel *icon_Arrow_8;
    QLabel *icon_Arrow_9;
    QGraphicsView *graphicsView;
    QFrame *Barra_lateral;
    QFrame *frame_Botones;
    QLabel *icon_Boletas;
    QLabel *icon_Reg;
    QLabel *icon_Prod;
    QLabel *icon_Comp;
    QPushButton *push_Liquidacion;
    QLabel *icon_Liq;
    QPushButton *push_Boletas;
    QPushButton *push_Registros;
    QPushButton *push_Productores;
    QPushButton *push_Compradores;
    QPushButton *push_Salidas;
    QLabel *icon_Salidas;
    QPushButton *push_Silos;
    QLabel *icon_Silos;
    QLabel *icon_Arrow_1;
    QLabel *icon_Arrow_2;
    QLabel *icon_Arrow_3;
    QLabel *icon_Arrow_4;
    QLabel *icon_Arrow_5;
    QLabel *icon_Arrow_6;
    QLabel *icon_Arrow_7;
    QLabel *Nombre_Programa;
    QFrame *frame_25;
    QLabel *label_5;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuRegistros;
    QMenu *menuAyuda;

    void setupUi(QMainWindow *Pantalla_Principal)
    {
        if (Pantalla_Principal->objectName().isEmpty())
            Pantalla_Principal->setObjectName(QStringLiteral("Pantalla_Principal"));
        Pantalla_Principal->setWindowModality(Qt::NonModal);
        Pantalla_Principal->resize(1920, 1035);
        Pantalla_Principal->setMinimumSize(QSize(1200, 800));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift"));
        font.setPointSize(12);
        Pantalla_Principal->setFont(font);
        Pantalla_Principal->setWindowTitle(QStringLiteral("Sistema Silo"));
        Pantalla_Principal->setStyleSheet(QStringLiteral(""));
        actionSalir = new QAction(Pantalla_Principal);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift"));
        actionSalir->setFont(font1);
        About = new QAction(Pantalla_Principal);
        About->setObjectName(QStringLiteral("About"));
        actionEntradas = new QAction(Pantalla_Principal);
        actionEntradas->setObjectName(QStringLiteral("actionEntradas"));
        actionEntradas->setFont(font1);
        actionSalidas = new QAction(Pantalla_Principal);
        actionSalidas->setObjectName(QStringLiteral("actionSalidas"));
        actionSalidas->setFont(font1);
        actionProductores = new QAction(Pantalla_Principal);
        actionProductores->setObjectName(QStringLiteral("actionProductores"));
        actionProductores->setFont(font1);
        actionCompradores = new QAction(Pantalla_Principal);
        actionCompradores->setObjectName(QStringLiteral("actionCompradores"));
        actionCompradores->setFont(font1);
        actionBascula = new QAction(Pantalla_Principal);
        actionBascula->setObjectName(QStringLiteral("actionBascula"));
        actionAcerda_de = new QAction(Pantalla_Principal);
        actionAcerda_de->setObjectName(QStringLiteral("actionAcerda_de"));
        actionAcerda_de->setFont(font1);
        actionBase_de_Datos = new QAction(Pantalla_Principal);
        actionBase_de_Datos->setObjectName(QStringLiteral("actionBase_de_Datos"));
        actionRespaldar = new QAction(Pantalla_Principal);
        actionRespaldar->setObjectName(QStringLiteral("actionRespaldar"));
        actionRespaldar->setFont(font1);
        actionOpciones = new QAction(Pantalla_Principal);
        actionOpciones->setObjectName(QStringLiteral("actionOpciones"));
        actionHumedad_y_secado = new QAction(Pantalla_Principal);
        actionHumedad_y_secado->setObjectName(QStringLiteral("actionHumedad_y_secado"));
        actionIndividuales = new QAction(Pantalla_Principal);
        actionIndividuales->setObjectName(QStringLiteral("actionIndividuales"));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift"));
        font2.setPointSize(14);
        actionIndividuales->setFont(font2);
        actionGenerales = new QAction(Pantalla_Principal);
        actionGenerales->setObjectName(QStringLiteral("actionGenerales"));
        actionGenerales->setFont(font2);
        centralwidget = new QWidget(Pantalla_Principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift Condensed"));
        centralwidget->setFont(font3);
        centralwidget->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:rgb(200,200,200);\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(203, 219, 253);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
""));
        SW_Zona_Principal = new QStackedWidget(centralwidget);
        SW_Zona_Principal->setObjectName(QStringLiteral("SW_Zona_Principal"));
        SW_Zona_Principal->setGeometry(QRect(300, 0, 1611, 1035));
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
        SW_Zona_Principal->setStyleSheet(QLatin1String("background-image: url(\"Imagenes/textiles.jpg\");\n"
"background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Bahnschrift\";\n"
"border:1px solid black;\n"
"border-radius:0px;"));
        SW_Zona_Principal->setFrameShape(QFrame::WinPanel);
        SW_Zona_Principal->setFrameShadow(QFrame::Sunken);
        SW_Zona_Principal->setLineWidth(2);
        page_Landing = new QWidget();
        page_Landing->setObjectName(QStringLiteral("page_Landing"));
        SplashScreenLogo = new QLabel(page_Landing);
        SplashScreenLogo->setObjectName(QStringLiteral("SplashScreenLogo"));
        SplashScreenLogo->setGeometry(QRect(0, 0, 1641, 1031));
        SplashScreenLogo->setStyleSheet(QStringLiteral("background-image: url(:/loma/SorgoPlanta1.jpg);"));
        SplashScreenLogo->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta1.jpg")));
        SplashScreenLogo->setScaledContents(true);
        Nombre_Programa_Landing = new QLabel(page_Landing);
        Nombre_Programa_Landing->setObjectName(QStringLiteral("Nombre_Programa_Landing"));
        Nombre_Programa_Landing->setGeometry(QRect(410, 220, 621, 431));
        Nombre_Programa_Landing->setMinimumSize(QSize(0, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("Bahnschrift"));
        font4.setPointSize(50);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        Nombre_Programa_Landing->setFont(font4);
        Nombre_Programa_Landing->setStyleSheet(QLatin1String("font: 50pt \"Bahnschrift\";\n"
"color:black;\n"
"border:0px solid black;\n"
"background: transparent;"));
        Nombre_Programa_Landing->setFrameShape(QFrame::Box);
        Nombre_Programa_Landing->setFrameShadow(QFrame::Raised);
        Nombre_Programa_Landing->setLineWidth(0);
        Nombre_Programa_Landing->setMidLineWidth(0);
        Nombre_Programa_Landing->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Logo2.png")));
        Nombre_Programa_Landing->setScaledContents(true);
        Nombre_Programa_Landing->setAlignment(Qt::AlignCenter);
        SW_Zona_Principal->addWidget(page_Landing);
        page_Boletas = new QWidget();
        page_Boletas->setObjectName(QStringLiteral("page_Boletas"));
        page_Boletas->setStyleSheet(QStringLiteral(""));
        BOLETAS = new QFrame(page_Boletas);
        BOLETAS->setObjectName(QStringLiteral("BOLETAS"));
        BOLETAS->setGeometry(QRect(130, 200, 470, 731));
        BOLETAS->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        BOLETAS->setFrameShape(QFrame::StyledPanel);
        BOLETAS->setFrameShadow(QFrame::Raised);
        Predio_Ubicacion = new QLabel(BOLETAS);
        Predio_Ubicacion->setObjectName(QStringLiteral("Predio_Ubicacion"));
        Predio_Ubicacion->setGeometry(QRect(70, 190, 131, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Bahnschrift"));
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        Predio_Ubicacion->setFont(font5);
        Predio_Ubicacion->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Predio_Ubicacion->setAlignment(Qt::AlignCenter);
        Predio_Ubicacion_edit = new QLineEdit(BOLETAS);
        Predio_Ubicacion_edit->setObjectName(QStringLiteral("Predio_Ubicacion_edit"));
        Predio_Ubicacion_edit->setGeometry(QRect(45, 220, 380, 35));
        Predio_Ubicacion_edit->setFont(font5);
        Predio_Ubicacion_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Predio = new QLabel(BOLETAS);
        Predio->setObjectName(QStringLiteral("Predio"));
        Predio->setGeometry(QRect(190, 150, 101, 31));
        Predio->setFont(font5);
        Predio->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Predio->setAlignment(Qt::AlignCenter);
        Productor = new QLabel(BOLETAS);
        Productor->setObjectName(QStringLiteral("Productor"));
        Productor->setGeometry(QRect(170, 24, 151, 31));
        Productor->setFont(font5);
        Productor->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Productor->setAlignment(Qt::AlignCenter);
        SocioNum = new QLabel(BOLETAS);
        SocioNum->setObjectName(QStringLiteral("SocioNum"));
        SocioNum->setGeometry(QRect(350, 60, 101, 31));
        SocioNum->setFont(font5);
        SocioNum->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        SocioNum->setAlignment(Qt::AlignCenter);
        Nombres_Prod = new QLabel(BOLETAS);
        Nombres_Prod->setObjectName(QStringLiteral("Nombres_Prod"));
        Nombres_Prod->setGeometry(QRect(60, 60, 141, 31));
        Nombres_Prod->setFont(font5);
        Nombres_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Nombres_Prod->setAlignment(Qt::AlignCenter);
        Placas_Camion_edit = new QLineEdit(BOLETAS);
        Placas_Camion_edit->setObjectName(QStringLiteral("Placas_Camion_edit"));
        Placas_Camion_edit->setGeometry(QRect(45, 500, 380, 35));
        Placas_Camion_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Nombres_Chofer_edit = new QLineEdit(BOLETAS);
        Nombres_Chofer_edit->setObjectName(QStringLiteral("Nombres_Chofer_edit"));
        Nombres_Chofer_edit->setGeometry(QRect(45, 340, 380, 35));
        Nombres_Chofer_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Apellido1_Chofer = new QLabel(BOLETAS);
        Apellido1_Chofer->setObjectName(QStringLiteral("Apellido1_Chofer"));
        Apellido1_Chofer->setGeometry(QRect(60, 390, 121, 31));
        Apellido1_Chofer->setFont(font5);
        Apellido1_Chofer->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Apellido1_Chofer->setAlignment(Qt::AlignCenter);
        Placas_Camion = new QLabel(BOLETAS);
        Placas_Camion->setObjectName(QStringLiteral("Placas_Camion"));
        Placas_Camion->setGeometry(QRect(70, 470, 161, 31));
        Placas_Camion->setFont(font5);
        Placas_Camion->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Placas_Camion->setAlignment(Qt::AlignCenter);
        Apellidos_Chofer_edit = new QLineEdit(BOLETAS);
        Apellidos_Chofer_edit->setObjectName(QStringLiteral("Apellidos_Chofer_edit"));
        Apellidos_Chofer_edit->setGeometry(QRect(45, 420, 380, 35));
        Apellidos_Chofer_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Camion_Color_edit = new QLineEdit(BOLETAS);
        Camion_Color_edit->setObjectName(QStringLiteral("Camion_Color_edit"));
        Camion_Color_edit->setGeometry(QRect(45, 580, 380, 35));
        Camion_Color_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Camion_Tipo = new QLabel(BOLETAS);
        Camion_Tipo->setObjectName(QStringLiteral("Camion_Tipo"));
        Camion_Tipo->setGeometry(QRect(70, 630, 151, 31));
        Camion_Tipo->setFont(font5);
        Camion_Tipo->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Camion_Tipo->setAlignment(Qt::AlignCenter);
        Camion_Color = new QLabel(BOLETAS);
        Camion_Color->setObjectName(QStringLiteral("Camion_Color"));
        Camion_Color->setGeometry(QRect(70, 550, 81, 31));
        Camion_Color->setFont(font5);
        Camion_Color->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Camion_Color->setAlignment(Qt::AlignCenter);
        Nombres_Chofer = new QLabel(BOLETAS);
        Nombres_Chofer->setObjectName(QStringLiteral("Nombres_Chofer"));
        Nombres_Chofer->setGeometry(QRect(70, 310, 111, 31));
        Nombres_Chofer->setFont(font5);
        Nombres_Chofer->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Nombres_Chofer->setAlignment(Qt::AlignCenter);
        Camion_Tipo_edit = new QLineEdit(BOLETAS);
        Camion_Tipo_edit->setObjectName(QStringLiteral("Camion_Tipo_edit"));
        Camion_Tipo_edit->setGeometry(QRect(45, 660, 380, 35));
        Camion_Tipo_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Chofer = new QLabel(BOLETAS);
        Chofer->setObjectName(QStringLiteral("Chofer"));
        Chofer->setGeometry(QRect(190, 280, 101, 31));
        Chofer->setFont(font5);
        Chofer->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Chofer->setAlignment(Qt::AlignCenter);
        Prod_ComboBox = new QComboBox(BOLETAS);
        Prod_ComboBox->setObjectName(QStringLiteral("Prod_ComboBox"));
        Prod_ComboBox->setGeometry(QRect(40, 90, 311, 35));
        Prod_ComboBox->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        SocioNum_edit = new QLabel(BOLETAS);
        SocioNum_edit->setObjectName(QStringLiteral("SocioNum_edit"));
        SocioNum_edit->setEnabled(true);
        SocioNum_edit->setGeometry(QRect(350, 90, 101, 31));
        SocioNum_edit->setFont(font5);
        SocioNum_edit->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"color:red;"));
        SocioNum_edit->setAlignment(Qt::AlignCenter);
        SocioNum_edit->raise();
        Camion_Tipo->raise();
        Camion_Color->raise();
        Placas_Camion->raise();
        Apellido1_Chofer->raise();
        Nombres_Chofer->raise();
        Predio_Ubicacion->raise();
        Nombres_Prod->raise();
        Predio_Ubicacion_edit->raise();
        Predio->raise();
        Productor->raise();
        SocioNum->raise();
        Placas_Camion_edit->raise();
        Nombres_Chofer_edit->raise();
        Apellidos_Chofer_edit->raise();
        Camion_Color_edit->raise();
        Camion_Tipo_edit->raise();
        Chofer->raise();
        Prod_ComboBox->raise();
        frame = new QFrame(page_Boletas);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(720, 150, 470, 293));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        Peso_Tara = new QLabel(frame);
        Peso_Tara->setObjectName(QStringLiteral("Peso_Tara"));
        Peso_Tara->setGeometry(QRect(284, 23, 71, 31));
        Peso_Tara->setFont(font5);
        Peso_Tara->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Tara->setAlignment(Qt::AlignCenter);
        Peso_Bruto_edit = new QLineEdit(frame);
        Peso_Bruto_edit->setObjectName(QStringLiteral("Peso_Bruto_edit"));
        Peso_Bruto_edit->setGeometry(QRect(40, 50, 141, 35));
        Peso_Bruto_edit->setFont(font5);
        Peso_Bruto_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Peso_Tara_edit = new QLineEdit(frame);
        Peso_Tara_edit->setObjectName(QStringLiteral("Peso_Tara_edit"));
        Peso_Tara_edit->setGeometry(QRect(250, 50, 141, 35));
        Peso_Tara_edit->setFont(font5);
        Peso_Tara_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Peso_Bruto = new QLabel(frame);
        Peso_Bruto->setObjectName(QStringLiteral("Peso_Bruto"));
        Peso_Bruto->setGeometry(QRect(70, 25, 81, 31));
        Peso_Bruto->setFont(font5);
        Peso_Bruto->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Bruto->setAlignment(Qt::AlignCenter);
        Humedad_edit = new QLineEdit(frame);
        Humedad_edit->setObjectName(QStringLiteral("Humedad_edit"));
        Humedad_edit->setGeometry(QRect(250, 130, 140, 35));
        Humedad_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Humedad = new QLabel(frame);
        Humedad->setObjectName(QStringLiteral("Humedad"));
        Humedad->setGeometry(QRect(265, 107, 111, 25));
        Humedad->setFont(font5);
        Humedad->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Humedad->setAlignment(Qt::AlignCenter);
        Ton_1 = new QLabel(frame);
        Ton_1->setObjectName(QStringLiteral("Ton_1"));
        Ton_1->setGeometry(QRect(170, 55, 71, 31));
        Ton_1->setFont(font5);
        Ton_1->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_1->setAlignment(Qt::AlignCenter);
        Ton_2 = new QLabel(frame);
        Ton_2->setObjectName(QStringLiteral("Ton_2"));
        Ton_2->setGeometry(QRect(380, 53, 71, 31));
        Ton_2->setFont(font5);
        Ton_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_2->setAlignment(Qt::AlignCenter);
        Ton_3 = new QLabel(frame);
        Ton_3->setObjectName(QStringLiteral("Ton_3"));
        Ton_3->setGeometry(QRect(390, 133, 71, 31));
        Ton_3->setFont(font5);
        Ton_3->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_3->setAlignment(Qt::AlignCenter);
        Silo_1 = new QRadioButton(frame);
        Silo_1->setObjectName(QStringLiteral("Silo_1"));
        Silo_1->setGeometry(QRect(60, 180, 90, 40));
        Silo_1->setFont(font5);
        Silo_1->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Silo_2 = new QRadioButton(frame);
        Silo_2->setObjectName(QStringLiteral("Silo_2"));
        Silo_2->setGeometry(QRect(60, 220, 90, 40));
        Silo_2->setFont(font5);
        Silo_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Espe = new QLabel(frame);
        Peso_Espe->setObjectName(QStringLiteral("Peso_Espe"));
        Peso_Espe->setGeometry(QRect(234, 190, 171, 25));
        Peso_Espe->setFont(font5);
        Peso_Espe->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Espe->setAlignment(Qt::AlignCenter);
        Peso_Espe_edit = new QLineEdit(frame);
        Peso_Espe_edit->setObjectName(QStringLiteral("Peso_Espe_edit"));
        Peso_Espe_edit->setGeometry(QRect(250, 220, 140, 35));
        Peso_Espe_edit->setFont(font5);
        Peso_Espe_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Peso_Neto = new QLabel(frame);
        Peso_Neto->setObjectName(QStringLiteral("Peso_Neto"));
        Peso_Neto->setGeometry(QRect(69, 105, 81, 31));
        Peso_Neto->setFont(font5);
        Peso_Neto->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Neto->setAlignment(Qt::AlignCenter);
        Ton_4 = new QLabel(frame);
        Ton_4->setObjectName(QStringLiteral("Ton_4"));
        Ton_4->setGeometry(QRect(170, 133, 71, 31));
        Ton_4->setFont(font5);
        Ton_4->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_4->setAlignment(Qt::AlignCenter);
        Peso_Neto_edit = new QLabel(frame);
        Peso_Neto_edit->setObjectName(QStringLiteral("Peso_Neto_edit"));
        Peso_Neto_edit->setGeometry(QRect(40, 130, 140, 35));
        Peso_Neto_edit->setFont(font5);
        Peso_Neto_edit->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:10px;\n"
"background:white;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Neto_edit->setAlignment(Qt::AlignCenter);
        Peso_Neto->raise();
        Humedad->raise();
        Peso_Tara->raise();
        Peso_Bruto->raise();
        Ton_4->raise();
        Ton_3->raise();
        Ton_2->raise();
        Ton_1->raise();
        Peso_Bruto_edit->raise();
        Peso_Tara_edit->raise();
        Humedad_edit->raise();
        Silo_1->raise();
        Silo_2->raise();
        Peso_Espe->raise();
        Peso_Espe_edit->raise();
        Peso_Neto_edit->raise();
        frame_7 = new QFrame(page_Boletas);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(620, 800, 661, 101));
        frame_7->setStyleSheet(QLatin1String("background:transparent;\n"
"border-color:none;"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_14 = new QFrame(page_Boletas);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(720, 460, 470, 410));
        frame_14->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        Tabla_Entradas_Folios = new QTableWidget(frame_14);
        Tabla_Entradas_Folios->setObjectName(QStringLiteral("Tabla_Entradas_Folios"));
        Tabla_Entradas_Folios->setGeometry(QRect(20, 40, 430, 351));
        Tabla_Entradas_Folios->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:0px;\n"
"background:white;"));
        Tabla_Entradas_Folios->verticalHeader()->setVisible(false);
        label = new QLabel(frame_14);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 9, 70, 31));
        label->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(frame_14);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 9, 120, 31));
        label_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame_14);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 9, 90, 31));
        label_3->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame_14);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 9, 70, 31));
        label_4->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_4->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(page_Boletas);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(130, 50, 470, 135));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        Folio = new QLabel(frame_2);
        Folio->setObjectName(QStringLiteral("Folio"));
        Folio->setGeometry(QRect(50, 30, 141, 31));
        Folio->setFont(font5);
        Folio->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Folio->setAlignment(Qt::AlignCenter);
        Ciclo = new QLabel(frame_2);
        Ciclo->setObjectName(QStringLiteral("Ciclo"));
        Ciclo->setGeometry(QRect(260, 60, 131, 31));
        Ciclo->setFont(font5);
        Ciclo->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ciclo->setAlignment(Qt::AlignCenter);
        Ciclo_edit = new QLabel(frame_2);
        Ciclo_edit->setObjectName(QStringLiteral("Ciclo_edit"));
        Ciclo_edit->setGeometry(QRect(210, 90, 221, 31));
        Ciclo_edit->setFont(font5);
        Ciclo_edit->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ciclo_edit->setAlignment(Qt::AlignCenter);
        Fecha = new QLabel(frame_2);
        Fecha->setObjectName(QStringLiteral("Fecha"));
        Fecha->setGeometry(QRect(210, 10, 221, 41));
        Fecha->setFont(font5);
        Fecha->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Fecha->setAlignment(Qt::AlignCenter);
        Folio_edit = new QLineEdit(frame_2);
        Folio_edit->setObjectName(QStringLiteral("Folio_edit"));
        Folio_edit->setGeometry(QRect(60, 60, 121, 35));
        QFont font6;
        font6.setFamily(QStringLiteral("Bahnschrift"));
        font6.setPointSize(14);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        Folio_edit->setFont(font6);
        Folio_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
"color:red;"));
        Folio_edit->setReadOnly(false);
        Fondo_1 = new QLabel(page_Boletas);
        Fondo_1->setObjectName(QStringLiteral("Fondo_1"));
        Fondo_1->setGeometry(QRect(0, 0, 1611, 1020));
        Fondo_1->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_1->setScaledContents(true);
        push_Entradas_Nuevo = new QPushButton(page_Boletas);
        push_Entradas_Nuevo->setObjectName(QStringLiteral("push_Entradas_Nuevo"));
        push_Entradas_Nuevo->setGeometry(QRect(1270, 370, 200, 57));
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(252, 252, 252, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        push_Entradas_Nuevo->setPalette(palette1);
        push_Entradas_Nuevo->setFont(font5);
        push_Entradas_Nuevo->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        push_Entrada_Borrar = new QPushButton(page_Boletas);
        push_Entrada_Borrar->setObjectName(QStringLiteral("push_Entrada_Borrar"));
        push_Entrada_Borrar->setGeometry(QRect(1270, 450, 200, 57));
        push_Entrada_Borrar->setFont(font5);
        push_Entrada_Borrar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        push_Entrada_Limpiar = new QPushButton(page_Boletas);
        push_Entrada_Limpiar->setObjectName(QStringLiteral("push_Entrada_Limpiar"));
        push_Entrada_Limpiar->setGeometry(QRect(1270, 530, 200, 57));
        push_Entrada_Limpiar->setFont(font5);
        push_Entrada_Limpiar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        SW_Zona_Principal->addWidget(page_Boletas);
        Fondo_1->raise();
        BOLETAS->raise();
        frame->raise();
        frame_7->raise();
        frame_14->raise();
        frame_2->raise();
        push_Entradas_Nuevo->raise();
        push_Entrada_Borrar->raise();
        push_Entrada_Limpiar->raise();
        page_Registros = new QWidget();
        page_Registros->setObjectName(QStringLiteral("page_Registros"));
        page_Registros->setStyleSheet(QStringLiteral(""));
        frame_19 = new QFrame(page_Registros);
        frame_19->setObjectName(QStringLiteral("frame_19"));
        frame_19->setGeometry(QRect(20, 70, 1571, 891));
        frame_19->setStyleSheet(QLatin1String("background-color:rgb(245,245,245);\n"
"border-width: 1px;\n"
"border-radius: 20px"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        Registros_Tab = new QTabWidget(frame_19);
        Registros_Tab->setObjectName(QStringLiteral("Registros_Tab"));
        Registros_Tab->setGeometry(QRect(0, 0, 1571, 871));
        Registros_Tab->setFont(font6);
        Registros_Tab->setLayoutDirection(Qt::LeftToRight);
        Registros_Tab->setAutoFillBackground(false);
        Registros_Tab->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-width:0px;\n"
"border-size:0px;\n"
"border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
""));
        Registros_Tab->setTabPosition(QTabWidget::North);
        Registros_Tab->setTabShape(QTabWidget::Rounded);
        Registros_Tab->setIconSize(QSize(25, 25));
        Registros_Tab->setElideMode(Qt::ElideLeft);
        Registros_Tab->setUsesScrollButtons(false);
        Registros_Tab->setDocumentMode(true);
        Registros_Tab->setTabsClosable(false);
        Registros_Tab->setMovable(false);
        Individual = new QWidget();
        Individual->setObjectName(QStringLiteral("Individual"));
        Registros_Ind = new QTableWidget(Individual);
        if (Registros_Ind->columnCount() < 10)
            Registros_Ind->setColumnCount(10);
        QFont font7;
        font7.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font7);
        Registros_Ind->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        Registros_Ind->setObjectName(QStringLiteral("Registros_Ind"));
        Registros_Ind->setGeometry(QRect(25, 109, 1521, 641));
        Registros_Ind->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        Registros_Ind->setLineWidth(1);
        Registros_Ind->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        Registros_Ind->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Registros_Ind->setShowGrid(true);
        Registros_Ind->setGridStyle(Qt::SolidLine);
        Registros_Ind->setRowCount(0);
        Registros_Ind->horizontalHeader()->setVisible(false);
        Registros_Ind->horizontalHeader()->setCascadingSectionResizes(false);
        Registros_Ind->horizontalHeader()->setDefaultSectionSize(152);
        Registros_Ind->horizontalHeader()->setHighlightSections(true);
        Registros_Ind->verticalHeader()->setVisible(false);
        RegInd_Print = new QPushButton(Individual);
        RegInd_Print->setObjectName(QStringLiteral("RegInd_Print"));
        RegInd_Print->setGeometry(QRect(120, 20, 180, 41));
        RegInd_Print->setFont(font5);
        RegInd_Print->setToolTipDuration(-1);
        RegInd_Print->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        RegInd_Ciclo_CB = new QComboBox(Individual);
        RegInd_Ciclo_CB->setObjectName(QStringLiteral("RegInd_Ciclo_CB"));
        RegInd_Ciclo_CB->setGeometry(QRect(420, 30, 285, 30));
        RegInd_Ciclo_CB->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;\n"
"background-color:white;"));
        RegInd_Ciclo_CB->setEditable(true);
        Ciclo_Ind = new QLabel(Individual);
        Ciclo_Ind->setObjectName(QStringLiteral("Ciclo_Ind"));
        Ciclo_Ind->setGeometry(QRect(320, 30, 76, 30));
        Ciclo_Ind->setFont(font5);
        Ciclo_Ind->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind->setAlignment(Qt::AlignCenter);
        Prod_Ind = new QLabel(Individual);
        Prod_Ind->setObjectName(QStringLiteral("Prod_Ind"));
        Prod_Ind->setGeometry(QRect(760, 30, 131, 30));
        Prod_Ind->setFont(font5);
        Prod_Ind->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Prod_Ind->setAlignment(Qt::AlignCenter);
        RegInd_Prod_CB = new QComboBox(Individual);
        RegInd_Prod_CB->setObjectName(QStringLiteral("RegInd_Prod_CB"));
        RegInd_Prod_CB->setGeometry(QRect(890, 30, 285, 30));
        RegInd_Prod_CB->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;\n"
"background-color:white;"));
        RegInd_Prod_CB->setEditable(false);
        RegInd_Prod_CB->setFrame(true);
        Ciclo_Ind_2 = new QLabel(Individual);
        Ciclo_Ind_2->setObjectName(QStringLiteral("Ciclo_Ind_2"));
        Ciclo_Ind_2->setGeometry(QRect(60, 80, 76, 30));
        Ciclo_Ind_2->setFont(font5);
        Ciclo_Ind_2->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_2->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_2->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_3 = new QLabel(Individual);
        Ciclo_Ind_3->setObjectName(QStringLiteral("Ciclo_Ind_3"));
        Ciclo_Ind_3->setGeometry(QRect(220, 80, 76, 30));
        Ciclo_Ind_3->setFont(font5);
        Ciclo_Ind_3->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_3->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_3->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_5 = new QLabel(Individual);
        Ciclo_Ind_5->setObjectName(QStringLiteral("Ciclo_Ind_5"));
        Ciclo_Ind_5->setGeometry(QRect(370, 80, 121, 30));
        Ciclo_Ind_5->setFont(font5);
        Ciclo_Ind_5->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_5->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_5->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_6 = new QLabel(Individual);
        Ciclo_Ind_6->setObjectName(QStringLiteral("Ciclo_Ind_6"));
        Ciclo_Ind_6->setGeometry(QRect(530, 80, 121, 30));
        Ciclo_Ind_6->setFont(font5);
        Ciclo_Ind_6->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_6->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_6->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_7 = new QLabel(Individual);
        Ciclo_Ind_7->setObjectName(QStringLiteral("Ciclo_Ind_7"));
        Ciclo_Ind_7->setGeometry(QRect(690, 80, 121, 30));
        Ciclo_Ind_7->setFont(font5);
        Ciclo_Ind_7->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_7->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_7->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_8 = new QLabel(Individual);
        Ciclo_Ind_8->setObjectName(QStringLiteral("Ciclo_Ind_8"));
        Ciclo_Ind_8->setGeometry(QRect(860, 80, 121, 30));
        Ciclo_Ind_8->setFont(font5);
        Ciclo_Ind_8->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_8->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_8->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_9 = new QLabel(Individual);
        Ciclo_Ind_9->setObjectName(QStringLiteral("Ciclo_Ind_9"));
        Ciclo_Ind_9->setGeometry(QRect(1020, 80, 121, 30));
        Ciclo_Ind_9->setFont(font5);
        Ciclo_Ind_9->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_9->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_9->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_10 = new QLabel(Individual);
        Ciclo_Ind_10->setObjectName(QStringLiteral("Ciclo_Ind_10"));
        Ciclo_Ind_10->setGeometry(QRect(1190, 80, 121, 30));
        Ciclo_Ind_10->setFont(font5);
        Ciclo_Ind_10->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_10->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_10->setAlignment(Qt::AlignCenter);
        Ciclo_Ind_11 = new QLabel(Individual);
        Ciclo_Ind_11->setObjectName(QStringLiteral("Ciclo_Ind_11"));
        Ciclo_Ind_11->setGeometry(QRect(1370, 80, 121, 30));
        Ciclo_Ind_11->setFont(font5);
        Ciclo_Ind_11->setLayoutDirection(Qt::LeftToRight);
        Ciclo_Ind_11->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Ind_11->setAlignment(Qt::AlignCenter);
        label_48 = new QLabel(Individual);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(1020, 800, 171, 35));
        label_48->setFont(font5);
        label_48->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_48->setAlignment(Qt::AlignCenter);
        label_51 = new QLabel(Individual);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(1360, 800, 71, 35));
        label_51->setFont(font5);
        label_51->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_51->setAlignment(Qt::AlignCenter);
        GranoEntregado = new QLabel(Individual);
        GranoEntregado->setObjectName(QStringLiteral("GranoEntregado"));
        GranoEntregado->setGeometry(QRect(1180, 800, 191, 35));
        GranoEntregado->setFont(font5);
        GranoEntregado->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"color:red;"));
        GranoEntregado->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Registros_Tab->addTab(Individual, QString());
        Ciclo_Ind_7->raise();
        Ciclo_Ind_8->raise();
        Ciclo_Ind_9->raise();
        Ciclo_Ind_10->raise();
        Ciclo_Ind_11->raise();
        RegInd_Print->raise();
        RegInd_Ciclo_CB->raise();
        Ciclo_Ind->raise();
        Prod_Ind->raise();
        RegInd_Prod_CB->raise();
        Ciclo_Ind_2->raise();
        Ciclo_Ind_3->raise();
        Ciclo_Ind_5->raise();
        Ciclo_Ind_6->raise();
        Registros_Ind->raise();
        label_48->raise();
        label_51->raise();
        GranoEntregado->raise();
        General = new QWidget();
        General->setObjectName(QStringLiteral("General"));
        Ciclo_Gen = new QLabel(General);
        Ciclo_Gen->setObjectName(QStringLiteral("Ciclo_Gen"));
        Ciclo_Gen->setGeometry(QRect(570, 35, 71, 23));
        Ciclo_Gen->setFont(font5);
        Ciclo_Gen->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"font:20px;"));
        Ciclo_Gen->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RegGen_Ciclo_CB = new QComboBox(General);
        RegGen_Ciclo_CB->setObjectName(QStringLiteral("RegGen_Ciclo_CB"));
        RegGen_Ciclo_CB->setGeometry(QRect(650, 30, 285, 30));
        RegGen_Ciclo_CB->setStyleSheet(QLatin1String("border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:4px;\n"
"background-color:white;"));
        RegGen_Ciclo_CB->setEditable(true);
        RegGen_Ciclo_CB->setMaxCount(20);
        Registros_General = new QTableWidget(General);
        Registros_General->setObjectName(QStringLiteral("Registros_General"));
        Registros_General->setEnabled(true);
        Registros_General->setGeometry(QRect(25, 129, 1521, 641));
        Registros_General->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        Registros_General->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        Registros_General->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Registros_General->setShowGrid(true);
        Registros_General->horizontalHeader()->setVisible(false);
        Registros_General->horizontalHeader()->setDefaultSectionSize(160);
        Registros_General->horizontalHeader()->setMinimumSectionSize(30);
        Registros_General->verticalHeader()->setVisible(false);
        RegGen_Print = new QPushButton(General);
        RegGen_Print->setObjectName(QStringLiteral("RegGen_Print"));
        RegGen_Print->setGeometry(QRect(210, 30, 181, 41));
        RegGen_Print->setFont(font5);
        RegGen_Print->setToolTipDuration(-1);
        RegGen_Print->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        layoutWidget = new QWidget(General);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 90, 1115, 50));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(26);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(layoutWidget);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font5);
        label_42->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_42->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_42);

        label_43 = new QLabel(layoutWidget);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setFont(font5);
        label_43->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_43->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_43);

        label_44 = new QLabel(layoutWidget);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setFont(font5);
        label_44->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_44->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_44);

        label_45 = new QLabel(layoutWidget);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setFont(font5);
        label_45->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_45->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_45);

        label_46 = new QLabel(layoutWidget);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setFont(font5);
        label_46->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_46->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_46);

        label_49 = new QLabel(layoutWidget);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setFont(font5);
        label_49->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_49->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_49);

        label_41 = new QLabel(General);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(110, 100, 141, 33));
        label_41->setFont(font5);
        label_41->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_41->setAlignment(Qt::AlignCenter);
        label_47 = new QLabel(General);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(1030, 800, 171, 35));
        label_47->setFont(font5);
        label_47->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_47->setAlignment(Qt::AlignCenter);
        TotalGranoEntregado = new QLabel(General);
        TotalGranoEntregado->setObjectName(QStringLiteral("TotalGranoEntregado"));
        TotalGranoEntregado->setGeometry(QRect(1190, 800, 191, 35));
        TotalGranoEntregado->setFont(font5);
        TotalGranoEntregado->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);\n"
"color:red;"));
        TotalGranoEntregado->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_50 = new QLabel(General);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(1370, 800, 71, 35));
        label_50->setFont(font5);
        label_50->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_50->setAlignment(Qt::AlignCenter);
        Registros_Tab->addTab(General, QString());
        TotalGranoEntregado->raise();
        Ciclo_Gen->raise();
        RegGen_Ciclo_CB->raise();
        RegGen_Print->raise();
        layoutWidget->raise();
        label_41->raise();
        Registros_General->raise();
        label_47->raise();
        label_50->raise();
        Fondo_2 = new QLabel(page_Registros);
        Fondo_2->setObjectName(QStringLiteral("Fondo_2"));
        Fondo_2->setGeometry(QRect(0, 0, 1611, 1020));
        Fondo_2->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_2->setScaledContents(true);
        SW_Zona_Principal->addWidget(page_Registros);
        Fondo_2->raise();
        frame_19->raise();
        page_Adeudos = new QWidget();
        page_Adeudos->setObjectName(QStringLiteral("page_Adeudos"));
        Panel_Adeudos = new QLabel(page_Adeudos);
        Panel_Adeudos->setObjectName(QStringLiteral("Panel_Adeudos"));
        Panel_Adeudos->setGeometry(QRect(30, 9, 190, 40));
        Panel_Adeudos->setMinimumSize(QSize(0, 0));
        Panel_Adeudos->setMaximumSize(QSize(190, 40));
        QFont font8;
        font8.setFamily(QStringLiteral("Bahnschrift"));
        font8.setPointSize(30);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        Panel_Adeudos->setFont(font8);
        Panel_Adeudos->setStyleSheet(QLatin1String("font: 30pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Adeudos->setFrameShape(QFrame::Box);
        Panel_Adeudos->setFrameShadow(QFrame::Raised);
        Panel_Adeudos->setLineWidth(2);
        Panel_Adeudos->setMidLineWidth(0);
        Panel_Adeudos->setAlignment(Qt::AlignCenter);
        frame_18 = new QFrame(page_Adeudos);
        frame_18->setObjectName(QStringLiteral("frame_18"));
        frame_18->setGeometry(QRect(25, 60, 1491, 911));
        frame_18->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        frame_10 = new QFrame(frame_18);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(50, 215, 440, 150));
        frame_10->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        RetenCuotaConservacion = new QLabel(frame_10);
        RetenCuotaConservacion->setObjectName(QStringLiteral("RetenCuotaConservacion"));
        RetenCuotaConservacion->setGeometry(QRect(20, 10, 261, 27));
        QFont font9;
        font9.setFamily(QStringLiteral("Bahnschrift"));
        font9.setPointSize(16);
        font9.setBold(false);
        font9.setItalic(false);
        font9.setWeight(50);
        RetenCuotaConservacion->setFont(font9);
        RetenCuotaConservacion->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenCuotaConservacion_edit = new QLabel(frame_10);
        RetenCuotaConservacion_edit->setObjectName(QStringLiteral("RetenCuotaConservacion_edit"));
        RetenCuotaConservacion_edit->setGeometry(QRect(320, 10, 81, 20));
        RetenCuotaConservacion_edit->setFont(font9);
        RetenCuotaConservacion_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenCuotaConservacion_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(frame_10);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 10, 23, 27));
        label_10->setFont(font9);
        label_10->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenSecado = new QLabel(frame_10);
        RetenSecado->setObjectName(QStringLiteral("RetenSecado"));
        RetenSecado->setGeometry(QRect(20, 35, 81, 27));
        RetenSecado->setFont(font9);
        RetenSecado->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenPIFSV = new QLabel(frame_10);
        RetenPIFSV->setObjectName(QStringLiteral("RetenPIFSV"));
        RetenPIFSV->setGeometry(QRect(20, 60, 71, 27));
        RetenPIFSV->setFont(font9);
        RetenPIFSV->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenModSanFer = new QLabel(frame_10);
        RetenModSanFer->setObjectName(QStringLiteral("RetenModSanFer"));
        RetenModSanFer->setGeometry(QRect(20, 85, 201, 27));
        RetenModSanFer->setFont(font9);
        RetenModSanFer->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenTotal = new QLabel(frame_10);
        RetenTotal->setObjectName(QStringLiteral("RetenTotal"));
        RetenTotal->setGeometry(QRect(20, 110, 191, 27));
        RetenTotal->setFont(font9);
        RetenTotal->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(frame_10);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(310, 35, 23, 27));
        label_15->setFont(font9);
        label_15->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_16 = new QLabel(frame_10);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(310, 60, 23, 27));
        label_16->setFont(font9);
        label_16->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_18 = new QLabel(frame_10);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(310, 85, 23, 27));
        label_18->setFont(font9);
        label_18->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_19 = new QLabel(frame_10);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(310, 110, 23, 27));
        label_19->setFont(font9);
        label_19->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenSecado_edit = new QLabel(frame_10);
        RetenSecado_edit->setObjectName(QStringLiteral("RetenSecado_edit"));
        RetenSecado_edit->setGeometry(QRect(320, 35, 81, 20));
        RetenSecado_edit->setFont(font9);
        RetenSecado_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenSecado_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenPIFSV_edit = new QLabel(frame_10);
        RetenPIFSV_edit->setObjectName(QStringLiteral("RetenPIFSV_edit"));
        RetenPIFSV_edit->setGeometry(QRect(320, 60, 81, 20));
        RetenPIFSV_edit->setFont(font9);
        RetenPIFSV_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenPIFSV_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenModSanFer_edit = new QLabel(frame_10);
        RetenModSanFer_edit->setObjectName(QStringLiteral("RetenModSanFer_edit"));
        RetenModSanFer_edit->setGeometry(QRect(320, 85, 81, 20));
        RetenModSanFer_edit->setFont(font9);
        RetenModSanFer_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenModSanFer_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenTotal_edit = new QLabel(frame_10);
        RetenTotal_edit->setObjectName(QStringLiteral("RetenTotal_edit"));
        RetenTotal_edit->setGeometry(QRect(320, 110, 81, 20));
        RetenTotal_edit->setFont(font9);
        RetenTotal_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        RetenTotal_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        RetenTotal_edit->raise();
        RetenModSanFer_edit->raise();
        RetenPIFSV_edit->raise();
        RetenSecado_edit->raise();
        RetenCuotaConservacion_edit->raise();
        RetenSecado->raise();
        RetenPIFSV->raise();
        RetenModSanFer->raise();
        RetenTotal->raise();
        label_15->raise();
        label_16->raise();
        label_18->raise();
        label_19->raise();
        RetenCuotaConservacion->raise();
        label_10->raise();
        RetenLiquidaObs = new QLabel(frame_18);
        RetenLiquidaObs->setObjectName(QStringLiteral("RetenLiquidaObs"));
        RetenLiquidaObs->setGeometry(QRect(140, 190, 261, 27));
        RetenLiquidaObs->setFont(font5);
        RetenLiquidaObs->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        RetenLiquidaObs->setAlignment(Qt::AlignCenter);
        frame_11 = new QFrame(frame_18);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(530, 215, 440, 150));
        frame_11->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        Exced_TonsDerecho = new QLabel(frame_11);
        Exced_TonsDerecho->setObjectName(QStringLiteral("Exced_TonsDerecho"));
        Exced_TonsDerecho->setGeometry(QRect(20, 10, 161, 27));
        Exced_TonsDerecho->setFont(font9);
        Exced_TonsDerecho->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_TonsDerecho->setAlignment(Qt::AlignCenter);
        Exced_TonsDerecho_edit = new QLabel(frame_11);
        Exced_TonsDerecho_edit->setObjectName(QStringLiteral("Exced_TonsDerecho_edit"));
        Exced_TonsDerecho_edit->setGeometry(QRect(280, 14, 81, 21));
        Exced_TonsDerecho_edit->setFont(font9);
        Exced_TonsDerecho_edit->setLayoutDirection(Qt::LeftToRight);
        Exced_TonsDerecho_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_TonsDerecho_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Exced_TonsEntregada = new QLabel(frame_11);
        Exced_TonsEntregada->setObjectName(QStringLiteral("Exced_TonsEntregada"));
        Exced_TonsEntregada->setGeometry(QRect(20, 40, 181, 27));
        Exced_TonsEntregada->setFont(font9);
        Exced_TonsEntregada->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_TonsEntregada->setAlignment(Qt::AlignCenter);
        Exced_TonsEntregada_edit = new QLabel(frame_11);
        Exced_TonsEntregada_edit->setObjectName(QStringLiteral("Exced_TonsEntregada_edit"));
        Exced_TonsEntregada_edit->setGeometry(QRect(280, 44, 81, 21));
        Exced_TonsEntregada_edit->setFont(font9);
        Exced_TonsEntregada_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_TonsEntregada_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Exced_TonsExce = new QLabel(frame_11);
        Exced_TonsExce->setObjectName(QStringLiteral("Exced_TonsExce"));
        Exced_TonsExce->setGeometry(QRect(20, 70, 191, 27));
        Exced_TonsExce->setFont(font9);
        Exced_TonsExce->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_TonsExce->setAlignment(Qt::AlignCenter);
        Exced_Pagar = new QLabel(frame_11);
        Exced_Pagar->setObjectName(QStringLiteral("Exced_Pagar"));
        Exced_Pagar->setGeometry(QRect(15, 100, 131, 27));
        Exced_Pagar->setFont(font9);
        Exced_Pagar->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_Pagar->setAlignment(Qt::AlignCenter);
        Exced_TonsExce_edit = new QLabel(frame_11);
        Exced_TonsExce_edit->setObjectName(QStringLiteral("Exced_TonsExce_edit"));
        Exced_TonsExce_edit->setGeometry(QRect(280, 74, 81, 21));
        Exced_TonsExce_edit->setFont(font9);
        Exced_TonsExce_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_TonsExce_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Exced_Pagar_edit = new QLabel(frame_11);
        Exced_Pagar_edit->setObjectName(QStringLiteral("Exced_Pagar_edit"));
        Exced_Pagar_edit->setGeometry(QRect(280, 104, 81, 21));
        Exced_Pagar_edit->setFont(font9);
        Exced_Pagar_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Exced_Pagar_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_123 = new QLabel(frame_11);
        label_123->setObjectName(QStringLiteral("label_123"));
        label_123->setGeometry(QRect(360, 10, 51, 27));
        label_123->setFont(font9);
        label_123->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_123->setAlignment(Qt::AlignCenter);
        label_124 = new QLabel(frame_11);
        label_124->setObjectName(QStringLiteral("label_124"));
        label_124->setGeometry(QRect(360, 40, 51, 27));
        label_124->setFont(font9);
        label_124->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_124->setAlignment(Qt::AlignCenter);
        label_125 = new QLabel(frame_11);
        label_125->setObjectName(QStringLiteral("label_125"));
        label_125->setGeometry(QRect(360, 70, 51, 27));
        label_125->setFont(font9);
        label_125->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_125->setAlignment(Qt::AlignCenter);
        label_126 = new QLabel(frame_11);
        label_126->setObjectName(QStringLiteral("label_126"));
        label_126->setGeometry(QRect(360, 100, 51, 27));
        label_126->setFont(font9);
        label_126->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_126->setAlignment(Qt::AlignCenter);
        Exced_Pagar_edit->raise();
        Exced_TonsDerecho_edit->raise();
        Exced_TonsEntregada_edit->raise();
        Exced_TonsExce_edit->raise();
        Exced_TonsDerecho->raise();
        Exced_TonsEntregada->raise();
        Exced_TonsExce->raise();
        Exced_Pagar->raise();
        label_123->raise();
        label_124->raise();
        label_125->raise();
        label_126->raise();
        CalculoExcedentes = new QLabel(frame_18);
        CalculoExcedentes->setObjectName(QStringLiteral("CalculoExcedentes"));
        CalculoExcedentes->setGeometry(QRect(580, 190, 361, 28));
        CalculoExcedentes->setFont(font5);
        CalculoExcedentes->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        CalculoExcedentes->setAlignment(Qt::AlignCenter);
        ExcedentesCalculo_edit = new QLabel(frame_18);
        ExcedentesCalculo_edit->setObjectName(QStringLiteral("ExcedentesCalculo_edit"));
        ExcedentesCalculo_edit->setGeometry(QRect(750, 190, 71, 27));
        ExcedentesCalculo_edit->setFont(font5);
        ExcedentesCalculo_edit->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        ExcedentesCalculo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_29 = new QFrame(frame_18);
        frame_29->setObjectName(QStringLiteral("frame_29"));
        frame_29->setGeometry(QRect(1010, 215, 440, 150));
        frame_29->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        PrimaTonsCont = new QLabel(frame_29);
        PrimaTonsCont->setObjectName(QStringLiteral("PrimaTonsCont"));
        PrimaTonsCont->setGeometry(QRect(30, 10, 161, 27));
        PrimaTonsCont->setFont(font9);
        PrimaTonsCont->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaTonsCont_edit = new QLabel(frame_29);
        PrimaTonsCont_edit->setObjectName(QStringLiteral("PrimaTonsCont_edit"));
        PrimaTonsCont_edit->setGeometry(QRect(200, 10, 131, 21));
        PrimaTonsCont_edit->setFont(font9);
        PrimaTonsCont_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaTonsCont_edit->setAlignment(Qt::AlignCenter);
        PrimaMontoTon = new QLabel(frame_29);
        PrimaMontoTon->setObjectName(QStringLiteral("PrimaMontoTon"));
        PrimaMontoTon->setGeometry(QRect(30, 40, 121, 27));
        PrimaMontoTon->setFont(font9);
        PrimaMontoTon->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaMontoTon_edit = new QLabel(frame_29);
        PrimaMontoTon_edit->setObjectName(QStringLiteral("PrimaMontoTon_edit"));
        PrimaMontoTon_edit->setGeometry(QRect(200, 40, 131, 21));
        PrimaMontoTon_edit->setFont(font9);
        PrimaMontoTon_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaMontoTon_edit->setAlignment(Qt::AlignCenter);
        PrimaImporte = new QLabel(frame_29);
        PrimaImporte->setObjectName(QStringLiteral("PrimaImporte"));
        PrimaImporte->setGeometry(QRect(30, 70, 91, 27));
        PrimaImporte->setFont(font9);
        PrimaImporte->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaPagar = new QLabel(frame_29);
        PrimaPagar->setObjectName(QStringLiteral("PrimaPagar"));
        PrimaPagar->setGeometry(QRect(30, 110, 131, 27));
        PrimaPagar->setFont(font9);
        PrimaPagar->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaImporte_edit = new QLabel(frame_29);
        PrimaImporte_edit->setObjectName(QStringLiteral("PrimaImporte_edit"));
        PrimaImporte_edit->setGeometry(QRect(200, 70, 131, 21));
        PrimaImporte_edit->setFont(font9);
        PrimaImporte_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaImporte_edit->setAlignment(Qt::AlignCenter);
        PrimaPagar_edit = new QLabel(frame_29);
        PrimaPagar_edit->setObjectName(QStringLiteral("PrimaPagar_edit"));
        PrimaPagar_edit->setGeometry(QRect(200, 110, 131, 21));
        PrimaPagar_edit->setFont(font9);
        PrimaPagar_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        PrimaPagar_edit->setAlignment(Qt::AlignCenter);
        CalculoPrimaCobertura = new QLabel(frame_18);
        CalculoPrimaCobertura->setObjectName(QStringLiteral("CalculoPrimaCobertura"));
        CalculoPrimaCobertura->setGeometry(QRect(1020, 190, 431, 28));
        CalculoPrimaCobertura->setFont(font5);
        CalculoPrimaCobertura->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        CalculoPrimaCobertura->setAlignment(Qt::AlignCenter);
        PrimaCalculoCobertura_edit = new QLabel(frame_18);
        PrimaCalculoCobertura_edit->setObjectName(QStringLiteral("PrimaCalculoCobertura_edit"));
        PrimaCalculoCobertura_edit->setGeometry(QRect(1260, 190, 71, 27));
        PrimaCalculoCobertura_edit->setFont(font5);
        PrimaCalculoCobertura_edit->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        PrimaCalculoCobertura_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_32 = new QFrame(frame_18);
        frame_32->setObjectName(QStringLiteral("frame_32"));
        frame_32->setGeometry(QRect(30, 410, 701, 51));
        frame_32->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        label_129 = new QLabel(frame_32);
        label_129->setObjectName(QStringLiteral("label_129"));
        label_129->setGeometry(QRect(20, 5, 121, 41));
        label_129->setFont(font5);
        label_129->setAlignment(Qt::AlignCenter);
        label_132 = new QLabel(frame_32);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setGeometry(QRect(170, 20, 81, 27));
        label_132->setFont(font5);
        label_132->setAlignment(Qt::AlignCenter);
        label_133 = new QLabel(frame_32);
        label_133->setObjectName(QStringLiteral("label_133"));
        label_133->setGeometry(QRect(280, 20, 91, 27));
        label_133->setFont(font5);
        label_133->setStyleSheet(QStringLiteral(""));
        label_133->setAlignment(Qt::AlignCenter);
        label_134 = new QLabel(frame_32);
        label_134->setObjectName(QStringLiteral("label_134"));
        label_134->setGeometry(QRect(410, 20, 91, 27));
        label_134->setFont(font5);
        label_134->setAlignment(Qt::AlignCenter);
        label_135 = new QLabel(frame_32);
        label_135->setObjectName(QStringLiteral("label_135"));
        label_135->setGeometry(QRect(510, 20, 71, 27));
        label_135->setFont(font5);
        label_135->setAlignment(Qt::AlignCenter);
        label_136 = new QLabel(frame_32);
        label_136->setObjectName(QStringLiteral("label_136"));
        label_136->setGeometry(QRect(580, 20, 121, 27));
        label_136->setFont(font5);
        label_136->setAlignment(Qt::AlignCenter);
        label_129->raise();
        label_132->raise();
        label_133->raise();
        label_134->raise();
        label_136->raise();
        label_135->raise();
        frame_34 = new QFrame(frame_18);
        frame_34->setObjectName(QStringLiteral("frame_34"));
        frame_34->setGeometry(QRect(760, 410, 701, 51));
        frame_34->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);
        label_131 = new QLabel(frame_34);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setGeometry(QRect(10, 5, 131, 41));
        label_131->setFont(font5);
        label_131->setAlignment(Qt::AlignCenter);
        label_142 = new QLabel(frame_34);
        label_142->setObjectName(QStringLiteral("label_142"));
        label_142->setGeometry(QRect(200, 20, 71, 27));
        label_142->setFont(font5);
        label_142->setAlignment(Qt::AlignCenter);
        label_143 = new QLabel(frame_34);
        label_143->setObjectName(QStringLiteral("label_143"));
        label_143->setGeometry(QRect(340, 20, 121, 27));
        label_143->setFont(font5);
        label_143->setAlignment(Qt::AlignCenter);
        label_145 = new QLabel(frame_34);
        label_145->setObjectName(QStringLiteral("label_145"));
        label_145->setGeometry(QRect(560, 20, 91, 27));
        label_145->setFont(font5);
        label_145->setAlignment(Qt::AlignCenter);
        table_Semilla = new QTableWidget(frame_18);
        table_Semilla->setObjectName(QStringLiteral("table_Semilla"));
        table_Semilla->setGeometry(QRect(30, 460, 700, 131));
        table_Semilla->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        table_PagoSorgo = new QTableWidget(frame_18);
        table_PagoSorgo->setObjectName(QStringLiteral("table_PagoSorgo"));
        table_PagoSorgo->setGeometry(QRect(760, 460, 700, 131));
        table_PagoSorgo->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        table_Diesel = new QTableWidget(frame_18);
        table_Diesel->setObjectName(QStringLiteral("table_Diesel"));
        table_Diesel->setGeometry(QRect(30, 680, 700, 121));
        table_Diesel->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(112, 112, 112);\n"
"border-style:solid;\n"
"border-radius:10px;\n"
"background-color:rgb(255,255,255);"));
        frame_35 = new QFrame(frame_18);
        frame_35->setObjectName(QStringLiteral("frame_35"));
        frame_35->setGeometry(QRect(40, 630, 691, 51));
        frame_35->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        label_137 = new QLabel(frame_35);
        label_137->setObjectName(QStringLiteral("label_137"));
        label_137->setGeometry(QRect(10, 10, 131, 41));
        label_137->setFont(font5);
        label_137->setAlignment(Qt::AlignCenter);
        label_146 = new QLabel(frame_35);
        label_146->setObjectName(QStringLiteral("label_146"));
        label_146->setGeometry(QRect(190, 20, 71, 27));
        label_146->setFont(font5);
        label_146->setAlignment(Qt::AlignCenter);
        label_147 = new QLabel(frame_35);
        label_147->setObjectName(QStringLiteral("label_147"));
        label_147->setGeometry(QRect(340, 20, 121, 27));
        label_147->setFont(font5);
        label_147->setAlignment(Qt::AlignCenter);
        label_149 = new QLabel(frame_35);
        label_149->setObjectName(QStringLiteral("label_149"));
        label_149->setGeometry(QRect(570, 20, 91, 27));
        label_149->setFont(font5);
        label_149->setAlignment(Qt::AlignCenter);
        frame_8 = new QFrame(frame_18);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(50, 70, 1350, 101));
        frame_8->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_33 = new QFrame(frame_8);
        frame_33->setObjectName(QStringLiteral("frame_33"));
        frame_33->setGeometry(QRect(10, 10, 1330, 81));
        frame_33->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border:1px;\n"
"border-color:rgb(255,255,255);\n"
"background:white;"));
        frame_33->setFrameShape(QFrame::StyledPanel);
        frame_33->setFrameShadow(QFrame::Plain);
        NoAcciones = new QLabel(frame_33);
        NoAcciones->setObjectName(QStringLiteral("NoAcciones"));
        NoAcciones->setGeometry(QRect(20, 9, 131, 31));
        NoAcciones->setFont(font9);
        NoAcciones->setAlignment(Qt::AlignCenter);
        RetenLiquidaTotal = new QLabel(frame_33);
        RetenLiquidaTotal->setObjectName(QStringLiteral("RetenLiquidaTotal"));
        RetenLiquidaTotal->setGeometry(QRect(190, 2, 141, 56));
        RetenLiquidaTotal->setFont(font9);
        RetenLiquidaTotal->setAlignment(Qt::AlignCenter);
        ExcedentedeCiclo = new QLabel(frame_33);
        ExcedentedeCiclo->setObjectName(QStringLiteral("ExcedentedeCiclo"));
        ExcedentedeCiclo->setGeometry(QRect(350, 14, 161, 31));
        ExcedentedeCiclo->setFont(font9);
        ExcedentedeCiclo->setAlignment(Qt::AlignCenter);
        AnticipoPagoSorgo = new QLabel(frame_33);
        AnticipoPagoSorgo->setObjectName(QStringLiteral("AnticipoPagoSorgo"));
        AnticipoPagoSorgo->setGeometry(QRect(740, 0, 141, 51));
        AnticipoPagoSorgo->setFont(font9);
        AnticipoPagoSorgo->setAlignment(Qt::AlignCenter);
        PagoSemilla = new QLabel(frame_33);
        PagoSemilla->setObjectName(QStringLiteral("PagoSemilla"));
        PagoSemilla->setGeometry(QRect(910, 14, 151, 31));
        PagoSemilla->setFont(font9);
        PagoSemilla->setAlignment(Qt::AlignCenter);
        TotalRetenAdeudos = new QLabel(frame_33);
        TotalRetenAdeudos->setObjectName(QStringLiteral("TotalRetenAdeudos"));
        TotalRetenAdeudos->setGeometry(QRect(1110, -6, 181, 61));
        TotalRetenAdeudos->setFont(font9);
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
        PrimaCobertura->setGeometry(QRect(530, 14, 171, 31));
        PrimaCobertura->setFont(font9);
        PrimaCobertura->setAlignment(Qt::AlignCenter);
        NoAcciones_edit = new QLabel(frame_33);
        NoAcciones_edit->setObjectName(QStringLiteral("NoAcciones_edit"));
        NoAcciones_edit->setGeometry(QRect(20, 50, 131, 31));
        NoAcciones_edit->setFont(font9);
        NoAcciones_edit->setAlignment(Qt::AlignCenter);
        RetenLiquidaTotal_edit = new QLabel(frame_33);
        RetenLiquidaTotal_edit->setObjectName(QStringLiteral("RetenLiquidaTotal_edit"));
        RetenLiquidaTotal_edit->setGeometry(QRect(220, 50, 71, 31));
        RetenLiquidaTotal_edit->setFont(font9);
        RetenLiquidaTotal_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_34 = new QLabel(frame_33);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(200, 50, 21, 31));
        label_34->setFont(font9);
        label_34->setAlignment(Qt::AlignCenter);
        ExcedentedeCiclo_edit = new QLabel(frame_33);
        ExcedentedeCiclo_edit->setObjectName(QStringLiteral("ExcedentedeCiclo_edit"));
        ExcedentedeCiclo_edit->setGeometry(QRect(390, 50, 71, 31));
        ExcedentedeCiclo_edit->setFont(font9);
        ExcedentedeCiclo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_36 = new QLabel(frame_33);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(380, 50, 21, 31));
        label_36->setFont(font9);
        label_36->setAlignment(Qt::AlignCenter);
        PrimaCobertura_edit = new QLabel(frame_33);
        PrimaCobertura_edit->setObjectName(QStringLiteral("PrimaCobertura_edit"));
        PrimaCobertura_edit->setGeometry(QRect(590, 50, 71, 31));
        PrimaCobertura_edit->setFont(font9);
        PrimaCobertura_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_148 = new QLabel(frame_33);
        label_148->setObjectName(QStringLiteral("label_148"));
        label_148->setGeometry(QRect(570, 50, 21, 31));
        label_148->setFont(font9);
        label_148->setAlignment(Qt::AlignCenter);
        AnticipoPagoSorgo_edit = new QLabel(frame_33);
        AnticipoPagoSorgo_edit->setObjectName(QStringLiteral("AnticipoPagoSorgo_edit"));
        AnticipoPagoSorgo_edit->setGeometry(QRect(770, 50, 71, 31));
        AnticipoPagoSorgo_edit->setFont(font9);
        AnticipoPagoSorgo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_150 = new QLabel(frame_33);
        label_150->setObjectName(QStringLiteral("label_150"));
        label_150->setGeometry(QRect(740, 50, 21, 31));
        label_150->setFont(font9);
        label_150->setAlignment(Qt::AlignCenter);
        PagoSemilla_edit = new QLabel(frame_33);
        PagoSemilla_edit->setObjectName(QStringLiteral("PagoSemilla_edit"));
        PagoSemilla_edit->setGeometry(QRect(950, 50, 71, 31));
        PagoSemilla_edit->setFont(font9);
        PagoSemilla_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_152 = new QLabel(frame_33);
        label_152->setObjectName(QStringLiteral("label_152"));
        label_152->setGeometry(QRect(930, 50, 21, 31));
        label_152->setFont(font9);
        label_152->setAlignment(Qt::AlignCenter);
        TotalRetenAdeudos_edit = new QLabel(frame_33);
        TotalRetenAdeudos_edit->setObjectName(QStringLiteral("TotalRetenAdeudos_edit"));
        TotalRetenAdeudos_edit->setGeometry(QRect(1180, 50, 71, 31));
        TotalRetenAdeudos_edit->setFont(font9);
        TotalRetenAdeudos_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_154 = new QLabel(frame_33);
        label_154->setObjectName(QStringLiteral("label_154"));
        label_154->setGeometry(QRect(1150, 50, 21, 31));
        label_154->setFont(font9);
        label_154->setAlignment(Qt::AlignCenter);
        NoAcciones->raise();
        RetenLiquidaTotal->raise();
        ExcedentedeCiclo->raise();
        AnticipoPagoSorgo->raise();
        PagoSemilla->raise();
        TotalRetenAdeudos->raise();
        line_25->raise();
        line_26->raise();
        line_27->raise();
        line_28->raise();
        line_29->raise();
        line_30->raise();
        line_34->raise();
        PrimaCobertura->raise();
        NoAcciones_edit->raise();
        RetenLiquidaTotal_edit->raise();
        label_34->raise();
        ExcedentedeCiclo_edit->raise();
        PrimaCobertura_edit->raise();
        label_148->raise();
        AnticipoPagoSorgo_edit->raise();
        label_150->raise();
        PagoSemilla_edit->raise();
        label_152->raise();
        TotalRetenAdeudos_edit->raise();
        label_154->raise();
        label_36->raise();
        frame_3 = new QFrame(frame_18);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(110, 10, 1271, 41));
        frame_3->setStyleSheet(QLatin1String("font:18px;\n"
"background:transparent;\n"
"border-width:1px;\n"
"border:1px;\n"
"border-color:black;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        N_contrato_reg = new QLineEdit(frame_3);
        N_contrato_reg->setObjectName(QStringLiteral("N_contrato_reg"));
        N_contrato_reg->setGeometry(QRect(1090, 10, 150, 25));
        N_contrato_reg->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        N_contrato_reg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        N_contrato_reg->setReadOnly(true);
        Ciclo_sal = new QLabel(frame_3);
        Ciclo_sal->setObjectName(QStringLiteral("Ciclo_sal"));
        Ciclo_sal->setGeometry(QRect(640, 10, 71, 25));
        Ciclo_sal->setFont(font5);
        Ciclo_sal->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Ciclo_sal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ExcedNoProd_edit = new QLabel(frame_3);
        ExcedNoProd_edit->setObjectName(QStringLiteral("ExcedNoProd_edit"));
        ExcedNoProd_edit->setGeometry(QRect(530, 13, 91, 21));
        ExcedNoProd_edit->setFont(font5);
        ExcedNoProd_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedNoProd_edit->setAlignment(Qt::AlignCenter);
        ExcedNoProd = new QLabel(frame_3);
        ExcedNoProd->setObjectName(QStringLiteral("ExcedNoProd"));
        ExcedNoProd->setGeometry(QRect(430, 10, 141, 27));
        ExcedNoProd->setFont(font5);
        ExcedNoProd->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        ExcedNoProd->setAlignment(Qt::AlignCenter);
        Prod_sal = new QLabel(frame_3);
        Prod_sal->setObjectName(QStringLiteral("Prod_sal"));
        Prod_sal->setGeometry(QRect(20, 10, 111, 29));
        Prod_sal->setFont(font5);
        Prod_sal->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Prod_sal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Ciclo_Sal_CB = new QComboBox(frame_3);
        Ciclo_Sal_CB->setObjectName(QStringLiteral("Ciclo_Sal_CB"));
        Ciclo_Sal_CB->setGeometry(QRect(690, 10, 191, 25));
        Ciclo_Sal_CB->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        N_contrato = new QLabel(frame_3);
        N_contrato->setObjectName(QStringLiteral("N_contrato"));
        N_contrato->setGeometry(QRect(960, 10, 151, 25));
        N_contrato->setFont(font5);
        N_contrato->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        N_contrato->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Prod_sal_CB = new QComboBox(frame_3);
        Prod_sal_CB->setObjectName(QStringLiteral("Prod_sal_CB"));
        Prod_sal_CB->setGeometry(QRect(120, 10, 281, 25));
        Prod_sal_CB->setStyleSheet(QLatin1String("font: 14pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Prod_sal_CB->setFrame(true);
        Totales = new QLabel(frame_18);
        Totales->setObjectName(QStringLiteral("Totales"));
        Totales->setGeometry(QRect(1070, 650, 91, 31));
        Totales->setFont(font5);
        Totales->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        Totales->setAlignment(Qt::AlignCenter);
        Prod_Guardar_2 = new QPushButton(frame_18);
        Prod_Guardar_2->setObjectName(QStringLiteral("Prod_Guardar_2"));
        Prod_Guardar_2->setGeometry(QRect(1010, 830, 181, 61));
        Prod_Guardar_2->setFont(font5);
        Prod_Guardar_2->setToolTipDuration(-1);
        Prod_Guardar_2->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:rgb(200,200,200);\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background:rgb(203, 219, 253);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
""));
        frame_9 = new QFrame(frame_18);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(760, 680, 700, 121));
        frame_9->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        frame_36 = new QFrame(frame_9);
        frame_36->setObjectName(QStringLiteral("frame_36"));
        frame_36->setGeometry(QRect(10, 10, 681, 101));
        frame_36->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border:1px;\n"
"border-color:rgb(255,255,255);\n"
"background:white;"));
        frame_36->setFrameShape(QFrame::StyledPanel);
        frame_36->setFrameShadow(QFrame::Plain);
        LiquidacionGeneralSorgo = new QLabel(frame_36);
        LiquidacionGeneralSorgo->setObjectName(QStringLiteral("LiquidacionGeneralSorgo"));
        LiquidacionGeneralSorgo->setGeometry(QRect(20, 20, 271, 29));
        LiquidacionGeneralSorgo->setFont(font9);
        LiquidacionGeneralSorgo->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        TotalRetencionesAdeudos = new QLabel(frame_36);
        TotalRetencionesAdeudos->setObjectName(QStringLiteral("TotalRetencionesAdeudos"));
        TotalRetencionesAdeudos->setGeometry(QRect(20, 60, 281, 29));
        TotalRetencionesAdeudos->setFont(font9);
        TotalRetencionesAdeudos->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        NetoPagar = new QLabel(frame_36);
        NetoPagar->setObjectName(QStringLiteral("NetoPagar"));
        NetoPagar->setGeometry(QRect(460, 20, 201, 29));
        NetoPagar->setFont(font5);
        NetoPagar->setStyleSheet(QLatin1String("font-size:25px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        NetoPagar->setAlignment(Qt::AlignCenter);
        NetoPagar_edit = new QLabel(frame_36);
        NetoPagar_edit->setObjectName(QStringLiteral("NetoPagar_edit"));
        NetoPagar_edit->setGeometry(QRect(480, 50, 131, 29));
        NetoPagar_edit->setFont(font5);
        NetoPagar_edit->setStyleSheet(QLatin1String("font-size:25px;\n"
"border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        NetoPagar_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TotalRetAdeu_edit = new QLabel(frame_36);
        TotalRetAdeu_edit->setObjectName(QStringLiteral("TotalRetAdeu_edit"));
        TotalRetAdeu_edit->setGeometry(QRect(290, 60, 81, 29));
        TotalRetAdeu_edit->setFont(font9);
        TotalRetAdeu_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        TotalRetAdeu_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LiqGenSorgo_edit = new QLabel(frame_36);
        LiqGenSorgo_edit->setObjectName(QStringLiteral("LiqGenSorgo_edit"));
        LiqGenSorgo_edit->setGeometry(QRect(290, 20, 81, 29));
        LiqGenSorgo_edit->setFont(font9);
        LiqGenSorgo_edit->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        LiqGenSorgo_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_206 = new QLabel(frame_36);
        label_206->setObjectName(QStringLiteral("label_206"));
        label_206->setGeometry(QRect(490, 50, 21, 25));
        label_206->setFont(font9);
        label_206->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_204 = new QLabel(frame_36);
        label_204->setObjectName(QStringLiteral("label_204"));
        label_204->setGeometry(QRect(280, 20, 21, 25));
        label_204->setFont(font9);
        label_204->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        label_202 = new QLabel(frame_36);
        label_202->setObjectName(QStringLiteral("label_202"));
        label_202->setGeometry(QRect(300, 60, 21, 25));
        label_202->setFont(font9);
        label_202->setStyleSheet(QLatin1String("border-radius:0px;\n"
"border-color: rgb(255, 255, 255);"));
        Totales->raise();
        frame_34->raise();
        frame_10->raise();
        RetenLiquidaObs->raise();
        frame_11->raise();
        CalculoExcedentes->raise();
        frame_29->raise();
        CalculoPrimaCobertura->raise();
        PrimaCalculoCobertura_edit->raise();
        frame_32->raise();
        table_Semilla->raise();
        ExcedentesCalculo_edit->raise();
        table_PagoSorgo->raise();
        frame_35->raise();
        table_Diesel->raise();
        frame_8->raise();
        frame_3->raise();
        Prod_Guardar_2->raise();
        frame_9->raise();
        Fondo_3 = new QLabel(page_Adeudos);
        Fondo_3->setObjectName(QStringLiteral("Fondo_3"));
        Fondo_3->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_3->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_3->setScaledContents(true);
        SW_Zona_Principal->addWidget(page_Adeudos);
        Fondo_3->raise();
        Panel_Adeudos->raise();
        frame_18->raise();
        page_Empleados = new QWidget();
        page_Empleados->setObjectName(QStringLiteral("page_Empleados"));
        frame_12 = new QFrame(page_Empleados);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(790, 110, 695, 631));
        frame_12->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        Nombre_Lista_Prod_edit = new QLineEdit(frame_12);
        Nombre_Lista_Prod_edit->setObjectName(QStringLiteral("Nombre_Lista_Prod_edit"));
        Nombre_Lista_Prod_edit->setGeometry(QRect(30, 100, 300, 35));
        Nombre_Lista_Prod_edit->setStyleSheet(QLatin1String("\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Nombre_Lista_Prod_edit->setFrame(true);
        Nombre_Lista_Prod_edit->setReadOnly(false);
        Nombre = new QLabel(frame_12);
        Nombre->setObjectName(QStringLiteral("Nombre"));
        Nombre->setGeometry(QRect(50, 70, 101, 31));
        Nombre->setFont(font5);
        Nombre->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
""));
        Nombre->setAlignment(Qt::AlignCenter);
        Predio_Lista_Prod_edit = new QLineEdit(frame_12);
        Predio_Lista_Prod_edit->setObjectName(QStringLiteral("Predio_Lista_Prod_edit"));
        Predio_Lista_Prod_edit->setGeometry(QRect(370, 100, 300, 35));
        Predio_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Predio_Lista_Prod_edit->setReadOnly(false);
        Predio_Lista_Prod_2 = new QLabel(frame_12);
        Predio_Lista_Prod_2->setObjectName(QStringLiteral("Predio_Lista_Prod_2"));
        Predio_Lista_Prod_2->setGeometry(QRect(380, 70, 91, 31));
        Predio_Lista_Prod_2->setFont(font5);
        Predio_Lista_Prod_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Predio_Lista_Prod_2->setAlignment(Qt::AlignCenter);
        Ciudad_Lista_Prod = new QLabel(frame_12);
        Ciudad_Lista_Prod->setObjectName(QStringLiteral("Ciudad_Lista_Prod"));
        Ciudad_Lista_Prod->setGeometry(QRect(40, 370, 141, 27));
        Ciudad_Lista_Prod->setFont(font5);
        Ciudad_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ciudad_Lista_Prod->setAlignment(Qt::AlignCenter);
        Apellidos_Lista_Prod_edit = new QLineEdit(frame_12);
        Apellidos_Lista_Prod_edit->setObjectName(QStringLiteral("Apellidos_Lista_Prod_edit"));
        Apellidos_Lista_Prod_edit->setGeometry(QRect(30, 190, 300, 35));
        Apellidos_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Apellidos_Lista_Prod_edit->setFrame(true);
        Apellidos_Lista_Prod_edit->setReadOnly(false);
        Tel_Lista_Prod_edit = new QLineEdit(frame_12);
        Tel_Lista_Prod_edit->setObjectName(QStringLiteral("Tel_Lista_Prod_edit"));
        Tel_Lista_Prod_edit->setGeometry(QRect(370, 190, 300, 35));
        Tel_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Tel_Lista_Prod_edit->setMaxLength(1000000);
        Tel_Lista_Prod_edit->setReadOnly(false);
        Acciones_Lista_Prod = new QLabel(frame_12);
        Acciones_Lista_Prod->setObjectName(QStringLiteral("Acciones_Lista_Prod"));
        Acciones_Lista_Prod->setGeometry(QRect(380, 490, 131, 31));
        Acciones_Lista_Prod->setFont(font5);
        Acciones_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Acciones_Lista_Prod->setAlignment(Qt::AlignCenter);
        Email_Lista_Prod_edit = new QLineEdit(frame_12);
        Email_Lista_Prod_edit->setObjectName(QStringLiteral("Email_Lista_Prod_edit"));
        Email_Lista_Prod_edit->setGeometry(QRect(370, 400, 300, 35));
        Email_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Email_Lista_Prod_edit->setReadOnly(false);
        Direccion_Lista_Prod_edit = new QLineEdit(frame_12);
        Direccion_Lista_Prod_edit->setObjectName(QStringLiteral("Direccion_Lista_Prod_edit"));
        Direccion_Lista_Prod_edit->setGeometry(QRect(30, 290, 300, 35));
        Direccion_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Direccion_Lista_Prod_edit->setReadOnly(false);
        Whats_Lista_Prod_edit = new QLineEdit(frame_12);
        Whats_Lista_Prod_edit->setObjectName(QStringLiteral("Whats_Lista_Prod_edit"));
        Whats_Lista_Prod_edit->setGeometry(QRect(370, 290, 300, 35));
        Whats_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Whats_Lista_Prod_edit->setReadOnly(false);
        Direccion_Lista_Prod = new QLabel(frame_12);
        Direccion_Lista_Prod->setObjectName(QStringLiteral("Direccion_Lista_Prod"));
        Direccion_Lista_Prod->setGeometry(QRect(40, 260, 121, 27));
        Direccion_Lista_Prod->setFont(font5);
        Direccion_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Direccion_Lista_Prod->setAlignment(Qt::AlignCenter);
        No_Cliente = new QLabel(frame_12);
        No_Cliente->setObjectName(QStringLiteral("No_Cliente"));
        No_Cliente->setGeometry(QRect(540, 490, 111, 31));
        No_Cliente->setFont(font5);
        No_Cliente->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        No_Cliente->setAlignment(Qt::AlignCenter);
        Apellidos_Lista_Prod = new QLabel(frame_12);
        Apellidos_Lista_Prod->setObjectName(QStringLiteral("Apellidos_Lista_Prod"));
        Apellidos_Lista_Prod->setGeometry(QRect(40, 160, 121, 31));
        Apellidos_Lista_Prod->setFont(font5);
        Apellidos_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Apellidos_Lista_Prod->setAlignment(Qt::AlignCenter);
        Email_Lista_Prod = new QLabel(frame_12);
        Email_Lista_Prod->setObjectName(QStringLiteral("Email_Lista_Prod"));
        Email_Lista_Prod->setGeometry(QRect(380, 370, 81, 27));
        Email_Lista_Prod->setFont(font5);
        Email_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Email_Lista_Prod->setAlignment(Qt::AlignCenter);
        Tel_Lista_Pro = new QLabel(frame_12);
        Tel_Lista_Pro->setObjectName(QStringLiteral("Tel_Lista_Pro"));
        Tel_Lista_Pro->setGeometry(QRect(380, 160, 111, 31));
        Tel_Lista_Pro->setFont(font5);
        Tel_Lista_Pro->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Tel_Lista_Pro->setAlignment(Qt::AlignCenter);
        Ciudad_Lista_Prod_edit = new QLineEdit(frame_12);
        Ciudad_Lista_Prod_edit->setObjectName(QStringLiteral("Ciudad_Lista_Prod_edit"));
        Ciudad_Lista_Prod_edit->setGeometry(QRect(30, 400, 300, 35));
        Ciudad_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Ciudad_Lista_Prod_edit->setReadOnly(false);
        Whats_Lista_Prod = new QLabel(frame_12);
        Whats_Lista_Prod->setObjectName(QStringLiteral("Whats_Lista_Prod"));
        Whats_Lista_Prod->setGeometry(QRect(380, 260, 121, 27));
        Whats_Lista_Prod->setFont(font5);
        Whats_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Whats_Lista_Prod->setAlignment(Qt::AlignCenter);
        No_Cliente_edit = new QLineEdit(frame_12);
        No_Cliente_edit->setObjectName(QStringLiteral("No_Cliente_edit"));
        No_Cliente_edit->setGeometry(QRect(550, 520, 90, 35));
        No_Cliente_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        No_Cliente_edit->setReadOnly(false);
        DatosProductor = new QLabel(frame_12);
        DatosProductor->setObjectName(QStringLiteral("DatosProductor"));
        DatosProductor->setGeometry(QRect(220, 20, 271, 41));
        DatosProductor->setFont(font5);
        DatosProductor->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        DatosProductor->setAlignment(Qt::AlignCenter);
        Acciones_Lista_Prod_edit = new QLineEdit(frame_12);
        Acciones_Lista_Prod_edit->setObjectName(QStringLiteral("Acciones_Lista_Prod_edit"));
        Acciones_Lista_Prod_edit->setGeometry(QRect(400, 520, 90, 35));
        Acciones_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Acciones_Lista_Prod_edit->setReadOnly(false);
        RFC_Lista_Prod_edit = new QLineEdit(frame_12);
        RFC_Lista_Prod_edit->setObjectName(QStringLiteral("RFC_Lista_Prod_edit"));
        RFC_Lista_Prod_edit->setGeometry(QRect(30, 520, 300, 35));
        RFC_Lista_Prod_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        RFC_Lista_Prod_edit->setReadOnly(false);
        RFC_Lista_Prod = new QLabel(frame_12);
        RFC_Lista_Prod->setObjectName(QStringLiteral("RFC_Lista_Prod"));
        RFC_Lista_Prod->setGeometry(QRect(30, 490, 81, 27));
        RFC_Lista_Prod->setFont(font5);
        RFC_Lista_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        RFC_Lista_Prod->setAlignment(Qt::AlignCenter);
        Nombre->raise();
        Predio_Lista_Prod_2->raise();
        Tel_Lista_Pro->raise();
        Apellidos_Lista_Prod->raise();
        No_Cliente->raise();
        Acciones_Lista_Prod->raise();
        Nombre_Lista_Prod_edit->raise();
        Predio_Lista_Prod_edit->raise();
        Ciudad_Lista_Prod->raise();
        Apellidos_Lista_Prod_edit->raise();
        Tel_Lista_Prod_edit->raise();
        Email_Lista_Prod_edit->raise();
        Direccion_Lista_Prod_edit->raise();
        Whats_Lista_Prod_edit->raise();
        Direccion_Lista_Prod->raise();
        Email_Lista_Prod->raise();
        Ciudad_Lista_Prod_edit->raise();
        Whats_Lista_Prod->raise();
        No_Cliente_edit->raise();
        DatosProductor->raise();
        Acciones_Lista_Prod_edit->raise();
        RFC_Lista_Prod_edit->raise();
        RFC_Lista_Prod->raise();
        Prod_Guardar = new QPushButton(page_Empleados);
        Prod_Guardar->setObjectName(QStringLiteral("Prod_Guardar"));
        Prod_Guardar->setGeometry(QRect(850, 810, 181, 61));
        Prod_Guardar->setFont(font5);
        Prod_Guardar->setToolTipDuration(-1);
        Prod_Guardar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        frame_15 = new QFrame(page_Empleados);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setGeometry(QRect(70, 80, 580, 840));
        frame_15->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        Productores_Lista = new QTableWidget(frame_15);
        Productores_Lista->setObjectName(QStringLiteral("Productores_Lista"));
        Productores_Lista->setGeometry(QRect(25, 50, 530, 770));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(Productores_Lista->sizePolicy().hasHeightForWidth());
        Productores_Lista->setSizePolicy(sizePolicy);
        Productores_Lista->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(30, 30, 30);\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"background:white;"));
        Productores_Lista->setFrameShape(QFrame::StyledPanel);
        Productores_Lista->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Productores_Lista->setIconSize(QSize(0, 0));
        Productores_Lista->setGridStyle(Qt::DashDotLine);
        Productores_Lista->horizontalHeader()->setVisible(false);
        Productores_Lista->horizontalHeader()->setDefaultSectionSize(600);
        Productores_Lista->horizontalHeader()->setHighlightSections(true);
        Productores_Lista->verticalHeader()->setVisible(false);
        ListaProductores = new QLabel(frame_15);
        ListaProductores->setObjectName(QStringLiteral("ListaProductores"));
        ListaProductores->setGeometry(QRect(150, 10, 291, 40));
        QFont font10;
        font10.setFamily(QStringLiteral("Bahnschrift"));
        font10.setPointSize(25);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        ListaProductores->setFont(font10);
        ListaProductores->setAutoFillBackground(false);
        ListaProductores->setStyleSheet(QLatin1String("font-size:25pt ;\n"
"border-radius:0px;\n"
"border-color:rgb(237, 237, 237);\n"
"background: transparent;"));
        ListaProductores->setAlignment(Qt::AlignCenter);
        Fondo_4 = new QLabel(page_Empleados);
        Fondo_4->setObjectName(QStringLiteral("Fondo_4"));
        Fondo_4->setGeometry(QRect(0, 0, 1630, 1030));
        Fondo_4->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_4->setScaledContents(true);
        Prod_Limpiar = new QPushButton(page_Empleados);
        Prod_Limpiar->setObjectName(QStringLiteral("Prod_Limpiar"));
        Prod_Limpiar->setGeometry(QRect(1050, 810, 181, 61));
        Prod_Limpiar->setFont(font5);
        Prod_Limpiar->setToolTipDuration(-1);
        Prod_Limpiar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        Prod_Borrar = new QPushButton(page_Empleados);
        Prod_Borrar->setObjectName(QStringLiteral("Prod_Borrar"));
        Prod_Borrar->setGeometry(QRect(1250, 810, 180, 61));
        Prod_Borrar->setFont(font5);
        Prod_Borrar->setToolTipDuration(-1);
        Prod_Borrar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        SW_Zona_Principal->addWidget(page_Empleados);
        Fondo_4->raise();
        frame_12->raise();
        Prod_Guardar->raise();
        frame_15->raise();
        Prod_Limpiar->raise();
        Prod_Borrar->raise();
        page_Compradores = new QWidget();
        page_Compradores->setObjectName(QStringLiteral("page_Compradores"));
        frame_13 = new QFrame(page_Compradores);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(790, 110, 695, 521));
        frame_13->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        Razon_Social = new QLabel(frame_13);
        Razon_Social->setObjectName(QStringLiteral("Razon_Social"));
        Razon_Social->setGeometry(QRect(400, 70, 151, 31));
        Razon_Social->setFont(font5);
        Razon_Social->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Razon_Social->setAlignment(Qt::AlignCenter);
        Contacto_edit = new QLineEdit(frame_13);
        Contacto_edit->setObjectName(QStringLiteral("Contacto_edit"));
        Contacto_edit->setGeometry(QRect(30, 100, 300, 35));
        Contacto_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Contacto_edit->setFrame(true);
        Contacto_edit->setReadOnly(false);
        Contacto = new QLabel(frame_13);
        Contacto->setObjectName(QStringLiteral("Contacto"));
        Contacto->setGeometry(QRect(40, 70, 191, 31));
        Contacto->setFont(font5);
        Contacto->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Contacto->setAlignment(Qt::AlignCenter);
        Razon_Social_edit = new QLineEdit(frame_13);
        Razon_Social_edit->setObjectName(QStringLiteral("Razon_Social_edit"));
        Razon_Social_edit->setGeometry(QRect(370, 100, 300, 35));
        Razon_Social_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Razon_Social_edit->setReadOnly(false);
        Direccion = new QLabel(frame_13);
        Direccion->setObjectName(QStringLiteral("Direccion"));
        Direccion->setGeometry(QRect(50, 160, 111, 31));
        Direccion->setFont(font5);
        Direccion->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Direccion->setAlignment(Qt::AlignCenter);
        Whatsapp = new QLabel(frame_13);
        Whatsapp->setObjectName(QStringLiteral("Whatsapp"));
        Whatsapp->setGeometry(QRect(40, 250, 131, 31));
        Whatsapp->setFont(font5);
        Whatsapp->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Whatsapp->setAlignment(Qt::AlignCenter);
        Direccion_edit = new QLineEdit(frame_13);
        Direccion_edit->setObjectName(QStringLiteral("Direccion_edit"));
        Direccion_edit->setGeometry(QRect(30, 190, 300, 35));
        Direccion_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Direccion_edit->setFrame(true);
        Direccion_edit->setReadOnly(false);
        Telefono_edit = new QLineEdit(frame_13);
        Telefono_edit->setObjectName(QStringLiteral("Telefono_edit"));
        Telefono_edit->setGeometry(QRect(370, 190, 300, 35));
        Telefono_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Telefono_edit->setReadOnly(false);
        Telefono = new QLabel(frame_13);
        Telefono->setObjectName(QStringLiteral("Telefono"));
        Telefono->setGeometry(QRect(390, 160, 131, 31));
        Telefono->setFont(font5);
        Telefono->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Telefono->setAlignment(Qt::AlignCenter);
        Whatsapp_edit = new QLineEdit(frame_13);
        Whatsapp_edit->setObjectName(QStringLiteral("Whatsapp_edit"));
        Whatsapp_edit->setGeometry(QRect(30, 280, 300, 35));
        Whatsapp_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Whatsapp_edit->setFrame(true);
        Whatsapp_edit->setReadOnly(false);
        Email = new QLabel(frame_13);
        Email->setObjectName(QStringLiteral("Email"));
        Email->setGeometry(QRect(390, 250, 101, 31));
        Email->setFont(font5);
        Email->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Email->setAlignment(Qt::AlignCenter);
        Estado_edit = new QLineEdit(frame_13);
        Estado_edit->setObjectName(QStringLiteral("Estado_edit"));
        Estado_edit->setGeometry(QRect(370, 370, 300, 35));
        Estado_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Estado_edit->setReadOnly(false);
        Ciudad_edit = new QLineEdit(frame_13);
        Ciudad_edit->setObjectName(QStringLiteral("Ciudad_edit"));
        Ciudad_edit->setGeometry(QRect(30, 370, 300, 35));
        Ciudad_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Ciudad_edit->setReadOnly(false);
        Email_edit = new QLineEdit(frame_13);
        Email_edit->setObjectName(QStringLiteral("Email_edit"));
        Email_edit->setGeometry(QRect(370, 280, 300, 35));
        Email_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Email_edit->setReadOnly(false);
        Ciudad = new QLabel(frame_13);
        Ciudad->setObjectName(QStringLiteral("Ciudad"));
        Ciudad->setGeometry(QRect(40, 340, 101, 31));
        Ciudad->setFont(font5);
        Ciudad->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ciudad->setAlignment(Qt::AlignCenter);
        Estado = new QLabel(frame_13);
        Estado->setObjectName(QStringLiteral("Estado"));
        Estado->setGeometry(QRect(390, 340, 101, 31));
        Estado->setFont(font5);
        Estado->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Estado->setAlignment(Qt::AlignCenter);
        Comprador = new QLabel(frame_13);
        Comprador->setObjectName(QStringLiteral("Comprador"));
        Comprador->setGeometry(QRect(240, 20, 271, 41));
        Comprador->setFont(font5);
        Comprador->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Comprador->setAlignment(Qt::AlignCenter);
        RFC_edit = new QLineEdit(frame_13);
        RFC_edit->setObjectName(QStringLiteral("RFC_edit"));
        RFC_edit->setGeometry(QRect(30, 460, 300, 35));
        RFC_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        RFC_edit->setReadOnly(false);
        RFC = new QLabel(frame_13);
        RFC->setObjectName(QStringLiteral("RFC"));
        RFC->setGeometry(QRect(40, 430, 101, 31));
        RFC->setFont(font5);
        RFC->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        RFC->setAlignment(Qt::AlignCenter);
        Precio_Ton_edit = new QLineEdit(frame_13);
        Precio_Ton_edit->setObjectName(QStringLiteral("Precio_Ton_edit"));
        Precio_Ton_edit->setGeometry(QRect(370, 460, 300, 35));
        Precio_Ton_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Precio_Ton_edit->setReadOnly(false);
        Precio_Ton = new QLabel(frame_13);
        Precio_Ton->setObjectName(QStringLiteral("Precio_Ton"));
        Precio_Ton->setGeometry(QRect(380, 430, 181, 31));
        Precio_Ton->setFont(font5);
        Precio_Ton->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Precio_Ton->setAlignment(Qt::AlignCenter);
        Estado->raise();
        Email->raise();
        Telefono->raise();
        Razon_Social->raise();
        Contacto->raise();
        Direccion->raise();
        Whatsapp->raise();
        Ciudad->raise();
        RFC->raise();
        Precio_Ton->raise();
        Contacto_edit->raise();
        Razon_Social_edit->raise();
        Direccion_edit->raise();
        Telefono_edit->raise();
        Whatsapp_edit->raise();
        Estado_edit->raise();
        Ciudad_edit->raise();
        Email_edit->raise();
        Comprador->raise();
        RFC_edit->raise();
        Precio_Ton_edit->raise();
        frame_17 = new QFrame(page_Compradores);
        frame_17->setObjectName(QStringLiteral("frame_17"));
        frame_17->setGeometry(QRect(70, 80, 580, 840));
        frame_17->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        Compradores_Lista = new QTableWidget(frame_17);
        Compradores_Lista->setObjectName(QStringLiteral("Compradores_Lista"));
        Compradores_Lista->setGeometry(QRect(25, 50, 530, 770));
        Compradores_Lista->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(30, 30, 30);\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"background:white;"));
        Compradores_Lista->setFrameShape(QFrame::StyledPanel);
        Compradores_Lista->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Compradores_Lista->setIconSize(QSize(0, 0));
        Compradores_Lista->setGridStyle(Qt::DashDotLine);
        Compradores_Lista->horizontalHeader()->setVisible(false);
        Compradores_Lista->horizontalHeader()->setDefaultSectionSize(600);
        Compradores_Lista->horizontalHeader()->setHighlightSections(true);
        Compradores_Lista->verticalHeader()->setVisible(false);
        ListaCompradores = new QLabel(frame_17);
        ListaCompradores->setObjectName(QStringLiteral("ListaCompradores"));
        ListaCompradores->setGeometry(QRect(150, 10, 291, 40));
        ListaCompradores->setFont(font10);
        ListaCompradores->setAutoFillBackground(false);
        ListaCompradores->setStyleSheet(QLatin1String("font-size:25pt ;\n"
"border-radius:0px;\n"
"border-color:rgb(237, 237, 237);\n"
"background: transparent;"));
        ListaCompradores->setAlignment(Qt::AlignCenter);
        Fondo_5 = new QLabel(page_Compradores);
        Fondo_5->setObjectName(QStringLiteral("Fondo_5"));
        Fondo_5->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_5->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_5->setScaledContents(true);
        Comp_Borrar = new QPushButton(page_Compradores);
        Comp_Borrar->setObjectName(QStringLiteral("Comp_Borrar"));
        Comp_Borrar->setGeometry(QRect(1260, 690, 180, 61));
        Comp_Borrar->setFont(font5);
        Comp_Borrar->setToolTipDuration(-1);
        Comp_Borrar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        Comp_Limpiar = new QPushButton(page_Compradores);
        Comp_Limpiar->setObjectName(QStringLiteral("Comp_Limpiar"));
        Comp_Limpiar->setGeometry(QRect(1050, 690, 181, 61));
        Comp_Limpiar->setFont(font5);
        Comp_Limpiar->setToolTipDuration(-1);
        Comp_Limpiar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        Comp_Guardar = new QPushButton(page_Compradores);
        Comp_Guardar->setObjectName(QStringLiteral("Comp_Guardar"));
        Comp_Guardar->setGeometry(QRect(850, 690, 181, 61));
        Comp_Guardar->setFont(font5);
        Comp_Guardar->setToolTipDuration(-1);
        Comp_Guardar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        SW_Zona_Principal->addWidget(page_Compradores);
        Fondo_5->raise();
        frame_13->raise();
        frame_17->raise();
        Comp_Borrar->raise();
        Comp_Limpiar->raise();
        Comp_Guardar->raise();
        page_Liquidacion = new QWidget();
        page_Liquidacion->setObjectName(QStringLiteral("page_Liquidacion"));
        frame_4 = new QFrame(page_Liquidacion);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(90, 130, 1368, 775));
        frame_4->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(89, 40, 1221, 71));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        Liq_Prod_CB = new QComboBox(frame_5);
        Liq_Prod_CB->setObjectName(QStringLiteral("Liq_Prod_CB"));
        Liq_Prod_CB->setGeometry(QRect(130, 20, 311, 32));
        Liq_Prod_CB->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Liq_Prod = new QLabel(frame_5);
        Liq_Prod->setObjectName(QStringLiteral("Liq_Prod"));
        Liq_Prod->setGeometry(QRect(20, 20, 111, 31));
        Liq_Prod->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Prod->setAlignment(Qt::AlignCenter);
        Liq_Ciclo = new QLabel(frame_5);
        Liq_Ciclo->setObjectName(QStringLiteral("Liq_Ciclo"));
        Liq_Ciclo->setGeometry(QRect(910, 20, 81, 31));
        Liq_Ciclo->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Ciclo->setAlignment(Qt::AlignCenter);
        Liq_Ciclo_edit = new QLabel(frame_5);
        Liq_Ciclo_edit->setObjectName(QStringLiteral("Liq_Ciclo_edit"));
        Liq_Ciclo_edit->setGeometry(QRect(990, 20, 221, 31));
        Liq_Ciclo_edit->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Ciclo_edit->setAlignment(Qt::AlignCenter);
        Liq_Comp_CB = new QComboBox(frame_5);
        Liq_Comp_CB->setObjectName(QStringLiteral("Liq_Comp_CB"));
        Liq_Comp_CB->setGeometry(QRect(590, 20, 311, 32));
        Liq_Comp_CB->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:2px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Liq_Comp = new QLabel(frame_5);
        Liq_Comp->setObjectName(QStringLiteral("Liq_Comp"));
        Liq_Comp->setGeometry(QRect(460, 20, 131, 31));
        Liq_Comp->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Comp->setAlignment(Qt::AlignCenter);
        frame_20 = new QFrame(frame_4);
        frame_20->setObjectName(QStringLiteral("frame_20"));
        frame_20->setGeometry(QRect(90, 170, 561, 241));
        frame_20->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(150, 150, 150);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        Liq_Boletas_Lista = new QTableWidget(frame_20);
        Liq_Boletas_Lista->setObjectName(QStringLiteral("Liq_Boletas_Lista"));
        Liq_Boletas_Lista->setGeometry(QRect(15, 39, 531, 181));
        Liq_Boletas_Lista->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-radius:0px;\n"
"border:1px;\n"
"border-color:rgb(255,255,255);\n"
"background:white;"));
        Liq_Folio = new QLabel(frame_20);
        Liq_Folio->setObjectName(QStringLiteral("Liq_Folio"));
        Liq_Folio->setGeometry(QRect(50, 10, 81, 31));
        Liq_Folio->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Folio->setAlignment(Qt::AlignCenter);
        Liq_Fecha = new QLabel(frame_20);
        Liq_Fecha->setObjectName(QStringLiteral("Liq_Fecha"));
        Liq_Fecha->setGeometry(QRect(220, 10, 81, 31));
        Liq_Fecha->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Fecha->setAlignment(Qt::AlignCenter);
        Liq_Tons = new QLabel(frame_20);
        Liq_Tons->setObjectName(QStringLiteral("Liq_Tons"));
        Liq_Tons->setGeometry(QRect(370, 10, 101, 31));
        Liq_Tons->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Liq_Tons->setAlignment(Qt::AlignCenter);
        Liq_Tons->raise();
        Liq_Fecha->raise();
        Liq_Folio->raise();
        Liq_Boletas_Lista->raise();
        frame_21 = new QFrame(frame_4);
        frame_21->setObjectName(QStringLiteral("frame_21"));
        frame_21->setGeometry(QRect(660, 170, 630, 241));
        frame_21->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(150, 150, 150);\n"
"background:rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        Liq_Prod_Info = new QLabel(frame_21);
        Liq_Prod_Info->setObjectName(QStringLiteral("Liq_Prod_Info"));
        Liq_Prod_Info->setGeometry(QRect(30, 10, 101, 31));
        Liq_Prod_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Prod_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Proce_Info = new QLabel(frame_21);
        Liq_Proce_Info->setObjectName(QStringLiteral("Liq_Proce_Info"));
        Liq_Proce_Info->setGeometry(QRect(20, 85, 111, 31));
        Liq_Proce_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Proce_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Vehi_Info = new QLabel(frame_21);
        Liq_Vehi_Info->setObjectName(QStringLiteral("Liq_Vehi_Info"));
        Liq_Vehi_Info->setGeometry(QRect(50, 125, 81, 31));
        Liq_Vehi_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Vehi_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Placas_Info = new QLabel(frame_21);
        Liq_Placas_Info->setObjectName(QStringLiteral("Liq_Placas_Info"));
        Liq_Placas_Info->setGeometry(QRect(60, 165, 71, 31));
        Liq_Placas_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Placas_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Chofer_Info = new QLabel(frame_21);
        Liq_Chofer_Info->setObjectName(QStringLiteral("Liq_Chofer_Info"));
        Liq_Chofer_Info->setGeometry(QRect(60, 200, 71, 31));
        Liq_Chofer_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Chofer_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Neto_Info = new QLabel(frame_21);
        Liq_Neto_Info->setObjectName(QStringLiteral("Liq_Neto_Info"));
        Liq_Neto_Info->setGeometry(QRect(400, 165, 61, 31));
        Liq_Neto_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Neto_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Folio_Info = new QLabel(frame_21);
        Liq_Folio_Info->setObjectName(QStringLiteral("Liq_Folio_Info"));
        Liq_Folio_Info->setGeometry(QRect(400, 50, 61, 31));
        Liq_Folio_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Folio_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Fecha_Info = new QLabel(frame_21);
        Liq_Fecha_Info->setObjectName(QStringLiteral("Liq_Fecha_Info"));
        Liq_Fecha_Info->setGeometry(QRect(400, 10, 61, 31));
        Liq_Fecha_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Fecha_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Bruto_Info = new QLabel(frame_21);
        Liq_Bruto_Info->setObjectName(QStringLiteral("Liq_Bruto_Info"));
        Liq_Bruto_Info->setGeometry(QRect(400, 85, 61, 31));
        Liq_Bruto_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Bruto_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Tara_Info = new QLabel(frame_21);
        Liq_Tara_Info->setObjectName(QStringLiteral("Liq_Tara_Info"));
        Liq_Tara_Info->setGeometry(QRect(410, 125, 51, 31));
        Liq_Tara_Info->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Tara_Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Prod_Info_edit = new QLabel(frame_21);
        Liq_Prod_Info_edit->setObjectName(QStringLiteral("Liq_Prod_Info_edit"));
        Liq_Prod_Info_edit->setGeometry(QRect(140, 10, 231, 31));
        Liq_Prod_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Prod_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Proce_Info_edit = new QLabel(frame_21);
        Liq_Proce_Info_edit->setObjectName(QStringLiteral("Liq_Proce_Info_edit"));
        Liq_Proce_Info_edit->setGeometry(QRect(140, 85, 231, 31));
        Liq_Proce_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Proce_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Vehi_Info_edit = new QLabel(frame_21);
        Liq_Vehi_Info_edit->setObjectName(QStringLiteral("Liq_Vehi_Info_edit"));
        Liq_Vehi_Info_edit->setGeometry(QRect(140, 125, 231, 31));
        Liq_Vehi_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Vehi_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Placas_Info_edit = new QLabel(frame_21);
        Liq_Placas_Info_edit->setObjectName(QStringLiteral("Liq_Placas_Info_edit"));
        Liq_Placas_Info_edit->setGeometry(QRect(140, 165, 231, 31));
        Liq_Placas_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Placas_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Chofer_Info_edit = new QLabel(frame_21);
        Liq_Chofer_Info_edit->setObjectName(QStringLiteral("Liq_Chofer_Info_edit"));
        Liq_Chofer_Info_edit->setGeometry(QRect(140, 200, 231, 31));
        Liq_Chofer_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Chofer_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Fecha_Info_edit = new QLabel(frame_21);
        Liq_Fecha_Info_edit->setObjectName(QStringLiteral("Liq_Fecha_Info_edit"));
        Liq_Fecha_Info_edit->setGeometry(QRect(460, 10, 141, 31));
        Liq_Fecha_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Fecha_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Folio_Info_edit = new QLabel(frame_21);
        Liq_Folio_Info_edit->setObjectName(QStringLiteral("Liq_Folio_Info_edit"));
        Liq_Folio_Info_edit->setGeometry(QRect(480, 50, 101, 31));
        Liq_Folio_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Folio_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Bruto_Info_edit = new QLabel(frame_21);
        Liq_Bruto_Info_edit->setObjectName(QStringLiteral("Liq_Bruto_Info_edit"));
        Liq_Bruto_Info_edit->setGeometry(QRect(480, 85, 101, 31));
        Liq_Bruto_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Bruto_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Tara_Info_edit = new QLabel(frame_21);
        Liq_Tara_Info_edit->setObjectName(QStringLiteral("Liq_Tara_Info_edit"));
        Liq_Tara_Info_edit->setGeometry(QRect(480, 125, 101, 31));
        Liq_Tara_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Tara_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Neto_Info_edit = new QLabel(frame_21);
        Liq_Neto_Info_edit->setObjectName(QStringLiteral("Liq_Neto_Info_edit"));
        Liq_Neto_Info_edit->setGeometry(QRect(480, 165, 101, 31));
        Liq_Neto_Info_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Neto_Info_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Dedc_Humedad = new QLabel(frame_21);
        Liq_Dedc_Humedad->setObjectName(QStringLiteral("Liq_Dedc_Humedad"));
        Liq_Dedc_Humedad->setGeometry(QRect(360, 200, 101, 31));
        Liq_Dedc_Humedad->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Dedc_Humedad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Dedc_Humedad_edit = new QLabel(frame_21);
        Liq_Dedc_Humedad_edit->setObjectName(QStringLiteral("Liq_Dedc_Humedad_edit"));
        Liq_Dedc_Humedad_edit->setGeometry(QRect(480, 200, 131, 31));
        Liq_Dedc_Humedad_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Dedc_Humedad_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_NoProd = new QLabel(frame_21);
        Liq_NoProd->setObjectName(QStringLiteral("Liq_NoProd"));
        Liq_NoProd->setGeometry(QRect(10, 50, 121, 31));
        Liq_NoProd->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_NoProd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_NoProd_edit = new QLabel(frame_21);
        Liq_NoProd_edit->setObjectName(QStringLiteral("Liq_NoProd_edit"));
        Liq_NoProd_edit->setGeometry(QRect(140, 50, 231, 31));
        Liq_NoProd_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_NoProd_edit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        kgs_10 = new QLabel(frame_21);
        kgs_10->setObjectName(QStringLiteral("kgs_10"));
        kgs_10->setGeometry(QRect(580, 84, 50, 31));
        kgs_10->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_10->setAlignment(Qt::AlignCenter);
        kgs_11 = new QLabel(frame_21);
        kgs_11->setObjectName(QStringLiteral("kgs_11"));
        kgs_11->setGeometry(QRect(580, 125, 50, 31));
        kgs_11->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_11->setAlignment(Qt::AlignCenter);
        kgs_12 = new QLabel(frame_21);
        kgs_12->setObjectName(QStringLiteral("kgs_12"));
        kgs_12->setGeometry(QRect(580, 165, 50, 31));
        kgs_12->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_12->setAlignment(Qt::AlignCenter);
        frame_23 = new QFrame(frame_4);
        frame_23->setObjectName(QStringLiteral("frame_23"));
        frame_23->setGeometry(QRect(120, 470, 320, 190));
        frame_23->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(150, 150, 150);\n"
"background:rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        Liq_Reten_ConsGrano = new QLabel(frame_23);
        Liq_Reten_ConsGrano->setObjectName(QStringLiteral("Liq_Reten_ConsGrano"));
        Liq_Reten_ConsGrano->setGeometry(QRect(10, 10, 171, 31));
        Liq_Reten_ConsGrano->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_ConsGrano->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Reten_Sanidad = new QLabel(frame_23);
        Liq_Reten_Sanidad->setObjectName(QStringLiteral("Liq_Reten_Sanidad"));
        Liq_Reten_Sanidad->setGeometry(QRect(10, 40, 131, 31));
        Liq_Reten_Sanidad->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_Sanidad->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Reten_IvaSecado = new QLabel(frame_23);
        Liq_Reten_IvaSecado->setObjectName(QStringLiteral("Liq_Reten_IvaSecado"));
        Liq_Reten_IvaSecado->setGeometry(QRect(10, 110, 101, 31));
        Liq_Reten_IvaSecado->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_IvaSecado->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Reten_Total = new QLabel(frame_23);
        Liq_Reten_Total->setObjectName(QStringLiteral("Liq_Reten_Total"));
        Liq_Reten_Total->setGeometry(QRect(10, 150, 161, 31));
        Liq_Reten_Total->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_Total->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Reten_ConsGrano_edit = new QLabel(frame_23);
        Liq_Reten_ConsGrano_edit->setObjectName(QStringLiteral("Liq_Reten_ConsGrano_edit"));
        Liq_Reten_ConsGrano_edit->setGeometry(QRect(210, 10, 100, 31));
        Liq_Reten_ConsGrano_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_ConsGrano_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Reten_Sanidad_edit = new QLabel(frame_23);
        Liq_Reten_Sanidad_edit->setObjectName(QStringLiteral("Liq_Reten_Sanidad_edit"));
        Liq_Reten_Sanidad_edit->setGeometry(QRect(210, 50, 100, 31));
        Liq_Reten_Sanidad_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_Sanidad_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Reten_Secado_edit = new QLabel(frame_23);
        Liq_Reten_Secado_edit->setObjectName(QStringLiteral("Liq_Reten_Secado_edit"));
        Liq_Reten_Secado_edit->setGeometry(QRect(210, 90, 100, 31));
        Liq_Reten_Secado_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_Secado_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Reten_Total_edit = new QLabel(frame_23);
        Liq_Reten_Total_edit->setObjectName(QStringLiteral("Liq_Reten_Total_edit"));
        Liq_Reten_Total_edit->setGeometry(QRect(210, 150, 100, 31));
        Liq_Reten_Total_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_Total_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dlls_1 = new QLabel(frame_23);
        dlls_1->setObjectName(QStringLiteral("dlls_1"));
        dlls_1->setGeometry(QRect(170, 10, 41, 31));
        dlls_1->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        dlls_1->setAlignment(Qt::AlignCenter);
        dlls_3 = new QLabel(frame_23);
        dlls_3->setObjectName(QStringLiteral("dlls_3"));
        dlls_3->setGeometry(QRect(170, 50, 41, 31));
        dlls_3->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        dlls_3->setAlignment(Qt::AlignCenter);
        dlls_5 = new QLabel(frame_23);
        dlls_5->setObjectName(QStringLiteral("dlls_5"));
        dlls_5->setGeometry(QRect(170, 90, 41, 31));
        dlls_5->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        dlls_5->setAlignment(Qt::AlignCenter);
        dlls_6 = new QLabel(frame_23);
        dlls_6->setObjectName(QStringLiteral("dlls_6"));
        dlls_6->setGeometry(QRect(170, 150, 41, 31));
        dlls_6->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        dlls_6->setAlignment(Qt::AlignCenter);
        Liq_Reten_Secado = new QLabel(frame_23);
        Liq_Reten_Secado->setObjectName(QStringLiteral("Liq_Reten_Secado"));
        Liq_Reten_Secado->setGeometry(QRect(10, 80, 71, 31));
        Liq_Reten_Secado->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_Secado->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Reten_IvaSecado_edit = new QLabel(frame_23);
        Liq_Reten_IvaSecado_edit->setObjectName(QStringLiteral("Liq_Reten_IvaSecado_edit"));
        Liq_Reten_IvaSecado_edit->setGeometry(QRect(199, 120, 111, 31));
        Liq_Reten_IvaSecado_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Reten_IvaSecado_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dlls_4 = new QLabel(frame_23);
        dlls_4->setObjectName(QStringLiteral("dlls_4"));
        dlls_4->setGeometry(QRect(170, 120, 41, 31));
        dlls_4->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        dlls_4->setAlignment(Qt::AlignCenter);
        Liq_Reten_ConsGrano->raise();
        Liq_Reten_Sanidad->raise();
        Liq_Reten_Total->raise();
        Liq_Reten_ConsGrano_edit->raise();
        Liq_Reten_Sanidad_edit->raise();
        Liq_Reten_Secado_edit->raise();
        Liq_Reten_Total_edit->raise();
        dlls_1->raise();
        dlls_3->raise();
        dlls_5->raise();
        dlls_6->raise();
        Liq_Reten_IvaSecado->raise();
        Liq_Reten_Secado->raise();
        Liq_Reten_IvaSecado_edit->raise();
        dlls_4->raise();
        frame_24 = new QFrame(frame_4);
        frame_24->setObjectName(QStringLiteral("frame_24"));
        frame_24->setGeometry(QRect(500, 480, 320, 101));
        frame_24->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(150, 150, 150);\n"
"background:rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        Liq_Dedc_Merma = new QLabel(frame_24);
        Liq_Dedc_Merma->setObjectName(QStringLiteral("Liq_Dedc_Merma"));
        Liq_Dedc_Merma->setGeometry(QRect(40, 60, 101, 31));
        Liq_Dedc_Merma->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Dedc_Merma->setAlignment(Qt::AlignCenter);
        Liq_Dedc_Deducciones = new QLabel(frame_24);
        Liq_Dedc_Deducciones->setObjectName(QStringLiteral("Liq_Dedc_Deducciones"));
        Liq_Dedc_Deducciones->setGeometry(QRect(20, 10, 141, 51));
        Liq_Dedc_Deducciones->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Dedc_Deducciones->setAlignment(Qt::AlignCenter);
        Liq_Dedc_Merma_edit = new QLabel(frame_24);
        Liq_Dedc_Merma_edit->setObjectName(QStringLiteral("Liq_Dedc_Merma_edit"));
        Liq_Dedc_Merma_edit->setGeometry(QRect(160, 55, 101, 31));
        Liq_Dedc_Merma_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Dedc_Merma_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Dedc_Deducciones_edit = new QLabel(frame_24);
        Liq_Dedc_Deducciones_edit->setObjectName(QStringLiteral("Liq_Dedc_Deducciones_edit"));
        Liq_Dedc_Deducciones_edit->setGeometry(QRect(160, 15, 100, 31));
        Liq_Dedc_Deducciones_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Dedc_Deducciones_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        kgs_5 = new QLabel(frame_24);
        kgs_5->setObjectName(QStringLiteral("kgs_5"));
        kgs_5->setGeometry(QRect(260, 15, 50, 31));
        kgs_5->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_5->setAlignment(Qt::AlignCenter);
        kgs_6 = new QLabel(frame_24);
        kgs_6->setObjectName(QStringLiteral("kgs_6"));
        kgs_6->setGeometry(QRect(260, 55, 51, 31));
        kgs_6->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_6->setAlignment(Qt::AlignCenter);
        Liq_Liquidacion = new QPushButton(frame_4);
        Liq_Liquidacion->setObjectName(QStringLiteral("Liq_Liquidacion"));
        Liq_Liquidacion->setGeometry(QRect(670, 420, 210, 50));
        Liq_Liquidacion->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        Boletas = new QLabel(frame_4);
        Boletas->setObjectName(QStringLiteral("Boletas"));
        Boletas->setGeometry(QRect(300, 140, 111, 31));
        Boletas->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Boletas->setAlignment(Qt::AlignCenter);
        Retenciones = new QLabel(frame_4);
        Retenciones->setObjectName(QStringLiteral("Retenciones"));
        Retenciones->setGeometry(QRect(140, 430, 221, 31));
        Retenciones->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Retenciones->setAlignment(Qt::AlignCenter);
        Deducciones = new QLabel(frame_4);
        Deducciones->setObjectName(QStringLiteral("Deducciones"));
        Deducciones->setGeometry(QRect(540, 430, 131, 31));
        Deducciones->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Deducciones->setAlignment(Qt::AlignCenter);
        frame_26 = new QFrame(frame_4);
        frame_26->setObjectName(QStringLiteral("frame_26"));
        frame_26->setGeometry(QRect(880, 480, 320, 111));
        frame_26->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(150, 150, 150);\n"
"background:rgb(255, 255, 255);\n"
"border-style:solid;\n"
"border-radius:10px;"));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        Liq_Total_Pagar = new QLabel(frame_26);
        Liq_Total_Pagar->setObjectName(QStringLiteral("Liq_Total_Pagar"));
        Liq_Total_Pagar->setGeometry(QRect(30, 70, 131, 31));
        Liq_Total_Pagar->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Total_Pagar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Total_Pagar_edit = new QLabel(frame_26);
        Liq_Total_Pagar_edit->setObjectName(QStringLiteral("Liq_Total_Pagar_edit"));
        Liq_Total_Pagar_edit->setGeometry(QRect(130, 70, 151, 31));
        Liq_Total_Pagar_edit->setStyleSheet(QLatin1String("font:20px;\n"
"color:red;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Total_Pagar_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Total_PrecioTon = new QLabel(frame_26);
        Liq_Total_PrecioTon->setObjectName(QStringLiteral("Liq_Total_PrecioTon"));
        Liq_Total_PrecioTon->setGeometry(QRect(30, 40, 131, 31));
        Liq_Total_PrecioTon->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Total_PrecioTon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Total_Analizado = new QLabel(frame_26);
        Liq_Total_Analizado->setObjectName(QStringLiteral("Liq_Total_Analizado"));
        Liq_Total_Analizado->setGeometry(QRect(30, 10, 131, 31));
        Liq_Total_Analizado->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Total_Analizado->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Liq_Total_Analizado_edit = new QLabel(frame_26);
        Liq_Total_Analizado_edit->setObjectName(QStringLiteral("Liq_Total_Analizado_edit"));
        Liq_Total_Analizado_edit->setGeometry(QRect(147, 10, 131, 31));
        Liq_Total_Analizado_edit->setStyleSheet(QLatin1String("font:16px;\n"
"color:black;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Total_Analizado_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Liq_Total_PrecioTon_edit = new QLabel(frame_26);
        Liq_Total_PrecioTon_edit->setObjectName(QStringLiteral("Liq_Total_PrecioTon_edit"));
        Liq_Total_PrecioTon_edit->setGeometry(QRect(148, 40, 130, 31));
        Liq_Total_PrecioTon_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Liq_Total_PrecioTon_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        kgs_7 = new QLabel(frame_26);
        kgs_7->setObjectName(QStringLiteral("kgs_7"));
        kgs_7->setGeometry(QRect(270, 10, 50, 31));
        kgs_7->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_7->setAlignment(Qt::AlignCenter);
        kgs_8 = new QLabel(frame_26);
        kgs_8->setObjectName(QStringLiteral("kgs_8"));
        kgs_8->setGeometry(QRect(279, 40, 41, 31));
        kgs_8->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_8->setAlignment(Qt::AlignCenter);
        kgs_9 = new QLabel(frame_26);
        kgs_9->setObjectName(QStringLiteral("kgs_9"));
        kgs_9->setGeometry(QRect(275, 70, 50, 31));
        kgs_9->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        kgs_9->setAlignment(Qt::AlignCenter);
        Liq_Total_Analizado_edit->raise();
        Liq_Total_PrecioTon_edit->raise();
        Liq_Total_Pagar_edit->raise();
        kgs_9->raise();
        Liq_Total_Pagar->raise();
        Liq_Total_PrecioTon->raise();
        Liq_Total_Analizado->raise();
        kgs_7->raise();
        kgs_8->raise();
        Deducciones_2 = new QLabel(frame_4);
        Deducciones_2->setObjectName(QStringLiteral("Deducciones_2"));
        Deducciones_2->setGeometry(QRect(930, 430, 131, 31));
        Deducciones_2->setStyleSheet(QLatin1String("font:16px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: transparent;"));
        Deducciones_2->setAlignment(Qt::AlignCenter);
        Liq_Imp_Boleta = new QPushButton(frame_4);
        Liq_Imp_Boleta->setObjectName(QStringLiteral("Liq_Imp_Boleta"));
        Liq_Imp_Boleta->setGeometry(QRect(1040, 420, 210, 50));
        Liq_Imp_Boleta->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        frame_5->raise();
        frame_21->raise();
        frame_23->raise();
        frame_24->raise();
        Liq_Liquidacion->raise();
        Boletas->raise();
        frame_20->raise();
        Retenciones->raise();
        Deducciones->raise();
        frame_26->raise();
        Deducciones_2->raise();
        Liq_Imp_Boleta->raise();
        Fondo_6 = new QLabel(page_Liquidacion);
        Fondo_6->setObjectName(QStringLiteral("Fondo_6"));
        Fondo_6->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_6->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_6->setScaledContents(true);
        SW_Zona_Principal->addWidget(page_Liquidacion);
        Fondo_6->raise();
        frame_4->raise();
        page_Opciones = new QWidget();
        page_Opciones->setObjectName(QStringLiteral("page_Opciones"));
        Panel_Opciones = new QLabel(page_Opciones);
        Panel_Opciones->setObjectName(QStringLiteral("Panel_Opciones"));
        Panel_Opciones->setGeometry(QRect(20, 20, 230, 40));
        Panel_Opciones->setMinimumSize(QSize(0, 0));
        Panel_Opciones->setMaximumSize(QSize(230, 40));
        Panel_Opciones->setFont(font8);
        Panel_Opciones->setStyleSheet(QLatin1String("font: 30pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Opciones->setFrameShape(QFrame::Box);
        Panel_Opciones->setFrameShadow(QFrame::Raised);
        Panel_Opciones->setLineWidth(2);
        Panel_Opciones->setMidLineWidth(0);
        Panel_Opciones->setAlignment(Qt::AlignCenter);
        frame_16 = new QFrame(page_Opciones);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setGeometry(QRect(260, 70, 1131, 901));
        frame_16->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        frame_28 = new QFrame(frame_16);
        frame_28->setObjectName(QStringLiteral("frame_28"));
        frame_28->setGeometry(QRect(30, 70, 560, 180));
        frame_28->setStyleSheet(QStringLiteral(""));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        Cuotas_Sanidad_edit = new QLineEdit(frame_28);
        Cuotas_Sanidad_edit->setObjectName(QStringLiteral("Cuotas_Sanidad_edit"));
        Cuotas_Sanidad_edit->setGeometry(QRect(330, 20, 151, 31));
        Cuotas_Sanidad_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Cuotas_Sanidad_edit->setAlignment(Qt::AlignCenter);
        Cuotas_Grano_edit = new QLineEdit(frame_28);
        Cuotas_Grano_edit->setObjectName(QStringLiteral("Cuotas_Grano_edit"));
        Cuotas_Grano_edit->setGeometry(QRect(330, 70, 151, 31));
        Cuotas_Grano_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Cuotas_Grano_edit->setAlignment(Qt::AlignCenter);
        Cuotas_Modulo_edit = new QLineEdit(frame_28);
        Cuotas_Modulo_edit->setObjectName(QStringLiteral("Cuotas_Modulo_edit"));
        Cuotas_Modulo_edit->setGeometry(QRect(330, 130, 151, 31));
        Cuotas_Modulo_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Cuotas_Modulo_edit->setAlignment(Qt::AlignCenter);
        Cuotas_Sanidad = new QCheckBox(frame_28);
        Cuotas_Sanidad->setObjectName(QStringLiteral("Cuotas_Sanidad"));
        Cuotas_Sanidad->setGeometry(QRect(30, 20, 190, 31));
        Cuotas_Sanidad->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Cuotas_Grano = new QCheckBox(frame_28);
        Cuotas_Grano->setObjectName(QStringLiteral("Cuotas_Grano"));
        Cuotas_Grano->setGeometry(QRect(30, 70, 280, 40));
        Cuotas_Grano->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Cuotas_Modulo = new QCheckBox(frame_28);
        Cuotas_Modulo->setObjectName(QStringLiteral("Cuotas_Modulo"));
        Cuotas_Modulo->setGeometry(QRect(30, 130, 280, 40));
        Cuotas_Modulo->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Cuotas = new QLabel(frame_16);
        Cuotas->setObjectName(QStringLiteral("Cuotas"));
        Cuotas->setGeometry(QRect(270, 40, 111, 31));
        Cuotas->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Cuotas->setAlignment(Qt::AlignCenter);
        frame_31 = new QFrame(frame_16);
        frame_31->setObjectName(QStringLiteral("frame_31"));
        frame_31->setGeometry(QRect(620, 70, 471, 181));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        Actual = new QCheckBox(frame_31);
        Actual->setObjectName(QStringLiteral("Actual"));
        Actual->setGeometry(QRect(40, 30, 331, 31));
        Actual->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Tipo_Grano_CB = new QComboBox(frame_31);
        Tipo_Grano_CB->setObjectName(QStringLiteral("Tipo_Grano_CB"));
        Tipo_Grano_CB->setGeometry(QRect(240, 130, 201, 31));
        Tipo_Grano_CB->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Tipo_Grano = new QLabel(frame_31);
        Tipo_Grano->setObjectName(QStringLiteral("Tipo_Grano"));
        Tipo_Grano->setGeometry(QRect(40, 130, 161, 31));
        Tipo_Grano->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Tipo_Grano->setAlignment(Qt::AlignCenter);
        Socios_TonsxSocio_edit = new QLineEdit(frame_31);
        Socios_TonsxSocio_edit->setObjectName(QStringLiteral("Socios_TonsxSocio_edit"));
        Socios_TonsxSocio_edit->setGeometry(QRect(260, 80, 161, 31));
        Socios_TonsxSocio_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Socios_TonsxSocio_edit->setAlignment(Qt::AlignCenter);
        Socios_TonsxSocio = new QLabel(frame_31);
        Socios_TonsxSocio->setObjectName(QStringLiteral("Socios_TonsxSocio"));
        Socios_TonsxSocio->setGeometry(QRect(40, 80, 191, 31));
        Socios_TonsxSocio->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Socios_TonsxSocio->setAlignment(Qt::AlignCenter);
        Socios_TonsxSocio->raise();
        Actual->raise();
        Tipo_Grano_CB->raise();
        Tipo_Grano->raise();
        Socios_TonsxSocio_edit->raise();
        otros = new QLabel(frame_16);
        otros->setObjectName(QStringLiteral("otros"));
        otros->setGeometry(QRect(780, 40, 111, 31));
        otros->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        otros->setAlignment(Qt::AlignCenter);
        frame_37 = new QFrame(frame_16);
        frame_37->setObjectName(QStringLiteral("frame_37"));
        frame_37->setGeometry(QRect(30, 300, 781, 371));
        frame_37->setFrameShape(QFrame::StyledPanel);
        frame_37->setFrameShadow(QFrame::Raised);
        User_Add = new QCheckBox(frame_37);
        User_Add->setObjectName(QStringLiteral("User_Add"));
        User_Add->setGeometry(QRect(50, 20, 190, 31));
        User_Add->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_usuario = new QLabel(frame_37);
        User_Add_usuario->setObjectName(QStringLiteral("User_Add_usuario"));
        User_Add_usuario->setGeometry(QRect(34, 70, 111, 31));
        User_Add_usuario->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_usuario->setAlignment(Qt::AlignCenter);
        User_Add_usuario_edit = new QLineEdit(frame_37);
        User_Add_usuario_edit->setObjectName(QStringLiteral("User_Add_usuario_edit"));
        User_Add_usuario_edit->setGeometry(QRect(140, 70, 211, 31));
        User_Add_usuario_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_usuario_edit->setAlignment(Qt::AlignCenter);
        User_Add_pass = new QLabel(frame_37);
        User_Add_pass->setObjectName(QStringLiteral("User_Add_pass"));
        User_Add_pass->setGeometry(QRect(23, 110, 111, 31));
        User_Add_pass->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_pass->setAlignment(Qt::AlignCenter);
        User_Add_pass_edit = new QLineEdit(frame_37);
        User_Add_pass_edit->setObjectName(QStringLiteral("User_Add_pass_edit"));
        User_Add_pass_edit->setGeometry(QRect(140, 110, 211, 31));
        User_Add_pass_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_pass_edit->setAlignment(Qt::AlignCenter);
        User_Add_nombre = new QLabel(frame_37);
        User_Add_nombre->setObjectName(QStringLiteral("User_Add_nombre"));
        User_Add_nombre->setGeometry(QRect(27, 150, 111, 31));
        User_Add_nombre->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_nombre->setAlignment(Qt::AlignCenter);
        User_Add_nombre_edit = new QLineEdit(frame_37);
        User_Add_nombre_edit->setObjectName(QStringLiteral("User_Add_nombre_edit"));
        User_Add_nombre_edit->setGeometry(QRect(140, 150, 211, 31));
        User_Add_nombre_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_nombre_edit->setAlignment(Qt::AlignCenter);
        User_Add_apellidos = new QLabel(frame_37);
        User_Add_apellidos->setObjectName(QStringLiteral("User_Add_apellidos"));
        User_Add_apellidos->setGeometry(QRect(27, 190, 111, 31));
        User_Add_apellidos->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_apellidos->setAlignment(Qt::AlignCenter);
        User_Add_apellidos_edit = new QLineEdit(frame_37);
        User_Add_apellidos_edit->setObjectName(QStringLiteral("User_Add_apellidos_edit"));
        User_Add_apellidos_edit->setGeometry(QRect(140, 190, 211, 31));
        User_Add_apellidos_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_apellidos_edit->setAlignment(Qt::AlignCenter);
        User_Add_direccion = new QLabel(frame_37);
        User_Add_direccion->setObjectName(QStringLiteral("User_Add_direccion"));
        User_Add_direccion->setGeometry(QRect(28, 230, 111, 31));
        User_Add_direccion->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_direccion->setAlignment(Qt::AlignCenter);
        User_Add_direccion_edit = new QLineEdit(frame_37);
        User_Add_direccion_edit->setObjectName(QStringLiteral("User_Add_direccion_edit"));
        User_Add_direccion_edit->setGeometry(QRect(140, 230, 211, 31));
        User_Add_direccion_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_direccion_edit->setAlignment(Qt::AlignCenter);
        User_Add_telefono = new QLabel(frame_37);
        User_Add_telefono->setObjectName(QStringLiteral("User_Add_telefono"));
        User_Add_telefono->setGeometry(QRect(33, 270, 111, 31));
        User_Add_telefono->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_telefono->setAlignment(Qt::AlignCenter);
        User_Add_telefono_edit = new QLineEdit(frame_37);
        User_Add_telefono_edit->setObjectName(QStringLiteral("User_Add_telefono_edit"));
        User_Add_telefono_edit->setGeometry(QRect(140, 270, 211, 31));
        User_Add_telefono_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_telefono_edit->setAlignment(Qt::AlignCenter);
        User_Add_puesto = new QLabel(frame_37);
        User_Add_puesto->setObjectName(QStringLiteral("User_Add_puesto"));
        User_Add_puesto->setGeometry(QRect(48, 310, 91, 31));
        User_Add_puesto->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Add_puesto->setAlignment(Qt::AlignCenter);
        User_Add_puesto_edit = new QLineEdit(frame_37);
        User_Add_puesto_edit->setObjectName(QStringLiteral("User_Add_puesto_edit"));
        User_Add_puesto_edit->setGeometry(QRect(140, 310, 211, 31));
        User_Add_puesto_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Add_puesto_edit->setAlignment(Qt::AlignCenter);
        User_Del = new QCheckBox(frame_37);
        User_Del->setObjectName(QStringLiteral("User_Del"));
        User_Del->setGeometry(QRect(440, 20, 190, 31));
        User_Del->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        User_Del_CB = new QComboBox(frame_37);
        User_Del_CB->setObjectName(QStringLiteral("User_Del_CB"));
        User_Del_CB->setGeometry(QRect(440, 70, 261, 31));
        User_Del_CB->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        User_Del_Push = new QPushButton(frame_37);
        User_Del_Push->setObjectName(QStringLiteral("User_Del_Push"));
        User_Del_Push->setGeometry(QRect(590, 160, 121, 41));
        User_Del_Push->setFont(font5);
        User_Del_Push->setToolTipDuration(-1);
        User_Del_Push->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        User_Add_Push = new QPushButton(frame_37);
        User_Add_Push->setObjectName(QStringLiteral("User_Add_Push"));
        User_Add_Push->setGeometry(QRect(440, 160, 121, 41));
        User_Add_Push->setFont(font5);
        User_Add_Push->setToolTipDuration(-1);
        User_Add_Push->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        otros_2 = new QLabel(frame_16);
        otros_2->setObjectName(QStringLiteral("otros_2"));
        otros_2->setGeometry(QRect(270, 270, 120, 31));
        otros_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        otros_2->setAlignment(Qt::AlignCenter);
        otros->raise();
        Cuotas->raise();
        frame_28->raise();
        otros_2->raise();
        frame_37->raise();
        frame_31->raise();
        Fondo_7 = new QLabel(page_Opciones);
        Fondo_7->setObjectName(QStringLiteral("Fondo_7"));
        Fondo_7->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_7->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_7->setScaledContents(true);
        SW_Zona_Principal->addWidget(page_Opciones);
        Fondo_7->raise();
        Panel_Opciones->raise();
        frame_16->raise();
        page_DrynWet = new QWidget();
        page_DrynWet->setObjectName(QStringLiteral("page_DrynWet"));
        Panel_DrynWet = new QLabel(page_DrynWet);
        Panel_DrynWet->setObjectName(QStringLiteral("Panel_DrynWet"));
        Panel_DrynWet->setGeometry(QRect(20, 20, 291, 40));
        Panel_DrynWet->setMinimumSize(QSize(0, 0));
        Panel_DrynWet->setFont(font8);
        Panel_DrynWet->setStyleSheet(QLatin1String("font: 30pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_DrynWet->setFrameShape(QFrame::Box);
        Panel_DrynWet->setFrameShadow(QFrame::Raised);
        Panel_DrynWet->setLineWidth(2);
        Panel_DrynWet->setMidLineWidth(0);
        Panel_DrynWet->setAlignment(Qt::AlignCenter);
        HumSec = new QFrame(page_DrynWet);
        HumSec->setObjectName(QStringLiteral("HumSec"));
        HumSec->setEnabled(true);
        HumSec->setGeometry(QRect(160, 90, 1211, 851));
        HumSec->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        HumSec->setFrameShape(QFrame::StyledPanel);
        HumSec->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(HumSec);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(530, 45, 171, 31));
        label_12->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_CB1_edit = new QLineEdit(HumSec);
        HumSec_CB1_edit->setObjectName(QStringLiteral("HumSec_CB1_edit"));
        HumSec_CB1_edit->setGeometry(QRect(800, 45, 150, 30));
        HumSec_CB1_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Valores_14 = new QFrame(HumSec);
        Valores_14->setObjectName(QStringLiteral("Valores_14"));
        Valores_14->setGeometry(QRect(40, 100, 171, 321));
        Valores_14->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_14->setFrameShape(QFrame::StyledPanel);
        Valores_14->setFrameShadow(QFrame::Raised);
        HumSec_val149 = new QLabel(Valores_14);
        HumSec_val149->setObjectName(QStringLiteral("HumSec_val149"));
        HumSec_val149->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val149->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val149->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_21 = new QLabel(Valores_14);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 112, 81, 31));
        label_21->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_25 = new QLabel(Valores_14);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 245, 81, 31));
        label_25->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val142 = new QLabel(Valores_14);
        HumSec_val142->setObjectName(QStringLiteral("HumSec_val142"));
        HumSec_val142->setGeometry(QRect(100, 47, 61, 31));
        HumSec_val142->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val142->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(Valores_14);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 13, 81, 31));
        label_14->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_22 = new QLabel(Valores_14);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 144, 81, 31));
        label_22->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val145 = new QLabel(Valores_14);
        HumSec_val145->setObjectName(QStringLiteral("HumSec_val145"));
        HumSec_val145->setGeometry(QRect(100, 144, 61, 31));
        HumSec_val145->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val145->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_24 = new QLabel(Valores_14);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 210, 81, 31));
        label_24->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_26 = new QLabel(Valores_14);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 280, 81, 31));
        label_26->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_23 = new QLabel(Valores_14);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 176, 81, 31));
        label_23->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val147 = new QLabel(Valores_14);
        HumSec_val147->setObjectName(QStringLiteral("HumSec_val147"));
        HumSec_val147->setGeometry(QRect(100, 210, 61, 31));
        HumSec_val147->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val147->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val143 = new QLabel(Valores_14);
        HumSec_val143->setObjectName(QStringLiteral("HumSec_val143"));
        HumSec_val143->setGeometry(QRect(100, 81, 61, 31));
        HumSec_val143->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val143->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val146 = new QLabel(Valores_14);
        HumSec_val146->setObjectName(QStringLiteral("HumSec_val146"));
        HumSec_val146->setGeometry(QRect(100, 176, 61, 31));
        HumSec_val146->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val146->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val141 = new QLabel(Valores_14);
        HumSec_val141->setObjectName(QStringLiteral("HumSec_val141"));
        HumSec_val141->setGeometry(QRect(100, 13, 61, 31));
        HumSec_val141->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val141->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val144 = new QLabel(Valores_14);
        HumSec_val144->setObjectName(QStringLiteral("HumSec_val144"));
        HumSec_val144->setGeometry(QRect(100, 112, 61, 31));
        HumSec_val144->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val144->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_20 = new QLabel(Valores_14);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 81, 81, 31));
        label_20->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_17 = new QLabel(Valores_14);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 47, 81, 31));
        label_17->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val148 = new QLabel(Valores_14);
        HumSec_val148->setObjectName(QStringLiteral("HumSec_val148"));
        HumSec_val148->setGeometry(QRect(100, 245, 61, 31));
        HumSec_val148->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val148->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_CB1 = new QComboBox(HumSec);
        HumSec_CB1->setObjectName(QStringLiteral("HumSec_CB1"));
        HumSec_CB1->setGeometry(QRect(690, 45, 91, 32));
        HumSec_CB1->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background-color:white;"));
        Valores_15 = new QFrame(HumSec);
        Valores_15->setObjectName(QStringLiteral("Valores_15"));
        Valores_15->setGeometry(QRect(240, 100, 171, 321));
        Valores_15->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_15->setFrameShape(QFrame::StyledPanel);
        Valores_15->setFrameShadow(QFrame::Raised);
        HumSec_val159 = new QLabel(Valores_15);
        HumSec_val159->setObjectName(QStringLiteral("HumSec_val159"));
        HumSec_val159->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val159->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val159->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_27 = new QLabel(Valores_15);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 130, 81, 31));
        label_27->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_28 = new QLabel(Valores_15);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 250, 81, 31));
        label_28->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val152 = new QLabel(Valores_15);
        HumSec_val152->setObjectName(QStringLiteral("HumSec_val152"));
        HumSec_val152->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val152->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val152->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_53 = new QLabel(Valores_15);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(10, 40, 81, 31));
        label_53->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val150 = new QLabel(Valores_15);
        HumSec_val150->setObjectName(QStringLiteral("HumSec_val150"));
        HumSec_val150->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val150->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val150->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_55 = new QLabel(Valores_15);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(10, 160, 81, 31));
        label_55->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val155 = new QLabel(Valores_15);
        HumSec_val155->setObjectName(QStringLiteral("HumSec_val155"));
        HumSec_val155->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val155->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val155->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_57 = new QLabel(Valores_15);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(10, 220, 81, 31));
        label_57->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_58 = new QLabel(Valores_15);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(10, 280, 81, 31));
        label_58->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_59 = new QLabel(Valores_15);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(10, 190, 81, 31));
        label_59->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val157 = new QLabel(Valores_15);
        HumSec_val157->setObjectName(QStringLiteral("HumSec_val157"));
        HumSec_val157->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val157->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val157->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val153 = new QLabel(Valores_15);
        HumSec_val153->setObjectName(QStringLiteral("HumSec_val153"));
        HumSec_val153->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val153->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val153->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val156 = new QLabel(Valores_15);
        HumSec_val156->setObjectName(QStringLiteral("HumSec_val156"));
        HumSec_val156->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val156->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val156->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val151 = new QLabel(Valores_15);
        HumSec_val151->setObjectName(QStringLiteral("HumSec_val151"));
        HumSec_val151->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val151->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val151->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val154 = new QLabel(Valores_15);
        HumSec_val154->setObjectName(QStringLiteral("HumSec_val154"));
        HumSec_val154->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val154->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val154->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_65 = new QLabel(Valores_15);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(10, 100, 81, 31));
        label_65->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_66 = new QLabel(Valores_15);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(10, 70, 81, 31));
        label_66->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_67 = new QLabel(Valores_15);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(10, 10, 81, 31));
        label_67->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val158 = new QLabel(Valores_15);
        HumSec_val158->setObjectName(QStringLiteral("HumSec_val158"));
        HumSec_val158->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val158->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val158->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_16 = new QFrame(HumSec);
        Valores_16->setObjectName(QStringLiteral("Valores_16"));
        Valores_16->setGeometry(QRect(440, 100, 171, 321));
        Valores_16->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_16->setFrameShape(QFrame::StyledPanel);
        Valores_16->setFrameShadow(QFrame::Raised);
        HumSec_val169 = new QLabel(Valores_16);
        HumSec_val169->setObjectName(QStringLiteral("HumSec_val169"));
        HumSec_val169->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val169->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val169->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_70 = new QLabel(Valores_16);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(10, 130, 81, 31));
        label_70->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_71 = new QLabel(Valores_16);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(10, 250, 81, 31));
        label_71->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val162 = new QLabel(Valores_16);
        HumSec_val162->setObjectName(QStringLiteral("HumSec_val162"));
        HumSec_val162->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val162->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val162->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_73 = new QLabel(Valores_16);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(10, 40, 81, 31));
        label_73->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val160 = new QLabel(Valores_16);
        HumSec_val160->setObjectName(QStringLiteral("HumSec_val160"));
        HumSec_val160->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val160->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val160->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_75 = new QLabel(Valores_16);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setGeometry(QRect(10, 160, 81, 31));
        label_75->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val165 = new QLabel(Valores_16);
        HumSec_val165->setObjectName(QStringLiteral("HumSec_val165"));
        HumSec_val165->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val165->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val165->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_77 = new QLabel(Valores_16);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(10, 220, 81, 31));
        label_77->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_78 = new QLabel(Valores_16);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setGeometry(QRect(10, 280, 81, 31));
        label_78->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_79 = new QLabel(Valores_16);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setGeometry(QRect(10, 190, 81, 31));
        label_79->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val167 = new QLabel(Valores_16);
        HumSec_val167->setObjectName(QStringLiteral("HumSec_val167"));
        HumSec_val167->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val167->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val167->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val163 = new QLabel(Valores_16);
        HumSec_val163->setObjectName(QStringLiteral("HumSec_val163"));
        HumSec_val163->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val163->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val163->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val166 = new QLabel(Valores_16);
        HumSec_val166->setObjectName(QStringLiteral("HumSec_val166"));
        HumSec_val166->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val166->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val166->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val161 = new QLabel(Valores_16);
        HumSec_val161->setObjectName(QStringLiteral("HumSec_val161"));
        HumSec_val161->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val161->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val161->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val164 = new QLabel(Valores_16);
        HumSec_val164->setObjectName(QStringLiteral("HumSec_val164"));
        HumSec_val164->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val164->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val164->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_85 = new QLabel(Valores_16);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setGeometry(QRect(10, 100, 81, 31));
        label_85->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_86 = new QLabel(Valores_16);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setGeometry(QRect(10, 70, 81, 31));
        label_86->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_87 = new QLabel(Valores_16);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setGeometry(QRect(10, 10, 81, 31));
        label_87->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val168 = new QLabel(Valores_16);
        HumSec_val168->setObjectName(QStringLiteral("HumSec_val168"));
        HumSec_val168->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val168->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val168->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_17 = new QFrame(HumSec);
        Valores_17->setObjectName(QStringLiteral("Valores_17"));
        Valores_17->setGeometry(QRect(630, 100, 171, 321));
        Valores_17->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_17->setFrameShape(QFrame::StyledPanel);
        Valores_17->setFrameShadow(QFrame::Raised);
        HumSec_val179 = new QLabel(Valores_17);
        HumSec_val179->setObjectName(QStringLiteral("HumSec_val179"));
        HumSec_val179->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val179->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val179->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_90 = new QLabel(Valores_17);
        label_90->setObjectName(QStringLiteral("label_90"));
        label_90->setGeometry(QRect(10, 130, 81, 31));
        label_90->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_91 = new QLabel(Valores_17);
        label_91->setObjectName(QStringLiteral("label_91"));
        label_91->setGeometry(QRect(10, 250, 81, 31));
        label_91->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val172 = new QLabel(Valores_17);
        HumSec_val172->setObjectName(QStringLiteral("HumSec_val172"));
        HumSec_val172->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val172->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val172->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_93 = new QLabel(Valores_17);
        label_93->setObjectName(QStringLiteral("label_93"));
        label_93->setGeometry(QRect(10, 40, 81, 31));
        label_93->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val170 = new QLabel(Valores_17);
        HumSec_val170->setObjectName(QStringLiteral("HumSec_val170"));
        HumSec_val170->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val170->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val170->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_95 = new QLabel(Valores_17);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setGeometry(QRect(10, 160, 81, 31));
        label_95->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val175 = new QLabel(Valores_17);
        HumSec_val175->setObjectName(QStringLiteral("HumSec_val175"));
        HumSec_val175->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val175->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val175->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_97 = new QLabel(Valores_17);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setGeometry(QRect(10, 220, 81, 31));
        label_97->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_98 = new QLabel(Valores_17);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setGeometry(QRect(10, 280, 81, 31));
        label_98->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_99 = new QLabel(Valores_17);
        label_99->setObjectName(QStringLiteral("label_99"));
        label_99->setGeometry(QRect(10, 190, 81, 31));
        label_99->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val177 = new QLabel(Valores_17);
        HumSec_val177->setObjectName(QStringLiteral("HumSec_val177"));
        HumSec_val177->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val177->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val177->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val173 = new QLabel(Valores_17);
        HumSec_val173->setObjectName(QStringLiteral("HumSec_val173"));
        HumSec_val173->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val173->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val173->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val176 = new QLabel(Valores_17);
        HumSec_val176->setObjectName(QStringLiteral("HumSec_val176"));
        HumSec_val176->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val176->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val176->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val171 = new QLabel(Valores_17);
        HumSec_val171->setObjectName(QStringLiteral("HumSec_val171"));
        HumSec_val171->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val171->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val171->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val174 = new QLabel(Valores_17);
        HumSec_val174->setObjectName(QStringLiteral("HumSec_val174"));
        HumSec_val174->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val174->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val174->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_105 = new QLabel(Valores_17);
        label_105->setObjectName(QStringLiteral("label_105"));
        label_105->setGeometry(QRect(10, 100, 81, 31));
        label_105->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_106 = new QLabel(Valores_17);
        label_106->setObjectName(QStringLiteral("label_106"));
        label_106->setGeometry(QRect(10, 70, 81, 31));
        label_106->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_107 = new QLabel(Valores_17);
        label_107->setObjectName(QStringLiteral("label_107"));
        label_107->setGeometry(QRect(10, 10, 81, 31));
        label_107->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val178 = new QLabel(Valores_17);
        HumSec_val178->setObjectName(QStringLiteral("HumSec_val178"));
        HumSec_val178->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val178->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val178->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_18 = new QFrame(HumSec);
        Valores_18->setObjectName(QStringLiteral("Valores_18"));
        Valores_18->setGeometry(QRect(820, 100, 171, 321));
        Valores_18->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_18->setFrameShape(QFrame::StyledPanel);
        Valores_18->setFrameShadow(QFrame::Raised);
        HumSec_val189 = new QLabel(Valores_18);
        HumSec_val189->setObjectName(QStringLiteral("HumSec_val189"));
        HumSec_val189->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val189->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val189->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_110 = new QLabel(Valores_18);
        label_110->setObjectName(QStringLiteral("label_110"));
        label_110->setGeometry(QRect(10, 130, 81, 31));
        label_110->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_111 = new QLabel(Valores_18);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setGeometry(QRect(10, 250, 81, 31));
        label_111->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val182 = new QLabel(Valores_18);
        HumSec_val182->setObjectName(QStringLiteral("HumSec_val182"));
        HumSec_val182->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val182->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val182->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_113 = new QLabel(Valores_18);
        label_113->setObjectName(QStringLiteral("label_113"));
        label_113->setGeometry(QRect(10, 40, 81, 31));
        label_113->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val180 = new QLabel(Valores_18);
        HumSec_val180->setObjectName(QStringLiteral("HumSec_val180"));
        HumSec_val180->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val180->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val180->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_115 = new QLabel(Valores_18);
        label_115->setObjectName(QStringLiteral("label_115"));
        label_115->setGeometry(QRect(10, 160, 81, 31));
        label_115->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val185 = new QLabel(Valores_18);
        HumSec_val185->setObjectName(QStringLiteral("HumSec_val185"));
        HumSec_val185->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val185->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val185->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_117 = new QLabel(Valores_18);
        label_117->setObjectName(QStringLiteral("label_117"));
        label_117->setGeometry(QRect(10, 220, 81, 31));
        label_117->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_118 = new QLabel(Valores_18);
        label_118->setObjectName(QStringLiteral("label_118"));
        label_118->setGeometry(QRect(10, 280, 81, 31));
        label_118->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_119 = new QLabel(Valores_18);
        label_119->setObjectName(QStringLiteral("label_119"));
        label_119->setGeometry(QRect(10, 190, 81, 31));
        label_119->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val187 = new QLabel(Valores_18);
        HumSec_val187->setObjectName(QStringLiteral("HumSec_val187"));
        HumSec_val187->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val187->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val187->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val183 = new QLabel(Valores_18);
        HumSec_val183->setObjectName(QStringLiteral("HumSec_val183"));
        HumSec_val183->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val183->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val183->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val186 = new QLabel(Valores_18);
        HumSec_val186->setObjectName(QStringLiteral("HumSec_val186"));
        HumSec_val186->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val186->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val186->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val181 = new QLabel(Valores_18);
        HumSec_val181->setObjectName(QStringLiteral("HumSec_val181"));
        HumSec_val181->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val181->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val181->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val184 = new QLabel(Valores_18);
        HumSec_val184->setObjectName(QStringLiteral("HumSec_val184"));
        HumSec_val184->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val184->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val184->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_130 = new QLabel(Valores_18);
        label_130->setObjectName(QStringLiteral("label_130"));
        label_130->setGeometry(QRect(10, 100, 81, 31));
        label_130->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_138 = new QLabel(Valores_18);
        label_138->setObjectName(QStringLiteral("label_138"));
        label_138->setGeometry(QRect(10, 70, 81, 31));
        label_138->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_139 = new QLabel(Valores_18);
        label_139->setObjectName(QStringLiteral("label_139"));
        label_139->setGeometry(QRect(10, 10, 81, 31));
        label_139->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val188 = new QLabel(Valores_18);
        HumSec_val188->setObjectName(QStringLiteral("HumSec_val188"));
        HumSec_val188->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val188->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val188->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_19 = new QFrame(HumSec);
        Valores_19->setObjectName(QStringLiteral("Valores_19"));
        Valores_19->setGeometry(QRect(1010, 100, 171, 321));
        Valores_19->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_19->setFrameShape(QFrame::StyledPanel);
        Valores_19->setFrameShadow(QFrame::Raised);
        HumSec_val199 = new QLabel(Valores_19);
        HumSec_val199->setObjectName(QStringLiteral("HumSec_val199"));
        HumSec_val199->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val199->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val199->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_144 = new QLabel(Valores_19);
        label_144->setObjectName(QStringLiteral("label_144"));
        label_144->setGeometry(QRect(10, 130, 81, 31));
        label_144->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_151 = new QLabel(Valores_19);
        label_151->setObjectName(QStringLiteral("label_151"));
        label_151->setGeometry(QRect(10, 250, 81, 31));
        label_151->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val192 = new QLabel(Valores_19);
        HumSec_val192->setObjectName(QStringLiteral("HumSec_val192"));
        HumSec_val192->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val192->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val192->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_155 = new QLabel(Valores_19);
        label_155->setObjectName(QStringLiteral("label_155"));
        label_155->setGeometry(QRect(10, 40, 81, 31));
        label_155->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val190 = new QLabel(Valores_19);
        HumSec_val190->setObjectName(QStringLiteral("HumSec_val190"));
        HumSec_val190->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val190->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val190->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_157 = new QLabel(Valores_19);
        label_157->setObjectName(QStringLiteral("label_157"));
        label_157->setGeometry(QRect(10, 160, 81, 31));
        label_157->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val195 = new QLabel(Valores_19);
        HumSec_val195->setObjectName(QStringLiteral("HumSec_val195"));
        HumSec_val195->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val195->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val195->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_159 = new QLabel(Valores_19);
        label_159->setObjectName(QStringLiteral("label_159"));
        label_159->setGeometry(QRect(10, 220, 81, 31));
        label_159->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_160 = new QLabel(Valores_19);
        label_160->setObjectName(QStringLiteral("label_160"));
        label_160->setGeometry(QRect(10, 280, 81, 31));
        label_160->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_161 = new QLabel(Valores_19);
        label_161->setObjectName(QStringLiteral("label_161"));
        label_161->setGeometry(QRect(10, 190, 81, 31));
        label_161->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val197 = new QLabel(Valores_19);
        HumSec_val197->setObjectName(QStringLiteral("HumSec_val197"));
        HumSec_val197->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val197->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val197->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val193 = new QLabel(Valores_19);
        HumSec_val193->setObjectName(QStringLiteral("HumSec_val193"));
        HumSec_val193->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val193->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val193->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val196 = new QLabel(Valores_19);
        HumSec_val196->setObjectName(QStringLiteral("HumSec_val196"));
        HumSec_val196->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val196->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val196->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val191 = new QLabel(Valores_19);
        HumSec_val191->setObjectName(QStringLiteral("HumSec_val191"));
        HumSec_val191->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val191->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val191->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val194 = new QLabel(Valores_19);
        HumSec_val194->setObjectName(QStringLiteral("HumSec_val194"));
        HumSec_val194->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val194->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val194->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_167 = new QLabel(Valores_19);
        label_167->setObjectName(QStringLiteral("label_167"));
        label_167->setGeometry(QRect(10, 100, 81, 31));
        label_167->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_168 = new QLabel(Valores_19);
        label_168->setObjectName(QStringLiteral("label_168"));
        label_168->setGeometry(QRect(10, 70, 81, 31));
        label_168->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_169 = new QLabel(Valores_19);
        label_169->setObjectName(QStringLiteral("label_169"));
        label_169->setGeometry(QRect(10, 10, 81, 31));
        label_169->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val198 = new QLabel(Valores_19);
        HumSec_val198->setObjectName(QStringLiteral("HumSec_val198"));
        HumSec_val198->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val198->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val198->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_20 = new QFrame(HumSec);
        Valores_20->setObjectName(QStringLiteral("Valores_20"));
        Valores_20->setGeometry(QRect(40, 440, 171, 321));
        Valores_20->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_20->setFrameShape(QFrame::StyledPanel);
        Valores_20->setFrameShadow(QFrame::Raised);
        HumSec_val209 = new QLabel(Valores_20);
        HumSec_val209->setObjectName(QStringLiteral("HumSec_val209"));
        HumSec_val209->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val209->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val209->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_172 = new QLabel(Valores_20);
        label_172->setObjectName(QStringLiteral("label_172"));
        label_172->setGeometry(QRect(10, 130, 81, 31));
        label_172->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_173 = new QLabel(Valores_20);
        label_173->setObjectName(QStringLiteral("label_173"));
        label_173->setGeometry(QRect(10, 250, 81, 31));
        label_173->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val202 = new QLabel(Valores_20);
        HumSec_val202->setObjectName(QStringLiteral("HumSec_val202"));
        HumSec_val202->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val202->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val202->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_175 = new QLabel(Valores_20);
        label_175->setObjectName(QStringLiteral("label_175"));
        label_175->setGeometry(QRect(10, 40, 81, 31));
        label_175->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val200 = new QLabel(Valores_20);
        HumSec_val200->setObjectName(QStringLiteral("HumSec_val200"));
        HumSec_val200->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val200->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val200->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_177 = new QLabel(Valores_20);
        label_177->setObjectName(QStringLiteral("label_177"));
        label_177->setGeometry(QRect(10, 160, 81, 31));
        label_177->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val205 = new QLabel(Valores_20);
        HumSec_val205->setObjectName(QStringLiteral("HumSec_val205"));
        HumSec_val205->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val205->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val205->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_179 = new QLabel(Valores_20);
        label_179->setObjectName(QStringLiteral("label_179"));
        label_179->setGeometry(QRect(10, 220, 81, 31));
        label_179->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_180 = new QLabel(Valores_20);
        label_180->setObjectName(QStringLiteral("label_180"));
        label_180->setGeometry(QRect(10, 280, 81, 31));
        label_180->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_181 = new QLabel(Valores_20);
        label_181->setObjectName(QStringLiteral("label_181"));
        label_181->setGeometry(QRect(10, 190, 81, 31));
        label_181->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val207 = new QLabel(Valores_20);
        HumSec_val207->setObjectName(QStringLiteral("HumSec_val207"));
        HumSec_val207->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val207->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val207->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val203 = new QLabel(Valores_20);
        HumSec_val203->setObjectName(QStringLiteral("HumSec_val203"));
        HumSec_val203->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val203->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val203->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val206 = new QLabel(Valores_20);
        HumSec_val206->setObjectName(QStringLiteral("HumSec_val206"));
        HumSec_val206->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val206->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val206->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val201 = new QLabel(Valores_20);
        HumSec_val201->setObjectName(QStringLiteral("HumSec_val201"));
        HumSec_val201->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val201->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val201->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val204 = new QLabel(Valores_20);
        HumSec_val204->setObjectName(QStringLiteral("HumSec_val204"));
        HumSec_val204->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val204->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val204->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_187 = new QLabel(Valores_20);
        label_187->setObjectName(QStringLiteral("label_187"));
        label_187->setGeometry(QRect(10, 100, 81, 31));
        label_187->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_188 = new QLabel(Valores_20);
        label_188->setObjectName(QStringLiteral("label_188"));
        label_188->setGeometry(QRect(10, 70, 81, 31));
        label_188->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_189 = new QLabel(Valores_20);
        label_189->setObjectName(QStringLiteral("label_189"));
        label_189->setGeometry(QRect(10, 10, 81, 31));
        label_189->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val208 = new QLabel(Valores_20);
        HumSec_val208->setObjectName(QStringLiteral("HumSec_val208"));
        HumSec_val208->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val208->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val208->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_21 = new QFrame(HumSec);
        Valores_21->setObjectName(QStringLiteral("Valores_21"));
        Valores_21->setGeometry(QRect(240, 440, 171, 321));
        Valores_21->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_21->setFrameShape(QFrame::StyledPanel);
        Valores_21->setFrameShadow(QFrame::Raised);
        HumSec_val219 = new QLabel(Valores_21);
        HumSec_val219->setObjectName(QStringLiteral("HumSec_val219"));
        HumSec_val219->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val219->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val219->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_192 = new QLabel(Valores_21);
        label_192->setObjectName(QStringLiteral("label_192"));
        label_192->setGeometry(QRect(10, 130, 81, 31));
        label_192->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_193 = new QLabel(Valores_21);
        label_193->setObjectName(QStringLiteral("label_193"));
        label_193->setGeometry(QRect(10, 250, 81, 31));
        label_193->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val212 = new QLabel(Valores_21);
        HumSec_val212->setObjectName(QStringLiteral("HumSec_val212"));
        HumSec_val212->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val212->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val212->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_195 = new QLabel(Valores_21);
        label_195->setObjectName(QStringLiteral("label_195"));
        label_195->setGeometry(QRect(10, 40, 81, 31));
        label_195->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val210 = new QLabel(Valores_21);
        HumSec_val210->setObjectName(QStringLiteral("HumSec_val210"));
        HumSec_val210->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val210->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val210->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_197 = new QLabel(Valores_21);
        label_197->setObjectName(QStringLiteral("label_197"));
        label_197->setGeometry(QRect(10, 160, 81, 31));
        label_197->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val215 = new QLabel(Valores_21);
        HumSec_val215->setObjectName(QStringLiteral("HumSec_val215"));
        HumSec_val215->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val215->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val215->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_199 = new QLabel(Valores_21);
        label_199->setObjectName(QStringLiteral("label_199"));
        label_199->setGeometry(QRect(10, 220, 81, 31));
        label_199->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_200 = new QLabel(Valores_21);
        label_200->setObjectName(QStringLiteral("label_200"));
        label_200->setGeometry(QRect(10, 280, 81, 31));
        label_200->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_201 = new QLabel(Valores_21);
        label_201->setObjectName(QStringLiteral("label_201"));
        label_201->setGeometry(QRect(10, 190, 81, 31));
        label_201->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val217 = new QLabel(Valores_21);
        HumSec_val217->setObjectName(QStringLiteral("HumSec_val217"));
        HumSec_val217->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val217->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val217->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val213 = new QLabel(Valores_21);
        HumSec_val213->setObjectName(QStringLiteral("HumSec_val213"));
        HumSec_val213->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val213->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val213->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val216 = new QLabel(Valores_21);
        HumSec_val216->setObjectName(QStringLiteral("HumSec_val216"));
        HumSec_val216->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val216->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val216->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val211 = new QLabel(Valores_21);
        HumSec_val211->setObjectName(QStringLiteral("HumSec_val211"));
        HumSec_val211->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val211->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val211->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val214 = new QLabel(Valores_21);
        HumSec_val214->setObjectName(QStringLiteral("HumSec_val214"));
        HumSec_val214->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val214->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val214->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_210 = new QLabel(Valores_21);
        label_210->setObjectName(QStringLiteral("label_210"));
        label_210->setGeometry(QRect(10, 100, 81, 31));
        label_210->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_211 = new QLabel(Valores_21);
        label_211->setObjectName(QStringLiteral("label_211"));
        label_211->setGeometry(QRect(10, 70, 81, 31));
        label_211->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_212 = new QLabel(Valores_21);
        label_212->setObjectName(QStringLiteral("label_212"));
        label_212->setGeometry(QRect(10, 10, 81, 31));
        label_212->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val218 = new QLabel(Valores_21);
        HumSec_val218->setObjectName(QStringLiteral("HumSec_val218"));
        HumSec_val218->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val218->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val218->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_22 = new QFrame(HumSec);
        Valores_22->setObjectName(QStringLiteral("Valores_22"));
        Valores_22->setGeometry(QRect(440, 440, 171, 321));
        Valores_22->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_22->setFrameShape(QFrame::StyledPanel);
        Valores_22->setFrameShadow(QFrame::Raised);
        HumSec_val229 = new QLabel(Valores_22);
        HumSec_val229->setObjectName(QStringLiteral("HumSec_val229"));
        HumSec_val229->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val229->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val229->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_215 = new QLabel(Valores_22);
        label_215->setObjectName(QStringLiteral("label_215"));
        label_215->setGeometry(QRect(10, 130, 81, 31));
        label_215->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_216 = new QLabel(Valores_22);
        label_216->setObjectName(QStringLiteral("label_216"));
        label_216->setGeometry(QRect(10, 250, 81, 31));
        label_216->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val222 = new QLabel(Valores_22);
        HumSec_val222->setObjectName(QStringLiteral("HumSec_val222"));
        HumSec_val222->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val222->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val222->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_218 = new QLabel(Valores_22);
        label_218->setObjectName(QStringLiteral("label_218"));
        label_218->setGeometry(QRect(10, 40, 81, 31));
        label_218->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val220 = new QLabel(Valores_22);
        HumSec_val220->setObjectName(QStringLiteral("HumSec_val220"));
        HumSec_val220->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val220->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val220->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_220 = new QLabel(Valores_22);
        label_220->setObjectName(QStringLiteral("label_220"));
        label_220->setGeometry(QRect(10, 160, 81, 31));
        label_220->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val225 = new QLabel(Valores_22);
        HumSec_val225->setObjectName(QStringLiteral("HumSec_val225"));
        HumSec_val225->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val225->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val225->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_222 = new QLabel(Valores_22);
        label_222->setObjectName(QStringLiteral("label_222"));
        label_222->setGeometry(QRect(10, 220, 81, 31));
        label_222->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_223 = new QLabel(Valores_22);
        label_223->setObjectName(QStringLiteral("label_223"));
        label_223->setGeometry(QRect(10, 280, 81, 31));
        label_223->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_224 = new QLabel(Valores_22);
        label_224->setObjectName(QStringLiteral("label_224"));
        label_224->setGeometry(QRect(10, 190, 81, 31));
        label_224->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val227 = new QLabel(Valores_22);
        HumSec_val227->setObjectName(QStringLiteral("HumSec_val227"));
        HumSec_val227->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val227->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val227->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val223 = new QLabel(Valores_22);
        HumSec_val223->setObjectName(QStringLiteral("HumSec_val223"));
        HumSec_val223->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val223->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val223->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val226 = new QLabel(Valores_22);
        HumSec_val226->setObjectName(QStringLiteral("HumSec_val226"));
        HumSec_val226->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val226->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val226->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val221 = new QLabel(Valores_22);
        HumSec_val221->setObjectName(QStringLiteral("HumSec_val221"));
        HumSec_val221->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val221->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val221->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val224 = new QLabel(Valores_22);
        HumSec_val224->setObjectName(QStringLiteral("HumSec_val224"));
        HumSec_val224->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val224->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val224->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_230 = new QLabel(Valores_22);
        label_230->setObjectName(QStringLiteral("label_230"));
        label_230->setGeometry(QRect(10, 100, 81, 31));
        label_230->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_231 = new QLabel(Valores_22);
        label_231->setObjectName(QStringLiteral("label_231"));
        label_231->setGeometry(QRect(10, 70, 81, 31));
        label_231->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_232 = new QLabel(Valores_22);
        label_232->setObjectName(QStringLiteral("label_232"));
        label_232->setGeometry(QRect(10, 10, 81, 31));
        label_232->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val228 = new QLabel(Valores_22);
        HumSec_val228->setObjectName(QStringLiteral("HumSec_val228"));
        HumSec_val228->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val228->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val228->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_23 = new QFrame(HumSec);
        Valores_23->setObjectName(QStringLiteral("Valores_23"));
        Valores_23->setGeometry(QRect(630, 440, 171, 321));
        Valores_23->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_23->setFrameShape(QFrame::StyledPanel);
        Valores_23->setFrameShadow(QFrame::Raised);
        HumSec_val239 = new QLabel(Valores_23);
        HumSec_val239->setObjectName(QStringLiteral("HumSec_val239"));
        HumSec_val239->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val239->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val239->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_235 = new QLabel(Valores_23);
        label_235->setObjectName(QStringLiteral("label_235"));
        label_235->setGeometry(QRect(10, 130, 81, 31));
        label_235->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_236 = new QLabel(Valores_23);
        label_236->setObjectName(QStringLiteral("label_236"));
        label_236->setGeometry(QRect(10, 250, 81, 31));
        label_236->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val232 = new QLabel(Valores_23);
        HumSec_val232->setObjectName(QStringLiteral("HumSec_val232"));
        HumSec_val232->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val232->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val232->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_238 = new QLabel(Valores_23);
        label_238->setObjectName(QStringLiteral("label_238"));
        label_238->setGeometry(QRect(10, 40, 81, 31));
        label_238->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val230 = new QLabel(Valores_23);
        HumSec_val230->setObjectName(QStringLiteral("HumSec_val230"));
        HumSec_val230->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val230->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val230->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_240 = new QLabel(Valores_23);
        label_240->setObjectName(QStringLiteral("label_240"));
        label_240->setGeometry(QRect(10, 160, 81, 31));
        label_240->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val235 = new QLabel(Valores_23);
        HumSec_val235->setObjectName(QStringLiteral("HumSec_val235"));
        HumSec_val235->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val235->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val235->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_242 = new QLabel(Valores_23);
        label_242->setObjectName(QStringLiteral("label_242"));
        label_242->setGeometry(QRect(10, 220, 81, 31));
        label_242->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_243 = new QLabel(Valores_23);
        label_243->setObjectName(QStringLiteral("label_243"));
        label_243->setGeometry(QRect(10, 280, 81, 31));
        label_243->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_244 = new QLabel(Valores_23);
        label_244->setObjectName(QStringLiteral("label_244"));
        label_244->setGeometry(QRect(10, 190, 81, 31));
        label_244->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val237 = new QLabel(Valores_23);
        HumSec_val237->setObjectName(QStringLiteral("HumSec_val237"));
        HumSec_val237->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val237->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val237->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val233 = new QLabel(Valores_23);
        HumSec_val233->setObjectName(QStringLiteral("HumSec_val233"));
        HumSec_val233->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val233->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val233->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val236 = new QLabel(Valores_23);
        HumSec_val236->setObjectName(QStringLiteral("HumSec_val236"));
        HumSec_val236->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val236->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val236->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val231 = new QLabel(Valores_23);
        HumSec_val231->setObjectName(QStringLiteral("HumSec_val231"));
        HumSec_val231->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val231->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val231->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val234 = new QLabel(Valores_23);
        HumSec_val234->setObjectName(QStringLiteral("HumSec_val234"));
        HumSec_val234->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val234->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val234->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_250 = new QLabel(Valores_23);
        label_250->setObjectName(QStringLiteral("label_250"));
        label_250->setGeometry(QRect(10, 100, 81, 31));
        label_250->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_251 = new QLabel(Valores_23);
        label_251->setObjectName(QStringLiteral("label_251"));
        label_251->setGeometry(QRect(10, 70, 81, 31));
        label_251->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_252 = new QLabel(Valores_23);
        label_252->setObjectName(QStringLiteral("label_252"));
        label_252->setGeometry(QRect(10, 10, 81, 31));
        label_252->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val238 = new QLabel(Valores_23);
        HumSec_val238->setObjectName(QStringLiteral("HumSec_val238"));
        HumSec_val238->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val238->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val238->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_24 = new QFrame(HumSec);
        Valores_24->setObjectName(QStringLiteral("Valores_24"));
        Valores_24->setGeometry(QRect(820, 440, 171, 321));
        Valores_24->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_24->setFrameShape(QFrame::StyledPanel);
        Valores_24->setFrameShadow(QFrame::Raised);
        HumSec_val249 = new QLabel(Valores_24);
        HumSec_val249->setObjectName(QStringLiteral("HumSec_val249"));
        HumSec_val249->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val249->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val249->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_255 = new QLabel(Valores_24);
        label_255->setObjectName(QStringLiteral("label_255"));
        label_255->setGeometry(QRect(10, 130, 81, 31));
        label_255->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_256 = new QLabel(Valores_24);
        label_256->setObjectName(QStringLiteral("label_256"));
        label_256->setGeometry(QRect(10, 250, 81, 31));
        label_256->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val242 = new QLabel(Valores_24);
        HumSec_val242->setObjectName(QStringLiteral("HumSec_val242"));
        HumSec_val242->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val242->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val242->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_258 = new QLabel(Valores_24);
        label_258->setObjectName(QStringLiteral("label_258"));
        label_258->setGeometry(QRect(10, 40, 81, 31));
        label_258->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val240 = new QLabel(Valores_24);
        HumSec_val240->setObjectName(QStringLiteral("HumSec_val240"));
        HumSec_val240->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val240->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val240->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_260 = new QLabel(Valores_24);
        label_260->setObjectName(QStringLiteral("label_260"));
        label_260->setGeometry(QRect(10, 160, 81, 31));
        label_260->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val245 = new QLabel(Valores_24);
        HumSec_val245->setObjectName(QStringLiteral("HumSec_val245"));
        HumSec_val245->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val245->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val245->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_262 = new QLabel(Valores_24);
        label_262->setObjectName(QStringLiteral("label_262"));
        label_262->setGeometry(QRect(10, 220, 81, 31));
        label_262->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_263 = new QLabel(Valores_24);
        label_263->setObjectName(QStringLiteral("label_263"));
        label_263->setGeometry(QRect(10, 280, 81, 31));
        label_263->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_264 = new QLabel(Valores_24);
        label_264->setObjectName(QStringLiteral("label_264"));
        label_264->setGeometry(QRect(10, 190, 81, 31));
        label_264->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val247 = new QLabel(Valores_24);
        HumSec_val247->setObjectName(QStringLiteral("HumSec_val247"));
        HumSec_val247->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val247->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val247->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val243 = new QLabel(Valores_24);
        HumSec_val243->setObjectName(QStringLiteral("HumSec_val243"));
        HumSec_val243->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val243->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val243->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val246 = new QLabel(Valores_24);
        HumSec_val246->setObjectName(QStringLiteral("HumSec_val246"));
        HumSec_val246->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val246->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val246->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val241 = new QLabel(Valores_24);
        HumSec_val241->setObjectName(QStringLiteral("HumSec_val241"));
        HumSec_val241->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val241->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val241->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val244 = new QLabel(Valores_24);
        HumSec_val244->setObjectName(QStringLiteral("HumSec_val244"));
        HumSec_val244->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val244->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val244->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_270 = new QLabel(Valores_24);
        label_270->setObjectName(QStringLiteral("label_270"));
        label_270->setGeometry(QRect(10, 100, 81, 31));
        label_270->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_271 = new QLabel(Valores_24);
        label_271->setObjectName(QStringLiteral("label_271"));
        label_271->setGeometry(QRect(10, 70, 81, 31));
        label_271->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_272 = new QLabel(Valores_24);
        label_272->setObjectName(QStringLiteral("label_272"));
        label_272->setGeometry(QRect(10, 10, 81, 31));
        label_272->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val248 = new QLabel(Valores_24);
        HumSec_val248->setObjectName(QStringLiteral("HumSec_val248"));
        HumSec_val248->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val248->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val248->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_25 = new QFrame(HumSec);
        Valores_25->setObjectName(QStringLiteral("Valores_25"));
        Valores_25->setGeometry(QRect(1010, 440, 171, 321));
        Valores_25->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_25->setFrameShape(QFrame::StyledPanel);
        Valores_25->setFrameShadow(QFrame::Raised);
        HumSec_val259 = new QLabel(Valores_25);
        HumSec_val259->setObjectName(QStringLiteral("HumSec_val259"));
        HumSec_val259->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val259->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val259->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_275 = new QLabel(Valores_25);
        label_275->setObjectName(QStringLiteral("label_275"));
        label_275->setGeometry(QRect(10, 130, 81, 31));
        label_275->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_276 = new QLabel(Valores_25);
        label_276->setObjectName(QStringLiteral("label_276"));
        label_276->setGeometry(QRect(10, 250, 81, 31));
        label_276->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val252 = new QLabel(Valores_25);
        HumSec_val252->setObjectName(QStringLiteral("HumSec_val252"));
        HumSec_val252->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val252->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val252->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_278 = new QLabel(Valores_25);
        label_278->setObjectName(QStringLiteral("label_278"));
        label_278->setGeometry(QRect(10, 40, 81, 31));
        label_278->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val250 = new QLabel(Valores_25);
        HumSec_val250->setObjectName(QStringLiteral("HumSec_val250"));
        HumSec_val250->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val250->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val250->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_280 = new QLabel(Valores_25);
        label_280->setObjectName(QStringLiteral("label_280"));
        label_280->setGeometry(QRect(10, 160, 81, 31));
        label_280->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val255 = new QLabel(Valores_25);
        HumSec_val255->setObjectName(QStringLiteral("HumSec_val255"));
        HumSec_val255->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val255->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val255->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_282 = new QLabel(Valores_25);
        label_282->setObjectName(QStringLiteral("label_282"));
        label_282->setGeometry(QRect(10, 220, 81, 31));
        label_282->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_283 = new QLabel(Valores_25);
        label_283->setObjectName(QStringLiteral("label_283"));
        label_283->setGeometry(QRect(10, 280, 81, 31));
        label_283->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_284 = new QLabel(Valores_25);
        label_284->setObjectName(QStringLiteral("label_284"));
        label_284->setGeometry(QRect(10, 190, 81, 31));
        label_284->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val257 = new QLabel(Valores_25);
        HumSec_val257->setObjectName(QStringLiteral("HumSec_val257"));
        HumSec_val257->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val257->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val257->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val253 = new QLabel(Valores_25);
        HumSec_val253->setObjectName(QStringLiteral("HumSec_val253"));
        HumSec_val253->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val253->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val253->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val256 = new QLabel(Valores_25);
        HumSec_val256->setObjectName(QStringLiteral("HumSec_val256"));
        HumSec_val256->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val256->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val256->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val251 = new QLabel(Valores_25);
        HumSec_val251->setObjectName(QStringLiteral("HumSec_val251"));
        HumSec_val251->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val251->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val251->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val254 = new QLabel(Valores_25);
        HumSec_val254->setObjectName(QStringLiteral("HumSec_val254"));
        HumSec_val254->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val254->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val254->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_290 = new QLabel(Valores_25);
        label_290->setObjectName(QStringLiteral("label_290"));
        label_290->setGeometry(QRect(10, 100, 81, 31));
        label_290->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_291 = new QLabel(Valores_25);
        label_291->setObjectName(QStringLiteral("label_291"));
        label_291->setGeometry(QRect(10, 70, 81, 31));
        label_291->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_292 = new QLabel(Valores_25);
        label_292->setObjectName(QStringLiteral("label_292"));
        label_292->setGeometry(QRect(10, 10, 81, 31));
        label_292->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val258 = new QLabel(Valores_25);
        HumSec_val258->setObjectName(QStringLiteral("HumSec_val258"));
        HumSec_val258->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val258->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val258->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_DedxTon = new QLabel(HumSec);
        HumSec_DedxTon->setObjectName(QStringLiteral("HumSec_DedxTon"));
        HumSec_DedxTon->setGeometry(QRect(40, 40, 341, 41));
        HumSec_DedxTon->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        push_NextTable = new QPushButton(HumSec);
        push_NextTable->setObjectName(QStringLiteral("push_NextTable"));
        push_NextTable->setGeometry(QRect(980, 40, 200, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        push_NextTable->setPalette(palette2);
        push_NextTable->setFont(font5);
        push_NextTable->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:rgb(200,200,200);\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        Fondo_8 = new QLabel(page_DrynWet);
        Fondo_8->setObjectName(QStringLiteral("Fondo_8"));
        Fondo_8->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_8->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_8->setScaledContents(true);
        SW_Zona_Principal->addWidget(page_DrynWet);
        Fondo_8->raise();
        Panel_DrynWet->raise();
        HumSec->raise();
        page_DrynWet_2 = new QWidget();
        page_DrynWet_2->setObjectName(QStringLiteral("page_DrynWet_2"));
        Fondo_9 = new QLabel(page_DrynWet_2);
        Fondo_9->setObjectName(QStringLiteral("Fondo_9"));
        Fondo_9->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_9->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_9->setScaledContents(true);
        frame_27 = new QFrame(page_DrynWet_2);
        frame_27->setObjectName(QStringLiteral("frame_27"));
        frame_27->setEnabled(true);
        frame_27->setGeometry(QRect(160, 90, 1211, 851));
        frame_27->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        label_535 = new QLabel(frame_27);
        label_535->setObjectName(QStringLiteral("label_535"));
        label_535->setGeometry(QRect(530, 45, 171, 31));
        label_535->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_CB2_edit = new QLineEdit(frame_27);
        HumSec_CB2_edit->setObjectName(QStringLiteral("HumSec_CB2_edit"));
        HumSec_CB2_edit->setGeometry(QRect(800, 45, 150, 30));
        HumSec_CB2_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        Valores_38 = new QFrame(frame_27);
        Valores_38->setObjectName(QStringLiteral("Valores_38"));
        Valores_38->setGeometry(QRect(40, 100, 171, 321));
        Valores_38->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_38->setFrameShape(QFrame::StyledPanel);
        Valores_38->setFrameShadow(QFrame::Raised);
        HumSec_val269 = new QLabel(Valores_38);
        HumSec_val269->setObjectName(QStringLiteral("HumSec_val269"));
        HumSec_val269->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val269->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val269->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_537 = new QLabel(Valores_38);
        label_537->setObjectName(QStringLiteral("label_537"));
        label_537->setGeometry(QRect(10, 130, 81, 31));
        label_537->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_538 = new QLabel(Valores_38);
        label_538->setObjectName(QStringLiteral("label_538"));
        label_538->setGeometry(QRect(10, 250, 81, 31));
        label_538->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val262 = new QLabel(Valores_38);
        HumSec_val262->setObjectName(QStringLiteral("HumSec_val262"));
        HumSec_val262->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val262->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val262->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_540 = new QLabel(Valores_38);
        label_540->setObjectName(QStringLiteral("label_540"));
        label_540->setGeometry(QRect(10, 40, 81, 31));
        label_540->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val260 = new QLabel(Valores_38);
        HumSec_val260->setObjectName(QStringLiteral("HumSec_val260"));
        HumSec_val260->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val260->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val260->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_542 = new QLabel(Valores_38);
        label_542->setObjectName(QStringLiteral("label_542"));
        label_542->setGeometry(QRect(10, 160, 81, 31));
        label_542->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val265 = new QLabel(Valores_38);
        HumSec_val265->setObjectName(QStringLiteral("HumSec_val265"));
        HumSec_val265->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val265->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val265->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_544 = new QLabel(Valores_38);
        label_544->setObjectName(QStringLiteral("label_544"));
        label_544->setGeometry(QRect(10, 220, 81, 31));
        label_544->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_545 = new QLabel(Valores_38);
        label_545->setObjectName(QStringLiteral("label_545"));
        label_545->setGeometry(QRect(10, 280, 81, 31));
        label_545->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_546 = new QLabel(Valores_38);
        label_546->setObjectName(QStringLiteral("label_546"));
        label_546->setGeometry(QRect(10, 190, 81, 31));
        label_546->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val267 = new QLabel(Valores_38);
        HumSec_val267->setObjectName(QStringLiteral("HumSec_val267"));
        HumSec_val267->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val267->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val267->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val263 = new QLabel(Valores_38);
        HumSec_val263->setObjectName(QStringLiteral("HumSec_val263"));
        HumSec_val263->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val263->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val263->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val266 = new QLabel(Valores_38);
        HumSec_val266->setObjectName(QStringLiteral("HumSec_val266"));
        HumSec_val266->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val266->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val266->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val261 = new QLabel(Valores_38);
        HumSec_val261->setObjectName(QStringLiteral("HumSec_val261"));
        HumSec_val261->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val261->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val261->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val264 = new QLabel(Valores_38);
        HumSec_val264->setObjectName(QStringLiteral("HumSec_val264"));
        HumSec_val264->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val264->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val264->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_552 = new QLabel(Valores_38);
        label_552->setObjectName(QStringLiteral("label_552"));
        label_552->setGeometry(QRect(10, 100, 81, 31));
        label_552->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_553 = new QLabel(Valores_38);
        label_553->setObjectName(QStringLiteral("label_553"));
        label_553->setGeometry(QRect(10, 70, 81, 31));
        label_553->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_554 = new QLabel(Valores_38);
        label_554->setObjectName(QStringLiteral("label_554"));
        label_554->setGeometry(QRect(10, 10, 81, 31));
        label_554->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val268 = new QLabel(Valores_38);
        HumSec_val268->setObjectName(QStringLiteral("HumSec_val268"));
        HumSec_val268->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val268->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val268->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_CB2 = new QComboBox(frame_27);
        HumSec_CB2->setObjectName(QStringLiteral("HumSec_CB2"));
        HumSec_CB2->setGeometry(QRect(690, 45, 91, 32));
        HumSec_CB2->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background-color:white;"));
        Valores_39 = new QFrame(frame_27);
        Valores_39->setObjectName(QStringLiteral("Valores_39"));
        Valores_39->setGeometry(QRect(240, 100, 171, 321));
        Valores_39->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_39->setFrameShape(QFrame::StyledPanel);
        Valores_39->setFrameShadow(QFrame::Raised);
        HumSec_val279 = new QLabel(Valores_39);
        HumSec_val279->setObjectName(QStringLiteral("HumSec_val279"));
        HumSec_val279->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val279->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val279->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_557 = new QLabel(Valores_39);
        label_557->setObjectName(QStringLiteral("label_557"));
        label_557->setGeometry(QRect(10, 130, 81, 31));
        label_557->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_558 = new QLabel(Valores_39);
        label_558->setObjectName(QStringLiteral("label_558"));
        label_558->setGeometry(QRect(10, 250, 81, 31));
        label_558->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val272 = new QLabel(Valores_39);
        HumSec_val272->setObjectName(QStringLiteral("HumSec_val272"));
        HumSec_val272->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val272->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val272->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_560 = new QLabel(Valores_39);
        label_560->setObjectName(QStringLiteral("label_560"));
        label_560->setGeometry(QRect(10, 40, 81, 31));
        label_560->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val270 = new QLabel(Valores_39);
        HumSec_val270->setObjectName(QStringLiteral("HumSec_val270"));
        HumSec_val270->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val270->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val270->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_562 = new QLabel(Valores_39);
        label_562->setObjectName(QStringLiteral("label_562"));
        label_562->setGeometry(QRect(10, 160, 81, 31));
        label_562->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val275 = new QLabel(Valores_39);
        HumSec_val275->setObjectName(QStringLiteral("HumSec_val275"));
        HumSec_val275->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val275->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val275->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_564 = new QLabel(Valores_39);
        label_564->setObjectName(QStringLiteral("label_564"));
        label_564->setGeometry(QRect(10, 220, 81, 31));
        label_564->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_565 = new QLabel(Valores_39);
        label_565->setObjectName(QStringLiteral("label_565"));
        label_565->setGeometry(QRect(10, 280, 81, 31));
        label_565->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_566 = new QLabel(Valores_39);
        label_566->setObjectName(QStringLiteral("label_566"));
        label_566->setGeometry(QRect(10, 190, 81, 31));
        label_566->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val277 = new QLabel(Valores_39);
        HumSec_val277->setObjectName(QStringLiteral("HumSec_val277"));
        HumSec_val277->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val277->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val277->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val273 = new QLabel(Valores_39);
        HumSec_val273->setObjectName(QStringLiteral("HumSec_val273"));
        HumSec_val273->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val273->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val273->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val276 = new QLabel(Valores_39);
        HumSec_val276->setObjectName(QStringLiteral("HumSec_val276"));
        HumSec_val276->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val276->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val276->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val271 = new QLabel(Valores_39);
        HumSec_val271->setObjectName(QStringLiteral("HumSec_val271"));
        HumSec_val271->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val271->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val271->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val274 = new QLabel(Valores_39);
        HumSec_val274->setObjectName(QStringLiteral("HumSec_val274"));
        HumSec_val274->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val274->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val274->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_572 = new QLabel(Valores_39);
        label_572->setObjectName(QStringLiteral("label_572"));
        label_572->setGeometry(QRect(10, 100, 81, 31));
        label_572->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_573 = new QLabel(Valores_39);
        label_573->setObjectName(QStringLiteral("label_573"));
        label_573->setGeometry(QRect(10, 70, 81, 31));
        label_573->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_574 = new QLabel(Valores_39);
        label_574->setObjectName(QStringLiteral("label_574"));
        label_574->setGeometry(QRect(10, 10, 81, 31));
        label_574->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val278 = new QLabel(Valores_39);
        HumSec_val278->setObjectName(QStringLiteral("HumSec_val278"));
        HumSec_val278->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val278->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val278->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_40 = new QFrame(frame_27);
        Valores_40->setObjectName(QStringLiteral("Valores_40"));
        Valores_40->setGeometry(QRect(440, 100, 171, 321));
        Valores_40->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_40->setFrameShape(QFrame::StyledPanel);
        Valores_40->setFrameShadow(QFrame::Raised);
        HumSec_val289 = new QLabel(Valores_40);
        HumSec_val289->setObjectName(QStringLiteral("HumSec_val289"));
        HumSec_val289->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val289->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val289->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_577 = new QLabel(Valores_40);
        label_577->setObjectName(QStringLiteral("label_577"));
        label_577->setGeometry(QRect(10, 130, 81, 31));
        label_577->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_578 = new QLabel(Valores_40);
        label_578->setObjectName(QStringLiteral("label_578"));
        label_578->setGeometry(QRect(10, 250, 81, 31));
        label_578->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val282 = new QLabel(Valores_40);
        HumSec_val282->setObjectName(QStringLiteral("HumSec_val282"));
        HumSec_val282->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val282->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val282->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_580 = new QLabel(Valores_40);
        label_580->setObjectName(QStringLiteral("label_580"));
        label_580->setGeometry(QRect(10, 40, 81, 31));
        label_580->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val280 = new QLabel(Valores_40);
        HumSec_val280->setObjectName(QStringLiteral("HumSec_val280"));
        HumSec_val280->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val280->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val280->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_582 = new QLabel(Valores_40);
        label_582->setObjectName(QStringLiteral("label_582"));
        label_582->setGeometry(QRect(10, 160, 81, 31));
        label_582->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val285 = new QLabel(Valores_40);
        HumSec_val285->setObjectName(QStringLiteral("HumSec_val285"));
        HumSec_val285->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val285->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val285->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_584 = new QLabel(Valores_40);
        label_584->setObjectName(QStringLiteral("label_584"));
        label_584->setGeometry(QRect(10, 220, 81, 31));
        label_584->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_585 = new QLabel(Valores_40);
        label_585->setObjectName(QStringLiteral("label_585"));
        label_585->setGeometry(QRect(10, 280, 81, 31));
        label_585->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_586 = new QLabel(Valores_40);
        label_586->setObjectName(QStringLiteral("label_586"));
        label_586->setGeometry(QRect(10, 190, 81, 31));
        label_586->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val287 = new QLabel(Valores_40);
        HumSec_val287->setObjectName(QStringLiteral("HumSec_val287"));
        HumSec_val287->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val287->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val287->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val283 = new QLabel(Valores_40);
        HumSec_val283->setObjectName(QStringLiteral("HumSec_val283"));
        HumSec_val283->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val283->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val283->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val286 = new QLabel(Valores_40);
        HumSec_val286->setObjectName(QStringLiteral("HumSec_val286"));
        HumSec_val286->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val286->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val286->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val281 = new QLabel(Valores_40);
        HumSec_val281->setObjectName(QStringLiteral("HumSec_val281"));
        HumSec_val281->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val281->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val281->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val284 = new QLabel(Valores_40);
        HumSec_val284->setObjectName(QStringLiteral("HumSec_val284"));
        HumSec_val284->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val284->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val284->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_592 = new QLabel(Valores_40);
        label_592->setObjectName(QStringLiteral("label_592"));
        label_592->setGeometry(QRect(10, 100, 81, 31));
        label_592->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_593 = new QLabel(Valores_40);
        label_593->setObjectName(QStringLiteral("label_593"));
        label_593->setGeometry(QRect(10, 70, 81, 31));
        label_593->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_594 = new QLabel(Valores_40);
        label_594->setObjectName(QStringLiteral("label_594"));
        label_594->setGeometry(QRect(10, 10, 81, 31));
        label_594->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val288 = new QLabel(Valores_40);
        HumSec_val288->setObjectName(QStringLiteral("HumSec_val288"));
        HumSec_val288->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val288->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val288->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Valores_41 = new QFrame(frame_27);
        Valores_41->setObjectName(QStringLiteral("Valores_41"));
        Valores_41->setGeometry(QRect(630, 100, 171, 351));
        Valores_41->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_41->setFrameShape(QFrame::StyledPanel);
        Valores_41->setFrameShadow(QFrame::Raised);
        HumSec_val299 = new QLabel(Valores_41);
        HumSec_val299->setObjectName(QStringLiteral("HumSec_val299"));
        HumSec_val299->setGeometry(QRect(100, 280, 61, 31));
        HumSec_val299->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val299->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_597 = new QLabel(Valores_41);
        label_597->setObjectName(QStringLiteral("label_597"));
        label_597->setGeometry(QRect(10, 130, 81, 31));
        label_597->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_598 = new QLabel(Valores_41);
        label_598->setObjectName(QStringLiteral("label_598"));
        label_598->setGeometry(QRect(10, 250, 81, 31));
        label_598->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val292 = new QLabel(Valores_41);
        HumSec_val292->setObjectName(QStringLiteral("HumSec_val292"));
        HumSec_val292->setGeometry(QRect(100, 70, 61, 31));
        HumSec_val292->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val292->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_600 = new QLabel(Valores_41);
        label_600->setObjectName(QStringLiteral("label_600"));
        label_600->setGeometry(QRect(10, 40, 81, 31));
        label_600->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val290 = new QLabel(Valores_41);
        HumSec_val290->setObjectName(QStringLiteral("HumSec_val290"));
        HumSec_val290->setGeometry(QRect(100, 10, 61, 31));
        HumSec_val290->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val290->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_602 = new QLabel(Valores_41);
        label_602->setObjectName(QStringLiteral("label_602"));
        label_602->setGeometry(QRect(10, 160, 81, 31));
        label_602->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val295 = new QLabel(Valores_41);
        HumSec_val295->setObjectName(QStringLiteral("HumSec_val295"));
        HumSec_val295->setGeometry(QRect(100, 160, 61, 31));
        HumSec_val295->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val295->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_604 = new QLabel(Valores_41);
        label_604->setObjectName(QStringLiteral("label_604"));
        label_604->setGeometry(QRect(10, 220, 81, 31));
        label_604->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_605 = new QLabel(Valores_41);
        label_605->setObjectName(QStringLiteral("label_605"));
        label_605->setGeometry(QRect(10, 280, 81, 31));
        label_605->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_606 = new QLabel(Valores_41);
        label_606->setObjectName(QStringLiteral("label_606"));
        label_606->setGeometry(QRect(10, 190, 81, 31));
        label_606->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val297 = new QLabel(Valores_41);
        HumSec_val297->setObjectName(QStringLiteral("HumSec_val297"));
        HumSec_val297->setGeometry(QRect(100, 220, 61, 31));
        HumSec_val297->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val297->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val293 = new QLabel(Valores_41);
        HumSec_val293->setObjectName(QStringLiteral("HumSec_val293"));
        HumSec_val293->setGeometry(QRect(100, 100, 61, 31));
        HumSec_val293->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val293->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val296 = new QLabel(Valores_41);
        HumSec_val296->setObjectName(QStringLiteral("HumSec_val296"));
        HumSec_val296->setGeometry(QRect(100, 190, 61, 31));
        HumSec_val296->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val296->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val291 = new QLabel(Valores_41);
        HumSec_val291->setObjectName(QStringLiteral("HumSec_val291"));
        HumSec_val291->setGeometry(QRect(100, 40, 61, 31));
        HumSec_val291->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val291->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val294 = new QLabel(Valores_41);
        HumSec_val294->setObjectName(QStringLiteral("HumSec_val294"));
        HumSec_val294->setGeometry(QRect(100, 130, 61, 31));
        HumSec_val294->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val294->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_612 = new QLabel(Valores_41);
        label_612->setObjectName(QStringLiteral("label_612"));
        label_612->setGeometry(QRect(10, 100, 81, 31));
        label_612->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_613 = new QLabel(Valores_41);
        label_613->setObjectName(QStringLiteral("label_613"));
        label_613->setGeometry(QRect(10, 70, 81, 31));
        label_613->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_614 = new QLabel(Valores_41);
        label_614->setObjectName(QStringLiteral("label_614"));
        label_614->setGeometry(QRect(10, 10, 81, 31));
        label_614->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val298 = new QLabel(Valores_41);
        HumSec_val298->setObjectName(QStringLiteral("HumSec_val298"));
        HumSec_val298->setGeometry(QRect(100, 250, 61, 31));
        HumSec_val298->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val298->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_val300 = new QLabel(Valores_41);
        HumSec_val300->setObjectName(QStringLiteral("HumSec_val300"));
        HumSec_val300->setGeometry(QRect(100, 310, 61, 31));
        HumSec_val300->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_val300->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_634 = new QLabel(Valores_41);
        label_634->setObjectName(QStringLiteral("label_634"));
        label_634->setGeometry(QRect(10, 310, 81, 31));
        label_634->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Valores_44 = new QFrame(frame_27);
        Valores_44->setObjectName(QStringLiteral("Valores_44"));
        Valores_44->setGeometry(QRect(230, 530, 261, 261));
        Valores_44->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_44->setFrameShape(QFrame::StyledPanel);
        Valores_44->setFrameShadow(QFrame::Raised);
        label_657 = new QLabel(Valores_44);
        label_657->setObjectName(QStringLiteral("label_657"));
        label_657->setGeometry(QRect(10, 130, 120, 31));
        label_657->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_161_170 = new QLabel(Valores_44);
        HumSec_Tarifa_161_170->setObjectName(QStringLiteral("HumSec_Tarifa_161_170"));
        HumSec_Tarifa_161_170->setGeometry(QRect(130, 70, 61, 31));
        HumSec_Tarifa_161_170->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_161_170->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_660 = new QLabel(Valores_44);
        label_660->setObjectName(QStringLiteral("label_660"));
        label_660->setGeometry(QRect(10, 40, 120, 31));
        label_660->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_141_150 = new QLabel(Valores_44);
        HumSec_Tarifa_141_150->setObjectName(QStringLiteral("HumSec_Tarifa_141_150"));
        HumSec_Tarifa_141_150->setGeometry(QRect(130, 10, 61, 31));
        HumSec_Tarifa_141_150->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_141_150->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_662 = new QLabel(Valores_44);
        label_662->setObjectName(QStringLiteral("label_662"));
        label_662->setGeometry(QRect(10, 160, 120, 31));
        label_662->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_191_200 = new QLabel(Valores_44);
        HumSec_Tarifa_191_200->setObjectName(QStringLiteral("HumSec_Tarifa_191_200"));
        HumSec_Tarifa_191_200->setGeometry(QRect(130, 160, 61, 31));
        HumSec_Tarifa_191_200->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_191_200->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_664 = new QLabel(Valores_44);
        label_664->setObjectName(QStringLiteral("label_664"));
        label_664->setGeometry(QRect(10, 220, 120, 31));
        label_664->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_666 = new QLabel(Valores_44);
        label_666->setObjectName(QStringLiteral("label_666"));
        label_666->setGeometry(QRect(10, 190, 120, 31));
        label_666->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_211_220 = new QLabel(Valores_44);
        HumSec_Tarifa_211_220->setObjectName(QStringLiteral("HumSec_Tarifa_211_220"));
        HumSec_Tarifa_211_220->setGeometry(QRect(130, 220, 61, 31));
        HumSec_Tarifa_211_220->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_211_220->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_171_180 = new QLabel(Valores_44);
        HumSec_Tarifa_171_180->setObjectName(QStringLiteral("HumSec_Tarifa_171_180"));
        HumSec_Tarifa_171_180->setGeometry(QRect(130, 100, 61, 31));
        HumSec_Tarifa_171_180->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_171_180->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_201_210 = new QLabel(Valores_44);
        HumSec_Tarifa_201_210->setObjectName(QStringLiteral("HumSec_Tarifa_201_210"));
        HumSec_Tarifa_201_210->setGeometry(QRect(130, 190, 61, 31));
        HumSec_Tarifa_201_210->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_201_210->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_151_160 = new QLabel(Valores_44);
        HumSec_Tarifa_151_160->setObjectName(QStringLiteral("HumSec_Tarifa_151_160"));
        HumSec_Tarifa_151_160->setGeometry(QRect(130, 40, 61, 31));
        HumSec_Tarifa_151_160->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_151_160->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_181_190 = new QLabel(Valores_44);
        HumSec_Tarifa_181_190->setObjectName(QStringLiteral("HumSec_Tarifa_181_190"));
        HumSec_Tarifa_181_190->setGeometry(QRect(130, 130, 61, 31));
        HumSec_Tarifa_181_190->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_181_190->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_672 = new QLabel(Valores_44);
        label_672->setObjectName(QStringLiteral("label_672"));
        label_672->setGeometry(QRect(10, 100, 120, 31));
        label_672->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_673 = new QLabel(Valores_44);
        label_673->setObjectName(QStringLiteral("label_673"));
        label_673->setGeometry(QRect(10, 70, 120, 31));
        label_673->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_674 = new QLabel(Valores_44);
        label_674->setObjectName(QStringLiteral("label_674"));
        label_674->setGeometry(QRect(10, 10, 121, 31));
        label_674->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Valores_45 = new QFrame(frame_27);
        Valores_45->setObjectName(QStringLiteral("Valores_45"));
        Valores_45->setGeometry(QRect(540, 530, 261, 261));
        Valores_45->setStyleSheet(QStringLiteral("border-radius:5px;"));
        Valores_45->setFrameShape(QFrame::StyledPanel);
        Valores_45->setFrameShadow(QFrame::Raised);
        label_677 = new QLabel(Valores_45);
        label_677->setObjectName(QStringLiteral("label_677"));
        label_677->setGeometry(QRect(10, 130, 120, 31));
        label_677->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_241_250 = new QLabel(Valores_45);
        HumSec_Tarifa_241_250->setObjectName(QStringLiteral("HumSec_Tarifa_241_250"));
        HumSec_Tarifa_241_250->setGeometry(QRect(130, 70, 61, 31));
        HumSec_Tarifa_241_250->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_241_250->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_680 = new QLabel(Valores_45);
        label_680->setObjectName(QStringLiteral("label_680"));
        label_680->setGeometry(QRect(10, 40, 120, 31));
        label_680->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_221_230 = new QLabel(Valores_45);
        HumSec_Tarifa_221_230->setObjectName(QStringLiteral("HumSec_Tarifa_221_230"));
        HumSec_Tarifa_221_230->setGeometry(QRect(130, 10, 61, 31));
        HumSec_Tarifa_221_230->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_221_230->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_682 = new QLabel(Valores_45);
        label_682->setObjectName(QStringLiteral("label_682"));
        label_682->setGeometry(QRect(10, 160, 120, 31));
        label_682->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_271_280 = new QLabel(Valores_45);
        HumSec_Tarifa_271_280->setObjectName(QStringLiteral("HumSec_Tarifa_271_280"));
        HumSec_Tarifa_271_280->setGeometry(QRect(130, 160, 61, 31));
        HumSec_Tarifa_271_280->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_271_280->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_684 = new QLabel(Valores_45);
        label_684->setObjectName(QStringLiteral("label_684"));
        label_684->setGeometry(QRect(10, 220, 120, 31));
        label_684->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_686 = new QLabel(Valores_45);
        label_686->setObjectName(QStringLiteral("label_686"));
        label_686->setGeometry(QRect(10, 190, 120, 31));
        label_686->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_291_300 = new QLabel(Valores_45);
        HumSec_Tarifa_291_300->setObjectName(QStringLiteral("HumSec_Tarifa_291_300"));
        HumSec_Tarifa_291_300->setGeometry(QRect(130, 220, 61, 31));
        HumSec_Tarifa_291_300->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_291_300->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_251_260 = new QLabel(Valores_45);
        HumSec_Tarifa_251_260->setObjectName(QStringLiteral("HumSec_Tarifa_251_260"));
        HumSec_Tarifa_251_260->setGeometry(QRect(130, 100, 61, 31));
        HumSec_Tarifa_251_260->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_251_260->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_281_290 = new QLabel(Valores_45);
        HumSec_Tarifa_281_290->setObjectName(QStringLiteral("HumSec_Tarifa_281_290"));
        HumSec_Tarifa_281_290->setGeometry(QRect(130, 190, 61, 31));
        HumSec_Tarifa_281_290->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_281_290->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_231_240 = new QLabel(Valores_45);
        HumSec_Tarifa_231_240->setObjectName(QStringLiteral("HumSec_Tarifa_231_240"));
        HumSec_Tarifa_231_240->setGeometry(QRect(130, 40, 61, 31));
        HumSec_Tarifa_231_240->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_231_240->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        HumSec_Tarifa_261_270 = new QLabel(Valores_45);
        HumSec_Tarifa_261_270->setObjectName(QStringLiteral("HumSec_Tarifa_261_270"));
        HumSec_Tarifa_261_270->setGeometry(QRect(130, 130, 61, 31));
        HumSec_Tarifa_261_270->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_Tarifa_261_270->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_692 = new QLabel(Valores_45);
        label_692->setObjectName(QStringLiteral("label_692"));
        label_692->setGeometry(QRect(10, 100, 120, 31));
        label_692->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_693 = new QLabel(Valores_45);
        label_693->setObjectName(QStringLiteral("label_693"));
        label_693->setGeometry(QRect(10, 70, 120, 31));
        label_693->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_694 = new QLabel(Valores_45);
        label_694->setObjectName(QStringLiteral("label_694"));
        label_694->setGeometry(QRect(10, 10, 121, 31));
        label_694->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_CB3_edit = new QLineEdit(frame_27);
        HumSec_CB3_edit->setObjectName(QStringLiteral("HumSec_CB3_edit"));
        HumSec_CB3_edit->setGeometry(QRect(990, 520, 150, 30));
        HumSec_CB3_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;"));
        label_656 = new QLabel(frame_27);
        label_656->setObjectName(QStringLiteral("label_656"));
        label_656->setGeometry(QRect(910, 480, 171, 31));
        label_656->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        HumSec_CB3 = new QComboBox(frame_27);
        HumSec_CB3->setObjectName(QStringLiteral("HumSec_CB3"));
        HumSec_CB3->setGeometry(QRect(870, 520, 91, 32));
        HumSec_CB3->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(106, 106, 106);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background-color:white;"));
        label_665 = new QLabel(frame_27);
        label_665->setObjectName(QStringLiteral("label_665"));
        label_665->setGeometry(QRect(40, 40, 341, 41));
        label_665->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        label_675 = new QLabel(frame_27);
        label_675->setObjectName(QStringLiteral("label_675"));
        label_675->setGeometry(QRect(370, 480, 241, 41));
        label_675->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        push_BeforeTable = new QPushButton(frame_27);
        push_BeforeTable->setObjectName(QStringLiteral("push_BeforeTable"));
        push_BeforeTable->setGeometry(QRect(980, 40, 200, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        push_BeforeTable->setPalette(palette3);
        push_BeforeTable->setFont(font5);
        push_BeforeTable->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:rgb(200,200,200);\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        Panel_DrynWet_2 = new QLabel(page_DrynWet_2);
        Panel_DrynWet_2->setObjectName(QStringLiteral("Panel_DrynWet_2"));
        Panel_DrynWet_2->setGeometry(QRect(20, 20, 291, 40));
        Panel_DrynWet_2->setMinimumSize(QSize(0, 0));
        Panel_DrynWet_2->setFont(font8);
        Panel_DrynWet_2->setStyleSheet(QLatin1String("font: 30pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_DrynWet_2->setFrameShape(QFrame::Box);
        Panel_DrynWet_2->setFrameShadow(QFrame::Raised);
        Panel_DrynWet_2->setLineWidth(2);
        Panel_DrynWet_2->setMidLineWidth(0);
        Panel_DrynWet_2->setAlignment(Qt::AlignCenter);
        SW_Zona_Principal->addWidget(page_DrynWet_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        Fondo_11 = new QLabel(page);
        Fondo_11->setObjectName(QStringLiteral("Fondo_11"));
        Fondo_11->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_11->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_11->setScaledContents(true);
        frame_6 = new QFrame(page);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(730, 150, 470, 293));
        frame_6->setAutoFillBackground(false);
        frame_6->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(3);
        Peso_Tara_2 = new QLabel(frame_6);
        Peso_Tara_2->setObjectName(QStringLiteral("Peso_Tara_2"));
        Peso_Tara_2->setGeometry(QRect(280, 20, 71, 31));
        Peso_Tara_2->setFont(font5);
        Peso_Tara_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Tara_2->setAlignment(Qt::AlignCenter);
        Salidas_Bruto_edit = new QLineEdit(frame_6);
        Salidas_Bruto_edit->setObjectName(QStringLiteral("Salidas_Bruto_edit"));
        Salidas_Bruto_edit->setGeometry(QRect(40, 50, 141, 35));
        Salidas_Bruto_edit->setFont(font5);
        Salidas_Bruto_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Salidas_Tara_edit = new QLineEdit(frame_6);
        Salidas_Tara_edit->setObjectName(QStringLiteral("Salidas_Tara_edit"));
        Salidas_Tara_edit->setGeometry(QRect(250, 50, 141, 35));
        Salidas_Tara_edit->setFont(font5);
        Salidas_Tara_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Peso_Bruto_2 = new QLabel(frame_6);
        Peso_Bruto_2->setObjectName(QStringLiteral("Peso_Bruto_2"));
        Peso_Bruto_2->setGeometry(QRect(70, 20, 81, 31));
        Peso_Bruto_2->setFont(font5);
        Peso_Bruto_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Bruto_2->setAlignment(Qt::AlignCenter);
        Salidas_Humedad_edit = new QLineEdit(frame_6);
        Salidas_Humedad_edit->setObjectName(QStringLiteral("Salidas_Humedad_edit"));
        Salidas_Humedad_edit->setGeometry(QRect(250, 130, 140, 35));
        Salidas_Humedad_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Humedad_2 = new QLabel(frame_6);
        Humedad_2->setObjectName(QStringLiteral("Humedad_2"));
        Humedad_2->setGeometry(QRect(265, 104, 111, 25));
        Humedad_2->setFont(font5);
        Humedad_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Humedad_2->setAlignment(Qt::AlignCenter);
        Ton_5 = new QLabel(frame_6);
        Ton_5->setObjectName(QStringLiteral("Ton_5"));
        Ton_5->setGeometry(QRect(170, 55, 71, 31));
        Ton_5->setFont(font5);
        Ton_5->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_5->setAlignment(Qt::AlignCenter);
        Ton_6 = new QLabel(frame_6);
        Ton_6->setObjectName(QStringLiteral("Ton_6"));
        Ton_6->setGeometry(QRect(380, 53, 71, 31));
        Ton_6->setFont(font5);
        Ton_6->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_6->setAlignment(Qt::AlignCenter);
        Ton_7 = new QLabel(frame_6);
        Ton_7->setObjectName(QStringLiteral("Ton_7"));
        Ton_7->setGeometry(QRect(390, 133, 71, 31));
        Ton_7->setFont(font5);
        Ton_7->setStyleSheet(QLatin1String("font:18px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_7->setAlignment(Qt::AlignCenter);
        Salidas_Silo_1 = new QRadioButton(frame_6);
        Salidas_Silo_1->setObjectName(QStringLiteral("Salidas_Silo_1"));
        Salidas_Silo_1->setGeometry(QRect(60, 180, 90, 40));
        Salidas_Silo_1->setFont(font5);
        Salidas_Silo_1->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Silo_2 = new QRadioButton(frame_6);
        Salidas_Silo_2->setObjectName(QStringLiteral("Salidas_Silo_2"));
        Salidas_Silo_2->setGeometry(QRect(60, 220, 90, 40));
        Salidas_Silo_2->setFont(font5);
        Salidas_Silo_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Espe_2 = new QLabel(frame_6);
        Peso_Espe_2->setObjectName(QStringLiteral("Peso_Espe_2"));
        Peso_Espe_2->setGeometry(QRect(233, 195, 171, 25));
        Peso_Espe_2->setFont(font5);
        Peso_Espe_2->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Peso_Espe_2->setAlignment(Qt::AlignCenter);
        Salidas_Espe_edit = new QLineEdit(frame_6);
        Salidas_Espe_edit->setObjectName(QStringLiteral("Salidas_Espe_edit"));
        Salidas_Espe_edit->setGeometry(QRect(250, 220, 140, 35));
        Salidas_Espe_edit->setFont(font5);
        Salidas_Espe_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Salidas_Neto = new QLabel(frame_6);
        Salidas_Neto->setObjectName(QStringLiteral("Salidas_Neto"));
        Salidas_Neto->setGeometry(QRect(70, 90, 81, 31));
        Salidas_Neto->setFont(font5);
        Salidas_Neto->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Neto->setAlignment(Qt::AlignCenter);
        Ton_8 = new QLabel(frame_6);
        Ton_8->setObjectName(QStringLiteral("Ton_8"));
        Ton_8->setGeometry(QRect(170, 120, 71, 31));
        Ton_8->setFont(font5);
        Ton_8->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ton_8->setAlignment(Qt::AlignCenter);
        Salidas_Neto_edit = new QLabel(frame_6);
        Salidas_Neto_edit->setObjectName(QStringLiteral("Salidas_Neto_edit"));
        Salidas_Neto_edit->setGeometry(QRect(40, 120, 140, 35));
        Salidas_Neto_edit->setFont(font5);
        Salidas_Neto_edit->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:10px;\n"
"background:white;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Neto_edit->setAlignment(Qt::AlignCenter);
        Peso_Bruto_2->raise();
        Ton_8->raise();
        Ton_7->raise();
        Ton_6->raise();
        Ton_5->raise();
        Peso_Tara_2->raise();
        Salidas_Bruto_edit->raise();
        Salidas_Tara_edit->raise();
        Salidas_Humedad_edit->raise();
        Humedad_2->raise();
        Salidas_Silo_1->raise();
        Salidas_Silo_2->raise();
        Peso_Espe_2->raise();
        Salidas_Espe_edit->raise();
        Salidas_Neto->raise();
        Salidas_Neto_edit->raise();
        push_Salidas_Nuevo = new QPushButton(page);
        push_Salidas_Nuevo->setObjectName(QStringLiteral("push_Salidas_Nuevo"));
        push_Salidas_Nuevo->setGeometry(QRect(1280, 370, 200, 57));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        push_Salidas_Nuevo->setPalette(palette4);
        push_Salidas_Nuevo->setFont(font5);
        push_Salidas_Nuevo->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        push_Salidas_Limpiar = new QPushButton(page);
        push_Salidas_Limpiar->setObjectName(QStringLiteral("push_Salidas_Limpiar"));
        push_Salidas_Limpiar->setGeometry(QRect(1280, 530, 200, 57));
        push_Salidas_Limpiar->setFont(font5);
        push_Salidas_Limpiar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        frame_38 = new QFrame(page);
        frame_38->setObjectName(QStringLiteral("frame_38"));
        frame_38->setGeometry(QRect(140, 80, 470, 135));
        frame_38->setAutoFillBackground(false);
        frame_38->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        Folio_Salida = new QLabel(frame_38);
        Folio_Salida->setObjectName(QStringLiteral("Folio_Salida"));
        Folio_Salida->setGeometry(QRect(50, 30, 141, 31));
        Folio_Salida->setFont(font5);
        Folio_Salida->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Folio_Salida->setAlignment(Qt::AlignCenter);
        Ciclo_Salida = new QLabel(frame_38);
        Ciclo_Salida->setObjectName(QStringLiteral("Ciclo_Salida"));
        Ciclo_Salida->setGeometry(QRect(260, 60, 131, 31));
        Ciclo_Salida->setFont(font5);
        Ciclo_Salida->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ciclo_Salida->setAlignment(Qt::AlignCenter);
        Ciclo_edit_Salida = new QLabel(frame_38);
        Ciclo_edit_Salida->setObjectName(QStringLiteral("Ciclo_edit_Salida"));
        Ciclo_edit_Salida->setGeometry(QRect(210, 90, 221, 31));
        Ciclo_edit_Salida->setFont(font5);
        Ciclo_edit_Salida->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Ciclo_edit_Salida->setAlignment(Qt::AlignCenter);
        Fecha_Salida = new QLabel(frame_38);
        Fecha_Salida->setObjectName(QStringLiteral("Fecha_Salida"));
        Fecha_Salida->setGeometry(QRect(210, 10, 221, 41));
        Fecha_Salida->setFont(font5);
        Fecha_Salida->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Fecha_Salida->setAlignment(Qt::AlignCenter);
        Folio_Salida_edit = new QLineEdit(frame_38);
        Folio_Salida_edit->setObjectName(QStringLiteral("Folio_Salida_edit"));
        Folio_Salida_edit->setGeometry(QRect(60, 60, 121, 35));
        Folio_Salida_edit->setFont(font6);
        Folio_Salida_edit->setStyleSheet(QLatin1String("border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
"color:red;"));
        Folio_Salida_edit->setReadOnly(false);
        BOLETAS_Salidas = new QFrame(page);
        BOLETAS_Salidas->setObjectName(QStringLiteral("BOLETAS_Salidas"));
        BOLETAS_Salidas->setGeometry(QRect(140, 230, 470, 731));
        BOLETAS_Salidas->setStyleSheet(QLatin1String("font: 16pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        BOLETAS_Salidas->setFrameShape(QFrame::StyledPanel);
        BOLETAS_Salidas->setFrameShadow(QFrame::Raised);
        Salida_Destino = new QLabel(BOLETAS_Salidas);
        Salida_Destino->setObjectName(QStringLiteral("Salida_Destino"));
        Salida_Destino->setGeometry(QRect(60, 150, 131, 31));
        Salida_Destino->setFont(font5);
        Salida_Destino->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salida_Destino->setAlignment(Qt::AlignCenter);
        Salidas_Destino_edit = new QLineEdit(BOLETAS_Salidas);
        Salidas_Destino_edit->setObjectName(QStringLiteral("Salidas_Destino_edit"));
        Salidas_Destino_edit->setGeometry(QRect(45, 180, 380, 35));
        Salidas_Destino_edit->setFont(font5);
        Salidas_Destino_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Comprador_Salida = new QLabel(BOLETAS_Salidas);
        Comprador_Salida->setObjectName(QStringLiteral("Comprador_Salida"));
        Comprador_Salida->setGeometry(QRect(170, 24, 151, 31));
        Comprador_Salida->setFont(font5);
        Comprador_Salida->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Comprador_Salida->setAlignment(Qt::AlignCenter);
        SocioNum_Comp = new QLabel(BOLETAS_Salidas);
        SocioNum_Comp->setObjectName(QStringLiteral("SocioNum_Comp"));
        SocioNum_Comp->setGeometry(QRect(360, 60, 101, 31));
        SocioNum_Comp->setFont(font5);
        SocioNum_Comp->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        SocioNum_Comp->setAlignment(Qt::AlignCenter);
        Salida_Razon_Social = new QLabel(BOLETAS_Salidas);
        Salida_Razon_Social->setObjectName(QStringLiteral("Salida_Razon_Social"));
        Salida_Razon_Social->setGeometry(QRect(80, 60, 141, 31));
        Salida_Razon_Social->setFont(font5);
        Salida_Razon_Social->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salida_Razon_Social->setAlignment(Qt::AlignCenter);
        Salidas_Placas_edit = new QLineEdit(BOLETAS_Salidas);
        Salidas_Placas_edit->setObjectName(QStringLiteral("Salidas_Placas_edit"));
        Salidas_Placas_edit->setGeometry(QRect(45, 490, 380, 35));
        Salidas_Placas_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Salidas_Chofer_Nombre_edit = new QLineEdit(BOLETAS_Salidas);
        Salidas_Chofer_Nombre_edit->setObjectName(QStringLiteral("Salidas_Chofer_Nombre_edit"));
        Salidas_Chofer_Nombre_edit->setGeometry(QRect(45, 320, 380, 35));
        Salidas_Chofer_Nombre_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Salidas_Chofer_Apellidos = new QLabel(BOLETAS_Salidas);
        Salidas_Chofer_Apellidos->setObjectName(QStringLiteral("Salidas_Chofer_Apellidos"));
        Salidas_Chofer_Apellidos->setGeometry(QRect(70, 380, 121, 31));
        Salidas_Chofer_Apellidos->setFont(font5);
        Salidas_Chofer_Apellidos->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Chofer_Apellidos->setAlignment(Qt::AlignCenter);
        Salidas_Placas = new QLabel(BOLETAS_Salidas);
        Salidas_Placas->setObjectName(QStringLiteral("Salidas_Placas"));
        Salidas_Placas->setGeometry(QRect(70, 460, 161, 31));
        Salidas_Placas->setFont(font5);
        Salidas_Placas->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Placas->setAlignment(Qt::AlignCenter);
        Salidas_Chofer_Apellidos_edit = new QLineEdit(BOLETAS_Salidas);
        Salidas_Chofer_Apellidos_edit->setObjectName(QStringLiteral("Salidas_Chofer_Apellidos_edit"));
        Salidas_Chofer_Apellidos_edit->setGeometry(QRect(45, 410, 380, 35));
        Salidas_Chofer_Apellidos_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Salidas_Color_edit = new QLineEdit(BOLETAS_Salidas);
        Salidas_Color_edit->setObjectName(QStringLiteral("Salidas_Color_edit"));
        Salidas_Color_edit->setGeometry(QRect(45, 575, 380, 35));
        Salidas_Color_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Salidas_Tipo = new QLabel(BOLETAS_Salidas);
        Salidas_Tipo->setObjectName(QStringLiteral("Salidas_Tipo"));
        Salidas_Tipo->setGeometry(QRect(70, 630, 151, 31));
        Salidas_Tipo->setFont(font5);
        Salidas_Tipo->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Tipo->setAlignment(Qt::AlignCenter);
        Salidas_Color = new QLabel(BOLETAS_Salidas);
        Salidas_Color->setObjectName(QStringLiteral("Salidas_Color"));
        Salidas_Color->setGeometry(QRect(70, 545, 81, 31));
        Salidas_Color->setFont(font5);
        Salidas_Color->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Color->setAlignment(Qt::AlignCenter);
        Salidas_Chofer_Nombre = new QLabel(BOLETAS_Salidas);
        Salidas_Chofer_Nombre->setObjectName(QStringLiteral("Salidas_Chofer_Nombre"));
        Salidas_Chofer_Nombre->setGeometry(QRect(80, 290, 111, 31));
        Salidas_Chofer_Nombre->setFont(font5);
        Salidas_Chofer_Nombre->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Salidas_Chofer_Nombre->setAlignment(Qt::AlignCenter);
        Salidas_Tipo_edit = new QLineEdit(BOLETAS_Salidas);
        Salidas_Tipo_edit->setObjectName(QStringLiteral("Salidas_Tipo_edit"));
        Salidas_Tipo_edit->setGeometry(QRect(45, 660, 380, 35));
        Salidas_Tipo_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        Chofer_Salida = new QLabel(BOLETAS_Salidas);
        Chofer_Salida->setObjectName(QStringLiteral("Chofer_Salida"));
        Chofer_Salida->setGeometry(QRect(190, 250, 101, 31));
        Chofer_Salida->setFont(font5);
        Chofer_Salida->setStyleSheet(QLatin1String("font:25px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);"));
        Chofer_Salida->setAlignment(Qt::AlignCenter);
        Salida_Razon_Social_edit = new QComboBox(BOLETAS_Salidas);
        Salida_Razon_Social_edit->setObjectName(QStringLiteral("Salida_Razon_Social_edit"));
        Salida_Razon_Social_edit->setGeometry(QRect(48, 90, 301, 35));
        Salida_Razon_Social_edit->setStyleSheet(QLatin1String("font:16px;\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:8px;\n"
"background:white;\n"
""));
        SocioNum_Comp_edit = new QLabel(BOLETAS_Salidas);
        SocioNum_Comp_edit->setObjectName(QStringLiteral("SocioNum_Comp_edit"));
        SocioNum_Comp_edit->setEnabled(true);
        SocioNum_Comp_edit->setGeometry(QRect(360, 90, 101, 31));
        SocioNum_Comp_edit->setFont(font5);
        SocioNum_Comp_edit->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"color:red;"));
        SocioNum_Comp_edit->setAlignment(Qt::AlignCenter);
        Salidas_Tipo->raise();
        Salidas_Color->raise();
        Salidas_Placas->raise();
        Salidas_Chofer_Apellidos->raise();
        Salidas_Chofer_Nombre->raise();
        Salida_Destino->raise();
        Salida_Razon_Social->raise();
        Salidas_Destino_edit->raise();
        Comprador_Salida->raise();
        SocioNum_Comp->raise();
        Salidas_Placas_edit->raise();
        Salidas_Chofer_Nombre_edit->raise();
        Salidas_Chofer_Apellidos_edit->raise();
        Salidas_Color_edit->raise();
        Salidas_Tipo_edit->raise();
        Chofer_Salida->raise();
        Salida_Razon_Social_edit->raise();
        SocioNum_Comp_edit->raise();
        frame_39 = new QFrame(page);
        frame_39->setObjectName(QStringLiteral("frame_39"));
        frame_39->setGeometry(QRect(730, 460, 470, 410));
        frame_39->setStyleSheet(QLatin1String("font: 20pt \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(200, 200, 200);\n"
"background:rgb(237, 237, 237);\n"
"border-style:solid;\n"
"border-radius:20px;"));
        frame_39->setFrameShape(QFrame::StyledPanel);
        frame_39->setFrameShadow(QFrame::Raised);
        Tabla_Salidas_Folios = new QTableWidget(frame_39);
        Tabla_Salidas_Folios->setObjectName(QStringLiteral("Tabla_Salidas_Folios"));
        Tabla_Salidas_Folios->setGeometry(QRect(20, 40, 430, 351));
        Tabla_Salidas_Folios->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"border-width:1px;\n"
"border-color:rgb(30,30,30);\n"
"border-style:solid;\n"
"border-radius:0px;\n"
"background:white;"));
        Tabla_Salidas_Folios->verticalHeader()->setVisible(false);
        label_6 = new QLabel(frame_39);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 9, 70, 31));
        label_6->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame_39);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 9, 120, 31));
        label_7->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(frame_39);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(250, 9, 90, 31));
        label_8->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(frame_39);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 9, 70, 31));
        label_9->setStyleSheet(QLatin1String("font:20px;\n"
"border-radius:0px;\n"
"background:transparent;\n"
"border-color: rgb(237, 237, 237);\n"
"border-width:0px;"));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->raise();
        label_8->raise();
        label_7->raise();
        label_6->raise();
        Tabla_Salidas_Folios->raise();
        push_Salidas_Borrar = new QPushButton(page);
        push_Salidas_Borrar->setObjectName(QStringLiteral("push_Salidas_Borrar"));
        push_Salidas_Borrar->setGeometry(QRect(1280, 450, 200, 57));
        push_Salidas_Borrar->setFont(font5);
        push_Salidas_Borrar->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"font:20px;\n"
"color:black;\n"
"background-color:rgb(252,252,252);\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:white;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:0px;\n"
"}\n"
"\n"
""));
        SW_Zona_Principal->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        Panel_Silos = new QLabel(page_2);
        Panel_Silos->setObjectName(QStringLiteral("Panel_Silos"));
        Panel_Silos->setGeometry(QRect(20, 20, 180, 40));
        Panel_Silos->setMinimumSize(QSize(0, 0));
        Panel_Silos->setFont(font8);
        Panel_Silos->setStyleSheet(QLatin1String("font: 30pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-style:none none solid none;\n"
"border-radius:0px;"));
        Panel_Silos->setFrameShape(QFrame::Box);
        Panel_Silos->setFrameShadow(QFrame::Raised);
        Panel_Silos->setLineWidth(2);
        Panel_Silos->setMidLineWidth(0);
        Panel_Silos->setAlignment(Qt::AlignCenter);
        Fondo_10 = new QLabel(page_2);
        Fondo_10->setObjectName(QStringLiteral("Fondo_10"));
        Fondo_10->setGeometry(QRect(0, 0, 1640, 1030));
        Fondo_10->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/SorgoPlanta2.jpg")));
        Fondo_10->setScaledContents(true);
        Silo_Total_1 = new QLabel(page_2);
        Silo_Total_1->setObjectName(QStringLiteral("Silo_Total_1"));
        Silo_Total_1->setGeometry(QRect(130, 110, 600, 780));
        Silo_Total_1->setStyleSheet(QLatin1String("background:transparent;\n"
"border-width:0px;"));
        Silo_Total_1->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Silo_Volumen_1.png")));
        Silo_Total_1->setScaledContents(true);
        Silo_Total_2 = new QLabel(page_2);
        Silo_Total_2->setObjectName(QStringLiteral("Silo_Total_2"));
        Silo_Total_2->setGeometry(QRect(800, 110, 600, 780));
        Silo_Total_2->setStyleSheet(QLatin1String("background:transparent;\n"
"border-width:0px;"));
        Silo_Total_2->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Silo_Volumen_1.png")));
        Silo_Total_2->setScaledContents(true);
        icon_Arrow_8 = new QLabel(page_2);
        icon_Arrow_8->setObjectName(QStringLiteral("icon_Arrow_8"));
        icon_Arrow_8->setGeometry(QRect(130, 360, 51, 35));
        icon_Arrow_8->setAutoFillBackground(false);
        icon_Arrow_8->setStyleSheet(QLatin1String("background:transparent;\n"
"border-width:0px;"));
        icon_Arrow_8->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_8->setScaledContents(true);
        icon_Arrow_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        icon_Arrow_9 = new QLabel(page_2);
        icon_Arrow_9->setObjectName(QStringLiteral("icon_Arrow_9"));
        icon_Arrow_9->setGeometry(QRect(800, 360, 51, 35));
        icon_Arrow_9->setAutoFillBackground(false);
        icon_Arrow_9->setStyleSheet(QLatin1String("background:transparent;\n"
"border-width:0px;"));
        icon_Arrow_9->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_9->setScaledContents(true);
        icon_Arrow_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        graphicsView = new QGraphicsView(page_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(610, 20, 256, 192));
        SW_Zona_Principal->addWidget(page_2);
        Fondo_10->raise();
        Panel_Silos->raise();
        Silo_Total_1->raise();
        Silo_Total_2->raise();
        icon_Arrow_9->raise();
        icon_Arrow_8->raise();
        graphicsView->raise();
        Barra_lateral = new QFrame(centralwidget);
        Barra_lateral->setObjectName(QStringLiteral("Barra_lateral"));
        Barra_lateral->setGeometry(QRect(0, 0, 301, 1081));
        Barra_lateral->setStyleSheet(QLatin1String("border-width:0px;\n"
"color: rgba(239, 237, 228,255);\n"
"background-color:rgb(255, 255, 255);"));
        Barra_lateral->setFrameShape(QFrame::StyledPanel);
        Barra_lateral->setFrameShadow(QFrame::Raised);
        frame_Botones = new QFrame(Barra_lateral);
        frame_Botones->setObjectName(QStringLiteral("frame_Botones"));
        frame_Botones->setGeometry(QRect(0, 340, 300, 501));
        QPalette palette5;
        QBrush brush3(QColor(239, 237, 228, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        frame_Botones->setPalette(palette5);
        frame_Botones->setAutoFillBackground(false);
        frame_Botones->setStyleSheet(QLatin1String("font: 30pt \"Bahnschrift\";\n"
"border-width:3px;\n"
"border-color:rgb(255, 20, 82);\n"
"border-radius:0px;"));
        frame_Botones->setFrameShape(QFrame::Panel);
        frame_Botones->setFrameShadow(QFrame::Sunken);
        frame_Botones->setLineWidth(1);
        icon_Boletas = new QLabel(frame_Botones);
        icon_Boletas->setObjectName(QStringLiteral("icon_Boletas"));
        icon_Boletas->setGeometry(QRect(50, 50, 39, 35));
        icon_Boletas->setAutoFillBackground(false);
        icon_Boletas->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Boletas->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Bascula1_edit.png")));
        icon_Boletas->setScaledContents(true);
        icon_Boletas->setAlignment(Qt::AlignCenter);
        icon_Reg = new QLabel(frame_Botones);
        icon_Reg->setObjectName(QStringLiteral("icon_Reg"));
        icon_Reg->setGeometry(QRect(50, 224, 40, 40));
        icon_Reg->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Registros1_edit.png")));
        icon_Reg->setScaledContents(true);
        icon_Reg->setAlignment(Qt::AlignCenter);
        icon_Prod = new QLabel(frame_Botones);
        icon_Prod->setObjectName(QStringLiteral("icon_Prod"));
        icon_Prod->setGeometry(QRect(50, 283, 36, 41));
        icon_Prod->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Silo1_edit.png")));
        icon_Prod->setScaledContents(true);
        icon_Prod->setAlignment(Qt::AlignCenter);
        icon_Comp = new QLabel(frame_Botones);
        icon_Comp->setObjectName(QStringLiteral("icon_Comp"));
        icon_Comp->setGeometry(QRect(50, 347, 40, 35));
        icon_Comp->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Compradores1_edit.png")));
        icon_Comp->setScaledContents(true);
        icon_Comp->setAlignment(Qt::AlignCenter);
        push_Liquidacion = new QPushButton(frame_Botones);
        push_Liquidacion->setObjectName(QStringLiteral("push_Liquidacion"));
        push_Liquidacion->setGeometry(QRect(0, 100, 300, 50));
        push_Liquidacion->setMinimumSize(QSize(160, 50));
        push_Liquidacion->setFont(font8);
        push_Liquidacion->setLayoutDirection(Qt::LeftToRight);
        push_Liquidacion->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:80px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Liquidacion->setFlat(true);
        icon_Liq = new QLabel(frame_Botones);
        icon_Liq->setObjectName(QStringLiteral("icon_Liq"));
        icon_Liq->setGeometry(QRect(50, 104, 37, 41));
        icon_Liq->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Liq->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Liquidacion1_edit.png")));
        icon_Liq->setScaledContents(true);
        icon_Liq->setAlignment(Qt::AlignCenter);
        push_Boletas = new QPushButton(frame_Botones);
        push_Boletas->setObjectName(QStringLiteral("push_Boletas"));
        push_Boletas->setGeometry(QRect(0, 40, 301, 50));
        push_Boletas->setMinimumSize(QSize(160, 50));
        push_Boletas->setFont(font8);
        push_Boletas->setLayoutDirection(Qt::LeftToRight);
        push_Boletas->setAutoFillBackground(false);
        push_Boletas->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:70px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Boletas->setFlat(true);
        push_Registros = new QPushButton(frame_Botones);
        push_Registros->setObjectName(QStringLiteral("push_Registros"));
        push_Registros->setGeometry(QRect(0, 220, 300, 50));
        push_Registros->setMinimumSize(QSize(160, 50));
        push_Registros->setFont(font8);
        push_Registros->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:70px\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Registros->setFlat(true);
        push_Productores = new QPushButton(frame_Botones);
        push_Productores->setObjectName(QStringLiteral("push_Productores"));
        push_Productores->setGeometry(QRect(0, 280, 300, 50));
        push_Productores->setMinimumSize(QSize(160, 50));
        push_Productores->setFont(font8);
        push_Productores->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:85px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Productores->setFlat(true);
        push_Compradores = new QPushButton(frame_Botones);
        push_Compradores->setObjectName(QStringLiteral("push_Compradores"));
        push_Compradores->setGeometry(QRect(0, 340, 300, 50));
        push_Compradores->setMinimumSize(QSize(160, 50));
        push_Compradores->setFont(font8);
        push_Compradores->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:90px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Compradores->setFlat(true);
        push_Salidas = new QPushButton(frame_Botones);
        push_Salidas->setObjectName(QStringLiteral("push_Salidas"));
        push_Salidas->setGeometry(QRect(0, 160, 300, 50));
        push_Salidas->setMinimumSize(QSize(160, 50));
        push_Salidas->setFont(font8);
        push_Salidas->setLayoutDirection(Qt::LeftToRight);
        push_Salidas->setAutoFillBackground(false);
        push_Salidas->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:70px;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Salidas->setFlat(true);
        icon_Salidas = new QLabel(frame_Botones);
        icon_Salidas->setObjectName(QStringLiteral("icon_Salidas"));
        icon_Salidas->setGeometry(QRect(50, 168, 39, 35));
        icon_Salidas->setAutoFillBackground(false);
        icon_Salidas->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Salidas->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Bascula1_edit.png")));
        icon_Salidas->setScaledContents(true);
        icon_Salidas->setAlignment(Qt::AlignCenter);
        push_Silos = new QPushButton(frame_Botones);
        push_Silos->setObjectName(QStringLiteral("push_Silos"));
        push_Silos->setEnabled(true);
        push_Silos->setGeometry(QRect(0, 400, 300, 50));
        push_Silos->setMinimumSize(QSize(160, 50));
        push_Silos->setFont(font8);
        push_Silos->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"color:black;\n"
"background-color:transparent;\n"
"border-color:transparent;\n"
"border-width:1px;\n"
"border-radius:0px;\n"
"padding-left:70px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:black;\n"
"background-color:rgb(255, 130, 75);\n"
"border-color:rgb(255,255,255);\n"
"border-width:2px;\n"
"}\n"
"\n"
""));
        push_Silos->setFlat(true);
        icon_Silos = new QLabel(frame_Botones);
        icon_Silos->setObjectName(QStringLiteral("icon_Silos"));
        icon_Silos->setGeometry(QRect(50, 404, 36, 41));
        icon_Silos->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Silo1_edit.png")));
        icon_Silos->setScaledContents(true);
        icon_Silos->setAlignment(Qt::AlignCenter);
        icon_Arrow_1 = new QLabel(frame_Botones);
        icon_Arrow_1->setObjectName(QStringLiteral("icon_Arrow_1"));
        icon_Arrow_1->setGeometry(QRect(0, 56, 51, 21));
        icon_Arrow_1->setAutoFillBackground(false);
        icon_Arrow_1->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_1->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_1->setScaledContents(true);
        icon_Arrow_1->setAlignment(Qt::AlignCenter);
        icon_Arrow_2 = new QLabel(frame_Botones);
        icon_Arrow_2->setObjectName(QStringLiteral("icon_Arrow_2"));
        icon_Arrow_2->setGeometry(QRect(0, 116, 51, 20));
        icon_Arrow_2->setAutoFillBackground(false);
        icon_Arrow_2->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_2->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_2->setScaledContents(true);
        icon_Arrow_2->setAlignment(Qt::AlignCenter);
        icon_Arrow_3 = new QLabel(frame_Botones);
        icon_Arrow_3->setObjectName(QStringLiteral("icon_Arrow_3"));
        icon_Arrow_3->setGeometry(QRect(0, 176, 51, 20));
        icon_Arrow_3->setAutoFillBackground(false);
        icon_Arrow_3->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_3->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_3->setScaledContents(true);
        icon_Arrow_3->setAlignment(Qt::AlignCenter);
        icon_Arrow_4 = new QLabel(frame_Botones);
        icon_Arrow_4->setObjectName(QStringLiteral("icon_Arrow_4"));
        icon_Arrow_4->setGeometry(QRect(0, 235, 51, 20));
        icon_Arrow_4->setAutoFillBackground(false);
        icon_Arrow_4->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_4->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_4->setScaledContents(true);
        icon_Arrow_4->setAlignment(Qt::AlignCenter);
        icon_Arrow_5 = new QLabel(frame_Botones);
        icon_Arrow_5->setObjectName(QStringLiteral("icon_Arrow_5"));
        icon_Arrow_5->setGeometry(QRect(0, 295, 51, 20));
        icon_Arrow_5->setAutoFillBackground(false);
        icon_Arrow_5->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_5->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_5->setScaledContents(true);
        icon_Arrow_5->setAlignment(Qt::AlignCenter);
        icon_Arrow_6 = new QLabel(frame_Botones);
        icon_Arrow_6->setObjectName(QStringLiteral("icon_Arrow_6"));
        icon_Arrow_6->setGeometry(QRect(0, 355, 51, 20));
        icon_Arrow_6->setAutoFillBackground(false);
        icon_Arrow_6->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_6->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_6->setScaledContents(true);
        icon_Arrow_6->setAlignment(Qt::AlignCenter);
        icon_Arrow_7 = new QLabel(frame_Botones);
        icon_Arrow_7->setObjectName(QStringLiteral("icon_Arrow_7"));
        icon_Arrow_7->setGeometry(QRect(0, 414, 51, 20));
        icon_Arrow_7->setAutoFillBackground(false);
        icon_Arrow_7->setStyleSheet(QStringLiteral("background:transparent;"));
        icon_Arrow_7->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Arrow_Right.png")));
        icon_Arrow_7->setScaledContents(true);
        icon_Arrow_7->setAlignment(Qt::AlignCenter);
        icon_Arrow_7->raise();
        icon_Arrow_6->raise();
        icon_Arrow_5->raise();
        icon_Arrow_4->raise();
        icon_Arrow_3->raise();
        icon_Arrow_2->raise();
        icon_Arrow_1->raise();
        push_Boletas->raise();
        push_Salidas->raise();
        push_Compradores->raise();
        push_Productores->raise();
        push_Registros->raise();
        icon_Boletas->raise();
        icon_Reg->raise();
        icon_Prod->raise();
        icon_Comp->raise();
        push_Liquidacion->raise();
        icon_Liq->raise();
        icon_Salidas->raise();
        push_Silos->raise();
        icon_Silos->raise();
        Nombre_Programa = new QLabel(Barra_lateral);
        Nombre_Programa->setObjectName(QStringLiteral("Nombre_Programa"));
        Nombre_Programa->setGeometry(QRect(0, 50, 291, 271));
        Nombre_Programa->setMinimumSize(QSize(0, 0));
        Nombre_Programa->setFont(font4);
        Nombre_Programa->setStyleSheet(QLatin1String("font: 50pt \"Bahnschrift\";\n"
"color:black;\n"
"border:0px solid black;\n"
"background: transparent;"));
        Nombre_Programa->setFrameShape(QFrame::Box);
        Nombre_Programa->setFrameShadow(QFrame::Raised);
        Nombre_Programa->setLineWidth(0);
        Nombre_Programa->setMidLineWidth(0);
        Nombre_Programa->setPixmap(QPixmap(QString::fromUtf8(":/prefijoNuevo/Imagenes/Logo.png")));
        Nombre_Programa->setScaledContents(true);
        Nombre_Programa->setAlignment(Qt::AlignCenter);
        frame_25 = new QFrame(Barra_lateral);
        frame_25->setObjectName(QStringLiteral("frame_25"));
        frame_25->setGeometry(QRect(0, 960, 371, 31));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_25);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 3, 361, 21));
        QFont font11;
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(50);
        label_5->setFont(font11);
        label_5->setStyleSheet(QLatin1String("font:14px;\n"
"color:black;"));
        Nombre_Programa->raise();
        frame_Botones->raise();
        frame_25->raise();
        Pantalla_Principal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Pantalla_Principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QFont font12;
        font12.setFamily(QStringLiteral("Times New Roman"));
        statusbar->setFont(font12);
        Pantalla_Principal->setStatusBar(statusbar);
        menubar = new QMenuBar(Pantalla_Principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 23));
        QFont font13;
        font13.setFamily(QStringLiteral("Times New Roman"));
        font13.setPointSize(16);
        font13.setBold(false);
        font13.setWeight(50);
        menubar->setFont(font13);
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        QFont font14;
        font14.setFamily(QStringLiteral("Bahnschrift"));
        font14.setPointSize(18);
        menuArchivo->setFont(font14);
        menuRegistros = new QMenu(menuArchivo);
        menuRegistros->setObjectName(QStringLiteral("menuRegistros"));
        menuRegistros->setFont(font1);
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        menuAyuda->setFont(font14);
        Pantalla_Principal->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionEntradas);
        menuArchivo->addAction(actionSalidas);
        menuArchivo->addAction(menuRegistros->menuAction());
        menuArchivo->addAction(actionProductores);
        menuArchivo->addAction(actionCompradores);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuRegistros->addAction(actionIndividuales);
        menuRegistros->addAction(actionGenerales);
        menuAyuda->addAction(actionRespaldar);
        menuAyuda->addAction(actionOpciones);
        menuAyuda->addAction(actionHumedad_y_secado);
        menuAyuda->addSeparator();
        menuAyuda->addAction(actionAcerda_de);

        retranslateUi(Pantalla_Principal);

        SW_Zona_Principal->setCurrentIndex(0);
        Registros_Tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pantalla_Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Pantalla_Principal)
    {
        actionSalir->setText(QApplication::translate("Pantalla_Principal", "Salir ", nullptr));
        About->setText(QApplication::translate("Pantalla_Principal", "Acerca de...", nullptr));
        actionEntradas->setText(QApplication::translate("Pantalla_Principal", "Entradas", nullptr));
        actionSalidas->setText(QApplication::translate("Pantalla_Principal", "Liquidacion", nullptr));
        actionProductores->setText(QApplication::translate("Pantalla_Principal", "Productores", nullptr));
        actionCompradores->setText(QApplication::translate("Pantalla_Principal", "Compradores", nullptr));
        actionBascula->setText(QApplication::translate("Pantalla_Principal", "Bascula", nullptr));
        actionAcerda_de->setText(QApplication::translate("Pantalla_Principal", "Acerca de...", nullptr));
        actionBase_de_Datos->setText(QApplication::translate("Pantalla_Principal", "Base de Datos", nullptr));
        actionRespaldar->setText(QApplication::translate("Pantalla_Principal", "Respaldar", nullptr));
        actionOpciones->setText(QApplication::translate("Pantalla_Principal", "Opciones", nullptr));
        actionHumedad_y_secado->setText(QApplication::translate("Pantalla_Principal", "Humedad y secado", nullptr));
        actionIndividuales->setText(QApplication::translate("Pantalla_Principal", "Individuales", nullptr));
        actionGenerales->setText(QApplication::translate("Pantalla_Principal", "Generales", nullptr));
        SplashScreenLogo->setText(QString());
        Nombre_Programa_Landing->setText(QString());
        Predio_Ubicacion->setText(QApplication::translate("Pantalla_Principal", "Procedencia", nullptr));
        Predio->setText(QApplication::translate("Pantalla_Principal", "Predio", nullptr));
        Productor->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        SocioNum->setText(QApplication::translate("Pantalla_Principal", "No Socio", nullptr));
        Nombres_Prod->setText(QApplication::translate("Pantalla_Principal", "Nombres", nullptr));
        Apellido1_Chofer->setText(QApplication::translate("Pantalla_Principal", "Apellidos", nullptr));
        Placas_Camion->setText(QApplication::translate("Pantalla_Principal", "Placas Camion", nullptr));
        Camion_Tipo->setText(QApplication::translate("Pantalla_Principal", "Tipo de camion", nullptr));
        Camion_Color->setText(QApplication::translate("Pantalla_Principal", "Color", nullptr));
        Nombres_Chofer->setText(QApplication::translate("Pantalla_Principal", "Nombres", nullptr));
        Chofer->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        SocioNum_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Peso_Tara->setText(QApplication::translate("Pantalla_Principal", "Tara", nullptr));
        Peso_Bruto->setText(QApplication::translate("Pantalla_Principal", "Bruto", nullptr));
        Humedad->setText(QApplication::translate("Pantalla_Principal", "Humedad", nullptr));
        Ton_1->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Ton_2->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Ton_3->setText(QApplication::translate("Pantalla_Principal", "grados", nullptr));
        Silo_1->setText(QApplication::translate("Pantalla_Principal", "Silo 1", nullptr));
        Silo_2->setText(QApplication::translate("Pantalla_Principal", "Silo 2", nullptr));
        Peso_Espe->setText(QApplication::translate("Pantalla_Principal", "Peso Especifico", nullptr));
        Peso_Neto->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        Ton_4->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Peso_Neto_edit->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Tabla_Entradas_Folios->setWhatsThis(QApplication::translate("Pantalla_Principal", "Boletas ingresadas", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Pantalla_Principal", "Folio", nullptr));
        label_2->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        label_3->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        label_4->setText(QApplication::translate("Pantalla_Principal", "Hora", nullptr));
        Folio->setText(QApplication::translate("Pantalla_Principal", "Folio Boleta", nullptr));
        Ciclo->setText(QApplication::translate("Pantalla_Principal", "Ciclo Actual", nullptr));
        Ciclo_edit->setText(QApplication::translate("Pantalla_Principal", "Ciclo O-I 19-20", nullptr));
        Fecha->setText(QApplication::translate("Pantalla_Principal", "Fecha/Hora actual", nullptr));
        Fondo_1->setText(QString());
#ifndef QT_NO_WHATSTHIS
        push_Entradas_Nuevo->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea un registro nuevo con los datos ingresados", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Entradas_Nuevo->setText(QApplication::translate("Pantalla_Principal", "Nueva Boleta", nullptr));
        push_Entrada_Borrar->setText(QApplication::translate("Pantalla_Principal", "Borrar Boleta", nullptr));
        push_Entrada_Limpiar->setText(QApplication::translate("Pantalla_Principal", "Limpiar Campos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Registros_Ind->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Pantalla_Principal", "Folio #", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Registros_Ind->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Registros_Ind->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Pantalla_Principal", "Bruto", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Registros_Ind->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Pantalla_Principal", "Tara", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Registros_Ind->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Registros_Ind->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Pantalla_Principal", "Humedad", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Registros_Ind->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Pantalla_Principal", "Impuresas", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Registros_Ind->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Pantalla_Principal", "Merma", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Registros_Ind->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Pantalla_Principal", "Peso Neto Analizado", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Registros_Ind->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Pantalla_Principal", "Total", nullptr));
#ifndef QT_NO_TOOLTIP
        RegInd_Print->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        RegInd_Print->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        RegInd_Print->setText(QApplication::translate("Pantalla_Principal", "Imprimir", nullptr));
        Ciclo_Ind->setText(QApplication::translate("Pantalla_Principal", "Ciclo :", nullptr));
        Prod_Ind->setText(QApplication::translate("Pantalla_Principal", "Productor :", nullptr));
        Ciclo_Ind_2->setText(QApplication::translate("Pantalla_Principal", "Folio", nullptr));
        Ciclo_Ind_3->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        Ciclo_Ind_5->setText(QApplication::translate("Pantalla_Principal", "Placas", nullptr));
        Ciclo_Ind_6->setText(QApplication::translate("Pantalla_Principal", "Color", nullptr));
        Ciclo_Ind_7->setText(QApplication::translate("Pantalla_Principal", "Tipo", nullptr));
        Ciclo_Ind_8->setText(QApplication::translate("Pantalla_Principal", "Humedad", nullptr));
        Ciclo_Ind_9->setText(QApplication::translate("Pantalla_Principal", "Bruto", nullptr));
        Ciclo_Ind_10->setText(QApplication::translate("Pantalla_Principal", "Tara", nullptr));
        Ciclo_Ind_11->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        label_48->setText(QApplication::translate("Pantalla_Principal", "Grano Entregado", nullptr));
        label_51->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        GranoEntregado->setText(QApplication::translate("Pantalla_Principal", "0000", nullptr));
        Registros_Tab->setTabText(Registros_Tab->indexOf(Individual), QApplication::translate("Pantalla_Principal", "Individual", nullptr));
        Ciclo_Gen->setText(QApplication::translate("Pantalla_Principal", "Ciclo:", nullptr));
#ifndef QT_NO_TOOLTIP
        RegGen_Print->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        RegGen_Print->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        RegGen_Print->setText(QApplication::translate("Pantalla_Principal", "Imprimir", nullptr));
        label_42->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        label_43->setText(QApplication::translate("Pantalla_Principal", "Analizado", nullptr));
        label_44->setText(QApplication::translate("Pantalla_Principal", "Secado", nullptr));
        label_45->setText(QApplication::translate("Pantalla_Principal", "Cuota Grano", nullptr));
        label_46->setText(QApplication::translate("Pantalla_Principal", "Sanidad", nullptr));
        label_49->setText(QApplication::translate("Pantalla_Principal", "Total", nullptr));
        label_41->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        label_47->setText(QApplication::translate("Pantalla_Principal", "Total de Grano", nullptr));
        TotalGranoEntregado->setText(QApplication::translate("Pantalla_Principal", "0000", nullptr));
        label_50->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Registros_Tab->setTabText(Registros_Tab->indexOf(General), QApplication::translate("Pantalla_Principal", "General", nullptr));
        Fondo_2->setText(QString());
        Panel_Adeudos->setText(QApplication::translate("Pantalla_Principal", "Adeudos", nullptr));
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
        Exced_TonsDerecho->setText(QApplication::translate("Pantalla_Principal", "Tons con derechos", nullptr));
        Exced_TonsDerecho_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Exced_TonsEntregada->setText(QApplication::translate("Pantalla_Principal", "Toneladas Entregadas", nullptr));
        Exced_TonsEntregada_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Exced_TonsExce->setText(QApplication::translate("Pantalla_Principal", "Toneladas Excedentes :", nullptr));
        Exced_Pagar->setText(QApplication::translate("Pantalla_Principal", "Total a Pagar:", nullptr));
        Exced_TonsExce_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Exced_Pagar_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_123->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        label_124->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        label_125->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        label_126->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        CalculoExcedentes->setText(QApplication::translate("Pantalla_Principal", "Excedentes (                  x Ton):", nullptr));
        ExcedentesCalculo_edit->setText(QApplication::translate("Pantalla_Principal", "0000", nullptr));
        PrimaTonsCont->setText(QApplication::translate("Pantalla_Principal", "Tons Contratadas", nullptr));
        PrimaTonsCont_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        PrimaMontoTon->setText(QApplication::translate("Pantalla_Principal", "Monto x Ton", nullptr));
        PrimaMontoTon_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        PrimaImporte->setText(QApplication::translate("Pantalla_Principal", "Importe", nullptr));
        PrimaPagar->setText(QApplication::translate("Pantalla_Principal", "Total a Pagar:", nullptr));
        PrimaImporte_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        PrimaPagar_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        CalculoPrimaCobertura->setText(QApplication::translate("Pantalla_Principal", "Prima de Cobertura ( $                  x Ton):", nullptr));
        PrimaCalculoCobertura_edit->setText(QApplication::translate("Pantalla_Principal", "00000", nullptr));
        label_129->setText(QApplication::translate("Pantalla_Principal", "Semilla\n"
"No. de Orden", nullptr));
        label_132->setText(QApplication::translate("Pantalla_Principal", "Marca", nullptr));
        label_133->setText(QApplication::translate("Pantalla_Principal", "Variedad", nullptr));
        label_134->setText(QApplication::translate("Pantalla_Principal", "Cantidad", nullptr));
        label_135->setText(QApplication::translate("Pantalla_Principal", "Precio", nullptr));
        label_136->setText(QApplication::translate("Pantalla_Principal", "Total a Pagar", nullptr));
        label_131->setText(QApplication::translate("Pantalla_Principal", "Anticipos \n"
"No. de Cheque", nullptr));
        label_142->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        label_143->setText(QApplication::translate("Pantalla_Principal", "Beneficiario", nullptr));
        label_145->setText(QApplication::translate("Pantalla_Principal", "Importe", nullptr));
        label_137->setText(QApplication::translate("Pantalla_Principal", "Diesel \n"
"No. de Cheque", nullptr));
        label_146->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        label_147->setText(QApplication::translate("Pantalla_Principal", "Beneficiario", nullptr));
        label_149->setText(QApplication::translate("Pantalla_Principal", "Importe", nullptr));
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
        Ciclo_sal->setText(QApplication::translate("Pantalla_Principal", "Ciclo:", nullptr));
        ExcedNoProd_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        ExcedNoProd->setText(QApplication::translate("Pantalla_Principal", "No. Productor :", nullptr));
        Prod_sal->setText(QApplication::translate("Pantalla_Principal", "Productor:", nullptr));
        N_contrato->setText(QApplication::translate("Pantalla_Principal", "No de Contrato:", nullptr));
        Totales->setText(QApplication::translate("Pantalla_Principal", "Totales: ", nullptr));
#ifndef QT_NO_TOOLTIP
        Prod_Guardar_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Prod_Guardar_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Prod_Guardar_2->setText(QApplication::translate("Pantalla_Principal", "Imprimir", nullptr));
        LiquidacionGeneralSorgo->setText(QApplication::translate("Pantalla_Principal", "LIQUIDACION GENERAL DE SORGO:", nullptr));
        TotalRetencionesAdeudos->setText(QApplication::translate("Pantalla_Principal", "TOTAL DE RETENCIONES Y ADEUDOS:", nullptr));
        NetoPagar->setText(QApplication::translate("Pantalla_Principal", "NETO A PAGAR", nullptr));
        NetoPagar_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        TotalRetAdeu_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        LiqGenSorgo_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_206->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        label_204->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        label_202->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        Fondo_3->setText(QString());
        Nombre->setText(QApplication::translate("Pantalla_Principal", "Nombre", nullptr));
        Predio_Lista_Prod_2->setText(QApplication::translate("Pantalla_Principal", "Predio", nullptr));
        Ciudad_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Ciudad, Ejido", nullptr));
        Acciones_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "# Acciones", nullptr));
        Direccion_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Direccion", nullptr));
        No_Cliente->setText(QApplication::translate("Pantalla_Principal", "# Socio", nullptr));
        Apellidos_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Apellidos", nullptr));
        Email_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Email", nullptr));
        Tel_Lista_Pro->setText(QApplication::translate("Pantalla_Principal", "Telefono", nullptr));
        Whats_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "Whatsapp", nullptr));
        DatosProductor->setText(QApplication::translate("Pantalla_Principal", "Datos de Productor", nullptr));
        RFC_Lista_Prod->setText(QApplication::translate("Pantalla_Principal", "RFC", nullptr));
#ifndef QT_NO_TOOLTIP
        Prod_Guardar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Prod_Guardar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Prod_Guardar->setText(QApplication::translate("Pantalla_Principal", "Crear Nuevo \n"
"Registro", nullptr));
        ListaProductores->setText(QApplication::translate("Pantalla_Principal", "Lista de Productores", nullptr));
        Fondo_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Prod_Limpiar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Prod_Limpiar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Prod_Limpiar->setText(QApplication::translate("Pantalla_Principal", "Limpiar \n"
"Registro", nullptr));
#ifndef QT_NO_TOOLTIP
        Prod_Borrar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Prod_Borrar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Prod_Borrar->setText(QApplication::translate("Pantalla_Principal", "Borrar \n"
"Registro", nullptr));
        Razon_Social->setText(QApplication::translate("Pantalla_Principal", "Razon Social", nullptr));
        Contacto->setText(QApplication::translate("Pantalla_Principal", "Nombre Contacto", nullptr));
        Direccion->setText(QApplication::translate("Pantalla_Principal", "Direccion", nullptr));
        Whatsapp->setText(QApplication::translate("Pantalla_Principal", "Whatsapp", nullptr));
        Telefono->setText(QApplication::translate("Pantalla_Principal", "Telefono", nullptr));
        Email->setText(QApplication::translate("Pantalla_Principal", "Email", nullptr));
        Ciudad->setText(QApplication::translate("Pantalla_Principal", "Ciudad", nullptr));
        Estado->setText(QApplication::translate("Pantalla_Principal", "Estado", nullptr));
        Comprador->setText(QApplication::translate("Pantalla_Principal", "Datos del Comprador", nullptr));
        RFC->setText(QApplication::translate("Pantalla_Principal", "RFC", nullptr));
        Precio_Ton->setText(QApplication::translate("Pantalla_Principal", "Precio Tonelada", nullptr));
        ListaCompradores->setText(QApplication::translate("Pantalla_Principal", "Lista de Compradores", nullptr));
        Fondo_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        Comp_Borrar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Comp_Borrar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Comp_Borrar->setText(QApplication::translate("Pantalla_Principal", "Borrar \n"
"Registro", nullptr));
#ifndef QT_NO_TOOLTIP
        Comp_Limpiar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Comp_Limpiar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Comp_Limpiar->setText(QApplication::translate("Pantalla_Principal", "Limpiar \n"
"Registro", nullptr));
#ifndef QT_NO_TOOLTIP
        Comp_Guardar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Comp_Guardar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Comp_Guardar->setText(QApplication::translate("Pantalla_Principal", "Crear Nuevo \n"
"Registro", nullptr));
        Liq_Prod->setText(QApplication::translate("Pantalla_Principal", "Productor", nullptr));
        Liq_Ciclo->setText(QApplication::translate("Pantalla_Principal", "Ciclo", nullptr));
        Liq_Ciclo_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        Liq_Comp->setText(QApplication::translate("Pantalla_Principal", "Comprador", nullptr));
        Liq_Folio->setText(QApplication::translate("Pantalla_Principal", "Folio", nullptr));
        Liq_Fecha->setText(QApplication::translate("Pantalla_Principal", "Fecha", nullptr));
        Liq_Tons->setText(QApplication::translate("Pantalla_Principal", "Toneladas", nullptr));
        Liq_Prod_Info->setText(QApplication::translate("Pantalla_Principal", "Productor:", nullptr));
        Liq_Proce_Info->setText(QApplication::translate("Pantalla_Principal", "Procedencia:", nullptr));
        Liq_Vehi_Info->setText(QApplication::translate("Pantalla_Principal", "Vehiculo:", nullptr));
        Liq_Placas_Info->setText(QApplication::translate("Pantalla_Principal", "Placas:", nullptr));
        Liq_Chofer_Info->setText(QApplication::translate("Pantalla_Principal", "Chofer:", nullptr));
        Liq_Neto_Info->setText(QApplication::translate("Pantalla_Principal", "Neto:", nullptr));
        Liq_Folio_Info->setText(QApplication::translate("Pantalla_Principal", "Folio:", nullptr));
        Liq_Fecha_Info->setText(QApplication::translate("Pantalla_Principal", "Fecha:", nullptr));
        Liq_Bruto_Info->setText(QApplication::translate("Pantalla_Principal", "Bruto:", nullptr));
        Liq_Tara_Info->setText(QApplication::translate("Pantalla_Principal", "Tara:", nullptr));
        Liq_Prod_Info_edit->setText(QString());
        Liq_Proce_Info_edit->setText(QString());
        Liq_Vehi_Info_edit->setText(QString());
        Liq_Placas_Info_edit->setText(QString());
        Liq_Chofer_Info_edit->setText(QString());
        Liq_Fecha_Info_edit->setText(QString());
        Liq_Folio_Info_edit->setText(QString());
        Liq_Bruto_Info_edit->setText(QString());
        Liq_Tara_Info_edit->setText(QString());
        Liq_Neto_Info_edit->setText(QString());
        Liq_Dedc_Humedad->setText(QApplication::translate("Pantalla_Principal", "Humedad:", nullptr));
        Liq_Dedc_Humedad_edit->setText(QString());
        Liq_NoProd->setText(QApplication::translate("Pantalla_Principal", "Productor Num:", nullptr));
        Liq_NoProd_edit->setText(QString());
        kgs_10->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        kgs_11->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        kgs_12->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        Liq_Reten_ConsGrano->setText(QApplication::translate("Pantalla_Principal", "Cuota de Cons Grano", nullptr));
        Liq_Reten_Sanidad->setText(QApplication::translate("Pantalla_Principal", "Sanidad Vegetal", nullptr));
        Liq_Reten_IvaSecado->setText(QApplication::translate("Pantalla_Principal", "Iva Secado", nullptr));
        Liq_Reten_Total->setText(QApplication::translate("Pantalla_Principal", "Total de Retenciones ", nullptr));
        Liq_Reten_ConsGrano_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        Liq_Reten_Sanidad_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        Liq_Reten_Secado_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        Liq_Reten_Total_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        dlls_1->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        dlls_3->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        dlls_5->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        dlls_6->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        Liq_Reten_Secado->setText(QApplication::translate("Pantalla_Principal", "Secado:", nullptr));
        Liq_Reten_IvaSecado_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        dlls_4->setText(QApplication::translate("Pantalla_Principal", "$", nullptr));
        Liq_Dedc_Merma->setText(QApplication::translate("Pantalla_Principal", "1 % Merma", nullptr));
        Liq_Dedc_Deducciones->setText(QApplication::translate("Pantalla_Principal", "Deducciones por\n"
" Humedad", nullptr));
        Liq_Dedc_Merma_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        Liq_Dedc_Deducciones_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        kgs_5->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        kgs_6->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Liq_Liquidacion->setText(QApplication::translate("Pantalla_Principal", "Liquidacion", nullptr));
        Boletas->setText(QApplication::translate("Pantalla_Principal", "Boletas", nullptr));
        Retenciones->setText(QApplication::translate("Pantalla_Principal", "Retenciones", nullptr));
        Deducciones->setText(QApplication::translate("Pantalla_Principal", "Deducciones", nullptr));
        Liq_Total_Pagar->setText(QApplication::translate("Pantalla_Principal", "Total Pagar $", nullptr));
        Liq_Total_Pagar_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        Liq_Total_PrecioTon->setText(QApplication::translate("Pantalla_Principal", "Precio Tonelada:", nullptr));
        Liq_Total_Analizado->setText(QApplication::translate("Pantalla_Principal", "Peso Analizado", nullptr));
        Liq_Total_Analizado_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        Liq_Total_PrecioTon_edit->setText(QApplication::translate("Pantalla_Principal", "00", nullptr));
        kgs_7->setText(QApplication::translate("Pantalla_Principal", "Tons", nullptr));
        kgs_8->setText(QApplication::translate("Pantalla_Principal", "Mx", nullptr));
        kgs_9->setText(QApplication::translate("Pantalla_Principal", "Mx", nullptr));
        Deducciones_2->setText(QApplication::translate("Pantalla_Principal", "TOTALES", nullptr));
        Liq_Imp_Boleta->setText(QApplication::translate("Pantalla_Principal", "Imprimir \n"
"Boleta", nullptr));
        Fondo_6->setText(QString());
        Panel_Opciones->setText(QApplication::translate("Pantalla_Principal", "Opciones", nullptr));
        Cuotas_Grano_edit->setText(QString());
        Cuotas_Modulo_edit->setText(QString());
        Cuotas_Sanidad->setText(QApplication::translate("Pantalla_Principal", "Sanidad Vegetal", nullptr));
        Cuotas_Grano->setText(QApplication::translate("Pantalla_Principal", "Cuota Conservacion Grano", nullptr));
        Cuotas_Modulo->setText(QApplication::translate("Pantalla_Principal", "Modulo San Fernando Sur", nullptr));
        Cuotas->setText(QApplication::translate("Pantalla_Principal", "Cuotas", nullptr));
        Actual->setText(QApplication::translate("Pantalla_Principal", "Buscar Actualizaciones al inciar?", nullptr));
        Tipo_Grano->setText(QApplication::translate("Pantalla_Principal", "Tipo de Grano:", nullptr));
        Socios_TonsxSocio_edit->setText(QString());
        Socios_TonsxSocio->setText(QApplication::translate("Pantalla_Principal", "Toneladas x Socio", nullptr));
        otros->setText(QApplication::translate("Pantalla_Principal", "Otros", nullptr));
        User_Add->setText(QApplication::translate("Pantalla_Principal", "Agregar Usuario", nullptr));
        User_Add_usuario->setText(QApplication::translate("Pantalla_Principal", "Usuario: ", nullptr));
        User_Add_pass->setText(QApplication::translate("Pantalla_Principal", "Password:", nullptr));
        User_Add_nombre->setText(QApplication::translate("Pantalla_Principal", "Nombres:", nullptr));
        User_Add_apellidos->setText(QApplication::translate("Pantalla_Principal", "Apellidos:", nullptr));
        User_Add_direccion->setText(QApplication::translate("Pantalla_Principal", "Direccion:", nullptr));
        User_Add_telefono->setText(QApplication::translate("Pantalla_Principal", "Telefono:", nullptr));
        User_Add_puesto->setText(QApplication::translate("Pantalla_Principal", "Puesto:", nullptr));
        User_Del->setText(QApplication::translate("Pantalla_Principal", "Borrar Usuario", nullptr));
#ifndef QT_NO_TOOLTIP
        User_Del_Push->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        User_Del_Push->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        User_Del_Push->setText(QApplication::translate("Pantalla_Principal", "Borrar", nullptr));
#ifndef QT_NO_TOOLTIP
        User_Add_Push->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        User_Add_Push->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        User_Add_Push->setText(QApplication::translate("Pantalla_Principal", "Crear", nullptr));
        otros_2->setText(QApplication::translate("Pantalla_Principal", "Usuarios", nullptr));
        Fondo_7->setText(QString());
        Panel_DrynWet->setText(QApplication::translate("Pantalla_Principal", "Humedad y Secado", nullptr));
        label_12->setText(QApplication::translate("Pantalla_Principal", "Valor a cambiar", nullptr));
        HumSec_val149->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_21->setText(QApplication::translate("Pantalla_Principal", "14.4  -->", nullptr));
        label_25->setText(QApplication::translate("Pantalla_Principal", "14.8  -->", nullptr));
        HumSec_val142->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_14->setText(QApplication::translate("Pantalla_Principal", "14.1  -->", nullptr));
        label_22->setText(QApplication::translate("Pantalla_Principal", "14.5  -->", nullptr));
        HumSec_val145->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_24->setText(QApplication::translate("Pantalla_Principal", "14.7  -->", nullptr));
        label_26->setText(QApplication::translate("Pantalla_Principal", "14.9  -->", nullptr));
        label_23->setText(QApplication::translate("Pantalla_Principal", "14.6  -->", nullptr));
        HumSec_val147->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val143->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val146->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val141->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val144->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_20->setText(QApplication::translate("Pantalla_Principal", "14.3  -->", nullptr));
        label_17->setText(QApplication::translate("Pantalla_Principal", "14.2  -->", nullptr));
        HumSec_val148->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val159->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_27->setText(QApplication::translate("Pantalla_Principal", "15.4  -->", nullptr));
        label_28->setText(QApplication::translate("Pantalla_Principal", "15.8  -->", nullptr));
        HumSec_val152->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_53->setText(QApplication::translate("Pantalla_Principal", "15.1  -->", nullptr));
        HumSec_val150->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_55->setText(QApplication::translate("Pantalla_Principal", "15.5  -->", nullptr));
        HumSec_val155->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_57->setText(QApplication::translate("Pantalla_Principal", "15.7  -->", nullptr));
        label_58->setText(QApplication::translate("Pantalla_Principal", "15.9  -->", nullptr));
        label_59->setText(QApplication::translate("Pantalla_Principal", "15.6  -->", nullptr));
        HumSec_val157->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val153->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val156->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val151->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val154->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_65->setText(QApplication::translate("Pantalla_Principal", "15.3  -->", nullptr));
        label_66->setText(QApplication::translate("Pantalla_Principal", "15.2  -->", nullptr));
        label_67->setText(QApplication::translate("Pantalla_Principal", "15.0  -->", nullptr));
        HumSec_val158->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val169->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_70->setText(QApplication::translate("Pantalla_Principal", "16.4  -->", nullptr));
        label_71->setText(QApplication::translate("Pantalla_Principal", "16.8  -->", nullptr));
        HumSec_val162->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_73->setText(QApplication::translate("Pantalla_Principal", "16.1  -->", nullptr));
        HumSec_val160->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_75->setText(QApplication::translate("Pantalla_Principal", "16.5  -->", nullptr));
        HumSec_val165->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_77->setText(QApplication::translate("Pantalla_Principal", "16.7  -->", nullptr));
        label_78->setText(QApplication::translate("Pantalla_Principal", "16.9  -->", nullptr));
        label_79->setText(QApplication::translate("Pantalla_Principal", "16.6  -->", nullptr));
        HumSec_val167->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val163->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val166->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val161->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val164->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_85->setText(QApplication::translate("Pantalla_Principal", "16.3  -->", nullptr));
        label_86->setText(QApplication::translate("Pantalla_Principal", "16.2  -->", nullptr));
        label_87->setText(QApplication::translate("Pantalla_Principal", "16.0  -->", nullptr));
        HumSec_val168->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val179->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_90->setText(QApplication::translate("Pantalla_Principal", "17.4  -->", nullptr));
        label_91->setText(QApplication::translate("Pantalla_Principal", "17.8  -->", nullptr));
        HumSec_val172->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_93->setText(QApplication::translate("Pantalla_Principal", "17.1  -->", nullptr));
        HumSec_val170->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_95->setText(QApplication::translate("Pantalla_Principal", "17.5  -->", nullptr));
        HumSec_val175->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_97->setText(QApplication::translate("Pantalla_Principal", "17.7  -->", nullptr));
        label_98->setText(QApplication::translate("Pantalla_Principal", "17.9  -->", nullptr));
        label_99->setText(QApplication::translate("Pantalla_Principal", "17.6  -->", nullptr));
        HumSec_val177->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val173->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val176->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val171->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val174->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_105->setText(QApplication::translate("Pantalla_Principal", "17.3  -->", nullptr));
        label_106->setText(QApplication::translate("Pantalla_Principal", "17.2  -->", nullptr));
        label_107->setText(QApplication::translate("Pantalla_Principal", "17.0  -->", nullptr));
        HumSec_val178->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val189->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_110->setText(QApplication::translate("Pantalla_Principal", "18.4  -->", nullptr));
        label_111->setText(QApplication::translate("Pantalla_Principal", "18.8  -->", nullptr));
        HumSec_val182->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_113->setText(QApplication::translate("Pantalla_Principal", "18.1  -->", nullptr));
        HumSec_val180->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_115->setText(QApplication::translate("Pantalla_Principal", "18.5  -->", nullptr));
        HumSec_val185->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_117->setText(QApplication::translate("Pantalla_Principal", "18.7  -->", nullptr));
        label_118->setText(QApplication::translate("Pantalla_Principal", "18.9  -->", nullptr));
        label_119->setText(QApplication::translate("Pantalla_Principal", "18.6  -->", nullptr));
        HumSec_val187->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val183->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val186->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val181->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val184->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_130->setText(QApplication::translate("Pantalla_Principal", "18.3  -->", nullptr));
        label_138->setText(QApplication::translate("Pantalla_Principal", "18.2  -->", nullptr));
        label_139->setText(QApplication::translate("Pantalla_Principal", "18.0  -->", nullptr));
        HumSec_val188->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val199->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_144->setText(QApplication::translate("Pantalla_Principal", "19.4  -->", nullptr));
        label_151->setText(QApplication::translate("Pantalla_Principal", "19.8  -->", nullptr));
        HumSec_val192->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_155->setText(QApplication::translate("Pantalla_Principal", "19.1  -->", nullptr));
        HumSec_val190->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_157->setText(QApplication::translate("Pantalla_Principal", "19.5  -->", nullptr));
        HumSec_val195->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_159->setText(QApplication::translate("Pantalla_Principal", "19.7  -->", nullptr));
        label_160->setText(QApplication::translate("Pantalla_Principal", "19.9  -->", nullptr));
        label_161->setText(QApplication::translate("Pantalla_Principal", "19.6  -->", nullptr));
        HumSec_val197->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val193->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val196->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val191->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val194->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_167->setText(QApplication::translate("Pantalla_Principal", "19.3  -->", nullptr));
        label_168->setText(QApplication::translate("Pantalla_Principal", "19.2  -->", nullptr));
        label_169->setText(QApplication::translate("Pantalla_Principal", "19.0  -->", nullptr));
        HumSec_val198->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val209->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_172->setText(QApplication::translate("Pantalla_Principal", "20.4  -->", nullptr));
        label_173->setText(QApplication::translate("Pantalla_Principal", "20.8  -->", nullptr));
        HumSec_val202->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_175->setText(QApplication::translate("Pantalla_Principal", "20.1  -->", nullptr));
        HumSec_val200->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_177->setText(QApplication::translate("Pantalla_Principal", "20.5  -->", nullptr));
        HumSec_val205->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_179->setText(QApplication::translate("Pantalla_Principal", "20.7  -->", nullptr));
        label_180->setText(QApplication::translate("Pantalla_Principal", "20.9  -->", nullptr));
        label_181->setText(QApplication::translate("Pantalla_Principal", "20.6  -->", nullptr));
        HumSec_val207->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val203->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val206->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val201->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val204->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_187->setText(QApplication::translate("Pantalla_Principal", "20.3  -->", nullptr));
        label_188->setText(QApplication::translate("Pantalla_Principal", "20.2  -->", nullptr));
        label_189->setText(QApplication::translate("Pantalla_Principal", "20.0  -->", nullptr));
        HumSec_val208->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val219->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_192->setText(QApplication::translate("Pantalla_Principal", "21.4  -->", nullptr));
        label_193->setText(QApplication::translate("Pantalla_Principal", "21.8  -->", nullptr));
        HumSec_val212->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_195->setText(QApplication::translate("Pantalla_Principal", "21.1  -->", nullptr));
        HumSec_val210->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_197->setText(QApplication::translate("Pantalla_Principal", "21.5  -->", nullptr));
        HumSec_val215->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_199->setText(QApplication::translate("Pantalla_Principal", "21.7  -->", nullptr));
        label_200->setText(QApplication::translate("Pantalla_Principal", "21.9  -->", nullptr));
        label_201->setText(QApplication::translate("Pantalla_Principal", "21.6  -->", nullptr));
        HumSec_val217->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val213->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val216->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val211->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val214->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_210->setText(QApplication::translate("Pantalla_Principal", "21.3  -->", nullptr));
        label_211->setText(QApplication::translate("Pantalla_Principal", "21.2  -->", nullptr));
        label_212->setText(QApplication::translate("Pantalla_Principal", "21.0  -->", nullptr));
        HumSec_val218->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val229->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_215->setText(QApplication::translate("Pantalla_Principal", "22.4  -->", nullptr));
        label_216->setText(QApplication::translate("Pantalla_Principal", "22.8  -->", nullptr));
        HumSec_val222->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_218->setText(QApplication::translate("Pantalla_Principal", "22.1  -->", nullptr));
        HumSec_val220->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_220->setText(QApplication::translate("Pantalla_Principal", "22.5  -->", nullptr));
        HumSec_val225->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_222->setText(QApplication::translate("Pantalla_Principal", "22.7  -->", nullptr));
        label_223->setText(QApplication::translate("Pantalla_Principal", "22.9  -->", nullptr));
        label_224->setText(QApplication::translate("Pantalla_Principal", "22.6  -->", nullptr));
        HumSec_val227->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val223->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val226->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val221->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val224->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_230->setText(QApplication::translate("Pantalla_Principal", "22.3  -->", nullptr));
        label_231->setText(QApplication::translate("Pantalla_Principal", "22.2  -->", nullptr));
        label_232->setText(QApplication::translate("Pantalla_Principal", "22.0  -->", nullptr));
        HumSec_val228->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val239->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_235->setText(QApplication::translate("Pantalla_Principal", "23.4  -->", nullptr));
        label_236->setText(QApplication::translate("Pantalla_Principal", "23.8  -->", nullptr));
        HumSec_val232->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_238->setText(QApplication::translate("Pantalla_Principal", "23.1  -->", nullptr));
        HumSec_val230->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_240->setText(QApplication::translate("Pantalla_Principal", "23.5  -->", nullptr));
        HumSec_val235->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_242->setText(QApplication::translate("Pantalla_Principal", "23.7  -->", nullptr));
        label_243->setText(QApplication::translate("Pantalla_Principal", "23.9  -->", nullptr));
        label_244->setText(QApplication::translate("Pantalla_Principal", "23.6  -->", nullptr));
        HumSec_val237->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val233->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val236->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val231->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val234->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_250->setText(QApplication::translate("Pantalla_Principal", "23.3  -->", nullptr));
        label_251->setText(QApplication::translate("Pantalla_Principal", "23.2  -->", nullptr));
        label_252->setText(QApplication::translate("Pantalla_Principal", "23.0  -->", nullptr));
        HumSec_val238->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val249->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_255->setText(QApplication::translate("Pantalla_Principal", "24.4  -->", nullptr));
        label_256->setText(QApplication::translate("Pantalla_Principal", "24.8  -->", nullptr));
        HumSec_val242->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_258->setText(QApplication::translate("Pantalla_Principal", "24.1  -->", nullptr));
        HumSec_val240->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_260->setText(QApplication::translate("Pantalla_Principal", "24.5  -->", nullptr));
        HumSec_val245->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_262->setText(QApplication::translate("Pantalla_Principal", "24.7  -->", nullptr));
        label_263->setText(QApplication::translate("Pantalla_Principal", "24.9  -->", nullptr));
        label_264->setText(QApplication::translate("Pantalla_Principal", "24.6  -->", nullptr));
        HumSec_val247->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val243->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val246->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val241->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val244->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_270->setText(QApplication::translate("Pantalla_Principal", "24.3  -->", nullptr));
        label_271->setText(QApplication::translate("Pantalla_Principal", "24.2  -->", nullptr));
        label_272->setText(QApplication::translate("Pantalla_Principal", "24.0  -->", nullptr));
        HumSec_val248->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val259->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_275->setText(QApplication::translate("Pantalla_Principal", "25.4  -->", nullptr));
        label_276->setText(QApplication::translate("Pantalla_Principal", "25.8  -->", nullptr));
        HumSec_val252->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_278->setText(QApplication::translate("Pantalla_Principal", "25.1  -->", nullptr));
        HumSec_val250->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_280->setText(QApplication::translate("Pantalla_Principal", "25.5  -->", nullptr));
        HumSec_val255->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_282->setText(QApplication::translate("Pantalla_Principal", "25.7  -->", nullptr));
        label_283->setText(QApplication::translate("Pantalla_Principal", "25.9  -->", nullptr));
        label_284->setText(QApplication::translate("Pantalla_Principal", "25.6  -->", nullptr));
        HumSec_val257->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val253->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val256->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val251->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val254->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_290->setText(QApplication::translate("Pantalla_Principal", "25.3  -->", nullptr));
        label_291->setText(QApplication::translate("Pantalla_Principal", "25.2  -->", nullptr));
        label_292->setText(QApplication::translate("Pantalla_Principal", "25.0  -->", nullptr));
        HumSec_val258->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_DedxTon->setText(QApplication::translate("Pantalla_Principal", "Deducciones de Kgs por Ton", nullptr));
#ifndef QT_NO_WHATSTHIS
        push_NextTable->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea un registro nuevo con los datos ingresados", nullptr));
#endif // QT_NO_WHATSTHIS
        push_NextTable->setText(QApplication::translate("Pantalla_Principal", "Tabla Siguiente", nullptr));
        Fondo_8->setText(QString());
        Fondo_9->setText(QString());
        label_535->setText(QApplication::translate("Pantalla_Principal", "Valor a cambiar", nullptr));
        HumSec_val269->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_537->setText(QApplication::translate("Pantalla_Principal", "26.4  -->", nullptr));
        label_538->setText(QApplication::translate("Pantalla_Principal", "26.8  -->", nullptr));
        HumSec_val262->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_540->setText(QApplication::translate("Pantalla_Principal", "26.1  -->", nullptr));
        HumSec_val260->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_542->setText(QApplication::translate("Pantalla_Principal", "26.5  -->", nullptr));
        HumSec_val265->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_544->setText(QApplication::translate("Pantalla_Principal", "26.7  -->", nullptr));
        label_545->setText(QApplication::translate("Pantalla_Principal", "26.9  -->", nullptr));
        label_546->setText(QApplication::translate("Pantalla_Principal", "26.6  -->", nullptr));
        HumSec_val267->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val263->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val266->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val261->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val264->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_552->setText(QApplication::translate("Pantalla_Principal", "26.3  -->", nullptr));
        label_553->setText(QApplication::translate("Pantalla_Principal", "26.2  -->", nullptr));
        label_554->setText(QApplication::translate("Pantalla_Principal", "26.0 -->", nullptr));
        HumSec_val268->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val279->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_557->setText(QApplication::translate("Pantalla_Principal", "27.4  -->", nullptr));
        label_558->setText(QApplication::translate("Pantalla_Principal", "27.8  -->", nullptr));
        HumSec_val272->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_560->setText(QApplication::translate("Pantalla_Principal", "27.1  -->", nullptr));
        HumSec_val270->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_562->setText(QApplication::translate("Pantalla_Principal", "27.5  -->", nullptr));
        HumSec_val275->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_564->setText(QApplication::translate("Pantalla_Principal", "27.7  -->", nullptr));
        label_565->setText(QApplication::translate("Pantalla_Principal", "27.9  -->", nullptr));
        label_566->setText(QApplication::translate("Pantalla_Principal", "27.6  -->", nullptr));
        HumSec_val277->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val273->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val276->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val271->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val274->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_572->setText(QApplication::translate("Pantalla_Principal", "27.3  -->", nullptr));
        label_573->setText(QApplication::translate("Pantalla_Principal", "27.2  -->", nullptr));
        label_574->setText(QApplication::translate("Pantalla_Principal", "27.0  -->", nullptr));
        HumSec_val278->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val289->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_577->setText(QApplication::translate("Pantalla_Principal", "28.4  -->", nullptr));
        label_578->setText(QApplication::translate("Pantalla_Principal", "28.8  -->", nullptr));
        HumSec_val282->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_580->setText(QApplication::translate("Pantalla_Principal", "28.1  -->", nullptr));
        HumSec_val280->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_582->setText(QApplication::translate("Pantalla_Principal", "28.5  -->", nullptr));
        HumSec_val285->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_584->setText(QApplication::translate("Pantalla_Principal", "28.7  -->", nullptr));
        label_585->setText(QApplication::translate("Pantalla_Principal", "28.9  -->", nullptr));
        label_586->setText(QApplication::translate("Pantalla_Principal", "28.6  -->", nullptr));
        HumSec_val287->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val283->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val286->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val281->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val284->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_592->setText(QApplication::translate("Pantalla_Principal", "28.3  -->", nullptr));
        label_593->setText(QApplication::translate("Pantalla_Principal", "28.2  -->", nullptr));
        label_594->setText(QApplication::translate("Pantalla_Principal", "28.0  -->", nullptr));
        HumSec_val288->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val299->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_597->setText(QApplication::translate("Pantalla_Principal", "29.4  -->", nullptr));
        label_598->setText(QApplication::translate("Pantalla_Principal", "29.8  -->", nullptr));
        HumSec_val292->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_600->setText(QApplication::translate("Pantalla_Principal", "29.1  -->", nullptr));
        HumSec_val290->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_602->setText(QApplication::translate("Pantalla_Principal", "29.5  -->", nullptr));
        HumSec_val295->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_604->setText(QApplication::translate("Pantalla_Principal", "29.7  -->", nullptr));
        label_605->setText(QApplication::translate("Pantalla_Principal", "29.9  -->", nullptr));
        label_606->setText(QApplication::translate("Pantalla_Principal", "29.6  -->", nullptr));
        HumSec_val297->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val293->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val296->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val291->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val294->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_612->setText(QApplication::translate("Pantalla_Principal", "29.3  -->", nullptr));
        label_613->setText(QApplication::translate("Pantalla_Principal", "29.2  -->", nullptr));
        label_614->setText(QApplication::translate("Pantalla_Principal", "29.0  -->", nullptr));
        HumSec_val298->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_val300->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_634->setText(QApplication::translate("Pantalla_Principal", "30.0  -->", nullptr));
        label_657->setText(QApplication::translate("Pantalla_Principal", "18.1 - 19  -->", nullptr));
        HumSec_Tarifa_161_170->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_660->setText(QApplication::translate("Pantalla_Principal", "15.1 - 16  -->", nullptr));
        HumSec_Tarifa_141_150->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_662->setText(QApplication::translate("Pantalla_Principal", "19.1 -20  -->", nullptr));
        HumSec_Tarifa_191_200->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_664->setText(QApplication::translate("Pantalla_Principal", "21.1 - 22  -->", nullptr));
        label_666->setText(QApplication::translate("Pantalla_Principal", "20.1 - 21  -->", nullptr));
        HumSec_Tarifa_211_220->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_171_180->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_201_210->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_151_160->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_181_190->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_672->setText(QApplication::translate("Pantalla_Principal", "17.1 - 18  -->", nullptr));
        label_673->setText(QApplication::translate("Pantalla_Principal", "16.1 - 17 -->", nullptr));
        label_674->setText(QApplication::translate("Pantalla_Principal", "14.1 - 15 -->", nullptr));
        label_677->setText(QApplication::translate("Pantalla_Principal", "26.1 - 27  -->", nullptr));
        HumSec_Tarifa_241_250->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_680->setText(QApplication::translate("Pantalla_Principal", "23.1 - 24  -->", nullptr));
        HumSec_Tarifa_221_230->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_682->setText(QApplication::translate("Pantalla_Principal", "27.1 -28  -->", nullptr));
        HumSec_Tarifa_271_280->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_684->setText(QApplication::translate("Pantalla_Principal", "29.1 - 30  -->", nullptr));
        label_686->setText(QApplication::translate("Pantalla_Principal", "28.1 - 29  -->", nullptr));
        HumSec_Tarifa_291_300->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_251_260->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_281_290->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_231_240->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        HumSec_Tarifa_261_270->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
        label_692->setText(QApplication::translate("Pantalla_Principal", "25.1 - 26  -->", nullptr));
        label_693->setText(QApplication::translate("Pantalla_Principal", "24.1 - 25 -->", nullptr));
        label_694->setText(QApplication::translate("Pantalla_Principal", "22.1 - 23 -->", nullptr));
        label_656->setText(QApplication::translate("Pantalla_Principal", "Valor a cambiar", nullptr));
        label_665->setText(QApplication::translate("Pantalla_Principal", "Deducciones de Kgs por Ton", nullptr));
        label_675->setText(QApplication::translate("Pantalla_Principal", "Tarifas por Secado", nullptr));
#ifndef QT_NO_WHATSTHIS
        push_BeforeTable->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea un registro nuevo con los datos ingresados", nullptr));
#endif // QT_NO_WHATSTHIS
        push_BeforeTable->setText(QApplication::translate("Pantalla_Principal", "Tabla Anterior", nullptr));
        Panel_DrynWet_2->setText(QApplication::translate("Pantalla_Principal", "Humedad y Secado", nullptr));
        Fondo_11->setText(QString());
        Peso_Tara_2->setText(QApplication::translate("Pantalla_Principal", "Tara", nullptr));
        Peso_Bruto_2->setText(QApplication::translate("Pantalla_Principal", "Bruto", nullptr));
        Humedad_2->setText(QApplication::translate("Pantalla_Principal", "Humedad", nullptr));
        Ton_5->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Ton_6->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Ton_7->setText(QApplication::translate("Pantalla_Principal", "grados", nullptr));
        Salidas_Silo_1->setText(QApplication::translate("Pantalla_Principal", "Silo 1", nullptr));
        Salidas_Silo_2->setText(QApplication::translate("Pantalla_Principal", "Silo 2", nullptr));
        Peso_Espe_2->setText(QApplication::translate("Pantalla_Principal", "Peso Especifico", nullptr));
        Salidas_Neto->setText(QApplication::translate("Pantalla_Principal", "Neto", nullptr));
        Ton_8->setText(QApplication::translate("Pantalla_Principal", "Kgs", nullptr));
        Salidas_Neto_edit->setText(QString());
#ifndef QT_NO_WHATSTHIS
        push_Salidas_Nuevo->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea un registro nuevo con los datos ingresados", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Salidas_Nuevo->setText(QApplication::translate("Pantalla_Principal", "Nueva Boleta", nullptr));
        push_Salidas_Limpiar->setText(QApplication::translate("Pantalla_Principal", "Limpiar Campos", nullptr));
        Folio_Salida->setText(QApplication::translate("Pantalla_Principal", "Folio Boleta", nullptr));
        Ciclo_Salida->setText(QApplication::translate("Pantalla_Principal", "Ciclo Actual", nullptr));
        Ciclo_edit_Salida->setText(QApplication::translate("Pantalla_Principal", "Ciclo O-I 19-20", nullptr));
        Fecha_Salida->setText(QApplication::translate("Pantalla_Principal", "Fecha/Hora actual", nullptr));
        Salida_Destino->setText(QApplication::translate("Pantalla_Principal", "Destino", nullptr));
        Comprador_Salida->setText(QApplication::translate("Pantalla_Principal", "Comprador", nullptr));
        SocioNum_Comp->setText(QApplication::translate("Pantalla_Principal", "No Comp", nullptr));
        Salida_Razon_Social->setText(QApplication::translate("Pantalla_Principal", "Razon Social", nullptr));
        Salidas_Chofer_Apellidos->setText(QApplication::translate("Pantalla_Principal", "Apellidos", nullptr));
        Salidas_Placas->setText(QApplication::translate("Pantalla_Principal", "Placas Camion", nullptr));
        Salidas_Tipo->setText(QApplication::translate("Pantalla_Principal", "Tipo de camion", nullptr));
        Salidas_Color->setText(QApplication::translate("Pantalla_Principal", "Color", nullptr));
        Salidas_Chofer_Nombre->setText(QApplication::translate("Pantalla_Principal", "Nombres", nullptr));
        Chofer_Salida->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        SocioNum_Comp_edit->setText(QApplication::translate("Pantalla_Principal", "0", nullptr));
#ifndef QT_NO_WHATSTHIS
        Tabla_Salidas_Folios->setWhatsThis(QApplication::translate("Pantalla_Principal", "Boletas ingresadas", nullptr));
#endif // QT_NO_WHATSTHIS
        label_6->setText(QApplication::translate("Pantalla_Principal", "Folio", nullptr));
        label_7->setText(QApplication::translate("Pantalla_Principal", "Comprador", nullptr));
        label_8->setText(QApplication::translate("Pantalla_Principal", "Chofer", nullptr));
        label_9->setText(QApplication::translate("Pantalla_Principal", "Hora", nullptr));
        push_Salidas_Borrar->setText(QApplication::translate("Pantalla_Principal", "Borrar Boleta", nullptr));
        Panel_Silos->setText(QApplication::translate("Pantalla_Principal", "Silos", nullptr));
        Fondo_10->setText(QString());
        Silo_Total_1->setText(QString());
        Silo_Total_2->setText(QString());
        icon_Arrow_8->setText(QString());
        icon_Arrow_9->setText(QString());
        icon_Boletas->setText(QString());
        icon_Reg->setText(QString());
        icon_Prod->setText(QString());
        icon_Comp->setText(QString());
#ifndef QT_NO_WHATSTHIS
        push_Liquidacion->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea una nueva boleta", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Liquidacion->setText(QApplication::translate("Pantalla_Principal", "Liquidacion", nullptr));
        icon_Liq->setText(QString());
#ifndef QT_NO_WHATSTHIS
        push_Boletas->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea una nueva boleta", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Boletas->setText(QApplication::translate("Pantalla_Principal", "Entradas", nullptr));
#ifndef QT_NO_WHATSTHIS
        push_Registros->setWhatsThis(QApplication::translate("Pantalla_Principal", "Muestra los registros de los productores", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Registros->setText(QApplication::translate("Pantalla_Principal", "Registros", nullptr));
#ifndef QT_NO_WHATSTHIS
        push_Productores->setWhatsThis(QApplication::translate("Pantalla_Principal", "Lista la informacion de los Productores", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Productores->setText(QApplication::translate("Pantalla_Principal", "Productores", nullptr));
#ifndef QT_NO_WHATSTHIS
        push_Compradores->setWhatsThis(QApplication::translate("Pantalla_Principal", "Lista la informacion de los Compradores", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Compradores->setText(QApplication::translate("Pantalla_Principal", "Compradores", nullptr));
#ifndef QT_NO_WHATSTHIS
        push_Salidas->setWhatsThis(QApplication::translate("Pantalla_Principal", "Crea una nueva boleta", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Salidas->setText(QApplication::translate("Pantalla_Principal", "Salidas", nullptr));
        icon_Salidas->setText(QString());
#ifndef QT_NO_WHATSTHIS
        push_Silos->setWhatsThis(QApplication::translate("Pantalla_Principal", "Muestra los adeudos existentes", nullptr));
#endif // QT_NO_WHATSTHIS
        push_Silos->setText(QApplication::translate("Pantalla_Principal", "Silos", nullptr));
        icon_Silos->setText(QString());
        icon_Arrow_1->setText(QString());
        icon_Arrow_2->setText(QString());
        icon_Arrow_3->setText(QString());
        icon_Arrow_4->setText(QString());
        icon_Arrow_5->setText(QString());
        icon_Arrow_6->setText(QString());
        icon_Arrow_7->setText(QString());
        Nombre_Programa->setText(QString());
        label_5->setText(QApplication::translate("Pantalla_Principal", "Info", nullptr));
        menuArchivo->setTitle(QApplication::translate("Pantalla_Principal", "Archivo", nullptr));
        menuRegistros->setTitle(QApplication::translate("Pantalla_Principal", "Registros", nullptr));
        menuAyuda->setTitle(QApplication::translate("Pantalla_Principal", "Ayuda", nullptr));
        Q_UNUSED(Pantalla_Principal);
    } // retranslateUi

};

namespace Ui {
    class Pantalla_Principal: public Ui_Pantalla_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLA_PRINCIPAL_20_V2_H
