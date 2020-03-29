//
// Created by J on 16-Oct-19.
//

#ifndef INC_8A_1_CTRIANGULO_H
#define INC_8A_1_CTRIANGULO_H

#include <iostream>
#include <vector>
using namespace std;
typedef float decimal;
typedef double decimalD;

typedef float decimal;
typedef double decimalD;

class CTriangulo {
private:
    decimal lado1, lado2, lado3;
    decimal semiperimetro();

public:
    CTriangulo(){}
    CTriangulo(decimal lado1, decimal lado2, decimal lado3);
    ~CTriangulo();

    decimal perimetro();
    decimalD area();
    void setLados(vector<decimal> lados);//verificar que sean correctos
    vector<decimal> getLados();//retorna los tres lados en un vector

    void mostrarDatos();
};
#endif //INC_8A_1_CTRIANGULO_H
