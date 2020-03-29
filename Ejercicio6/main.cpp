#include <iostream>
#include "funciones.h"
using namespace std;
int main() {
    int nota;
    filtrarNota(nota);
    cout << "Mostrar Barra de Progreso:" << endl;
    float porcentaje = nota / 20.0;
    string barra = barraDeProgreso(porcentaje);
    cout << barra << endl;
    return 0;
}