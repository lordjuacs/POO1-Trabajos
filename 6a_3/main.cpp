#include "funciones.h"

int main() {
    //primera matriz
    cout << "Dimensiones primera matriz" << endl;
    cout << "--------------------------" << endl;
    tipo_T filas1 = pedirNumero("filas");
    tipo_T columnas1 = pedirNumero("columnas");
    cout << "Dimensiones segunda matriz" << endl;
    cout << "--------------------------" << endl;
    tipo_T filas2 = pedirNumero("filas");
    tipo_T columnas2 = pedirNumero("columnas");
    if(columnas1 == filas2) {
        tipo_T **matriz1 = nullptr;
        matriz1 = new tipo_T *[filas1];
        for (tipo_T i = 0; i < filas1; i++) {
            matriz1[i] = new tipo_T[columnas1];
        }
        llenarMatriz(matriz1, filas1, columnas1);
        cout << "Matriz 1:" << endl;
        imprimirNormal(matriz1, filas1, columnas1);

        tipo_T **matriz2 = nullptr;
        matriz2 = new tipo_T *[filas2];
        for (tipo_T i = 0; i < filas2; i++) {
            matriz2[i] = new tipo_T[columnas2];
        }
        llenarMatriz(matriz2, filas2, columnas2);
        cout << "Matriz 2:" << endl;
        imprimirNormal(matriz2, filas2, columnas2);

        tipo_T **nuevo = nullptr;
        nuevo = new tipo_T *[filas1];
        for (tipo_T i = 0; i < filas1; i++) {
            nuevo[i] = new tipo_T[columnas2];
        }
        multiplicacion(matriz1, filas1, matriz2, filas2, columnas2, nuevo);
        cout << "Matriz resultante" << endl;
        imprimirNormal(nuevo, filas1, columnas2);

    }
    else
        cout << "Las matrices no se pueden multiplicar." << endl;
    return 0;
}