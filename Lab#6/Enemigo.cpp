#include "Enemigo.h"

Enemigo::Enemigo(int id, int dano_dato):Entidad(0), idEnemigo(id), dano(dano_dato) {}
Enemigo::~Enemigo() {}
int Enemigo::getIdEnemigo() { return idEnemigo; }
int Enemigo::getDano() { return dano; }
void Enemigo::setIdEnemigo(int id) { idEnemigo = id; }
void Enemigo::setDano(int dano_dato) { dano = dano_dato; }
void Enemigo::atacar(Caballero& caba) {
	caba.setHP(caba.getHP() - dano);
}
int Enemigo::getTipoDano() { return -1; }