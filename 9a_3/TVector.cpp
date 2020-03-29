//
// Created by J on 16-Oct-19.
//

#include "TVector.h"


template <typename T>
TVector<T>::TVector(){
    elementos = nullptr;
    tamano = 0;
}

template <typename T>
TVector<T>::TVector(entero _tamano, T _valor){
    if(tamano > 0) {
        tamano = _tamano;
        elementos = nullptr;
        elementos = new entero[tamano];
        for (int i = 0; i < tamano; i++)
            elementos[i] = _valor;
    }
}

template <typename T>
TVector<T>::TVector(const TVector &otro_vector){
    tamano = otro_vector.tamano;
    elementos = otro_vector.elementos;

}

template<typename T>
TVector<T>::~TVector() {
    delete [] elementos;
}

template<typename T>
void TVector<T>::setElemento(T elemento, entero posicion){
    elementos[posicion] = elemento;
}

template<typename T>
void TVector<T>::insertar(T elemento, entero posicion){
    T* copia = nullptr;
    copia = new entero[tamano + 1];
    for(int i = 0; i < posicion; i++) {
        copia[i] = elementos[i];
    }
    copia[posicion] = elemento;
    for(int i = posicion + 1; i < tamano + 1; i++) {
        copia[i] = elementos[i - 1];
    }
    tamano++;
    delete [] elementos;
    elementos = copia;
}

template<typename T> void TVector<T>::agregar(T elemento) {
    T* copia = nullptr;
    copia = new entero[tamano + 1];
    for (int i = 0; i < tamano; i++)
        copia[i] = elementos[i];
    copia[tamano] = elemento;

    tamano++;
    delete [] elementos;
    elementos = copia;
}

template<typename T> entero TVector<T>::getTamano(){
    return tamano;
}

template<typename T> T TVector<T>::getElemento(entero posicion){
    return elementos[posicion];

}






