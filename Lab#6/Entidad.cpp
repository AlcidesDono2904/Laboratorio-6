#include "Entidad.h"

Entidad::Entidad(int id_dato):id(id_dato) {}
Entidad::~Entidad() {}
int Entidad::getId() { return id; }
void Entidad::setId(int id_dato) { id = id_dato; }