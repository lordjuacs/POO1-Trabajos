//
// Created by J on 25-Oct-19.
//

#ifndef INC_9B_3_FUNCIONES_H
#define INC_9B_3_FUNCIONES_H

#include "CAlumno.h"

int pedirNumero(){
    int numero;
    do{
        cout << "Ingrese N:";
        cin >> numero;
    }while(numero < 0);
    return numero;
}
template <typename T> T buscarMayor(T* array, entero n){
    T mayor = array[0];
    for(int i = 1; i < n; i++){
        if(array[i].esMayorDe(mayor))
            mayor = array[i];
    }
    return mayor;
}
#endif //INC_9B_3_FUNCIONES_H
