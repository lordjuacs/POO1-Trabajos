//
// Created by J on 27-Sep-19.
//

#ifndef INC_6A_1_FUNCIONES_H
#define INC_6A_1_FUNCIONES_H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef int tipo_T;
typedef void nada;

tipo_T pedirNumero(){
    while(true){
        tipo_T entrada = 0;
        cout << "Ingrese cantidad:";
        cin >> entrada;
        if(entrada > 0)
            return entrada;
    }
}
nada llenarDatos(tipo_T **matriz, tipo_T filas, tipo_T columnas){
    for(tipo_T i = 0; i < filas; i++){
        for(tipo_T j = 0; j < columnas; j++){
            matriz[i][j] = rand() % 100;
        }
    }
}

nada imprimir(tipo_T **matriz, tipo_T filas, tipo_T columnas){
    for(tipo_T i = 0; i < filas; i++){
        for(tipo_T j = 0; j < columnas; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

nada rotarFilaMatriz(tipo_T **matriz, tipo_T filas, tipo_T columnas) {
    //1. salvar la ultima fila
    tipo_T *temp = new tipo_T[columnas];
    for (tipo_T j = 0; j < columnas; j++) {
        temp[j] = matriz[filas - 1][j];
    }
    //2. rotar filas
    for (tipo_T i = filas - 1; i >= 1; i--) {
        for(tipo_T j = 0; j < columnas; j++){
            matriz[i][j] = matriz[i - 1][j];
        }
    }
    //3. asignar a la primera fila temp
    for(tipo_T j = 0; j < columnas; j++){
        matriz[0][j] = temp[j];
    }
}

nada rotarColumnaMatriz(tipo_T **matriz, tipo_T filas, tipo_T columnas) {
    //1. salvar la ultima columna
    tipo_T *temp = new tipo_T[filas];
    for (tipo_T i = 0; i < columnas; i++) {
        temp[i] = matriz[i][columnas - 1];
    }
    //2. rotar columnas
    for (tipo_T j = columnas - 1; j >= 1; j--) {
        for(tipo_T i = 0; i < filas; i++){
            matriz[i][j] = matriz[i][j - 1];
        }
    }
    //3. asignar a la primera fila temp
    for(tipo_T i = 0; i < filas; i++){
        matriz[i][0] = temp[i];
    }
}
#endif //INC_6A_1_FUNCIONES_H
