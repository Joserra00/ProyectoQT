#ifndef _USUARIO_H_
#define _USUARIO_H_

#include <QString>
#include <QDate>

class Usuario{

public:
	Usuario();
	Usuario(int ,QString ,QString,QString,QString,QString,QString);
	Usuario(QString ,QString,QString,QString,QString,QString);
	int id;
	QString name;
	QString email;
	QString phone;
	QString city;
	QString fecha_nacimiento;
	QString contrasenya;

	
	
private:
	


};

#endif
