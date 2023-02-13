
#ifndef DCATEGORIA_H
#define DCATEGORIA_H
#include "ui_dcategoria.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "model/categoria.h"
#include "controller/categoriacontroller.h"
#include <QMessageBox>
#include <QCloseEvent>
class DCategoria : public QDialog, public Ui::DCategoria {
Q_OBJECT

public:
	DCategoria(Categoria *,QWidget *parent = NULL);
	Categoria *categoria;
	CategoriaController *catCtrl;
	void closeEvent(QCloseEvent *);
public slots:
	void slotGuardarDialogo();
	void slotCancelarDialogo();

};

#endif 
