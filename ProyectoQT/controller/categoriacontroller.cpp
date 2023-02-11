#include "categoriacontroller.h"
CategoriaController::CategoriaController( )
{


}
void CategoriaController::insertarCategoria(){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append("jessica2dam");
        args.append(2);
        args.append("1234");
        args.append("simarropop.categoria");
        args.append("create");
        
        QJsonObject fields;
     
        fields.insert("name","prueba 2");
        fields.insert("descripcion_categoria","prueba 2");
  
        
        args.append(fields);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
	QNetworkRequest request;
	request.setUrl(QUrl("http://192.168.8.10:8069/jsonrpc"));
	request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
	QNetworkReply *reply = manager->post(request, postData);
	if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        
        qDebug() << reply->readAll();
        }





}


void CategoriaController::selectAll(){
	QJsonObject jsonObject;
	jsonObject.insert("jsonrpc", "2.0");
        jsonObject.insert("method", "call");
        jsonObject.insert("id", 970248153);
        QJsonObject params;
        params.insert("service", "object");
        params.insert("method", "execute");
        QJsonArray args;
        args.append("jessica2dam");
        args.append(2);
        args.append("1234");
        args.append("simarropop.categoria");
        args.append("search_read");
        QJsonArray emptyArray;
        args.append(emptyArray);
        QJsonArray fields;
        fields.append("id");
        fields.append("name");
        fields.append("descripcion_categoria");
        
        args.append(fields);
        params.insert("args", args);
        jsonObject.insert("params", params);
        
        QByteArray postData = QJsonDocument(jsonObject).toJson();
	QNetworkAccessManager *manager = new QNetworkAccessManager();
	QNetworkRequest request;
	request.setUrl(QUrl("http://192.168.8.10:8069/jsonrpc"));
	request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/json"));
	QNetworkReply *reply = manager->post(request, postData);
	
	connect(manager,SIGNAL(finished(QNetworkReply *)),
		this,SLOT(slotPeticion(QNetworkReply *)));
      
	



}
void CategoriaController::slotPeticion(QNetworkReply* reply){
 if (reply->error() != QNetworkReply::NoError) {
            qDebug() << "Error: " << reply->errorString();
        } else {
        	
            responseData =QJsonDocument::fromJson(reply->readAll());
            emit peticionTerminadaCategoria();
            
               
        }
        reply->deleteLater();

}

void CategoriaController::getCategorias(QVector<Categoria*> *listaCategoria){
 	QJsonObject jsonResponse = responseData.object();
            
            
            if(jsonResponse.contains("result")){
            	QJsonArray result = jsonResponse["result"].toArray();
            	for(int i = 0; i < result.size(); i++){
            		QJsonObject partner = result[i].toObject();
            		Categoria *categoria = new Categoria(partner["id"].toDouble(),partner["name"].toString()
            		,partner["descripcion_categoria"].toString());
            		listaCategoria->append(categoria);
            	}
            	qDebug()<<listaCategoria->size();
            	
            
            }


}


