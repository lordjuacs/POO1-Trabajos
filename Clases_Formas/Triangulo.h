//
// Created by J on 08-Nov-19.
//

#ifndef CLASES_FORMAS_TRIANGULO_H
#define CLASES_FORMAS_TRIANGULO_H

#include <vector>
#include "Punto.h"
#include "Forma.h"
#include "funciones.h"

class Triangulo: public Forma{
private:
    vector <Punto*> puntos;
    int total =0;

public:
    Triangulo(){
        for(int i = 0; i < 3; i++){
            puntos[i] = new Punto();
        }
    }
    void agregarPunto(Punto* punto){
        if(total != 3) {
            puntos[total] = punto;
            total++;
        }
        else cerr << "Ya esta lleno" << endl;
    }
    virtual ~Triangulo(){
        //for(auto elemento : puntos)
          //  delete elemento;
    }

    TipoNum perimetro(){
        TipoNum per = 0;
        per += distanciaPuntos(puntos[0], puntos[1]);
        per += distanciaPuntos(puntos[1], puntos[2]);
        per+= distanciaPuntos(puntos[0], puntos[2]);
        return per;

    }
    TipoNum area(){
        return formulaHeron(puntos[0], puntos[1], puntos[2]);
    }
    void dibujar(Lienzo &lienzo){
        cout << "Dibujando";
    }

};


#endif //CLASES_FORMAS_TRIANGULO_H
