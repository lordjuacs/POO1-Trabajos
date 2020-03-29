//
// Created by J on 06-Sep-19.
//

#include <iostream>
using namespace std;

#ifndef HACKERRANKS1_FUNCIONES_H
#define HACKERRANKS1_FUNCIONES_H



void totalCubosxAltura(int &totalCubos, int altura){
    int bloquesPiso = 0;
    totalCubos = 0;
    for(int i = 1; i <= altura; i++){
        bloquesPiso += i;
        totalCubos += bloquesPiso;
        cout << "bloques en piso: " << i << bloquesPiso << endl;
    }
    cout << totalCubos;
}
int calcularAltura(int n){
    int altura=0, bloquesPiso=0;
        for (int piso = 1, totalCubos=0; totalCubos <n ; piso++) {
            bloquesPiso += piso;
            totalCubos += bloquesPiso;
            if(totalCubos > n)
                break;
            altura++;
        }
        return altura;
    }

void imprimirCubos(int n){
    int bloquesPiso =0;
    for(int i = 1; i <= n; i++){
        bloquesPiso += i;
        for(int j=1; j <= bloquesPiso; j++)
            cout << "+ ";
        cout << endl;
    }
}


#endif //HACKERRANKS1_FUNCIONES_H
