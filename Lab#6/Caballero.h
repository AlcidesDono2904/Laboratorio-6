#ifndef CABALLERO_H
#define CABALLERO_H
#include <iostream>
#include "Entidad.h"
class Caballero: public Entidad{
private:
	int HP;
public:
	Caballero();
	~Caballero();
	int getHP();
	void setHP(int HP);
};

#endif
