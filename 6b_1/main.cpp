#include "funciones.h"

int main() {
    int **matriz = crearMatriz();
    imprimir(matriz);
    while(true){
        int opcion = MENU();
        if(opcion == 1)
            resanador(matriz);
        else if(opcion == 2)
            sector(matriz);
        else if(opcion == 3)
            especifico(matriz);
        else{
            cout << "Adios" << endl;
            break;
        }

    }
    liberarMatriz(matriz);
    return 0;
}