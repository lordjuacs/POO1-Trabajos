//
// Created by J on 31-Oct-19.
//

#ifndef TAREA_ALBUM_ALBUM_H
#define TAREA_ALBUM_ALBUM_H

#include "tipos.h"
#include "Foto.h"
class Album {
private:
    string nombre;
    int tamano;
    Foto * fotos;

public:
    //constructores & destructor
    Album();
    explicit Album(int _tamano);
    //Album(string _nombre, Foto * &_fotos, int _tamano);
    virtual ~Album();

    //setters
    void setNombre(string _nombre);
    //void setFotosyTamano(Foto * &_fotos, int _tamano);

    //getters
    string getNombre();
    int getTamano();

    //metodos
    Foto getMayorResolucion();
    string getFechaMasFotos();
    void agregarFoto(const Foto& _foto);
};


#endif //TAREA_ALBUM_ALBUM_H
