#include "PoderosasHierbas.h"

PoderosasHierbas::PoderosasHierbas(int cantidadCuracion) : Entidad(3), cantidadCuracion(cantidadCuracion) {}


PoderosasHierbas::~PoderosasHierbas(){}


int PoderosasHierbas::getCantidadCuracion() const
{
	return cantidadCuracion;
}

int PoderosasHierbas::getId() const
{
	return -1;
}

void PoderosasHierbas::setId(int id_dato)
{
}

bool PoderosasHierbas::puedeAtacar()
{
	return false;
}

