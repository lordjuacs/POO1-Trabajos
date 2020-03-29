//
// Created by J on 25-Sep-19.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#ifndef INC_4B_4_FUNCIONES_H
#define INC_4B_4_FUNCIONES_H

typedef int entero;
typedef void nada;


nada llenarArreglo(entero *arreglo, entero n){
    for(entero i = 0; i < n; i++){
        arreglo[i] = rand() % 1000;
    }
}

entero contarMultiplos(entero *arreglo, entero n, entero mul){
    entero cont=0;
    for(entero i = 0; i < n; i++) {
       if (arreglo[i] % mul == 0)
           cont++;
    }
    return cont;
    }

nada pasarMultiplos(entero *arreglo, entero n, entero *arreglo5, entero n5, entero mul){
    entero j = 0;
    for(entero i = 0; i < n; i++){
        if(arreglo[i] % mul == 0)
            arreglo5[j++] = arreglo[i];
    }
}

nada imprimir(entero *arreglo, entero n){
    for(entero i = 0; i < n; i++){
        cout << arreglo[i] << " posicion" << i << endl;
    }
}

#endif //INC_4B_4_FUNCIONES_H
