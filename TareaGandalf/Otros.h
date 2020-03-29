
#ifndef TAREAGANDALF_OTROS_H
#define TAREAGANDALF_OTROS_H

#include "Alimento.h"

class Otros : public Alimento {
public:
    Otros(TipoCadena _nombre) : Alimento(_nombre)
    {
        puntos -= 1;
    }
    ~Otros(){}
};

#endif //TAREAGANDALF_OTROS_H
