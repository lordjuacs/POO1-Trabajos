//
// Created by J on 06-Nov-19.
//

#ifndef INC_11A_EJ1_ANIMAL_H
#define INC_11A_EJ1_ANIMAL_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Animal {
protected:
    string nombre;
    string tipo;
public:
    Animal(){};
    virtual void comer() = 0;

    virtual void mostrar(){
        cout << "Nombre: " << nombre << endl;
    }
};


class Gato: public Animal{
public:
    Gato(string _nombre){
        this->nombre = _nombre;
    }
    void comer(){
        cout << "Comiendo comida de gato" << endl;
    }
    void maullar(){
        cout << "Miauuuu" << endl;
    }
    void mostrar(){
        cout << "Nombre gato: " << nombre << endl;
    }


};

class Perro: public Animal{
public:
    Perro(string _nombre){
        this->nombre = _nombre;
    }
    void comer(){
        cout << "Comiendo comida de perro" << endl;
    }
    void ladrar(){
        cout << "Guau guau" << endl;
    }
    void mostrar(){
        cout << "Nombre perro: " << nombre << endl;
    }


};


#endif //INC_11A_EJ1_ANIMAL_H
