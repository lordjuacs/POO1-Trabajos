//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_PUNTO_H
#define CLASES_FORMAS_PUNTO_H

#include "tipos.h"

class Punto {
public:
    TipoNum x;
    TipoNum  y;
public:
    Punto(){
        this->x = 0;
        this->y = 0;
    }
    /*Punto(Punto* original, TipoNum cambiox, TipoNum cambioy){
        this->x = original->x + cambiox;
        this->y = original->y + cambioy;
    }*/
    Punto(TipoNum x, TipoNum y){
        this->x = x;
        this->y = y;
    }
    ~Punto();

};


#endif //CLASES_FORMAS_PUNTO_H
