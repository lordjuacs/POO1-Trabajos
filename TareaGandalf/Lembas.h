
#ifndef TAREAGANDALF_LEMBAS_H
#define TAREAGANDALF_LEMBAS_H

#include "Alimento.h"

class Lembas : public Alimento {
public:
    Lembas(TipoCadena _nombre) :
        Alimento(_nombre) {
        puntos += 3;
    }
    ~Lembas() {}
};

#endif //TAREAGANDALF_LEMBAS_H
