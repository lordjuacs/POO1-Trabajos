//
// Created by J on 06-Sep-19.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef EJERCICIO6_FUNCIONES_H
#define EJERCICIO6_FUNCIONES_H

void filtrarNota(int &nota){
    do{
        cout << "Ingrese nota: ";
        cin >> nota;
    }while(nota < 0 || nota > 20);
}

string barraDeProgreso(float porcentaje){
    string barra="0%";
    for(int i = 0; i < 100; i+=2){
        if(i/100.0 <= porcentaje)
            barra += "|";
        else
            barra += " ";
    }
    barra += to_string(int (porcentaje * 100)) + "/100%";
    return barra;
}

#endif //EJERCICIO6_FUNCIONES_H
