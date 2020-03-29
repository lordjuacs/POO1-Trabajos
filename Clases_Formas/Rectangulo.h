//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_RECTANGULO_H
#define CLASES_FORMAS_RECTANGULO_H

#include "Forma.h"
#include "Punto.h"
#include "funciones.h"

class Rectangulo: public Forma{
private:
    Punto* ubicacion;
    TipoNum  ancho, alto;
public:
    Rectangulo(){
        ubicacion = new Punto;
        ancho = alto = 1;
    }
    virtual ~Rectangulo(){
        delete ubicacion;
    }
    void setUbicacion(Punto* ubicacion){
        this->ubicacion = ubicacion;
    }
    void setAncho(TipoNum ancho){
        this->ancho = ancho;
    }
    void setAlto(TipoNum alto){
        this->alto = alto;
    }

    TipoNum perimetro(){
        TipoNum per = 0;
        Punto* b = new Punto(ubicacion, ancho, 0);
        Punto* c = new Punto(ubicacion, 0, alto);
        per += distanciaPuntos(ubicacion, b) * 2;
        per += distanciaPuntos(ubicacion, c) * 2;
        delete b;
        delete c;
        return per;
    }
    TipoNum area(){
        return ancho * alto;
    }
};


#endif //CLASES_FORMAS_RECTANGULO_H
