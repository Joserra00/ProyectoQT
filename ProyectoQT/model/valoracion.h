#ifndef _VALORACION_H_
#define _VALORACION_H_

#include <QString>

class Valoracion{

public:
	Valoracion();
	Valoracion(int ,QString ,QString ,float,int);
	int id;
	QString name;
	QString opinion;
	float puntuacion;
	int usuario;
	
	
private:
	


};

#endif
