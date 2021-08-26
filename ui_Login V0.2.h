/********************************************************************************
** Form generated from reading UI file 'Login V0.2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_20_V0_H
#define UI_LOGIN_20_V0_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Embarques
{
public:
    QFrame *frame_2;
    QPushButton *Cancelar;
    QPushButton *Aceptar;
    QFrame *frame;
    QLineEdit *Usuario_Edit;
    QLineEdit *Contr_Edit;
    QLabel *label;
    QLineEdit *Serial_edit;
    QLabel *Serial_aviso;
    QLabel *LoginSplash;

    void setupUi(QWidget *Embarques)
    {
        if (Embarques->objectName().isEmpty())
            Embarques->setObjectName(QStringLiteral("Embarques"));
        Embarques->resize(441, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(123, 155, 199, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Embarques->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(15);
        Embarques->setFont(font);
        Embarques->setFocusPolicy(Qt::StrongFocus);
        Embarques->setWindowTitle(QStringLiteral("Login V0,00"));
        Embarques->setAutoFillBackground(true);
        Embarques->setStyleSheet(QStringLiteral(""));
        frame_2 = new QFrame(Embarques);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(40, 40, 361, 521));
        frame_2->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
"border-radius:20px;\n"
"border-width:2px;\n"
"border-color:black;\n"
"border-style:solid;\n"
"font: 14pt \"Bahnschrift\";\n"
"color:gray;\n"
"border:1px solid black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Cancelar = new QPushButton(frame_2);
        Cancelar->setObjectName(QStringLiteral("Cancelar"));
        Cancelar->setGeometry(QRect(193, 450, 130, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Cancelar->setFont(font1);
        Cancelar->setStyleSheet(QLatin1String("border-radius:10px;\n"
"color:black;"));
        Aceptar = new QPushButton(frame_2);
        Aceptar->setObjectName(QStringLiteral("Aceptar"));
        Aceptar->setGeometry(QRect(40, 450, 130, 41));
        Aceptar->setMaximumSize(QSize(130, 50));
        Aceptar->setFont(font1);
        Aceptar->setStyleSheet(QLatin1String("border-radius:10px;\n"
"color:black;"));
        Aceptar->setCheckable(false);
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 150, 341, 161));
        QPalette palette1;
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(128, 125, 145, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        frame->setPalette(palette1);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background: rgb(128, 125, 145);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Usuario_Edit = new QLineEdit(frame);
        Usuario_Edit->setObjectName(QStringLiteral("Usuario_Edit"));
        Usuario_Edit->setGeometry(QRect(30, 30, 281, 31));
        Usuario_Edit->setFont(font1);
        Usuario_Edit->setStyleSheet(QLatin1String("\n"
"border-color:rgb(106, 106, 106);\n"
"border:none;\n"
"color:black;\n"
"border-bottom:2px dashed;"));
        Usuario_Edit->setText(QStringLiteral(""));
        Usuario_Edit->setMaxLength(32767);
        Usuario_Edit->setFrame(false);
        Contr_Edit = new QLineEdit(frame);
        Contr_Edit->setObjectName(QStringLiteral("Contr_Edit"));
        Contr_Edit->setGeometry(QRect(30, 90, 291, 30));
        Contr_Edit->setFont(font1);
        Contr_Edit->setStyleSheet(QLatin1String("border-color:rgb(106, 106, 106);\n"
"border:none;\n"
"color:black;\n"
"border-bottom:2px dashed;"));
        Contr_Edit->setMaxLength(32767);
        Contr_Edit->setFrame(false);
        Contr_Edit->setEchoMode(QLineEdit::Password);
        Contr_Edit->setCursorPosition(0);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-30, 24, 421, 91));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("font: 18pt \"Bahnschrift\";\n"
"border-width:0px;"));
        label->setLineWidth(0);
        label->setAlignment(Qt::AlignCenter);
        Serial_edit = new QLineEdit(frame_2);
        Serial_edit->setObjectName(QStringLiteral("Serial_edit"));
        Serial_edit->setEnabled(true);
        Serial_edit->setGeometry(QRect(40, 340, 281, 41));
        Serial_edit->setFont(font1);
        Serial_edit->setStyleSheet(QLatin1String("color:black;\n"
"border-color:red;\n"
"border:5px;\n"
"background:transparent;\n"
"border-radius:1px;\n"
"border-bottom:2px dashed;"));
        Serial_edit->setText(QStringLiteral(""));
        Serial_edit->setMaxLength(32767);
        Serial_edit->setFrame(false);
        Serial_aviso = new QLabel(frame_2);
        Serial_aviso->setObjectName(QStringLiteral("Serial_aviso"));
        Serial_aviso->setGeometry(QRect(0, 400, 361, 31));
        Serial_aviso->setStyleSheet(QLatin1String("font:16px \"Bahnschrift\";\n"
"background:transparent;\n"
"border:0px;\n"
"color:red;"));
        Serial_aviso->setAlignment(Qt::AlignCenter);
        LoginSplash = new QLabel(Embarques);
        LoginSplash->setObjectName(QStringLiteral("LoginSplash"));
        LoginSplash->setGeometry(QRect(0, 0, 470, 612));
        LoginSplash->raise();
        frame_2->raise();

        retranslateUi(Embarques);

        QMetaObject::connectSlotsByName(Embarques);
    } // setupUi

    void retranslateUi(QWidget *Embarques)
    {
        Cancelar->setText(QApplication::translate("Embarques", "Cancelar", nullptr));
        Aceptar->setText(QApplication::translate("Embarques", "Aceptar", nullptr));
        Usuario_Edit->setInputMask(QString());
        Contr_Edit->setInputMask(QString());
        Contr_Edit->setText(QString());
        label->setText(QApplication::translate("Embarques", "AgroIndustrias LomaColorada \n"
" S.A de C.V.", nullptr));
        Serial_edit->setInputMask(QString());
        LoginSplash->setText(QString());
        Q_UNUSED(Embarques);
    } // retranslateUi

};

namespace Ui {
    class Embarques: public Ui_Embarques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_20_V0_H
