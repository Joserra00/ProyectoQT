/********************************************************************************
** Form generated from reading UI file 'dcategoria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCATEGORIA_H
#define UI_DCATEGORIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DCategoria
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameEditLine;
    QLineEdit *descEditLine;
    QPushButton *btnGuardar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *DCategoria)
    {
        if (DCategoria->objectName().isEmpty())
            DCategoria->setObjectName(QString::fromUtf8("DCategoria"));
        DCategoria->resize(545, 402);
        label = new QLabel(DCategoria);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 80, 71, 21));
        label_2 = new QLabel(DCategoria);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(96, 130, 151, 31));
        nameEditLine = new QLineEdit(DCategoria);
        nameEditLine->setObjectName(QString::fromUtf8("nameEditLine"));
        nameEditLine->setGeometry(QRect(270, 70, 191, 31));
        descEditLine = new QLineEdit(DCategoria);
        descEditLine->setObjectName(QString::fromUtf8("descEditLine"));
        descEditLine->setGeometry(QRect(270, 130, 191, 31));
        btnGuardar = new QPushButton(DCategoria);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(250, 320, 89, 25));
        btnCancelar = new QPushButton(DCategoria);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(380, 320, 89, 25));

        retranslateUi(DCategoria);

        QMetaObject::connectSlotsByName(DCategoria);
    } // setupUi

    void retranslateUi(QDialog *DCategoria)
    {
        DCategoria->setWindowTitle(QApplication::translate("DCategoria", "Dialog", nullptr));
        label->setText(QApplication::translate("DCategoria", "Name", nullptr));
        label_2->setText(QApplication::translate("DCategoria", "Descripcion categoria", nullptr));
        btnGuardar->setText(QApplication::translate("DCategoria", "Guardar", nullptr));
        btnCancelar->setText(QApplication::translate("DCategoria", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DCategoria: public Ui_DCategoria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCATEGORIA_H
