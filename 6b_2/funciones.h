//
// Created by J on 03-Oct-19.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#ifndef INC_6B_2_FUNCIONES_H
#define INC_6B_2_FUNCIONES_H
using namespace std;
const int filas = 5, columnas = 5;
const vector <char> letras = {'B', 'I', 'N', 'G', 'O'};


int** generarMatriz(){
    int **matriz = new int*[filas];
    for(int i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
        for(int j = 0; j < columnas; j++){
            matriz[i][j] = 0;
        }
    }
    return matriz;
}

vector <int> numerosUnicos(int MIN, int MAX) {
    vector<int> vec = {0};
    for (int i = 0; i < filas; i++) {
        while (true) {
            int elemento;
            elemento = rand() % (MAX - MIN + 1) + MIN;
            int iguales = 0;
            for(int j : vec){
                if(j == elemento) {
                    iguales++;
                }
            }
            if(!iguales) {
                vec.push_back(elemento);
                break;
            }
        }
    }
    vec.erase(vec.begin());
    return vec;
}

void bingo(int **matriz){
    int MIN = 1, MAX = 15;
    for(int j= 0; j < columnas; j++){
        vector <int> vec = numerosUnicos(MIN, MAX);
        for(int i = 0; i < filas; i++){
            matriz[i][j] = vec[i];
        }
        MAX += 15;
        MIN += 15;
        vec.clear();
    }
    matriz[2][2] = 0;
}

void imprimir(int **matriz, string palabra){
    cout << palabra << endl;
    cout << "------------------------------" << endl;
    cout << "\t" << "B" << "\t" << "I" << "\t" << "N" << "\t" << "G" << "\t" << "O" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "\t" << matriz[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

vector <int> columnaTemp(int **matriz, int columna){
    vector <int> temp;
    for(int i = 0; i < filas; i++){
        temp.push_back(matriz[i][columna]);
    }
    return temp;
}




void comparar(int **matriz1, int **matriz2){
    int aciertos=0;
    for(int j = 0; j < columnas; j++){
        int  porculumna = 0;
        cout << "COLUMNA: " << letras[j] << endl;
        vector <int> temporal = columnaTemp(matriz1, j);
        for(int efe : temporal)
            cout << efe << endl;
        for(int i = 0; i < filas; i++) {
            for (int elemento : temporal) {
                if (matriz2[i][j] == elemento and j!= 2 and i != 2) {
                    porculumna++;
                    aciertos++;
                    cout << "ACIERTO ->" << elemento << endl;
                }
            }
        }
        if(!porculumna)
            cout << "Ningun elemento acierta" << endl;
        cout << endl;
        temporal.clear();
    }
    cout << "Coincidencias:" << aciertos << endl;
}


void borrar(int **&matriz){
    for(int i = 0; i < filas; i++){
        delete [] matriz[i];
    }
    delete [] matriz;
    matriz = nullptr;
}

#endif //INC_6B_2_FUNCIONES_H