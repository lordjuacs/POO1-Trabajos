//
// Created by J on 12-Nov-19.
//

#ifndef VEHICULO_CVEHICULO_H
#define VEHICULO_CVEHICULO_H

#include <iostream>
#include <string>
using namespace std;
class Vehiculo{
private:
    string color;
    string placa;
public:
    Vehiculo(){}
    Vehiculo(string color, string placa){
        this->color = color;
        this->placa = placa;
    }
    virtual void drive(){
        cout << "Manejando vehiculo" << endl;
    }



};

#endif //VEHICULO_CVEHICULO_H
