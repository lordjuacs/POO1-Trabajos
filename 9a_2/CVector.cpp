//
// Created by J on 16-Oct-19.
//

#include "CVector.h"

CVector::CVector() {
    elementos = nullptr;
    tamano = 0;
}

CVector::CVector(entero _tamano, entero _valor){
    if(_tamano > 0) {
        tamano = _tamano;
        elementos = nullptr;
        elementos = new entero[tamano];
        for(int i = 0; i < tamano; i++)
            elementos[i] = _valor;
    }
}

CVector::CVector(const CVector &otro_vector){
    tamano = otro_vector.tamano;
    //esto apunta la mismo lugar, corre el riesgo de que salga error al hacer un cambio en vec3 pq intentara en vec2 tmb elementos = otro_vector.elementos;
    //mejor es
    elementos = new entero[tamano];
    for(int i = 0; i < tamano; i++)
        elementos[i] = otro_vector.elementos[i];
}

CVector::~CVector() {
    // if(elementos != nullptr), da igual pq deletear un nullptr no cambia en nada
        delete [] elementos;

}

void CVector::setElemento(entero elemento, entero posicion){
    if(posicion >= 0 and posicion < tamano)
        elementos[posicion] = elemento;
}

void CVector::insertar(entero elemento, entero posicion){
    if(posicion < tamano) {
        array_entero copia = nullptr;
        copia = new entero[tamano + 1];
        for (int i = 0; i < posicion; i++) {
            copia[i] = elementos[i];
        }
        copia[posicion] = elemento;
        for (int i = posicion + 1; i < tamano + 1; i++) {
            copia[i] = elementos[i - 1];
        }
        tamano++;
        delete[] elementos;
        elementos = copia;
    }
}

void CVector::agregar(entero elemento) {
    array_entero copia = nullptr;
    copia = new entero[tamano + 1];
    for (int i = 0; i < tamano; i++)
        copia[i] = elementos[i];
    copia[tamano] = elemento;

    tamano++;
    delete[] elementos;
    elementos = copia;
}

entero CVector::getTamano(){
    return tamano;
}

entero CVector::getElemento(entero posicion){
    return elementos[posicion];

}





