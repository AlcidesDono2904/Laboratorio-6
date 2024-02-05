#pragma once
#include "Enemigo.h"
class Gargola :public Enemigo{
	public:
	Gargola();
	~Gargola();
	void atacar(Caballero& caba) {
		caba.setHP(caba.getHP() - getDano());
	}
};

