#include "Espada.h"

Espada::Espada(): Arma(1) {}
Espada::~Espada(){}
bool Espada::puedeAtacar(Enemigo& enemigo) {
	return (enemigo.getIdEnemigo() == 1 or enemigo.getIdEnemigo() == 2);
}