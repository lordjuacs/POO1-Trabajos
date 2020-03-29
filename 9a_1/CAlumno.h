//
// Created by J on 16-Oct-19.
//

#ifndef INC_9A_1_CALUMNO_H
#define INC_9A_1_CALUMNO_H

#include "tipos.h"

class CAlumno {
private:
    texto nombre;
    texto apellidos;
    enterop edad;
public:
    texto getNombre();

    void setNombre(texto nombre);

    texto getApellidos();

    void setApellidos(texto apellidos);

    enterop getEdad();

    void setEdad(enterop edad);

};


#endif //INC_9A_1_CALUMNO_H
