#include "CTriangulo.h"

int main()
{
    CTriangulo t1(1.5, 2.8, 3.5);
    t1.mostrarDatos();
    vector <decimal> lados;
    lados.push_back(2.5);
    lados.push_back(3.2);
    lados.push_back(1.5);
    t1.setLados(lados);

    CTriangulo* pt1 = &t1;
    pt1->mostrarDatos();

    return 0;
}