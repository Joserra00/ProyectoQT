#ifndef _ARTICULOCONTROLLER_H_
#define _ARTICULOCONTROLLER_H_
#include <QString>
#include "model/articulo.h"
#include <QtNetwork>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkAccessManager>
#include <QByteArray>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QVector>

class ArticuloController : public QObject{
Q_OBJECT

public:
	ArticuloController();
	void selectAll();
	void insertarArticulo();
	void getArticulos(QVector<Articulo*> *);
	QJsonDocument responseData;
	
public slots:

	void slotPeticion(QNetworkReply*);
signals:
    	void peticionTerminada();
	
	

};

#endif
