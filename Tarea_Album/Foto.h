//
// Created by J on 31-Oct-19.
//

#ifndef TAREA_ALBUM_FOTO_H
#define TAREA_ALBUM_FOTO_H

#include "tipos.h"
#include "Resolucion.h"

class Foto {
private:
    string nombre;
    string fecha;
    Resolucion resolucion;
public:
    //constructores & destructor
    Foto();
    //Foto(string _nombre, string _fecha, Resolucion _resolucion);
    virtual ~Foto();

    //setters
    void setNombre(string _nombre);
    void setFecha(string _fecha);
    void setResolucion(Resolucion _resolucion);

    //getters
    string getNombre();
    string getFecha();
    Resolucion getResolucion();

    //metodos
    void mostrar();

};


#endif //TAREA_ALBUM_FOTO_H
