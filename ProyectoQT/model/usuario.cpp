#include "usuario.h"

Usuario::Usuario()
{


}
Usuario::Usuario(int idPasado,QString namePasado,QString emailPasado,QString mobilePasado,QString cityPasado,QString fecha_nacimientoPasado,QString passwordPasado)
{
	id = idPasado;
	name = namePasado;
	email = emailPasado;
	phone = mobilePasado;
	city = cityPasado;
	fecha_nacimiento = fecha_nacimientoPasado;
	contrasenya = passwordPasado;
}
Usuario::Usuario(QString namePasado,QString emailPasado,QString mobilePasado,QString cityPasado,QString fecha_nacimientoPasado,QString passwordPasado)
{
	name = namePasado;
	email = emailPasado;
	phone = mobilePasado;
	city = cityPasado;
	fecha_nacimiento = fecha_nacimientoPasado;
	contrasenya = passwordPasado;
}


