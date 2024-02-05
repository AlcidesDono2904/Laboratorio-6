#include "Daga.h"

Daga::Daga(): Arma(3) {}
Daga::~Daga(){}
bool Daga::puedeAtacar(Enemigo& enemigo) {
	return enemigo.getIdEnemigo() == 1;
}