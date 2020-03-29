//
// Created by J on 02-Oct-19.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#ifndef INC_6B_1_FUNCIONES_H
#define INC_6B_1_FUNCIONES_H
using namespace std;
const int filas = 8, columnas = 10, MAX = 399, MIN = 0;


int** crearMatriz(){
    srand(time(NULL));

    int **matriz = new int*[filas];
    for(int i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
        for(int j = 0; j < columnas; j++){
            matriz[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }
    return matriz;
}


void resanador(int **matriz){
    int cont = 0;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(matriz[i][j] >= 100 and matriz[i][j] < 200)
                cont++;
        }
    }
    cout << "Total sectores que necesitan resane:" << cont << endl;
    cout << "Sectores que necesitan resane:";
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(matriz[i][j] >= 100 and matriz[i][j] < 200) {
                cont--;
                cout << " " << char(j + 65) << ":" << matriz[i][j];
                if (cont == 0) {
                    cout << ".";
                }
                else
                    cout << ",";
            }
        }
    }
    cout << endl;
}

void sector(int **matriz) {
    int row, col;
    while (true) {
        char letra;
        cout << "Ingrese letra que identifica al sector (A-J):";
        cin >> letra;
        col = (int(toupper(letra)) - 65);
        if (col >= 0 and col <= 9)
            break;
    }
    while(true){
        cout << "Ingrese fila:";
        cin >> row;
        if(row >= 0 and row <= filas - 1)
            break;
    }
    int contenido = matriz[row][col];
    cout << "Este sector contiene:" << contenido << endl;
    if (contenido >= 0 and contenido < 100)
        cout << "No hay necesidad" << endl;
    else {
        cout << "El trabajo a realizar es:";
        if (contenido >= 100 and contenido < 200)
            cout << " 1 - resanado" << endl;
        else if (contenido >= 200 and contenido < 300)
            cout << " 2 - pintado de lineas" << endl;
        else
            cout << " 3 - arreglo del pasto" << endl;
    }
}

void especifico(int **matriz){
    char letra;
    int col;
    while (true) {
        cout << "Ingrese letra que identifica al sector (A-J):";
        cin >> letra;
        col = int(toupper(letra)) - 65;
        if (col >= 0 and col <= 9)
            break;
    }
    int a=0, b=0,c=0;
    for(int i = 0; i < filas; i++){
        int contenido = matriz[i][col];
        cout << "sector " << letra << i << ": " << contenido;
        if (contenido >= 0 and contenido < 100)
            cout << " No hay necesidad" << endl;
        else {
            if (contenido >= 100 and contenido < 200) {
                a++;
                cout << " 1 - resanado" << endl;
            }
            else if (contenido >= 200 and contenido < 300) {
                b++;
                cout << " 2 - pintado de lineas" << endl;
            }
            else {
                c++;
                cout << " 3 - arreglo del pasto" << endl;
            }
        }
    }
    cout << "Total tipo 1 - resanado:" << a << endl;
    cout << "Total tipo 2 - pintado lineas:" << b << endl;
    cout << "Total tipo 3 - arreglo pasto:" << c << endl;

}

void liberarMatriz(int ** matriz){
    for(int i = 0; i < filas; i++){
        delete [] matriz[i];
    }
    delete [] matriz;
    matriz = nullptr;
}

void imprimir(int **matriz){
    for(int i = 0; i < columnas; i++) {
        cout << char(i + 65) << "\t";
    }
    cout << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int MENU(){
    int respuesta;
    while(true) {
        cout << "\t" << "MENU" << endl;
        cout << "\t" << "----" << endl;
        cout << "1. Reporte total por necesidad de resane" << endl;
        cout << "2. Reporte por sector especifico" << endl;
        cout << "3. Reporte por Letra/Columna" << endl;
        cout << "4. Salir" << endl;
        cin >> respuesta;
        if(respuesta >= 1 and respuesta <= 4)
            return respuesta;
    }

}
#endif //INC_6B_1_FUNCIONES_H
