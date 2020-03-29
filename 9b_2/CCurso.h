//
// Created by J on 23-Oct-19.
//

#ifndef INC_9B_2_CCURSO_H
#define INC_9B_2_CCURSO_H


#include "tipos.h"

class CCurso {
private:
    string nombre;
    string carrera;
    entero creditos;
public:
    CCurso();
    CCurso(string nombre, entero creditos);

    string getNombre();
    entero getCreditos();

    ~CCurso();

};


#endif //INC_9B_2_CCURSO_H
