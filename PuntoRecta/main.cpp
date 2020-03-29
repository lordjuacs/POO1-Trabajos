#include "CLinea.h"
#include "CPunto.h"

int main() {
    CLinea * linea = new CLinea(3, 4, 15);
    CPunto * punto = new CPunto(0, 0);

    cout << "La distancia es: " << punto->distancia(linea); // rpta = 3
    delete linea;
    delete punto;
    return 0;
}