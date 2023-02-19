
#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent){
		setupUi(this);
	crearActions();
	crearMenus();		
		
	modeloTablaArticulo=NULL;
	modeloTablaUsuario=NULL;
	modeloTablaCategoria=NULL;
	modeloTablaMensaje=NULL;
	modeloTablaValoracion=NULL;
	connect(btnActTablas,SIGNAL(clicked()),
			this,SLOT(slotActualizarTablas()));
//instanciamos los dialogos a null
	dCategoriaEditar = NULL;
	dValoracionEditar = NULL;
	dMensajeEditar = NULL;
	dArticuloEditar = NULL;
	dUsuario = NULL;
	dChartArtCategoria = NULL;
//instanciamos tablas
	tabSimarropop->clear();
	tablaValoracion = new QTableView();
	tablaCategoria = new QTableView();
	tablaArticulo = new QTableView();
	tablaMensaje = new QTableView();
	tablaUsuario = new QTableView();

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
	
	usuCtrl = new UsuarioController();	
	usuCtrl->selectAll();
	connect(usuCtrl,SIGNAL(peticionTerminada()),
			this,SLOT(slotPeticionUsuarioTerminada()));
			
	
}

void MainWindow::slotActualizarTablas(){
	artCtrl->selectAll();


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
	if(modeloTablaValoracion==NULL){
		qDebug()<<"entro en slotPeticionValoracionTerminada primero, tamaño lista valoracion:"<<listaValoracion.size();
		crearTablaValoracion();
	}else
		qDebug()<<"entro en slotPeticionValoracionTerminada, tamaño lista valoracion:"<<listaValoracion.size();

	modeloTablaValoracion->tablaModificada();

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
	if(result==QDialog::Accepted){
		dValoracionEditar=NULL;
		delete dValoracionEditar;
		valCtrl->selectAll();
	
	}
	if(result==QDialog::Rejected){
		dValoracionEditar=NULL;
		delete dValoracionEditar;

	}



}
void MainWindow::slotDialogoValoracionInsertar(){
	if(dValoracionEditar==NULL){
		dValoracionEditar = new DValoracionEditar();
		}
	dValoracionEditar->show();
	
	connect(dValoracionEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoValoracionFinalizado(int)));

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
	if(modeloTablaArticulo==NULL){
		qDebug()<<"entro en slotPeticionArticuloTerminada primero, tamaño lista articulo:"<<listaArticulo.size();
		crearTablaArticulo();
	}else
		qDebug()<<"entro en slotPeticionArticuloTerminada, tamaño lista articulo:"<<listaArticulo.size();

	modeloTablaArticulo->tablaModificada();
		
}
void MainWindow::slotDialogoArticulo(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaArticulo.at(i)->name;
	if (dArticuloEditar==NULL)
		dArticuloEditar = new DArticuloEditar(listaArticulo.at(i));
	
	dArticuloEditar->show();
	connect(dArticuloEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoArticuloFinalizado(int)));


}
void MainWindow::slotDialogoArticuloFinalizado(int result) {
	if(result==QDialog::Accepted){
		dArticuloEditar=NULL;
		delete dArticuloEditar;
		qDebug()<<"se acepta el dialogo";
		artCtrl->selectAll();
	
	}
	if(result==QDialog::Rejected){
		qDebug()<<"se reject el dialogo";
		dArticuloEditar=NULL;
		delete dArticuloEditar;

	}

	
}
void MainWindow::slotDialogoArticuloInsertar(){
if(dArticuloEditar==NULL){
		dArticuloEditar = new DArticuloEditar();
		}
		dArticuloEditar->show();
	
	connect(dArticuloEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoArticuloFinalizado(int)));

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
	if(modeloTablaCategoria==NULL){
		qDebug()<<"entro en slotPeticionCategoriaTerminada primero, tamaño lista categoria:"<<listaCategoria.size();
		crearTablaCategoria();
	}else
		qDebug()<<"entro en slotPeticionCategoriaTerminada, tamaño lista categoria:"<<listaCategoria.size();

	modeloTablaCategoria->tablaModificada();

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
	if(result==QDialog::Accepted){
		dCategoriaEditar=NULL;
		delete dCategoriaEditar;
		qDebug()<<"se acepta el dialogo";
		catCtrl->selectAll();
	
	}
	if(result==QDialog::Rejected){
		qDebug()<<"se reject el dialogo";
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
	if(modeloTablaMensaje==NULL){
		qDebug()<<"entro en slotPeticionMensajeTerminada primero, tamaño lista mensaje:"<<listaMensaje.size();
		crearTablaMensaje();
	}else
		qDebug()<<"entro en slotPeticionMensajeTerminada, tamaño lista mensaje:"<<listaMensaje.size();

	modeloTablaMensaje->tablaModificada();

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
	if(result==QDialog::Accepted){
		dMensajeEditar=NULL;
		delete dMensajeEditar;
		qDebug()<<"se acepta el dialogo";
		menCtrl->selectAll();
	
	}
	if(result==QDialog::Rejected){
		qDebug()<<"se reject el dialogo";
		dMensajeEditar=NULL;
		delete dMensajeEditar;

	}
}

