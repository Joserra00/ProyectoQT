
#ifndef DMENSAJE_H
#define DMENSAJE_H
#include "ui_dmensaje.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>

class DMensaje : public QDialog, public Ui::DMensaje {
Q_OBJECT

public:
	DMensaje(QWidget *parent = NULL);

public slots:
	void slotEjemplo();

};

#endif 
