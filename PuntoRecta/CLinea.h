//
// Created by J on 23-Oct-19.
//

#ifndef PUNTORECTA_CLINEA_H
#define PUNTORECTA_CLINEA_H

#include "tipos.h"
class CLinea {
private:
    entero a, b, c;
public:
    CLinea();
    CLinea(entero a, entero b, entero c);
    entero getA();
    entero getB();
    entero getC();
};


#endif //PUNTORECTA_CLINEA_H
