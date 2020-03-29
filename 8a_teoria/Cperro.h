//
// Created by J on 11-Oct-19.
//

#ifndef INC_8A_EJ1_CPERRO_H
#define INC_8A_EJ1_CPERRO_H
#include <iostream>
#include <string>
using namespace std;

class Cperro {
private:
    float talla;
    float peso;
    string nombre;

public:
    void ladrar();
    void setNombre(string _nombre);
    void setTalla(float _talla);
    void setPeso(float _peso);
    void mostrar();


};


#endif //INC_8A_EJ1_CPERRO_H
