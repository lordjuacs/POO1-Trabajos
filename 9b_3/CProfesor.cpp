//
// Created by J on 23-Oct-19.
//

#include "CProfesor.h"

CProfesor::CProfesor() {
    nombre = "Heider";
    apellidos = "Sanchez";
    edad = 35;
    horas_dictado = 20;
}

CProfesor::CProfesor(entero edad) {
    nombre = "Ernesto";
    apellidos = "Cuadros";
    this->edad = edad;
    horas_dictado = 25;
}

void CProfesor::mostrarDatos(){
    cout << "Nombre: " << this->nombre <<endl;
    cout << "Edad: " << this->edad << endl;


}
void CProfesor::pedirDatos(){
    string nombre;
    do{
        cout << "Ingrese un nombre:";
        cin >> nombre;
    }while(nombre == "");
    int edad;
    do{
        cout << "Ingrese la edad:";
        cin >> edad;
    }while(edad < 0);

    this->nombre = nombre;
    this->edad = edad;

}

entero CProfesor::getEdad() {
    return edad;
}

bool CProfesor::esMayorDe(CProfesor &profesor){
    if(this->edad > profesor.getEdad())
        return true;
    else
        return false;
}