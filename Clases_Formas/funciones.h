//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_FUNCIONES_H
#define CLASES_FORMAS_FUNCIONES_H

#include "tipos.h"
#include "Punto.h"
TipoNum distanciaPuntos(Punto* punto1, Punto* punto2){
    return sqrt(pow(punto1->x - punto2->x, 2) + pow(punto1->y - punto2->y, 2));
}

TipoNum formulaHeron(Punto* p1, Punto* p2, Punto* p3){
    TipoNum a, b, c;
    a = distanciaPuntos(p1, p2);
    b = distanciaPuntos(p2, p3);
    c = distanciaPuntos(p1, p3);
    TipoNum s = (a + b + c)/2;
    TipoNum res = 0;
    res = sqrt(s * (s - a) * (s - b) * (s - c));
    return res;
}
#endif //CLASES_FORMAS_FUNCIONES_H
