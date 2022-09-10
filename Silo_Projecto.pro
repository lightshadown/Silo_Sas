#########  Qmake para Silo_Sas

SOURCES = Silo_Sas.cpp \ 
          Generales.cpp \ 
          Impresora.cpp \ 
          Launcher.cpp \ 
          Login.cpp \ 
          main_Pantalla_Principal.cpp \ 
          Servidor_RPI.cpp

HEADERS = Silo_Sas.h \
          Generales.h \
          Impresora.h \
          Launcher.h \
          main_Pantalla_Principal.h \
          Login.h \
          Servidor_RPI.h \
          "ui_Pantalla_Principal V2.8.h" \ 
          ui_Launcher.h \
          "ui_Login V0.2.h"

TARGET = Sistema_Silo_Windows_VScode_1_4

!exists(Silo_Sas.cpp){
    error("No file found Silo_Sas")
}
!exists(Generales.cpp){
    error("No file found Generales")
}
!exists(Impresora.cpp){
    error("No file found Impresora")
}
!exists(Launcher.cpp){
    error("No file found Launcher")
}
!exists(Login.cpp){
    error("No file found Login")
}
!exists(Servidor_RPI.cpp){
    error("No file found Servidor_RPI")
}
!exists(ui_Pantalla_Principal.cpp){
    error("No file found ui_Pantalla_Principal")
}
!exists(ui_Login.cpp){
    error("No file found ui_Login")
}
!exists(ui_Launcher.cpp){
    error("No file found ui_Launcher")
}