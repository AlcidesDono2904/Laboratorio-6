#include "Arma.h"

Arma::Arma(int tipo): Entidad(1), tipoDano(tipo) {}
Arma::~Arma(){}
int Arma::getTipoDano() { return tipoDano; }
void Arma::setTipoDano(int tipo) { tipoDano = tipo; }

int Arma::getIdEnemigo() { return -1; }