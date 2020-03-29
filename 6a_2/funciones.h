//
// Created by J on 27-Sep-19.
//

#ifndef INC_6A_2_FUNCIONES_H
#define INC_6A_2_FUNCIONES_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
typedef int tipo_T;
typedef void nada;

tipo_T pedirNumero(string parametro){
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
            matriz[i][j] = rand() % (200 - 100 + 1) + 100;
        }
    }
}
tipo_T MENU(){
    tipo_T respuesta;
    cout << endl;
    cout << "\t" <<"MENU" << endl;
    cout << "\t" << "----" << endl;
    cout << "1. Generar matriz aleatoria" << endl;
    cout << "2. Mostrar solo pares" << endl;
    cout << "3. Mostrar solo impares" << endl;
    cout << "4. Salir" << endl;
    cout << "Elija opcion (1-4):";
    cin >> respuesta;
    return respuesta;
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

nada soloPares(tipo_T **matriz, tipo_T filas, tipo_T columnas){
    cout << endl;
    for(tipo_T i = 0; i < filas; ++i){
        for(tipo_T j = 0; j < columnas; ++j){
            if(matriz[i][j] % 2 == 0)
                cout << matriz[i][j] << "\t";
            else
                cout << 0 << "\t";
        }
        cout << endl;
    }
}

nada soloImpares(tipo_T **matriz, tipo_T filas, tipo_T columnas){
    cout << endl;
    for(tipo_T i = 0; i < filas; ++i){
        for(tipo_T j = 0; j < columnas; ++j){
            if(matriz[i][j] % 2 != 0)
                cout << matriz[i][j] << "\t";
            else
                cout << 0 << "\t";
        }
        cout << endl;
    }
}

#endif //INC_6A_2_FUNCIONES_H
