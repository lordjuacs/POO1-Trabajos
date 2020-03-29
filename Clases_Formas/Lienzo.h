//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_LIENZO_H
#define CLASES_FORMAS_LIENZO_H

#include "tipos.h"

class Lienzo {
public:
    TipoString color;
    TipoNum grosor;
public:
    Lienzo() {
        color = "black";
        grosor = 1;
    }
    Lienzo(TipoString color, TipoNum grosor){
        this->color = color;
        this->grosor = grosor;
    }
    Lienzo(Lienzo &otro){
        this->color = otro.color;
        this->grosor = otro.grosor;
    }

};


#endif //CLASES_FORMAS_LIENZO_H
