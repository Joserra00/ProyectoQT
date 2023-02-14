/********************************************************************************
** Form generated from reading UI file 'dcategoriaeditar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCATEGORIAEDITAR_H
#define UI_DCATEGORIAEDITAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DCategoriaEditar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameEditLine;
    QLineEdit *descEditLine;
    QPushButton *btnGuardar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *DCategoriaEditar)
    {
        if (DCategoriaEditar->objectName().isEmpty())
            DCategoriaEditar->setObjectName(QString::fromUtf8("DCategoriaEditar"));
        DCategoriaEditar->resize(545, 402);
        label = new QLabel(DCategoriaEditar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 80, 71, 21));
        label_2 = new QLabel(DCategoriaEditar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(96, 130, 151, 31));
        nameEditLine = new QLineEdit(DCategoriaEditar);
        nameEditLine->setObjectName(QString::fromUtf8("nameEditLine"));
        nameEditLine->setGeometry(QRect(270, 70, 191, 31));
        descEditLine = new QLineEdit(DCategoriaEditar);
        descEditLine->setObjectName(QString::fromUtf8("descEditLine"));
        descEditLine->setGeometry(QRect(270, 130, 191, 31));
        btnGuardar = new QPushButton(DCategoriaEditar);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(250, 320, 89, 25));
        btnCancelar = new QPushButton(DCategoriaEditar);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(380, 320, 89, 25));

        retranslateUi(DCategoriaEditar);

        QMetaObject::connectSlotsByName(DCategoriaEditar);
    } // setupUi

    void retranslateUi(QDialog *DCategoriaEditar)
    {
        DCategoriaEditar->setWindowTitle(QCoreApplication::translate("DCategoriaEditar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DCategoriaEditar", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("DCategoriaEditar", "Descripcion categoria", nullptr));
        btnGuardar->setText(QCoreApplication::translate("DCategoriaEditar", "Guardar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("DCategoriaEditar", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DCategoriaEditar: public Ui_DCategoriaEditar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCATEGORIAEDITAR_H
