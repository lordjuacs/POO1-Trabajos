//
// Created by J on 23-Oct-19.
//

#ifndef INC_9B_2_CALUMNO_H
#define INC_9B_2_CALUMNO_H

#include "tipos.h"
#include "CCurso.h"

class CAlumno {
private:
    string nombre;
    string apellidos;
    entero edad;
    entero creditos;
public:
    CAlumno();
    CAlumno(string nombre, entero creditos);

    entero getCreditos();
    void aprobar(CCurso* curso);
    ~CAlumno();
};


#endif //INC_9B_2_CALUMNO_H
