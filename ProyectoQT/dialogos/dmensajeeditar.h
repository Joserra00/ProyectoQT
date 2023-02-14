
#ifndef DMENSAJE_H
#define DMENSAJE_H
#include "ui_dmensajeeditar.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "model/mensaje.h"
#include "controller/mensajecontroller.h"
#include <QMessageBox>
#include <QCloseEvent>

class DMensajeEditar : public QDialog, public Ui::DMensajeEditar {
Q_OBJECT

public:
	DMensajeEditar(Mensaje * ,QWidget *parent = NULL);
	Mensaje *mensaje;
	MensajeController *menCtrl;
	void closeEvent(QCloseEvent *);

public slots:
	void slotGuardarDialogo();
	void slotCancelarDialogo();

};

#endif 
