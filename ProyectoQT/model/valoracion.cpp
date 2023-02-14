#include "valoracion.h"

Valoracion::Valoracion()
{


}
Valoracion::Valoracion(int idPasado,QString namePasado ,QString opinionPasado,float puntuacionPasado,int usuarioPasado)
{
	id = idPasado;
	name = namePasado;
	opinion = opinionPasado;
	puntuacion = puntuacionPasado;
	usuario = usuarioPasado;

}
Valoracion::Valoracion(QString namePasado ,QString opinionPasado,float puntuacionPasado,int usuarioPasado)
{
	name = namePasado;
	opinion = opinionPasado;
	puntuacion = puntuacionPasado;
	usuario = usuarioPasado;

}



