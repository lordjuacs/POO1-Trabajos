//
// Created by J on 31-Oct-19.
//

#include "Resolucion.h"
//constructores & destructor
//constructor sin parametros
Resolucion::Resolucion() {
    this->ancho = 10;
    this->alto = 10;

}
//constructor con ambas dimensiones
/*Resolucion::Resolucion(int _ancho, int _alto) {
    this->ancho = _ancho;
    this->alto = _alto;
}*/
//destructor
Resolucion::~Resolucion() {
}

//setters
void Resolucion::setAncho(int _ancho) {
    this->ancho = _ancho;
}
void Resolucion::setAlto(int _alto) {
    this->alto = _alto;
}
//getters
int Resolucion::getAncho() {
    return this->ancho;
}
int Resolucion::getAlto() {
    return this->alto;
}
int Resolucion::getTotalPixeles() {
    int tot = ancho * alto;
    return tot;
}