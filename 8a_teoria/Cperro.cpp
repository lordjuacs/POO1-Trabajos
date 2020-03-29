//
// Created by J on 11-Oct-19.
//

#include "Cperro.h"
void Cperro::setNombre(string _nombre){
    if(_nombre == ""){
        nombre = "Tobi";
        cerr << "Nombre vacio" << endl;
    }
    else
        nombre = _nombre;
}
void Cperro::ladrar(){
    cout << "guau guau" << endl;
}
void Cperro::setTalla(float _talla){
    if(_talla > 0)
        talla = _talla;
    else {
        talla = 0.5;
        cerr << "Talla negativa" << endl;
    }
}
void Cperro::setPeso(float _peso){
    peso = _peso;
}
void Cperro::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Talla: " << talla << endl;
    cout << "Peso: " << peso << endl;
}

