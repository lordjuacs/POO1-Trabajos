//
// Created by J on 20-Sep-19.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#ifndef INC_4B_3_FUNCIONES_H
#define INC_4B_3_FUNCIONES_H

int pedirNumero(){
    while(true){
        int numero;
        cin >> numero;
        if(numero > 15)
            break;
    }
}

void llenarArreglo(float *notas, int N){ // se comporta igual i es q llenarArreglo(float * &notas, int N) se pasa el puntero por referencia
    // notas = new float[N].... a pesar d q el espacio apunta dentro de esta funcion, como es por referencia se guarda POR SIEMPRe
    // si no se manda por referencia, entonces antes debe guardarse el espacio, para que como aca se pasa por valor,
    // necesariamente al ser un puntero, apunta al mismo espacio.
    for(int i = 0; i < N; i++){
        float valor;
        cout << "Ingrese nota" << i + 1 << ":";
        cin >> valor; //se puede usar cin >> notas[i];
        notas[i] = valor;
    }
}

float obtenerPromedio(float *notas, int N){
    float prom = 0;
    for(int i = 0; i < N; i++){
        prom+= notas[i];
    }
    return prom / N;
}

void reportarAprobados(float *notas, int N, float promedio){
    cout << "Los aprobados se encuentran en las posiciones:" << endl;
    for(int i = 0; i < N; i++){
        if(notas[i] >= promedio)
            cout << i  << "Su nota fue:" << notas[i];
    }
}
float obtenerMayor(float *notas, int N){
    float mayor = notas[0];
    for(int i = 1; i < N; i++){
        if(notas[i] > mayor) // se puede poner como: (notas[i] > mayor)? notas[i] : mayor;
            mayor = notas[i];
    }
    return mayor;
}
#endif //INC_4B_3_FUNCIONES_H
