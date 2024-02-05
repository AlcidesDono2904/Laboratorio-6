#include "Yesca.h"

Yesca::Yesca(): Arma(2) {}
Yesca::~Yesca(){}
bool Yesca::puedeAtacar(int enemigo) {
	return enemigo == 3;
}