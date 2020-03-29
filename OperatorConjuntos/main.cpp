#include "Conjunto.h"
int main() {
    Conjunto A, B, C;
    A<<5;
    A<<10;
    A<<5;
    A<<2;
    A.imprimir(cout);
    B << 2 << 10 << 8 << 6;
    B.imprimir(cout);
    C = (A + B);
    C.imprimir(cout);
    return 0;
}