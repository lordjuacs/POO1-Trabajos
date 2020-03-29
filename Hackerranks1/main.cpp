#include <iostream>
#include "funciones.h"
using namespace std;

int main(){
    int altura, cubos;
    // int totalCubos = 0;
    // totalCubosxAltura(totalCubos, 4)
    cout << "Ingrese cantidad de cubos:";
    cin >> cubos;
    altura = calcularAltura(cubos);
    imprimirCubos(altura);
    return 0;

}