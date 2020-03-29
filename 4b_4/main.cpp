#include "funciones.h"
int main() {
    srand(time(NULL));
    entero n = 10;
    entero *arreglo = nullptr;
    arreglo = new entero[n];

    llenarArreglo(arreglo, n);
    imprimir(arreglo, n);
    cout << "F" << endl;

    entero n5 = contarMultiplos(arreglo, n , 5);
    entero *arreglo5 = nullptr;
    arreglo5 = new entero[n5];
    pasarMultiplos(arreglo, n, arreglo5, n5, 5);
    for(int i = 0; i < n; i++) {
        if (arreglo[i] % 5 == 0)
            cout << arreglo[i] <<endl;

    }
    cout << "F" << endl;
    imprimir(arreglo5, n5);
    return 0;
}