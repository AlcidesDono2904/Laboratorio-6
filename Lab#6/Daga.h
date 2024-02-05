#ifndef DAGA_H
#define DAGA_H
#include "Arma.h"
class Daga : public Arma {
public:
	Daga();
	~Daga();
	bool puedeAtacar(Enemigo& enemigo);
};
#endif