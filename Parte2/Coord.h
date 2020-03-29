//
// Created by J on 29-Nov-19.
//

#ifndef PARTE2_COORD_H
#define PARTE2_COORD_H

#include "Tipos.h"
#include "CRobot.h"

class Coord
{
public:
    Coord(TipoEntero x, TipoEntero y, TipoEntero idx)
    {
        this->x = x;
        this->y = y;
        this->idx = idx;
    }
    TipoEntero x;
    TipoEntero y;
    TipoEntero idx;
};

#endif //PARTE2_COORD_H
