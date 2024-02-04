#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Entidad.h"
#include <random>
class Juego {

public:
	Juego(int t1, int t2);
	~Juego();
	void iniciar();
	void inicializar();
private:
	Entidad*** mapa;
	int tam1;
	int tam2;
};

#endif
