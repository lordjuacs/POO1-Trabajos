//
// Created by J on 13-Nov-19.
//

#ifndef CVEHICULO_CLASES_H
#define CVEHICULO_CLASES_H

#include <iostream>
using namespace std;
class CVehiculo {
protected:
    virtual void fuelAmount() = 0;
    virtual void capacity() = 0;
    virtual void applyBrakes() = 0;
public:
    CVehiculo(){
    }


};

class Bus: public CVehiculo{
public:
    Bus(){

    }
    void fuelAmount(){
        cout << "Cantidad de combustible" << endl;
    }
    void capactity(){
        cout << "La capacidad es de 10 000 galones" << endl;
    }

    void applyBrakes(){

    }
};

class Car: public CVehiculo{
public:
    Car(){

    }
    void fuelAmount(){
        cout << "Cantidad de combustible" << endl;
    }
    void capactity(){
        cout << "La capacidad es de 15 000 galones" << endl;

    }
    void applyBrakes(){

    }
};


class Truck: public CVehiculo{
public:
    Truck(){

    }
    void fuelAmount(){
        cout << "Cantidad de combustible" << endl;
    }
    void capactity(){
        cout << "La capacidad es de 20 000 galones" << endl;
    }
    void applyBrakes(){

    }
};



#endif //CVEHICULO_CLASES_H
