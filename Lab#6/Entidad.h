 #ifndef ENTIDAD_H
#define ENTIDAD_H
#include <iostream>
//Enemigos 0
//Armas 1
//Caballero 2
//Hierbas 3
//Cofre 4
class Entidad{
private:
	int id;
public:
	Entidad(int);
	~Entidad();
	int getId();
	void setId(int);
	virtual int getTipoDano() = 0;
	virtual int getIdEnemigo() = 0;

};

#endif