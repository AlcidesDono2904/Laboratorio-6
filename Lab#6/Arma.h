#ifndef ARMA_H
#define ARMA_H
#include "Entidad.h"

class Arma: public Entidad {
private:
	int tipoDano;
public:
	Arma(int tipoDano);
	~Arma();
	int getTipoDano();
	void setTipoDano(int tipoDano);
	virtual bool puedeAtacar(int)=0;
	int getIdEnemigo();
};
#endif