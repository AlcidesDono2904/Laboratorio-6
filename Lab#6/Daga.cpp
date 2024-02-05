#include "Daga.h"

Daga::Daga(): Arma(3) {}
Daga::~Daga(){}
bool Daga::puedeAtacar(int enemigo) {
	return enemigo == 1;
}