#include "Yesca.h"

Yesca::Yesca(): Arma(2) {}
Yesca::~Yesca(){}
bool Yesca::puedeAtacar(Enemigo& enemigo) {
	return enemigo.getIdEnemigo() == 3;
}