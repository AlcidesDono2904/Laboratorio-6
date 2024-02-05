#ifndef ARMA_H
#define ARMA_H
#include "Enemigo.h"

class Arma: public Entidad {
private:
	int tipoDano;
public:
	Arma(int tipoDano);
	~Arma();
	int getTipoDano();
	void setTipoDano(int tipoDano);
	virtual bool puedeAtacar(Enemigo& enemigo)=0;
};
#endif