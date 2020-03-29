//
// Created by J on 23-Oct-19.
//

#include "CPunto.h"
CPunto::CPunto(entero x, entero y){
    this->x = x;
    this->y = y;
}

entero CPunto:: distancia(CLinea * linea){
    return fabs(((x)*(linea->getA()) + (y)*(linea->getB()) + linea->getC()) / sqrt((pow(linea->getA(), 2) + pow(linea->getB(), 2))));
}

