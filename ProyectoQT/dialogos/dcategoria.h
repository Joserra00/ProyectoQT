
#ifndef DCATEGORIA_H
#define DCATEGORIA_H
#include "ui_dcategoria.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "model/categoria.h"

class DCategoria : public QDialog, public Ui::DCategoria {
Q_OBJECT

public:
	DCategoria(Categoria *,QWidget *parent = NULL);

public slots:
	void slotEjemplo();

};

#endif 
