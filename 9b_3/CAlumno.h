//
// Created by J on 23-Oct-19.
//

#ifndef INC_9B_3_CALUMNO_H
#define INC_9B_3_CALUMNO_H

#include "tipos.h"

class CAlumno {
private:
    string nombre;
    string apellidos;
    entero edad;
    entero creditos;
public:
    CAlumno();
    CAlumno(entero edad);
    void pedirDatos();
    void mostrarDatos();
    bool esMayorDe(CAlumno &alumno);
    entero getEdad();



};


#endif //INC_9B_3_CALUMNO_H
