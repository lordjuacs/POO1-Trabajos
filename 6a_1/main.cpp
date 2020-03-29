#include "funciones.h"

int main() {
    srand(time(NULL));
    tipo_T filas = pedirNumero();
    tipo_T **M = nullptr;
    M = new tipo_T*[filas];
    for(tipo_T i = 0; i < filas; i++){
        M[i] = new tipo_T[filas];
    }

    llenarDatos(M, filas, filas);
    cout << "Matriz original:" << endl;
    imprimir(M, filas, filas);
    rotarFilaMatriz(M, filas, filas);
    cout << "Matriz rotada (filas):" << endl;
    imprimir(M, filas, filas);
    rotarColumnaMatriz(M, filas, filas);
    cout << "Matriz rotada (columnas):" << endl;
    imprimir(M, filas, filas);
    return 0;
}