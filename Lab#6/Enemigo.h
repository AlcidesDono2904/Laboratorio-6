#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "Caballero.h"
#include "Entidad.h"
//gargola 0
//ogro 1
//tentaculo 2
class Enemigo: public Entidad {
protected:
	int idEnemigo;
	int dano;
public:
	Enemigo(int idEnemigo, int dano);
	~Enemigo();	
	int getIdEnemigo();
	int getDano();
	void setIdEnemigo(int idEnemigo);
	void setDano(int dano);
	void atacar(Caballero&);
};
#endif
