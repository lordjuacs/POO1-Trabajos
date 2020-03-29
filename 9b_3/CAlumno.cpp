//
// Created by J on 23-Oct-19.
//

#include "CAlumno.h"

CAlumno::CAlumno(){
    nombre = "Jose";
    apellidos = "Fiestas";
    edad = 18;
    creditos = 20;
}

CAlumno::CAlumno(entero edad) {
    this->edad = edad;
    nombre = "Juan";
    apellidos = "Vargas";
    creditos = 24;
}

void CAlumno::pedirDatos(){
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
void CAlumno::mostrarDatos(){
    cout << "Nombre: " << this->nombre <<endl;
    cout << "Edad: " << this->edad << endl;


}

entero CAlumno::getEdad() {
    return edad;
}

bool CAlumno::esMayorDe(CAlumno &alumno){
    if(this->edad > alumno.getEdad())
        return true;
    else
        return false;
}

