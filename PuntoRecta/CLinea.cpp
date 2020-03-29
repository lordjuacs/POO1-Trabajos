//
// Created by J on 23-Oct-19.
//

#include "CLinea.h"
CLinea::CLinea(entero a, entero b, entero c){
    this->a = a;
    this->b = b;
    this->c = c;
}

entero CLinea::getA(){
    return a;
}
entero CLinea::getB(){
    return b;
}
entero CLinea::getC(){
    return c;
}
