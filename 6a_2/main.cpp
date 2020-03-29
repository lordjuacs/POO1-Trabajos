#include "funciones.h"
int main() {
    srand(time(NULL));
    tipo_T columnas = pedirNumero("columnas");
    tipo_T filas = pedirNumero("filas");
    tipo_T **matriz = new tipo_T*[filas];
    for (tipo_T i = 0; i < filas ; i++) {
        matriz[i] = new tipo_T[columnas];
    }
    llenarMatriz(matriz, filas, columnas);
    while(true){
        tipo_T rpta;
        rpta = MENU();
        if (rpta == 4)
            break;
        else{
            if(rpta == 1)
                imprimirNormal(matriz, filas, columnas);
            else if(rpta == 2)
                soloPares(matriz, filas, columnas);
            else if(rpta == 3)
                soloImpares(matriz, filas, columnas);
            else
                cout << "Opcion invalida.";
        }
    }
    return 0;
}