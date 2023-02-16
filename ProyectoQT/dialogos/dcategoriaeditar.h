
#ifndef DCATEGORIA_H
#define DCATEGORIA_H
#include "ui_dcategoriaeditar.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "model/categoria.h"
#include "controller/categoriacontroller.h"
#include <QMessageBox>
#include <QCloseEvent>
class DCategoriaEditar : public QDialog, public Ui::DCategoriaEditar {
Q_OBJECT

public:
	DCategoriaEditar(Categoria *,QWidget *parent = NULL);
	DCategoriaEditar(QWidget *parent = NULL);
	Categoria *categoria;
	CategoriaController *catCtrl;
	void closeEvent(QCloseEvent *);
public slots:
	void slotGuardarDialogo();
	void slotCancelarDialogo();
	void slotInsertarDialogo();
	void slotBorrarDialogo();
	void slotEmitirAccept();

};

#endif 
