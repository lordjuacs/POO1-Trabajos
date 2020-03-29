//
// Created by J on 16-Oct-19.
//

#ifndef INC_9A_3_TVECTOR_H
#define INC_9A_3_TVECTOR_H

#include <iostream>
using namespace std;
typedef int entero;

<T>
class TVector{
private:
    entero tamano;
    T* elementos;
    //entero maximo;
    //void redimensionar();
public:
    //constructor vacio
    TVector();
    //constructor inicilizador
    TVector(entero _tamano, T _valor);
    //constructor copia
    TVector(const TVector &otro_vector);
    //destructor
    virtual ~TVector();
    //reemplazar elemento
    void setElemento(T elemento, entero posicion);
    //insertar elemento
    void insertar(T elemento, entero posicion);
    //agregar elemento
    void agregar(T elemento);
    //getters
    entero getTamano();
    T getElemento(entero posicion);
};
#include "TVector.cpp"

#endif //INC_9A_3_TVECTOR_H
