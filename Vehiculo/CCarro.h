//
// Created by J on 12-Nov-19.
//

#ifndef VEHICULO_CCARRO_H
#define VEHICULO_CCARRO_H

#include <iostream>
#include "CVehiculo.h"
using namespace std;

class Carro: public Vehiculo{
private:
    string pista;
public:
    Carro(){
        pista = "Javier Prado";
    }
    Carro(string pista){
        this->pista = pista;
    }
    void drive(){
        cout << "Manejando carro por " << pista << endl;
    }


};
#endif //VEHICULO_CCARRO_H
