//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_CIRCULO_H
#define CLASES_FORMAS_CIRCULO_H

#include "Forma.h"
#include "Punto.h"

class Circulo: public Forma {
private:
    Punto* centro;
    TipoNum radio;
public:
    Circulo(){
        centro = new Punto;
        radio = 1;
    }
    virtual ~Circulo(){
        delete centro;
    }
    void setRadio(TipoNum radio){
        this->radio = radio;
    }
    void setCentro(Punto* centro){
        this->centro = centro;
    }

    TipoNum perimetro(){
        return (2 * pi * radio);
    }
    TipoNum area(){
        return (pi * pow(radio, 2));
    }

};


#endif //CLASES_FORMAS_CIRCULO_H
