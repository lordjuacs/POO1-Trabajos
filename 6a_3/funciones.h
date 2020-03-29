//
// Created by J on 27-Sep-19.
//

#ifndef INC_6A_3_FUNCIONES_H
#define INC_6A_3_FUNCIONES_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
typedef int tipo_T;
typedef void nada;

tipo_T pedirNumero(const string& parametro){
    tipo_T respuesta;
    while(true){
        cout << "Ingrese cantidad de " << parametro << ":";
        cin >> respuesta;
        if(respuesta >= 2)
            break;
    }

    return respuesta;
}
nada llenarMatriz(tipo_T **matriz, tipo_T filas,  tipo_T columnas){
    for(tipo_T i = 0; i < filas; i++){
        for(tipo_T j = 0; j < columnas; j++){
            matriz[i][j] = rand() % 20;
        }
    }
}
nada imprimirNormal(tipo_T **matriz, tipo_T filas, tipo_T columnas){
    cout << endl;
    for(tipo_T i = 0; i < filas; i++){
        for(tipo_T j = 0; j < columnas; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
nada multiplicacion(tipo_T **matriz1, tipo_T filas1, tipo_T **matriz2, tipo_T filas2, tipo_T columnas2, tipo_T **nuevo){
    for (tipo_T i = 0; i < filas1; i++){
        for (tipo_T j = 0; j < columnas2 ; j++) {
            nuevo[i][j] = 0;
            for (tipo_T k = 0; k < filas2; k++){
                nuevo[i][j] += (matriz1[i][k] * matriz2[k][j]);
            }
        }
    }
}

#endif //INC_6A_3_FUNCIONES_H
//2 0 1     1 0 1
//3 0 0     1 2 1
//5 1 1     1 1 0