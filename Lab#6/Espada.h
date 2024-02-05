#ifndef ESPADA_H
#define ESPADA_H
#include "Arma.h"
class Espada : public Arma {
public:
	Espada();
	~Espada();
	bool puedeAtacar(int);
};
#endif
