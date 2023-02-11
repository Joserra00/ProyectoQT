#include "modelotablaarticulo.h"

ModeloTablaArticulo::ModeloTablaArticulo(QVector <Articulo*> *listaArticuloPasada){
	listaArticulo=listaArticuloPasada;

}
int ModeloTablaArticulo::columnCount(const QModelIndex &)const{
	return 7;
}

int ModeloTablaArticulo::rowCount(const QModelIndex &)const{
	return listaArticulo->size();

}
QVariant ModeloTablaArticulo::data(const QModelIndex &index, int role)const{
	int row = index.row();
	int col = index.column();
	if(role ==Qt::BackgroundRole){
		
	}
	if(role !=Qt::DisplayRole) return QVariant();
	QString cadena("hola");
	switch(col){
		case 0:
			cadena=QString::number(listaArticulo->at(row)->id);
			
			break;
		case 1:
			cadena=listaArticulo->at(row)->name;
			
			break;
		case 2:
			cadena=QString::number(listaArticulo->at(row)->categoria);
			
			break;

	
	}
	
	return QVariant(cadena);
	
	

}
QVariant ModeloTablaArticulo::headerData(int section,Qt::Orientation orientation, int role)const{
	int i = 0;
	if(role !=Qt::DisplayRole)return QVariant();
		if(orientation == Qt::Horizontal){
			switch(section){
				case 0: return QString("ID ");
				case 1: return QString("Name ");
				case 2: return QString("categoria ");
				
			}
		}
		QString cadena("Bola ");
		if(orientation==Qt::Vertical){
		return QVariant(QString::number(section));
		
		}
		return QVariant();
}

