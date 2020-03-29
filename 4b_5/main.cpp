#include <iostream>
#include "funciones.h"
int main() {
    srand(time(NULL));

    tipo_T tamano;
    cout << "Ingrese el tamano del array:";
    cin >> tamano;
    tipo_T *arreglo = nullptr;
    arreglo = new tipo_T[tamano];
    fillArray(arreglo, tamano);
    printArray(arreglo, tamano);

    tipo_T buscar;
    cout << "Ingrese el numero a buscar:";
    cin >> buscar;
    tipo_T veces = timesInArray(arreglo, tamano, buscar);
    afterEverything(arreglo, tamano, buscar, veces);


    return 0;
}