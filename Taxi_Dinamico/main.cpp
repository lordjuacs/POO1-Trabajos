#include <iostream>
#include <cmath>
#include "funciones.h"
using namespace std;

/*double distancia(double x, double y, double a, double b){
    return fabs(x - a) + fabs(y - b);
}*/

int main() {
    int k = pedirNumero();
    int *puntosx, *puntosy;
    double suma = 0;
    puntosx = new int[k];
    puntosy = new int[k];
    for(int i = 0; i < k; i++){
        cout << "P" << i + 1 << ":";
        cin >> puntosx[i] >> puntosy[i];
    }
    for(int i = 0; i < k - 1; ++i){
        suma += fabs(puntosx[i] - puntosx[i + 1]) + fabs(puntosy[i] - puntosy[i + 1]);
    }
    cout << "Distancia total:" << suma << endl;
    return 0;
}





/*int *array;
    array = new int[k];
    for(int i = 0; i < k; ++i){
        array[i] = i * 10;
    }
    for(int i = 0; i < k; ++i){
        cout << array[i] << endl;
        cout << *(array + i) << endl;
    }*/
