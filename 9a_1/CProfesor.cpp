//
// Created by J on 16-Oct-19.
//

#include "CProfesor.h"

texto CProfesor::getNombre(){
    return nombre;
}

void CProfesor::setNombre(texto nombre) {
    CProfesor::nombre = nombre;
}

texto CProfesor::getApellidos(){
    return apellidos;
}

void CProfesor::setApellidos(texto apellidos) {
    CProfesor::apellidos = apellidos;
}

enterop CProfesor::getEdad(){
    return edad;
}

void CProfesor::setEdad(enterop edad) {
    CProfesor::edad = edad;
}
