//
// Created by J on 18-Oct-19.
//

#include "CAlumno.h"

texto CAlumno::getNombre(){
    return nombre;
}

void CAlumno::setNombre(texto nombre) {
    CAlumno::nombre = nombre;
}

texto CAlumno::getApellidos(){
    return apellidos;
}

void CAlumno::setApellidos(texto apellidos) {
    CAlumno::apellidos = apellidos;
}

enterop CAlumno::getEdad(){
    return edad;
}

void CAlumno::setEdad(enterop edad) {
    CAlumno::edad = edad;
}
