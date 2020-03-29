#include "funciones.h"

int main() {
    srand(time(NULL));
    //Madre:
    int **principal = generarMatriz();
    bingo(principal);
    imprimir(principal, "CARTILLA OFICIAL");
    //Jugador:
    int **jugador1 = generarMatriz();
    bingo(jugador1);
    imprimir(jugador1, "CARTILLA JUGADOR");

    comparar(principal, jugador1);
    borrar(principal);
    borrar(jugador1);
    return 0;
}