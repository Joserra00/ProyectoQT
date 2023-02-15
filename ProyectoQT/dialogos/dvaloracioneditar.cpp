
#include "dvaloracioneditar.h"
#include <QDebug>

DValoracionEditar::DValoracionEditar(Valoracion *valoracionPasada,QWidget *parent): QDialog(parent){
		setupUi(this);
	btnCancelar->setText("Borrar");
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
DValoracionEditar::DValoracionEditar(QWidget *parent): QDialog(parent){
		setupUi(this);
	
	connect(btnGuardar,SIGNAL(clicked()),
			this,SLOT(slotInsertarDialogo()));
	connect(btnCancelar,SIGNAL(clicked()),
			this,SLOT(slotCancelarDialogo()));
	valCtrl = new ValoracionController();

}
void DValoracionEditar::slotInsertarDialogo(){
int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres guardar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
		valoracion = new Valoracion(nameLineEdit->displayText(),
		opinionLineEdit->displayText(),
		puntuacionLineEdit->displayText().toFloat(),
		usuarioLineEdit->displayText().toInt());
		valCtrl->insertarValoracion(valoracion);
		this->accept();
		
	
	}




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
void DValoracionEditar::slotBorrarDialogo(){
	int respuesta = QMessageBox::warning(this,QString("Esta seguro que quieres borrar?"),
	QString("¿Seguro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No) qDebug()<<"no se acepto el dialogo";
	if(respuesta == QMessageBox::Yes){
	
		valCtrl->eliminarValoracion(valoracion->id);
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

