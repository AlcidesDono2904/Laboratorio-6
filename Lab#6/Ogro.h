#ifndef OGRO_H
#define OGRO_H
#include "Enemigo.h"
class Ogro: public Enemigo {
public:
	Ogro();
	~Ogro();
	void atacar(Caballero& caba) {
		caba.setHP(caba.getHP() - getDano());
	}

};
#endif
