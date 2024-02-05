#include "Ballesta.h"

Ballesta::Ballesta(): Arma(0) {}
Ballesta::~Ballesta(){}
bool Ballesta::puedeAtacar(int enemigo) {
	return enemigo == 0;
}