#ifndef YESCA_H
#define YESCA_H
#include "Arma.h"
class Yesca : public Arma {
public:
	Yesca();
	~Yesca();
	bool puedeAtacar(int enemigo);
};

#endif
