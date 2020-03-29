#include "Triangulo.h"

int main() {
    Forma* forma = new Triangulo;
    forma->agregarPunto(new Punto(2, 1));
    forma->agregarPunto(new Punto(1, 1));
    forma->agregarPunto(new Punto(0, 1));

    cout << forma->perimetro() << endl;
    return 0;
}