//
// Created by J on 20-Sep-19.
//

#ifndef TAXI_DINAMICO_FUNCIONES_H
#define TAXI_DINAMICO_FUNCIONES_H

#include <iostream>
using namespace std;

int pedirNumero(){
    int k=0;
    do{
        cout << "K:";
        cin >> k;
    }while(k>20);
    return k;
}

#endif //TAXI_DINAMICO_FUNCIONES_H
