//
// Created by J on 16-Oct-19.
//

#ifndef INC_8A_2_CCILINDRO_H
#define INC_8A_2_CCILINDRO_H

#include <iostream>
#include <cmath>
using namespace std;
typedef double decimal;
const double pi = M_1_PI;

class CCilindro {
private:
    double radio;
    double altura;
public:

    CCilindro(double radio, double altura);
    ~CCilindro();
    decimal areaBases();
    decimal areaLat();
    decimal areaTot();
    decimal volumen();

    void mostrarDatos();

};


#endif //INC_8A_2_CCILINDRO_H
