
#ifndef TAREAGANDALF_HONEYCAKE_H
#define TAREAGANDALF_HONEYCAKE_H

#include "Alimento.h"

class HoneyCake : public Alimento {
private:
public:
    HoneyCake(TipoCadena _nombre) : Alimento(_nombre)
    {
        puntos += 5;
    }
    ~HoneyCake(){}
};


#endif //TAREAGANDALF_HONEYCAKE_H
