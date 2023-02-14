
#include "dmensajeeditar.h"
#include <QDebug>

DMensajeEditar::DMensajeEditar(Mensaje *mensajePasado,QWidget *parent): QDialog(parent){
		setupUi(this);
		mensaje = mensajePasado;
		nameLineEdit->insert(mensaje->name);
		usuarioLineEdit->insert(QString::number(mensaje->usuario));
		contenidoLineEdit->insert(mensaje->contenido);
		usuarioreceptorLineEdit->insert(QString::number(mensaje->usuario_receptor));
		connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotGuardarDialogo()));
		connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
		menCtrl = new MensajeController();

	
}


void DMensajeEditar::slotGuardarDialogo(){
	
	int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres guardar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
		mensaje->name=nameLineEdit->displayText();
		mensaje->usuario=(usuarioLineEdit->displayText().toInt());
		mensaje->contenido=contenidoLineEdit->displayText();
		mensaje->usuario_receptor=(usuarioreceptorLineEdit->displayText().toInt());
		menCtrl->editarMensaje(mensaje);
		
		this->accept();
		
	
	}


}
void DMensajeEditar::slotCancelarDialogo(){

	this->reject();





}
void DMensajeEditar::closeEvent(QCloseEvent *event)
{

       this->reject();
  

    
}

