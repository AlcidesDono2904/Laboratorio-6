#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Entidad.h"
#include <random>
#include <sstream>
#include "Ballesta.h"
#include "Espada.h"
#include "Daga.h"
#include "Yesca.h"
#include "Tentaculos.h"
#include "Ogro.h"
#include "Gargola.h"
#include "Cofre.h"
#include "PoderosasHierbas.h"
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
