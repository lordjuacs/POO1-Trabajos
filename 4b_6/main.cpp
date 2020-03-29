#include "funciones.h"
#include <algorithm>

int main() {
    srand(time(NULL));
    tipo_T tamano;
    cout << "Ingrese tamano del array:";
    cin >> tamano;
    tipo_T *arreglo = nullptr;
    arreglo = new tipo_T[tamano];
    fillArray(arreglo, tamano);
    Quicksort(arreglo, 0, tamano - 1);
    for(int i=0; i < tamano; i++)
        cout << arreglo[i] << endl;
    MENU(arreglo, tamano);
    return 0;
}