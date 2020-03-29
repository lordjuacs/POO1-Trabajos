//
// Created by J on 26-Sep-19.
//

#ifndef INC_4B_5_FUNCIONES_H
#define INC_4B_5_FUNCIONES_H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef int tipo_T;
typedef void nada;

nada fillArray(tipo_T *array, tipo_T size_array){
    for(tipo_T i = 0; i < size_array; i++){
        array[i] = rand() % 100;
    }
}

nada printArray(tipo_T *array, tipo_T size_array){
    for(tipo_T i = 0; i < size_array; i++){
        cout << array[i] << endl;
    }
}

tipo_T timesInArray(tipo_T *array, tipo_T size_array, tipo_T find){
    tipo_T times = 0;
    for(tipo_T i = 0; i < size_array; i++){
        if(array[i] == find)
            times++;
    }
    return times;
}

nada afterEverything(tipo_T *array, tipo_T size_array, tipo_T buscar, tipo_T times){
    if(times == 0)
        cout << "El dato no se encuentra en el arreglo" << endl;
    else{
        tipo_T j = 0;
        tipo_T *nuevo = nullptr;
        nuevo = new tipo_T[times];
        for(tipo_T i = 0; i < size_array; i++){
            if(array[i] == buscar)
                nuevo[j++] = i;
        }
        cout << "Este es el nuevo array:" << endl;
        for(tipo_T i = 0; i < times; i++){
            cout << nuevo[i] << endl;
        }
    }
}
#endif //INC_4B_5_FUNCIONES_H
