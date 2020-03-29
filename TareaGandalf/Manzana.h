
#ifndef TAREAGANDALF_MANZANA_H
#define TAREAGANDALF_MANZANA_H

#include "Alimento.h"

class Manzana : public Alimento {
public:
    Manzana(TipoCadena _nombre) : Alimento(_nombre)
    {
        puntos += 1;
    }
    ~Manzana(){}
};


#endif //TAREAGANDALF_MANZANA_H
