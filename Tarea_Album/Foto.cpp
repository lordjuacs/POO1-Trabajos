//
// Created by J on 31-Oct-19.
//

#include "Foto.h"
//constructores & destructor
//constructor sin parametros
Foto::Foto(){
    this->nombre = "NADA";
    this->fecha = "01/01/0001";
    this->resolucion = Resolucion();
}
//constructor con todos los atributos
/*Foto::Foto(string _nombre, string _fecha, Resolucion _resolucion){
    this->nombre = _nombre;
    this->fecha = _fecha;
    this->resolucion = _resolucion;
}*/
//destructor
Foto::~Foto(){
}

//setters
void Foto::setNombre(string _nombre) {
    this->nombre = _nombre;
}
void Foto::setFecha(string _fecha){
    this->fecha = _fecha;
}

void Foto::setResolucion(Resolucion _resolucion){
    this->resolucion = _resolucion;
}

//getters
string Foto::getNombre(){
    return this->nombre;
}

string Foto::getFecha(){
    return this->fecha;
}
Resolucion Foto::getResolucion(){
    return this->resolucion;
}

//metodos
void Foto::mostrar(){
    cout << endl;
    cout << "<Foto>" << endl;
    cout << "Nombre: " << this->getNombre() << endl;
    cout << "Fecha: " << this->getFecha() << endl;
    cout << "Resolucion:" << endl;
    cout << "Ancho: " << this->resolucion.getAncho() << endl;
    cout << "Alto: " << this->resolucion.getAlto() << endl;
    cout << endl;
}
