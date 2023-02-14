
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
		setupUi(this);
crearActions();
crearMenus();		
		
		
//instanciamos los dialogos a null
	dCategoriaEditar = NULL;
	dValoracionEditar = NULL;
	dMensajeEditar = NULL;
	dArticuloEditar = NULL;
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
	if(dValoracionEditar==NULL){
		dValoracionEditar = new DValoracionEditar(listaValoracion.at(i));
		}
		dValoracionEditar->show();
		connect(dValoracionEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoValoracionFinalizado(int)));


}
void MainWindow::slotDialogoValoracionFinalizado(int result) {
	if(result==QDialog::Accepted || result==QDialog::Rejected){
		dValoracionEditar=NULL;
		delete dValoracionEditar;
	
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
	if(dArticuloEditar==NULL){
		dArticuloEditar = new DArticuloEditar(listaArticulo.at(i));
		}
		dArticuloEditar->show();
	connect(dArticuloEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoCategoriaFinalizado(int)));


}
void MainWindow::slotDialogoArticuloFinalizado(int result) {
	if(result==QDialog::Accepted || result==QDialog::Rejected){
		dArticuloEditar=NULL;
		delete dArticuloEditar;
	
	}
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
	if(dCategoriaEditar==NULL){
		dCategoriaEditar = new DCategoriaEditar(listaCategoria.at(i));
		}
		dCategoriaEditar->show();
	connect(dCategoriaEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoCategoriaFinalizado(int)));



}
void MainWindow::slotDialogoCategoriaFinalizado(int result){
	if(result==QDialog::Accepted || result==QDialog::Rejected){
		dCategoriaEditar=NULL;
		delete dCategoriaEditar;
	
	}

}
void MainWindow::slotDialogoCategoriaInsertar(){
if(dCategoriaEditar==NULL){
		dCategoriaEditar = new DCategoriaEditar();
		}
		dCategoriaEditar->show();
	
	connect(dCategoriaEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoCategoriaFinalizado(int)));

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
	if(dMensajeEditar==NULL){
		dMensajeEditar = new DMensajeEditar(listaMensaje.at(i));
		}
		dMensajeEditar->show();
	
	connect(dMensajeEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoMensajeFinalizado(int)));


}

void MainWindow::slotDialogoMensajeFinalizado(int result){
	if(result==QDialog::Accepted || result==QDialog::Rejected){
		dMensajeEditar=NULL;
		delete dMensajeEditar;
	
	}
}
void MainWindow::crearActions(){
	accionInsertUsuario = new QAction("Insertar Usuario");
	accionInsertArticulo = new QAction("Insertar Articulo");
	accionInsertValoracion = new QAction("Insertar Valoracion");
	accionInsertCategoria = new QAction("Insertar Categoria");
	connect(accionInsertCategoria,SIGNAL(triggered()),
		this,SLOT(slotDialogoCategoriaInsertar()));
	accionInsertMensaje = new QAction("Insertar Mensaje");
	

}

void MainWindow::crearMenus(){
	QMenu * menuInsertar = menuBar()->addMenu("Insertar Datos");
	menuInsertar->addAction(accionInsertUsuario);
	menuInsertar->addAction(accionInsertArticulo);
	menuInsertar->addAction(accionInsertValoracion);
	menuInsertar->addAction(accionInsertCategoria);
	menuInsertar->addAction(accionInsertMensaje);

}

void MainWindow::slotEjemplo(){

}



