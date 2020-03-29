
#ifndef TAREAGANDALF_HONGOS_H
#define TAREAGANDALF_HONGOS_H

#include "Alimento.h"

class Hongos : public Alimento {
public:
    Hongos(TipoCadena _nombre) : Alimento(_nombre)
    {
        puntos -= 10;
    }
    ~Hongos(){}
};


#endif //TAREAGANDALF_HONGOS_H
