//
// Created by J on 23-Oct-19.
//

#ifndef PUNTORECTA_CPUNTO_H
#define PUNTORECTA_CPUNTO_H

#include "tipos.h"
#include "CLinea.h"

class CPunto {
private:
    entero x, y;
public:
    CPunto();
    CPunto(entero x, entero y);
    entero distancia(CLinea * linea);
};


#endif //PUNTORECTA_CPUNTO_H
