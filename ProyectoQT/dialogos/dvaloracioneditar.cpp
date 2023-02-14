
#include "dvaloracioneditar.h"
#include <QDebug>

DValoracionEditar::DValoracionEditar(Valoracion *valoracionPasada,QWidget *parent): QDialog(parent){
		setupUi(this);
	valoracion = valoracionPasada;
	nameLineEdit->insert(valoracion->name);
	opinionLineEdit->insert(valoracion->opinion);
	puntuacionLineEdit->insert(QString::number(valoracion->puntuacion));
	usuarioLineEdit->insert(QString::number(valoracion->usuario));
	connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotGuardarDialogo()));
			connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
		valCtrl = new ValoracionController();

}


void DValoracionEditar::slotGuardarDialogo(){
int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres guardar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
		valoracion->name=nameLineEdit->displayText();
		valoracion->opinion=opinionLineEdit->displayText();
		valoracion->puntuacion=(puntuacionLineEdit->displayText().toFloat());
		valoracion->usuario=(usuarioLineEdit->displayText().toInt());
		valCtrl->editarValoracion(valoracion);
		this->accept();
		
	
	}




}
void DValoracionEditar::slotCancelarDialogo(){
	this->reject();



}


void DValoracionEditar::closeEvent(QCloseEvent *event)
{

       this->reject();
  

    
}

