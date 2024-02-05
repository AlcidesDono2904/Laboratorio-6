#ifndef PODEROSASHIERBAS_H
#define PODEROSASHIERBAS_H
#include "Entidad.h"
class PoderosasHierbas : public Entidad {
private:
	int cantidadCuracion;
public:
	PoderosasHierbas(int cantidadCuracion);\
	PoderosasHierbas();
	~PoderosasHierbas();

	int getCantidadCuracion()const;

	//las virtuales
	virtual int getId() const;
	virtual void setId(int id_dato);
	virtual bool puedeAtacar();
	int getTipoDano();
	int getIdEnemigo();
};
#endif
