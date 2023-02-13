
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
		setupUi(this);
		
	dCategoria = NULL;
	dValoracion = NULL;
//instanciamos tablas
	tabSimarropop->clear();
	tablaValoracion = new QTableView();
	tablaCategoria = new QTableView();
	tablaArticulo = new QTableView();
	tablaMensaje = new QTableView();

//instanciamos controllers	
	valCtrl = new ValoracionController();
	valCtrl->selectAll();
	connect(valCtrl,SIGNAL(peticionTerminada()),
			this,SLOT(slotPeticionValoracionTerminada()));
			
	catCtrl = new CategoriaController();	
	catCtrl->selectAll();
	connect(catCtrl,SIGNAL(peticionTerminadaCategoria()),
			this,SLOT(slotPeticionCategoriaTerminada()));
	artCtrl = new ArticuloController();	
	artCtrl->selectAll();
	connect(artCtrl,SIGNAL(peticionTerminada()),
			this,SLOT(slotPeticionArticuloTerminada()));
			
	menCtrl = new MensajeController();	
	menCtrl->selectAll();
	connect(menCtrl,SIGNAL(peticionTerminada()),
			this,SLOT(slotPeticionMensajeTerminada()));
			
	
}
//MANIPULACION DE TABLA VALORACION
void MainWindow::crearTablaValoracion(){
	modeloTablaValoracion = new ModeloTablaValoracion(&listaValoracion);
	tablaValoracion->setModel(modeloTablaValoracion);
	connect(tablaValoracion,SIGNAL(doubleClicked(const QModelIndex &)),
			this,SLOT(slotDialogoValoracion(const QModelIndex &)));
	tabSimarropop->addTab(tablaValoracion,"Valoraciones");
	


}
void MainWindow::slotPeticionValoracionTerminada(){
	valCtrl->getValoraciones(&listaValoracion);
	crearTablaValoracion();

}
void MainWindow::slotDialogoValoracion(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaValoracion.at(i)->name;
	if(dValoracion==NULL){
		dValoracion = new DValoracion(listaValoracion.at(i));
		}
		dValoracion->show();
		connect(dValoracion,SIGNAL(finished(int)),
		this,SLOT(slotDialogoValoracionFinalizado(int)));


}
void MainWindow::slotDialogoValoracionFinalizado(int result) {
	if(result==QDialog::Accepted || result==QDialog::Rejected){
		dValoracion=NULL;
		delete dValoracion;
	
	}



}
//MANIPULACION TABLA ARTICULO
void MainWindow::crearTablaArticulo(){
	modeloTablaArticulo = new ModeloTablaArticulo(&listaArticulo);
	tablaArticulo->setModel(modeloTablaArticulo);
	connect(tablaArticulo,SIGNAL(doubleClicked(const QModelIndex &)),
			this,SLOT(slotDialogoArticulo(const QModelIndex &)));
	tabSimarropop->addTab(tablaArticulo,"Articulos");
	


}
void MainWindow::slotPeticionArticuloTerminada(){
	artCtrl->getArticulos(&listaArticulo);
	crearTablaArticulo();

}
void MainWindow::slotDialogoArticulo(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaArticulo.at(i)->name;


}
//MANIPULACION DE TABLA CATEGORIA
void MainWindow::crearTablaCategoria(){
	modeloTablaCategoria = new ModeloTablaCategoria(&listaCategoria);
	tablaCategoria->setModel(modeloTablaCategoria);
	connect(tablaCategoria,SIGNAL(doubleClicked(const QModelIndex &)),
			this,SLOT(slotDialogoCategoria(const QModelIndex &)));
	tabSimarropop->addTab(tablaCategoria,"Categorias");
	


}
void MainWindow::slotPeticionCategoriaTerminada(){
	catCtrl->getCategorias(&listaCategoria);
	crearTablaCategoria();

}
void MainWindow::slotDialogoCategoria(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaCategoria.at(i)->name;
	if(dCategoria==NULL){
		dCategoria = new DCategoria(listaCategoria.at(i));
		}
		dCategoria->show();
	connect(dCategoria,SIGNAL(finished(int)),
		this,SLOT(slotDialogoCategoriaFinalizado(int)));



}
void MainWindow::slotDialogoCategoriaFinalizado(int result){
	if(result==QDialog::Accepted || result==QDialog::Rejected){
		dCategoria=NULL;
		delete dCategoria;
	
	}

}
//MANIPULACION DE TABLA MENSAJE
void MainWindow::crearTablaMensaje(){
	modeloTablaMensaje = new ModeloTablaMensaje(&listaMensaje);
	tablaMensaje->setModel(modeloTablaMensaje);
	connect(tablaMensaje,SIGNAL(doubleClicked(const QModelIndex &)),
			this,SLOT(slotDialogoMensaje(const QModelIndex &)));
	tabSimarropop->addTab(tablaMensaje,"Mensajes");
	


}
void MainWindow::slotPeticionMensajeTerminada(){
	menCtrl->getMensajes(&listaMensaje);
	crearTablaMensaje();

}
void MainWindow::slotDialogoMensaje(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaMensaje.at(i)->name;


}

void MainWindow::slotEjemplo(){

}



