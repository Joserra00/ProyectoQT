#ifndef _MODELOTABLAMENSAJE_H_
#define _MODELOTABLAMENSAJE_H_
#include <QModelIndex>
#include <QAbstractTableModel>
#include <QTableView>
#include "model/mensaje.h"
#include <QVariant>
class ModeloTablaMensaje : public QAbstractTableModel{
Q_OBJECT
public:
	ModeloTablaMensaje(QVector <Mensaje*> *);
	QVector <Mensaje*> *listaMensaje;
	int columnCount(const QModelIndex & = QModelIndex())const;
	int rowCount(const QModelIndex & = QModelIndex())const;
	//void actualizaDatos();
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	QVariant headerData(int section, Qt::Orientation orientation,int role=Qt::DisplayRole)const;
	
	//bool setData(const QModelIndex &index, const QVariant &value,int role = Qt::EditRole);
	//Qt::ItemFlags flags(const QModelIndex &index)const;
	
};

#endif
