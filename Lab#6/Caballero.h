#ifndef CABALLERO_H
#define CABALLERO_H
#include <iostream>
#include "Entidad.h"
#include "Arma.h"

class Caballero: public Entidad{

private:
	Arma* inventarioArma;
	int HP;
public:
	Caballero();
	~Caballero();
	int getHP();
	void setHP(int _HP);
	void usarArma();
	void agregarArma(Arma* nuevaArma);
	int getTipoDano();
	int getIdEnemigo();
};

#endif
