
#include "darticuloeditar.h"
#include <QDebug>

DArticuloEditar::DArticuloEditar(Articulo *articuloPasado,QWidget *parent): QDialog(parent){
		setupUi(this);
		artCtrl = new ArticuloController();
		articulo = articuloPasado;
		nameLineEdit->insert(articulo->name);
		categoriaLineEdit->insert(QString::number(articulo->categoria));
		precioLineEdit->insert(QString::number(articulo->precio));
		descripcionLineEdit->insert(articulo->descripcion);
		ubicacionLineEdit->insert(articulo->ubicacion);
		usuarioLineEdit->insert(QString::number(articulo->usuario));
		connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotGuardarDialogo()));
		connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
	
}


void DArticuloEditar::slotGuardarDialogo(){
	
	int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres guardar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
		articulo->name=nameLineEdit->displayText();
		articulo->categoria=(categoriaLineEdit->displayText().toInt());
		articulo->precio=(precioLineEdit->displayText().toFloat());
		articulo->descripcion=descripcionLineEdit->displayText();
		articulo->ubicacion=ubicacionLineEdit->displayText();
		articulo->usuario=(usuarioLineEdit->displayText().toInt());
		artCtrl->editarArticulo(articulo);
		
		this->accept();
		
	
	}


}
void DArticuloEditar::slotCancelarDialogo(){

	this->reject();





}
void DArticuloEditar::closeEvent(QCloseEvent *event)
{

       this->reject();
  

    
}

