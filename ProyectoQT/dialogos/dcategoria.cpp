
#include "dcategoria.h"
#include <QDebug>

DCategoria::DCategoria(Categoria *categoria,QWidget *parent): QDialog(parent){
		setupUi(this);
		nameEditLine->insert(categoria->name);
		descEditLine->insert(categoria->descripcion_categoria);

	
}


void DCategoria::slotEjemplo(){

}

