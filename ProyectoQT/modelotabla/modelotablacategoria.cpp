#include "modelotablacategoria.h"

ModeloTablaCategoria::ModeloTablaCategoria(QVector <Categoria*> *listaCategoriaPasada){
	listaCategoria=listaCategoriaPasada;

}
int ModeloTablaCategoria::columnCount(const QModelIndex &)const{
	return 3;
}

int ModeloTablaCategoria::rowCount(const QModelIndex &)const{
	return listaCategoria->size();

}
QVariant ModeloTablaCategoria::data(const QModelIndex &index, int role)const{
	int row = index.row();
	int col = index.column();
	if(role ==Qt::BackgroundRole){
		
	}
	if(role !=Qt::DisplayRole) return QVariant();
	QString cadena("hola");
	switch(col){
		case 0:
			cadena=QString::number(listaCategoria->at(row)->id);
			
			break;
		case 1:
			cadena=listaCategoria->at(row)->name;
			
			break;
		case 2:
			cadena=listaCategoria->at(row)->descripcion_categoria;
			
			break;

	
	}
	
	return QVariant(cadena);
	
	

}
QVariant ModeloTablaCategoria::headerData(int section,Qt::Orientation orientation, int role)const{
	int i = 0;
	if(role !=Qt::DisplayRole)return QVariant();
		if(orientation == Qt::Horizontal){
			switch(section){
				case 0: return QString("ID ");
				case 1: return QString("Name ");
				case 2: return QString("Descripcion categoria ");
				
			}
		}
		QString cadena("Bola ");
		if(orientation==Qt::Vertical){
		return QVariant(QString::number(section));
		
		}
		return QVariant();
}
void ModeloTablaCategoria::tablaModificada(){
	emit layoutChanged();

}

