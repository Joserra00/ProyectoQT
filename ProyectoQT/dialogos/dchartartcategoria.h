
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
QT_CHARTS_USE_NAMESPACE


class DChartArtCategoria : public QDialog, public Ui::DChartArtCategoria {
Q_OBJECT

public:
	DChartArtCategoria(QWidget *parent = NULL);

public slots:
	void slotEjemplo();

};

#endif 
