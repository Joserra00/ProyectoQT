
#include "dcategoriaeditar.h"
#include <QDebug>

DCategoriaEditar::DCategoriaEditar(Categoria *categoriaPasada,QWidget *parent): QDialog(parent){
		setupUi(this);
		categoria = categoriaPasada;
		nameEditLine->insert(categoria->name);
		descEditLine->insert(categoria->descripcion_categoria);

		connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotGuardarDialogo()));
			connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
		catCtrl = new CategoriaController();
}
DCategoriaEditar::DCategoriaEditar(QWidget *parent): QDialog(parent){
		setupUi(this);
		connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotInsertarDialogo()));
			connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
		catCtrl = new CategoriaController();
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
		this->accept();
		
	
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
		this->accept();
		
	
	}


}
void DCategoriaEditar::slotCancelarDialogo(){

	this->reject();





}
void DCategoriaEditar::closeEvent(QCloseEvent *event)
{

       this->reject();
  

    
}

