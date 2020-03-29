//
// Created by J on 23-Oct-19.
//

#include "CAlumno.h"

CAlumno::CAlumno(){
    nombre = "Alumno";
    apellidos = "Apellidos";
    creditos = 20;
}

CAlumno::CAlumno(string nombre, entero creditos){
    if(!nombre.empty())  //es igual a nombre != ""
        this->nombre = nombre;
    if(creditos > 0)
        this->creditos = creditos;
}

void CAlumno::aprobar(CCurso* curso){
    this->creditos += curso->getCreditos();
}

entero CAlumno::getCreditos(){
    return this->creditos;
}


CAlumno::~CAlumno(){
    cout << "Me destrui" << endl;
}

