#ifndef _MENSAJECONTROLLER_H_
#define _MENSAJECONTROLLER_H_
#include <QString>
#include "model/mensaje.h"
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

class MensajeController : public QObject{
Q_OBJECT

public:
	MensajeController();
	void selectAll();
	void insertarMensaje(Mensaje *);
	void getMensajes(QVector<Mensaje*> *);
	void editarMensaje(Mensaje *);
	void eliminarMensaje(int);
	QJsonDocument responseData;
	
public slots:

	void slotPeticion(QNetworkReply*);
signals:
    	void peticionTerminada();
	
	

};

#endif
