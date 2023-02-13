/********************************************************************************
** Form generated from reading UI file 'dvaloracion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DVALORACION_H
#define UI_DVALORACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DValoracion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QLineEdit *opinionLineEdit;
    QLineEdit *puntuacionLineEdit;
    QLineEdit *usuarioLineEdit;
    QPushButton *btnGuardar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *DValoracion)
    {
        if (DValoracion->objectName().isEmpty())
            DValoracion->setObjectName(QString::fromUtf8("DValoracion"));
        DValoracion->resize(638, 387);
        label = new QLabel(DValoracion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 67, 17));
        label_2 = new QLabel(DValoracion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 100, 67, 17));
        label_3 = new QLabel(DValoracion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 150, 81, 17));
        label_4 = new QLabel(DValoracion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 200, 67, 17));
        nameLineEdit = new QLineEdit(DValoracion);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(230, 40, 191, 31));
        opinionLineEdit = new QLineEdit(DValoracion);
        opinionLineEdit->setObjectName(QString::fromUtf8("opinionLineEdit"));
        opinionLineEdit->setGeometry(QRect(230, 90, 191, 31));
        puntuacionLineEdit = new QLineEdit(DValoracion);
        puntuacionLineEdit->setObjectName(QString::fromUtf8("puntuacionLineEdit"));
        puntuacionLineEdit->setGeometry(QRect(230, 140, 191, 31));
        usuarioLineEdit = new QLineEdit(DValoracion);
        usuarioLineEdit->setObjectName(QString::fromUtf8("usuarioLineEdit"));
        usuarioLineEdit->setGeometry(QRect(230, 190, 191, 31));
        btnGuardar = new QPushButton(DValoracion);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(330, 300, 89, 25));
        btnCancelar = new QPushButton(DValoracion);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(460, 300, 89, 25));

        retranslateUi(DValoracion);

        QMetaObject::connectSlotsByName(DValoracion);
    } // setupUi

    void retranslateUi(QDialog *DValoracion)
    {
        DValoracion->setWindowTitle(QCoreApplication::translate("DValoracion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DValoracion", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("DValoracion", "Opinion", nullptr));
        label_3->setText(QCoreApplication::translate("DValoracion", "Puntuacion", nullptr));
        label_4->setText(QCoreApplication::translate("DValoracion", "Usuario", nullptr));
        btnGuardar->setText(QCoreApplication::translate("DValoracion", "Guardar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("DValoracion", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DValoracion: public Ui_DValoracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DVALORACION_H
