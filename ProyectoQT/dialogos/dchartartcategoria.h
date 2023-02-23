
#ifndef DCHARTARTCATEGORIA_H
#define DCHARTARTCATEGORIA_H
#include "ui_dchartartcategoria.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <QString>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include "controller/articulocontroller.h"
#include "model/categoria.h"
#include "model/articulo.h"
#include <QFont>
QT_CHARTS_USE_NAMESPACE


class DChartArtCategoria : public QDialog, public Ui::DChartArtCategoria {
Q_OBJECT

public:
	DChartArtCategoria(QVector<Categoria*>*,QWidget *parent = NULL);
	ArticuloController *artCtrl;
	QBarSet *set1;

public slots:
	void slotEjemplo();

};

#endif 
