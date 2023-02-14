
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"

#include <QVector>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QMainWindow>
#include "dlogin.h"
#include "database.h"
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QMenuBar>
#include <QAction>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include <QByteArray>
#include "jsonbuilder.h"
#include "controller/valoracioncontroller.h"
#include <QModelIndex>
#include <QAbstractTableModel>
#include <QTableView>
#include "model/valoracion.h"
#include "model/categoria.h"
#include "model/articulo.h"
#include "model/mensaje.h"
#include "controller/categoriacontroller.h"
#include "controller/articulocontroller.h"
#include "controller/mensajecontroller.h"
#include "modelotabla/modelotablacategoria.h"
#include "modelotabla/modelotablavaloracion.h"
#include "modelotabla/modelotablaarticulo.h"
#include "modelotabla/modelotablamensaje.h"
#include "dialogos/dcategoriaeditar.h"
#include "dialogos/dvaloracioneditar.h"
#include "dialogos/dmensajeeditar.h"
#include "dialogos/darticuloeditar.h"


class MainWindow : public QMainWindow, public Ui::MainWindow {
Q_OBJECT

public:
	MainWindow(QWidget *parent = NULL);
	QTableView *tablaValoracion;
	ModeloTablaValoracion *modeloTablaValoracion;
	ValoracionController *valCtrl;
	void crearTablaValoracion();
	QVector <Valoracion*> listaValoracion;
	DValoracionEditar *dValoracionEditar;
	
	QTableView *tablaCategoria;
	ModeloTablaCategoria *modeloTablaCategoria;
	CategoriaController *catCtrl;
	void crearTablaCategoria();
	QVector <Categoria*> listaCategoria;
	DCategoriaEditar *dCategoriaEditar;
	
	QTableView *tablaArticulo;
	ModeloTablaArticulo *modeloTablaArticulo;
	ArticuloController *artCtrl;
	void crearTablaArticulo();
	QVector <Articulo*> listaArticulo;
	DArticuloEditar *dArticuloEditar;
	
	QTableView *tablaMensaje;
	ModeloTablaMensaje *modeloTablaMensaje;
	MensajeController *menCtrl;
	void crearTablaMensaje();
	QVector <Mensaje*> listaMensaje;
	DMensajeEditar *dMensajeEditar;
	
	
	void crearMenus();
	void crearActions();
	QAction *accionInsertUsuario,*accionInsertArticulo,*accionInsertValoracion,*accionInsertCategoria,*accionInsertMensaje;

public slots:
	void slotEjemplo();
	void slotDialogoValoracion(const QModelIndex &);
	void slotPeticionValoracionTerminada();
	void slotDialogoValoracionFinalizado(int );
	void slotDialogoCategoria(const QModelIndex &);
	void slotPeticionCategoriaTerminada();
	void slotDialogoCategoriaInsertar();
	void slotDialogoCategoriaFinalizado(int );
	void slotDialogoArticulo(const QModelIndex &);
	void slotPeticionArticuloTerminada();
	void slotDialogoArticuloFinalizado(int );
	void slotDialogoMensaje(const QModelIndex &);
	void slotPeticionMensajeTerminada();
	void slotDialogoMensajeFinalizado(int );

};

#endif 
