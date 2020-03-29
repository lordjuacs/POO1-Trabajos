
#ifndef TAREAGANDALF_ABARROTE_H
#define TAREAGANDALF_ABARROTE_H

#include "Alimento.h"

class Abarrote : public Alimento {
private:
public:
    Abarrote(TipoCadena _nombre) : Alimento(_nombre)
    {
        puntos += 2;
    }
    ~Abarrote(){}
};


#endif //TAREAGANDALF_ABARROTE_H
