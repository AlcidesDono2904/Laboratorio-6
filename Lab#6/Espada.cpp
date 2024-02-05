#include "Espada.h"

Espada::Espada(): Arma(1) {}
Espada::~Espada(){}
bool Espada::puedeAtacar(int enemigo) {
	return (enemigo == 1 or enemigo == 2);
}