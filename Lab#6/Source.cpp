#include <iostream>
#include <windows.h>
#include "Juego.h"
int main() {
/*    while (true) {
        // Verificar si la tecla de flecha arriba está siendo presionada
        if (GetAsyncKeyState(VK_UP) & 0x8000) {
            std::cout << "Tecla de flecha arriba presionada." << std::endl;
            // Puedes agregar aquí el código que deseas ejecutar cuando se presiona la tecla de flecha arriba
        }

        // Verificar si la tecla de flecha abajo está siendo presionada
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            std::cout << "Tecla de flecha abajo presionada." << std::endl;
            // Puedes agregar aquí el código que deseas ejecutar cuando se presiona la tecla de flecha abajo
        }

        // Verificar si la tecla de flecha izquierda está siendo presionada
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            std::cout << "Tecla de flecha izquierda presionada." << std::endl;
            // Puedes agregar aquí el código que deseas ejecutar cuando se presiona la tecla de flecha izquierda
        }

        // Verificar si la tecla de flecha derecha está siendo presionada
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            std::cout << "Tecla de flecha derecha presionada." << std::endl;
            // Puedes agregar aquí el código que deseas ejecutar cuando se presiona la tecla de flecha derecha
        }

        // Dormir durante un breve período para evitar un uso excesivo de la CPU
        Sleep(120);
    }*/

    Juego juego(9,9);
    juego.iniciar();
    juego.inicializar();
    std::cout<<juego.dibujar();


    return 0;
}