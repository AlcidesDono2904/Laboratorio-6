#include "Ballesta.h"

Ballesta::Ballesta(): Arma(0) {}
Ballesta::~Ballesta(){}
bool Ballesta::puedeAtacar(Enemigo& enemigo) {
	return enemigo.getIdEnemigo() == 0;
}