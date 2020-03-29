//
// Created by J on 31-Oct-19.
//

#ifndef TAREA_ALBUM_RESOLUCION_H
#define TAREA_ALBUM_RESOLUCION_H

#include "tipos.h"

class Resolucion {
private:
    int ancho;
    int alto;
public:
    //constructores & destructor
    Resolucion();
    //Resolucion(int _ancho, int _alto);
    virtual ~Resolucion();

    //setters
    void setAncho(int _ancho);
    void setAlto(int _alto);

    //getters
    int getAncho();
    int getAlto();
    int getTotalPixeles();
};


#endif //TAREA_ALBUM_RESOLUCION_H
