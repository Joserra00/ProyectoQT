/********************************************************************************
** Form generated from reading UI file 'dmensajeeditar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMENSAJEEDITAR_H
#define UI_DMENSAJEEDITAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DMensajeEditar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QLineEdit *usuarioLineEdit;
    QLineEdit *usuarioreceptorLineEdit;
    QLineEdit *contenidoLineEdit;
    QPushButton *btnGuardar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *DMensajeEditar)
    {
        if (DMensajeEditar->objectName().isEmpty())
            DMensajeEditar->setObjectName(QString::fromUtf8("DMensajeEditar"));
        DMensajeEditar->resize(626, 390);
        label = new QLabel(DMensajeEditar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 67, 17));
        label_2 = new QLabel(DMensajeEditar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 67, 17));
        label_3 = new QLabel(DMensajeEditar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 150, 131, 16));
        label_4 = new QLabel(DMensajeEditar);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 200, 81, 16));
        nameLineEdit = new QLineEdit(DMensajeEditar);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(270, 40, 191, 31));
        usuarioLineEdit = new QLineEdit(DMensajeEditar);
        usuarioLineEdit->setObjectName(QString::fromUtf8("usuarioLineEdit"));
        usuarioLineEdit->setGeometry(QRect(270, 90, 191, 31));
        usuarioreceptorLineEdit = new QLineEdit(DMensajeEditar);
        usuarioreceptorLineEdit->setObjectName(QString::fromUtf8("usuarioreceptorLineEdit"));
        usuarioreceptorLineEdit->setGeometry(QRect(270, 140, 191, 31));
        contenidoLineEdit = new QLineEdit(DMensajeEditar);
        contenidoLineEdit->setObjectName(QString::fromUtf8("contenidoLineEdit"));
        contenidoLineEdit->setGeometry(QRect(270, 190, 191, 31));
        btnGuardar = new QPushButton(DMensajeEditar);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(340, 320, 89, 25));
        btnCancelar = new QPushButton(DMensajeEditar);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(480, 320, 89, 25));

        retranslateUi(DMensajeEditar);

        QMetaObject::connectSlotsByName(DMensajeEditar);
    } // setupUi

    void retranslateUi(QDialog *DMensajeEditar)
    {
        DMensajeEditar->setWindowTitle(QApplication::translate("DMensajeEditar", "Dialog", nullptr));
        label->setText(QApplication::translate("DMensajeEditar", "Name", nullptr));
        label_2->setText(QApplication::translate("DMensajeEditar", "Usuario", nullptr));
        label_3->setText(QApplication::translate("DMensajeEditar", "Usuario receptor", nullptr));
        label_4->setText(QApplication::translate("DMensajeEditar", "Contenido", nullptr));
        btnGuardar->setText(QApplication::translate("DMensajeEditar", "Guardar", nullptr));
        btnCancelar->setText(QApplication::translate("DMensajeEditar", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DMensajeEditar: public Ui_DMensajeEditar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMENSAJEEDITAR_H
