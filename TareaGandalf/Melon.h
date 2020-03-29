

#ifndef TAREAGANDALF_MELON_H
#define TAREAGANDALF_MELON_H

#include "Alimento.h"

class Melon : public Alimento {
public:
    Melon(TipoCadena _nombre) : Alimento(_nombre)
    {
        puntos += 1;
    }
    ~Melon(){}
};



#endif //TAREAGANDALF_MELON_H
