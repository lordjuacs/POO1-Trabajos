#include "Cperro.h"

int main() {

    Cperro perro1;
    perro1.setNombre("");
    perro1.setTalla(-5);
    perro1.setPeso(50.5);
    perro1.mostrar();
    perro1.ladrar();
    cout << "-----" << endl;
    Cperro perro2;
    perro2.setNombre("Firulais");
    perro2.setTalla(8.5);
    perro2.setPeso(20.5);
    perro2.mostrar();
    perro2.ladrar();
    return 0;
}