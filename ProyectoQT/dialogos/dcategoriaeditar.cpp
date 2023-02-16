
#include "dcategoriaeditar.h"
#include <QDebug>

DCategoriaEditar::DCategoriaEditar(Categoria *categoriaPasada,QWidget *parent): QDialog(parent){
		setupUi(this);
		btnCancelar->setText("Borrar");
		categoria = categoriaPasada;
		nameEditLine->insert(categoria->name);
		descEditLine->insert(categoria->descripcion_categoria);

		connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotGuardarDialogo()));
			connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotBorrarDialogo()));
		catCtrl = new CategoriaController();
		connect(catCtrl,SIGNAL(peticionTerminadaCategoria()),
			this,SLOT(slotEmitirAccept()));
}
DCategoriaEditar::DCategoriaEditar(QWidget *parent): QDialog(parent){
		setupUi(this);
		connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotInsertarDialogo()));
		connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
		catCtrl = new CategoriaController();
		connect(catCtrl,SIGNAL(peticionTerminadaCategoria()),
			this,SLOT(slotEmitirAccept()));
}

void DCategoriaEditar::slotInsertarDialogo(){
	int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres guardar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
		categoria = new Categoria(nameEditLine->displayText(),
		descEditLine->displayText());
		catCtrl->insertarCategoria(categoria);
		
	
	}


}
void DCategoriaEditar::slotBorrarDialogo(){
	int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres borrar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
	
		catCtrl->eliminarCategoria(categoria->id);
		
	
	}


}

void DCategoriaEditar::slotGuardarDialogo(){
	int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres guardar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
	
		categoria->name=nameEditLine->displayText();
		categoria->descripcion_categoria=descEditLine->displayText();
		catCtrl->editarCategoria(categoria);
		
		
	
	}


}
void DCategoriaEditar::slotCancelarDialogo(){

	this->reject();





}
void DCategoriaEditar::closeEvent(QCloseEvent *event)
{

       this->reject();
  

    
}
void DCategoriaEditar::slotEmitirAccept(){
	this->accept();
}

