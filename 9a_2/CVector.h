//
// Created by J on 16-Oct-19.
//

#ifndef INC_9A_2_CVECTOR_H
#define INC_9A_2_CVECTOR_H

#include <iostream>
using namespace std;
typedef int entero;
typedef int* array_entero;
class CVector
{
private:
    entero tamano;
    array_entero elementos;
    entero maximo;
    //void redimensionar();
public:
    //constructor vacio
    CVector();
    //constructor inicilizador
    CVector(entero _tamano, entero _valor);
    //constructor copia
    CVector(const CVector &otro_vector);
    //destructor
    virtual ~CVector();
    //reemplazar elemento
    void setElemento(entero elemento, entero posicion);
    //insertar elemento
    void insertar(entero elemento, entero posicion);
    //agregar elemento
    void agregar(entero elemento);
    //getters
    entero getTamano();
    entero getElemento(entero posicion);

};

#endif //INC_9A_2_CVECTOR_H
