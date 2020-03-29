//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_FORMA_H
#define CLASES_FORMAS_FORMA_H

#include "tipos.h"
#include "Lienzo.h"
#include "Punto.h"
class Forma {
public:
    virtual TipoNum perimetro() = 0;
    virtual TipoNum area() = 0;
    virtual void dibujar(Lienzo &lienzo) = 0;
    virtual void agregarPunto(Punto *punto) = 0;

//public:
    //Forma();
    //virtual ~Forma();
};




#endif //CLASES_FORMAS_FORMA_H