void MainWindow::slotDialogoMensajeInsertar(){
if(dMensajeEditar==NULL){
		dMensajeEditar = new DMensajeEditar();
		}
		dMensajeEditar->show();
	
	connect(dMensajeEditar,SIGNAL(finished(int)),
		this,SLOT(slotDialogoMensajeFinalizado(int)));

}
//MANIPULACION DE TABLA USUARIO
void MainWindow::crearTablaUsuario(){
	modeloTablaUsuario = new ModeloTablaUsuario(&listaUsuario);
	tablaUsuario->setModel(modeloTablaUsuario);
	connect(tablaUsuario,SIGNAL(doubleClicked(const QModelIndex &)),
			this,SLOT(slotDialogoUsuario(const QModelIndex &)));
	tabSimarropop->addTab(tablaUsuario,"Usuarios");
	


}
void MainWindow::slotPeticionUsuarioTerminada(){
	usuCtrl->getUsuarios(&listaUsuario);
	if(modeloTablaUsuario==NULL){
		qDebug()<<"entro en slotPeticionUsuarioTerminada primero, tamaño lista usuario:"<<listaUsuario.size();
		crearTablaUsuario();
	}else
		qDebug()<<"entro en slotPeticionUsuarioTerminada, tamaño lista usuario:"<<listaUsuario.size();

	modeloTablaUsuario->tablaModificada();
		

}
void MainWindow::slotDialogoUsuario(const QModelIndex &index){
	int i =  index.row();
	qDebug()<<listaUsuario.at(i)->name;
	if(dUsuario==NULL){
		dUsuario = new DUsuario(listaUsuario.at(i));
		}
		dUsuario->show();
	
	connect(dUsuario,SIGNAL(finished(int)),
		this,SLOT(slotDialogoUsuarioFinalizado(int)));


}

void MainWindow::slotDialogoUsuarioFinalizado(int result){
	if(result==QDialog::Accepted){
		dUsuario=NULL;
		delete dUsuario;
		qDebug()<<"se acepta el dialogo";
		usuCtrl->selectAll();
	
	}
	if(result==QDialog::Rejected){
		qDebug()<<"se reject el dialogo";
		dUsuario=NULL;
		delete dUsuario;

	}
}

void MainWindow::slotDialogoUsuarioInsertar(){
if(dUsuario==NULL){
		dUsuario = new DUsuario();
		}
		dUsuario->show();
	
	connect(dUsuario,SIGNAL(finished(int)),
		this,SLOT(slotDialogoUsuarioFinalizado(int)));

}

void MainWindow::slotDialogoChartArtCat(){
	if(dChartArtCategoria==NULL){
		dChartArtCategoria = new DChartArtCategoria();
		}
		dChartArtCategoria->show();

}



//CREACION DE ACTIONS
void MainWindow::crearActions(){
	accionInsertUsuario = new QAction("Insertar Usuario");
	connect(accionInsertUsuario,SIGNAL(triggered()),
		this,SLOT(slotDialogoUsuarioInsertar()));
	accionInsertArticulo = new QAction("Insertar Articulo");
	connect(accionInsertArticulo,SIGNAL(triggered()),
		this,SLOT(slotDialogoArticuloInsertar()));
		
	accionInsertValoracion = new QAction("Insertar Valoracion");
	connect(accionInsertValoracion,SIGNAL(triggered()),
		this,SLOT(slotDialogoValoracionInsertar()));
		
	accionInsertCategoria = new QAction("Insertar Categoria");
	connect(accionInsertCategoria,SIGNAL(triggered()),
		this,SLOT(slotDialogoCategoriaInsertar()));
		
	accionInsertMensaje = new QAction("Insertar Mensaje");
	connect(accionInsertMensaje,SIGNAL(triggered()),
		this,SLOT(slotDialogoMensajeInsertar()));
	accionChartArtCategoria = new QAction("Chart Articulo Categoria");
	connect(accionChartArtCategoria,SIGNAL(triggered()),
		this,SLOT(slotDialogoChartArtCat()));
	
	

}
//CREACION DE MENUS
void MainWindow::crearMenus(){
	QMenu * menuInsertar = menuBar()->addMenu("Insertar Datos");
	menuInsertar->addAction(accionInsertUsuario);
	menuInsertar->addAction(accionInsertArticulo);
	menuInsertar->addAction(accionInsertValoracion);
	menuInsertar->addAction(accionInsertCategoria);
	menuInsertar->addAction(accionInsertMensaje);
	QMenu * menuCharts = menuBar()->addMenu("Charts");
	menuCharts->addAction(accionChartArtCategoria);

}

void MainWindow::slotEjemplo(){

}



