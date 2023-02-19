
#include "dchartartcategoria.h"
#include <QDebug>

DChartArtCategoria::DChartArtCategoria(QWidget *parent): QDialog(parent){
		setupUi(this);
	QBarSeries *barSeries = new QBarSeries();
	QBarSet *set1 = new QBarSet("Numero de Articulos en una categoria");
	for(int i = 0; i<5; i++){
		*set1 << i;
		}
	
	barSeries->append(set1);

	// Crear un objeto QChart y agregar la serie de barras al gráfico
	QChart *chart = new QChart();
	chart->addSeries(barSeries);
	QChartView *chartView = new QChartView(chart);

	// Crear un objeto QValueAxis para el eje X y agregarlo al gráfico
	QBarCategoryAxis *axisX = new QBarCategoryAxis();
	axisX->append("Categoría 1");
	axisX->append("Categoría 2");
	axisX->append("Categoría 3");
	axisX->append("Categoría 4");
	axisX->append("Categoría 5");
	axisX->setTitleText("Categoria");
	chart->addAxis(axisX, Qt::AlignBottom);
	barSeries->attachAxis(axisX);

	// Crear un objeto QValueAxis para el eje Y y agregarlo al gráfico
	QValueAxis *axisY = new QValueAxis();
	axisY->setRange(0,20);
	axisY->setTitleText("Cantidad Articulos");
	chart->addAxis(axisY, Qt::AlignLeft);
	barSeries->attachAxis(axisY);

	// Configurar el título del gráfico y mostrarlo
	chart->setTitle("Grafico Articulo Categoria");
	chart->legend()->setVisible(true);
	chart->legend()->setAlignment(Qt::AlignBottom);
	chartView->setChart(chart);
	verticalLayout->addWidget(chartView);

	
}


void DChartArtCategoria::slotEjemplo(){

}

