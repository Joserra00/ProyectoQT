
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
		setupUi(this);
//instanciamos tablas
	tabSimarropop->clear();
	tablaValoracion = new QTableView();
	tablaCategoria = new QTableView();
	

//instanciamos controllers	
	valCtrl = new ValoracionController();
	valCtrl->selectAll();
	connect(valCtrl,SIGNAL(peticionTerminada()),
			this,SLOT(slotPeticionValoracionTerminada()));
			
	catCtrl = new CategoriaController();	
	catCtrl->selectAll();
	connect(catCtrl,SIGNAL(peticionTerminadaCategoria()),
			this,SLOT(slotPeticionCategoriaTerminada()));
	
}
//MANIPULACION DE TABLA ARTICULO
void MainWindow::crearTablaArticulo(){
	modeloTablaValoracion = new ModeloTablaValoracion(&listaValoracion);
	tablaValoracion->setModel(modeloTablaValoracion);
	connect(tablaValoracion,SIGNAL(doubleClicked(const QModelIndex &)),
			this,SLOT(slotDialogoArticulo(const QModelIndex &)));
	tabSimarropop->addTab(tablaValoracion,"Valoraciones");
	


}
void MainWindow::slotPeticionValoracionTerminada(){
	valCtrl->getValoraciones(&listaValoracion);
	crearTablaArticulo();

}
void MainWindow::slotDialogoArticulo(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaValoracion.at(i)->name;


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


}

void MainWindow::slotEjemplo(){

}



