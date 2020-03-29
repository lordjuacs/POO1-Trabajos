//
// Created by J on 23-Oct-19.
//

#ifndef INC_9B_3_CPROFESOR_H
#define INC_9B_3_CPROFESOR_H

#include "tipos.h"

class CProfesor {
private:
    string nombre;
    string apellidos;
    entero edad;
    entero horas_dictado;
public:
    CProfesor();
    CProfesor(entero edad);
    void pedirDatos();
    void mostrarDatos();
    bool esMayorDe(CProfesor &profesor);
    entero getEdad();

};


#endif //INC_9B_3_CPROFESOR_H
