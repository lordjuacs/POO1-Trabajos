//
// Created by J on 23-Oct-19.
//

#include "CCurso.h"

CCurso::CCurso() {
    this->nombre = "ICC";
    this->carrera = "CS";
    this->creditos = 4;
}

CCurso::CCurso(string nombre, entero creditos) {
    if(!nombre.empty()) // es igual a nombre != ""
        this->nombre = nombre;
    if(creditos > 0)
        this->creditos = creditos;
}

string CCurso::getNombre(){
    return this->nombre;
}
entero CCurso::getCreditos(){
    return this->creditos;
}

CCurso::~CCurso() {
    cout << "Me destrui" << endl;
}
