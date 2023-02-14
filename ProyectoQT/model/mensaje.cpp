#include "mensaje.h"

Mensaje::Mensaje()
{


}
Mensaje::Mensaje(int idPasado,QString namePasado,int usuarioPasado,int usuario_receptorPasado,QString contenidoPasado)
{
	id = idPasado;
	name = namePasado;
	usuario = usuarioPasado;
	usuario_receptor = usuario_receptorPasado;
	contenido = contenidoPasado;
}
Mensaje::Mensaje(QString namePasado,int usuarioPasado,int usuario_receptorPasado,QString contenidoPasado)
{
	name = namePasado;
	usuario = usuarioPasado;
	usuario_receptor = usuario_receptorPasado;
	contenido = contenidoPasado;
}

