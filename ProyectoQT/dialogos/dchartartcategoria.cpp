
#include "dchartartcategoria.h"
#include <QDebug>

DChartArtCategoria::DChartArtCategoria(QVector<Categoria*>*categorias,QWidget *parent): QDialog(parent){
		setupUi(this);
		artCtrl = new ArticuloController();
			connect(artCtrl,SIGNAL(peticionTerminada()),
			this,SLOT(slotEjemplo()));
	QBarSeries *barSeries = new QBarSeries();
	
	set1 = new QBarSet("Numero de Articulos en una categoria");
	for(int i = 0; i<categorias->size(); i++){
		artCtrl->getCantArticulosByCategoria(categorias->at(i)->id);
		
		}
	barSeries->append(set1);

	// Crear un objeto QChart y agregar la serie de barras al gráfico
	QChart *chart = new QChart();
	chart->addSeries(barSeries);
	QChartView *chartView = new QChartView(chart);

	// Crear un objeto QValueAxis para el eje X y agregarlo al gráfico
	QBarCategoryAxis *axisX = new QBarCategoryAxis();
	QFont font("Arial", 10); // Crear una fuente personalizada con tamaño 10
	for(int i = 0; i<categorias->size(); i++){
		axisX->append(categorias->at(i)->name);
		}
	axisX->setTitleText("Categoria");
	chart->addAxis(axisX, Qt::AlignBottom);
	barSeries->attachAxis(axisX);

	// Crear un objeto QValueAxis para el eje Y y agregarlo al gráfico
	QValueAxis *axisY = new QValueAxis();
	axisY->setRange(0,24);
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
	*set1<<artCtrl->getCantidad();

}

