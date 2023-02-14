#include "categoria.h"

Categoria::Categoria()
{


}
Categoria::Categoria(int idPasado,QString namePasado ,QString descripcion_categoriaPasado)
{
	id = idPasado;
	name = namePasado;
	descripcion_categoria = descripcion_categoriaPasado;


}
Categoria::Categoria(QString namePasado,QString descripcion_categoriaPasado){
	name = namePasado;
	descripcion_categoria = descripcion_categoriaPasado;



}

