#include "Juego.h"


Juego::Juego(int t1, int t2) {

	tam1 = t1;
	tam2 = t2;

	mapa = new Entidad * *[tam1];

	for (int i = 0; i < tam1; i++) {

		mapa[i] = new Entidad * [tam2];

		for (int j = 0; j < tam2; j++) {
			mapa[i][j] = nullptr;
		}

	}
}
//void Juego::iniciar() {

	/*for (int i = 0; i < tam1; i++) {
		for (int j = 0; j < tam2; j++) {
			if (i == 0) {
				if (j == 0) {
					mapa[i][j] = new Caballero;
					mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);
				}
				else {
					mapa[i][j] = new Enemigo(0, 1);
					mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);
				}
			}
			else
				if (i < 4) {
					mapa[i][j] = new Entidad(0);
					mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);
				}
				else
					if (i >= 4 && i < 7) {
						if (i == 4 && j == 0) {
							mapa[i][j] = new Entidad(0);
							mapa[i][j]->setX(i);
							mapa[i][j]->setY(j);
						}
						else
							mapa[i][j] = new Entidad(1);
						mapa[i][j]->setX(i);
						mapa[i][j]->setY(j);
					}
					else
						if (i == 7) {
							if (j < 1) {
								mapa[i][j] = new Entidad(1);
								mapa[i][j]->setX(i);
								mapa[i][j]->setY(j);
							}
							if (j >= 1 && j < 7) {
								mapa[i][j] = new Entidad(3);
								mapa[i][j]->setX(i);
								mapa[i][j]->setY(j);
							}if (j == 7) {
								mapa[i][j] = new Entidad(4);
								mapa[i][j]->setX(i);
								mapa[i][j]->setY(j);
							}
						}
						else mapa[i][j] = nullptr;

		}
	}

}*/

void Juego::inicializar() {

	Entidad* aux;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<int> distribution1(0, 9);
			int random = distribution1(gen);

			aux = mapa[j][random];

			mapa[j][random] = mapa[random][j];

			mapa[random][j] = aux;

		}
	}
}
Juego::~Juego() {

	for (int i = 0; i < 9; i++) {

		delete[] mapa[i];

	}
	delete[] mapa;
	mapa = nullptr;

}