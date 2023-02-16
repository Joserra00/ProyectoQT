/********************************************************************************
** Form generated from reading UI file 'dusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUSUARIO_H
#define UI_DUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DUsuario
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *nameLineEdit;
    QLineEdit *phoneLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *cityLineEdit;
    QLineEdit *contrasenyaLineEdit;
    QLineEdit *fechanacLineEdit;
    QPushButton *btnGuardar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *DUsuario)
    {
        if (DUsuario->objectName().isEmpty())
            DUsuario->setObjectName(QString::fromUtf8("DUsuario"));
        DUsuario->resize(590, 453);
        label = new QLabel(DUsuario);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 67, 17));
        label_2 = new QLabel(DUsuario);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 90, 67, 17));
        label_3 = new QLabel(DUsuario);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 140, 67, 17));
        label_4 = new QLabel(DUsuario);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 190, 67, 17));
        label_5 = new QLabel(DUsuario);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 240, 121, 17));
        label_6 = new QLabel(DUsuario);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 290, 91, 17));
        nameLineEdit = new QLineEdit(DUsuario);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(210, 30, 171, 31));
        phoneLineEdit = new QLineEdit(DUsuario);
        phoneLineEdit->setObjectName(QString::fromUtf8("phoneLineEdit"));
        phoneLineEdit->setGeometry(QRect(210, 130, 171, 31));
        emailLineEdit = new QLineEdit(DUsuario);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(210, 80, 171, 31));
        cityLineEdit = new QLineEdit(DUsuario);
        cityLineEdit->setObjectName(QString::fromUtf8("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(210, 180, 171, 31));
        contrasenyaLineEdit = new QLineEdit(DUsuario);
        contrasenyaLineEdit->setObjectName(QString::fromUtf8("contrasenyaLineEdit"));
        contrasenyaLineEdit->setGeometry(QRect(210, 280, 171, 31));
        fechanacLineEdit = new QLineEdit(DUsuario);
        fechanacLineEdit->setObjectName(QString::fromUtf8("fechanacLineEdit"));
        fechanacLineEdit->setGeometry(QRect(210, 230, 171, 31));
        btnGuardar = new QPushButton(DUsuario);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(260, 370, 89, 25));
        btnCancelar = new QPushButton(DUsuario);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(410, 370, 89, 25));

        retranslateUi(DUsuario);

        QMetaObject::connectSlotsByName(DUsuario);
    } // setupUi

    void retranslateUi(QDialog *DUsuario)
    {
        DUsuario->setWindowTitle(QApplication::translate("DUsuario", "Dialog", nullptr));
        label->setText(QApplication::translate("DUsuario", "Name", nullptr));
        label_2->setText(QApplication::translate("DUsuario", "Email", nullptr));
        label_3->setText(QApplication::translate("DUsuario", "Phone", nullptr));
        label_4->setText(QApplication::translate("DUsuario", "City", nullptr));
        label_5->setText(QApplication::translate("DUsuario", "Fecha Nacimiento", nullptr));
        label_6->setText(QApplication::translate("DUsuario", "Contrasenya", nullptr));
        btnGuardar->setText(QApplication::translate("DUsuario", "Guardar", nullptr));
        btnCancelar->setText(QApplication::translate("DUsuario", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DUsuario: public Ui_DUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUSUARIO_H
