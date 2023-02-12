#include "articulocontroller.h"
ArticuloController::ArticuloController( )
{

}
void ArticuloController::insertarArticulo(){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append("josedb");
        args.append(2);
        args.append("1234");
        args.append("simarropop.articulo");
        args.append("create");
        
        QJsonObject fields;
     
        fields.insert("name","");
        fields.insert("categoria","");
        fields.insert("precio","");
        fields.insert("descripcion","");
        fields.insert("ubicacion","");
        fields.insert("usuario","");
        
        args.append(fields);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
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


void ArticuloController::selectAll(){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append("josedb");
        args.append(2);
        args.append("1234");
        args.append("simarropop.articulo");
        args.append("search_read");
        QJsonArray emptyArray;
        args.append(emptyArray);
        QJsonArray fields;
        fields.append("id");
        fields.append("name");
        fields.append("categoria");
        fields.append("precio");
        fields.append("descripcion");
        fields.append("ubicacion");
        fields.append("usuario");
        
        
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
void ArticuloController::slotPeticion(QNetworkReply* reply){
 if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        	
            responseData =QJsonDocument::fromJson(reply->readAll());
            emit peticionTerminada();
            
               
        }
        reply->deleteLater();

}

void ArticuloController::getArticulos(QVector<Articulo*> *listaArticulo){
 	QJsonObject jsonResponse = responseData.object();
            
            if(jsonResponse.contains("result")){
            	QJsonArray result = jsonResponse["result"].toArray();
            	for(int i = 0; i < result.size(); i++){
            		QJsonObject partner = result[i].toObject();
            		QJsonArray resultCategory = partner["categoria"].toArray();
            		QJsonArray resultUsuario = partner["usuario"].toArray();
            		Articulo *articulo = new Articulo(partner["id"].toInt(),
            		partner["name"].toString(),
            		resultCategory.at(0).toInt(),
            		partner["precio"].toDouble(),
            		partner["descripcion"].toString(),
            		partner["ubicacion"].toString(),
            		resultUsuario.at(0).toInt());
            		listaArticulo->append(articulo);
            	}
            	qDebug()<<listaArticulo->size();
            	
            
            }


}


