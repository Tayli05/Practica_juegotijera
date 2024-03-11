#include "jugador.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
jugador::jugador() :puntaje(0) {};


int jugador::getpuntaje()const {
    return puntaje;
};

void jugador::setpuntaje(int puntajeActual) {
    puntaje = puntajeActual;
}
int jugador::elegir() {
    cout << "Elige Piedra:1" << endl;
    cout << "Elige Papel:2" << endl;
    cout << "Elige Tijera:3" << endl;
    cin >> opcion;

    while (opcion > 3 || opcion < 1) {
        cout << "opcion no valida";
        cin >> opcion;
    }

    return opcion;
}
void jugador::evaluar(int jugador2) {
    srand(static_cast<unsigned int>(time(0)));
    random = rand() % 3 + 1;

    cout << "el contrincante elijio: " << random << endl;

    if (random == jugador2) {
        cout << "Empate." << endl;
    }
    else if ((random == 1 && jugador2 == 3) ||
        (random == 2 && jugador2 == 1) ||
        (random == 3 && jugador2 == 2)) {
        cout << "Ganaste" << endl;
        puntaje++;
    }
    else {
        cout << "Perdiste." << endl;
        puntaje++;
    }
}