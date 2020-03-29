//
// Created by J on 16-Oct-19.
//


#include "CTriangulo.h"

CTriangulo::CTriangulo(decimal lado1,
                       decimal lado2, decimal lado3) {
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
}

CTriangulo::~CTriangulo() {
    //se libera memoria
    cout<<"Eliminando memoria\n";
}

decimal CTriangulo::semiperimetro()
{
    return 0;
}

decimal CTriangulo::perimetro()
{
    return 0;
}

decimalD CTriangulo::area()
{
    return 0;
}

void CTriangulo::setLados(vector<decimal> lados)
{
    this->lado1=lados[0];
    this->lado2=lados[1];
    this->lado3=lados[2];
}

vector<decimal> CTriangulo::getLados()
{
    vector<decimal> lados;
    lados.push_back(this->lado1);
    lados.push_back(this->lado2);
    lados.push_back(this->lado3);
    return lados;
}

void CTriangulo::mostrarDatos()
{
    cout<<"Lado1 :" << lado1 << endl;
    cout<<"Lado2 :" << this->lado2 << endl;
    cout<<"Lado3 :" << CTriangulo::lado3 << endl;
}


