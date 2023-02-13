
#ifndef DVALORACION_H
#define DVALORACION_H
#include "ui_dvaloracion.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include <QString>
#include "model/valoracion.h"
#include "controller/valoracioncontroller.h"
#include <QMessageBox>
#include <QCloseEvent>

class DValoracion : public QDialog, public Ui::DValoracion {
Q_OBJECT

public:
	DValoracion(Valoracion *,QWidget *parent = NULL);
	Valoracion *valoracion;
	ValoracionController *valCtrl;
	void closeEvent(QCloseEvent *);
public slots:
	void slotGuardarDialogo();
	void slotCancelarDialogo();

};

#endif 
