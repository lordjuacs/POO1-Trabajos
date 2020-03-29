//
// Created by J on 18-Oct-19.
//

#ifndef INC_9B_1_FUNCIONES_H
#define INC_9B_1_FUNCIONES_H
#include <iostream>
#include "CAlumno.h"
#include "CProfesor.h"

template <typename T>
void mostrarDatosBasicos(T* objeto)
{
    cout<<"--------\n";
    cout<<"Nombre: "<<objeto->getNombre()<<endl;
    cout<<"Apellidos: "<<objeto->getApellidos()<<endl;
    cout<<"Edad: "<<objeto->getEdad()<<endl;
}

template <typename T>
void pedirDatosBasicos(T* objeto)
{
    cout<<"--------\n";
    texto temps; enterop tempe;
    cout<<"Nombre: ";
    getline(cin, temps); objeto->setNombre(temps);
    cout<<"Apellidos: ";
    getline(cin, temps); objeto->setApellidos(temps);
    cout<<"Edad: ";
    cin>>tempe; objeto->setEdad(tempe);
    cin.ignore();
}
#endif //INC_9B_1_FUNCIONES_H
