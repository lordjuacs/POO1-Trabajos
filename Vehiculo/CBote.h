//
// Created by J on 12-Nov-19.
//

#ifndef VEHICULO_CBOTE_H
#define VEHICULO_CBOTE_H

#include "CVehiculo.h"
#include <iostream>
using namespace std;

class Bote: public Vehiculo{
private:
    string rio;
public:
    Bote(){
        rio = "Rimac";
    }
    Bote(string rio){
        this->rio = rio;
    }
    void drive(){
        cout << "Navegando bote por " << rio << endl;
    }
};
#endif //VEHICULO_CBOTE_H
