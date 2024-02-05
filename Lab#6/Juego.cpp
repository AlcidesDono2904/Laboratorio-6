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

void Juego::iniciar() {


	for (int i = 0; i < tam1; i++) {
		for (int j = 0; j < tam2; j++) {

			switch (i) {
			case 0:
				mapa[i][j] = new Tentaculos;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/
				break;
			case 1:
				if (j < 5) {
					mapa[i][j] = new Tentaculos;
					/*mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);*/
				}
				else
					mapa[i][j] = new Ogro;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/
				break;
			case 2:
				if (j < 8) {
					mapa[i][j] = new Ogro;
					/*mapa[i][j]->setX(i);
					mapa[i][j]->setY(j)*/;
				}
				else
					mapa[i][j] = new Gargola;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/
				break;
			case 3:
				mapa[i][j] = new Gargola;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/

			case 4:
				if (j < 7) {
					mapa[i][j] = new Espada;
					/*mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);*/
				}
				else {

					mapa[i][j] = new Ballesta;
					/*mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);*/
				}
				break;
			case 5:
				if (j < 4) {
					mapa[i][j] = new Ballesta;
					/*mapa[i][j]->setX(i);
					mapa[i][j]->setY(j);*/
				}
				else
					mapa[i][j] = new Daga;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/
				break;
			case 6:
				mapa[i][j] = new Yesca;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/
				break;
			case 7:
				if (j == 0) {
					mapa[i][j] = new Yesca;
					/*apa[i][j]->setX(i);
					mapa[i][j]->setY(j);*/
				}
				else
					if (j > 0 && j < 7) {
						mapa[i][j] = new PoderosasHierbas;
						/*mapa[i][j]->setX(i);
						mapa[i][j]->setY(j);*/
					}
					else
						if (j == 7) {
							mapa[i][j] = new Cofre;
							/*mapa[i][j]->setX(i);
							mapa[i][j]->setY(j);*/
						}
						else
							mapa[i][j] = new Caballero;
				/*mapa[i][j]->setX(i);
				mapa[i][j]->setY(j);*/
				break;

			default:mapa[i][j] = nullptr;

				break;
			}
		}
	}
}

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
Juego::~Juego() {
	for (int i = 0; i < tam1; i++) {
		delete[] mapa[i];
	}
	delete[] mapa;
	mapa = nullptr;
}

