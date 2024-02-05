#ifndef BALLESTA_H
#define BALLESTA_H
#include "Arma.h"
class Ballesta: public Arma {
public:
	Ballesta();
	~Ballesta();
	bool puedeAtacar(int);

};
#endif