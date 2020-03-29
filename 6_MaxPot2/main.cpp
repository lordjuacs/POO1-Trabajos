#include <iostream>
#include <cmath>
using namespace std;

void funcion_maximo_pot2(int n){
    int cambia=0, i=0;
    while(true){
        cambia = pow(2, i);
        if(cambia > n) {
            cout << "Resultado:" << pow(2, i - 1);
            break;
        }
        i++;
    }
}

int main() {
    int numero;
    cout << "Ingrese un numero N:";
    cin >> numero;
    if(numero > 0)
        funcion_maximo_pot2(numero);
    return 0;
}