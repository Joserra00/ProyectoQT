
#ifndef DVALORACION_H
#define DVALORACION_H
#include "ui_dvaloracioneditar.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include <QString>
#include "model/valoracion.h"
#include "controller/valoracioncontroller.h"
#include <QMessageBox>
#include <QCloseEvent>

class DValoracionEditar : public QDialog, public Ui::DValoracionEditar {
Q_OBJECT

public:
	DValoracionEditar(Valoracion *,QWidget *parent = NULL);
	DValoracionEditar(QWidget *parent = NULL);
	Valoracion *valoracion;
	ValoracionController *valCtrl;
	void closeEvent(QCloseEvent *);
public slots:
	void slotGuardarDialogo();
	void slotCancelarDialogo();
	void slotInsertarDialogo();

};

#endif 
