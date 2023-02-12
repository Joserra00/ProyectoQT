#include "modelotablamensaje.h"

ModeloTablaMensaje::ModeloTablaMensaje(QVector <Mensaje*> *listaMensajePasada){
	listaMensaje=listaMensajePasada;

}
int ModeloTablaMensaje::columnCount(const QModelIndex &)const{
	return 5;
}

int ModeloTablaMensaje::rowCount(const QModelIndex &)const{
	return listaMensaje->size();

}
QVariant ModeloTablaMensaje::data(const QModelIndex &index, int role)const{
	int row = index.row();
	int col = index.column();
	if(role ==Qt::BackgroundRole){
		
	}
	if(role !=Qt::DisplayRole) return QVariant();
	QString cadena("hola");
	switch(col){
		case 0:
			cadena=QString::number(listaMensaje->at(row)->id);
			
			break;
		case 1:
			cadena=listaMensaje->at(row)->name;
			
			break;
		case 2:
			cadena=QString::number(listaMensaje->at(row)->usuario);
			
			break;
		case 3:
			cadena=QString::number(listaMensaje->at(row)->usuario_receptor);
			
			break;
		case 4:
			cadena=listaMensaje->at(row)->contenido;
			
			break;
		

	
	}
	
	return QVariant(cadena);
	
	

}
QVariant ModeloTablaMensaje::headerData(int section,Qt::Orientation orientation, int role)const{
	int i = 0;
	if(role !=Qt::DisplayRole)return QVariant();
		if(orientation == Qt::Horizontal){
			switch(section){
				case 0: return QString("ID ");
				case 1: return QString("Name ");
				case 2: return QString("Usuario ");
				case 3: return QString("Usuario receptor ");
				case 4: return QString("Contenido ");
				
				
				
			}
		}
		QString cadena("Bola ");
		if(orientation==Qt::Vertical){
		return QVariant(QString::number(section));
		
		}
		return QVariant();
}

