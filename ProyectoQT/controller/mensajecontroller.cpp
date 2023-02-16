#include "mensajecontroller.h"
MensajeController::MensajeController( )
{

}
void MensajeController::insertarMensaje(Mensaje *mensaje){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append(globalvariable::BBDD);
        args.append(2);
        args.append("1234");
        args.append("simarropop.mensaje");
        args.append("create");
        
        QJsonObject fields;
     
        fields.insert("name",mensaje->name);
        fields.insert("usuario",mensaje->usuario);
        fields.insert("usuario_receptor",mensaje->usuario_receptor);
        fields.insert("contenido",mensaje->contenido);
      
        
        args.append(fields);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
	connect(manager,SIGNAL(finished(QNetworkReply *)),
		this,SLOT(slotPeticion(QNetworkReply *)));
	QNetworkRequest request;
	request.setUrl(QUrl(globalvariable::JSONRPC_URL));
	request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
	QNetworkReply *reply = manager->post(request, postData);
	if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        
        qDebug() << reply->readAll();
        }





}
void MensajeController::editarMensaje(Mensaje *mensaje){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append(globalvariable::BBDD);
        args.append(2);
        args.append("1234");
        args.append("simarropop.mensaje");
        args.append("write");
        
        QJsonObject fields;
     
     	QJsonArray idArray;
        idArray.append(mensaje->id);
        fields.insert("name",mensaje->name);
        fields.insert("usuario",mensaje->usuario);
        fields.insert("contenido",mensaje->contenido);
        fields.insert("usuario_receptor",mensaje->usuario_receptor);
        
        args.append(idArray);
        args.append(fields);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
	connect(manager,SIGNAL(finished(QNetworkReply *)),
		this,SLOT(slotPeticion(QNetworkReply *)));
	QNetworkRequest request;
	request.setUrl(QUrl(globalvariable::JSONRPC_URL));
	request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
	QNetworkReply *reply = manager->post(request, postData);
	if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        
        qDebug() << reply->readAll();
        }





}
void MensajeController::eliminarMensaje(int id){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append(globalvariable::BBDD);
        args.append(2);
        args.append("1234");
        args.append("simarropop.mensaje");
        args.append("unlink");
        QJsonArray idArray;
        idArray.append(id);
        args.append(idArray);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
	connect(manager,SIGNAL(finished(QNetworkReply *)),
		this,SLOT(slotPeticion(QNetworkReply *)));
	QNetworkRequest request;
	request.setUrl(QUrl(globalvariable::JSONRPC_URL));
	request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
	QNetworkReply *reply = manager->post(request, postData);
	if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        
        qDebug() << reply->readAll();
        }



}


void MensajeController::selectAll(){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append(globalvariable::BBDD);
        args.append(2);
        args.append("1234");
        args.append("simarropop.mensaje");
        args.append("search_read");
        QJsonArray emptyArray;
        args.append(emptyArray);
        QJsonArray fields;
        fields.append("id");
        fields.append("name");
        fields.append("usuario");
        fields.append("usuario_receptor");
        fields.append("contenido");

        
        
        args.append(fields);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
	QNetworkRequest request;
	request.setUrl(QUrl(globalvariable::JSONRPC_URL));
	request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
	QNetworkReply *reply = manager->post(request, postData);
	
	connect(manager,SIGNAL(finished(QNetworkReply *)),
		this,SLOT(slotPeticion(QNetworkReply *)));
      
	



}
void MensajeController::slotPeticion(QNetworkReply* reply){
 if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        	
            responseData =QJsonDocument::fromJson(reply->readAll());
            emit peticionTerminada();
            
               
        }
        reply->deleteLater();

}

void MensajeController::getMensajes(QVector<Mensaje*> *listaMensaje){
	for(int i = 0; i<listaMensaje->size();i++){
		delete listaMensaje->at(i);
		
	}
	listaMensaje->clear();
 	QJsonObject jsonResponse = responseData.object();
            
            if(jsonResponse.contains("result")){
            	QJsonArray result = jsonResponse["result"].toArray();
            	for(int i = 0; i < result.size(); i++){
            		QJsonObject partner = result[i].toObject();
            		QJsonArray resultUsuario = partner["usuario"].toArray();
            		QJsonArray resultUsuarioReceptor = partner["usuario_receptor"].toArray();
            		Mensaje *mensaje = new Mensaje(partner["id"].toInt(),
            		partner["name"].toString(),
            		resultUsuario.at(0).toInt(),
            		resultUsuarioReceptor.at(0).toInt(),
            		partner["contenido"].toString());
            		listaMensaje->append(mensaje);
            	}
            	qDebug()<<listaMensaje->size();
            	
            
            }


}


