#ifndef _CATEGORIACONTROLLER_H_
#define _CATEGORIACONTROLLER_H_
#include <QString>
#include "model/categoria.h"
#include <QtNetwork>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include <QByteArray>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QVector>
#include "model/globalvariable.h"

class CategoriaController : public QObject{
Q_OBJECT

public:
	CategoriaController();
	void selectAll();
	void insertarCategoria(Categoria *);
	void getCategorias(QVector<Categoria*> *);
	QJsonDocument responseData;
	void editarCategoria(Categoria *categoria);
	void eliminarCategoria(int);
public slots:

	void slotPeticion(QNetworkReply*);
signals:
    	void peticionTerminadaCategoria();
	
	

};

#endif
