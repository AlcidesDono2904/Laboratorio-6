#include "Caballero.h"'



Caballero::Caballero():Entidad(2), HP(100) {}


Caballero::~Caballero()
{
}

int Caballero::getHP()
{
	return HP;
}

void Caballero::setHP(int _HP)
{
	HP = _HP;
}

void Caballero::usarArma()
{
	if (inventarioArma != nullptr) {

		int danio = inventarioArma->getTipoDano();

		std::cout << "El caballero ataca, danio " << danio << std::endl;

		//se elimina el arma usada

		delete inventarioArma;
		inventarioArma = nullptr;
	}
	else {
		std::cout << "No hay arma" << std::endl;
	}
}

void Caballero::agregarArma(Arma* nuevaArma)
{
	//para quitar si hay un arma equipada
	if (inventarioArma != nullptr) {
		delete inventarioArma;
	}
	inventarioArma = nuevaArma;
}

