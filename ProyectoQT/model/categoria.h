#ifndef _CATEGORIA_H_
#define _CATEGORIA_H_

#include <QString>

class Categoria{

public:
	Categoria();
	Categoria(int ,QString ,QString);
	Categoria(QString ,QString);
	int id;
	QString name;
	QString descripcion_categoria;
	
	
private:
	


};

#endif
