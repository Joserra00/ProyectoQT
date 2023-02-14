#ifndef _MENSAJE_H_
#define _MENSAJE_H_

#include <QString>

class Mensaje{

public:
	Mensaje();
	Mensaje(int ,QString ,int,int,QString);
	Mensaje(QString ,int,int,QString);
	int id;
	QString name;
	int usuario;
	int usuario_receptor;
	QString contenido;
	

	
private:
	


};

#endif
