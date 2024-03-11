#include "jugador.h"
#include <iostream>

using namespace std;

int main() {
    
    jugador jugador;

    while (true) {
        int opcionJugador = jugador.elegir();
        jugador.evaluar(opcionJugador);

        char JugarOtraVez;
        cout << "jugar otra vez 1 si 2 no: ";
        cin >> JugarOtraVez;

        if (JugarOtraVez != '1') {
            break;
        }
    }

    cout << "Puntaje: " << jugador.getpuntaje() << endl;

    return 0;
}