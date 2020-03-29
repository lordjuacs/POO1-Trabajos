#include <iostream>
#include "funciones.h"
using namespace std;

int main() {
    int N = pedirNumero();
    float *notas = new float[N]; // si *notas = nullptr; entonces ir a funciones para ver el cambio
    llenarArreglo(notas, N);
    float promedio = obtenerPromedio(notas, N);
    cout<<"El promedio es:"<<promedio<<endl;
    reportarAprobados(notas, N, promedio);
    float mayor = obtenerMayor(notas, N);
    cout<<"La mayor nota es:"<<mayor<<endl;
    return 0;
}

