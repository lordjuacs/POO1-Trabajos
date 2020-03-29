//
// Created by J on 27-Nov-19.
//

#ifndef EXAMENTAXI_TAXI_H
#define EXAMENTAXI_TAXI_H

#include <iostream>
using namespace std;
#include <vector>

class Taxi {
protected:
    string nombre;
    double distancia{};
    double tiempo{};
public:
    Taxi(){

    }
    virtual double calcularPrecio() = 0;
    virtual void mostrar(){
        cout << "Nombre" << nombre << endl;
        cout << "Distancia" << distancia << endl;
        cout << "Tiempo" << tiempo << endl;
    }

    string getNombre(){
        return this->nombre;
    }
    double getDistancia(){
        return this->distancia;
    }

    double getTiempo(){
      return this->tiempo;
    }
};


class Uber: public Taxi{
private:
public:
    Uber()= default;
    Uber(double distancia, double tiempo){
        nombre = "Uber";
        this->distancia = distancia;
        this->tiempo = tiempo;
    }

    double calcularPrecio() override{
        return (this->distancia * 1.2) + (this->tiempo * 0.1);
    }


};

class Cabify: public Taxi{
public:
    Cabify()= default;
    Cabify(double distancia, double tiempo){
        nombre = "Cabify";
        this->distancia = distancia;
        this->tiempo = tiempo;
    }

    double  calcularPrecio() override{
        if(this->distancia <= 20)
            return this->distancia * 1.65;
        return (20 * 1.65) + (this->distancia - 20) * 1.1;
    }
};

class TaxiBeat: public Taxi{
public:
    TaxiBeat()= default;
    TaxiBeat(double distancia, double tiempo){
        nombre = "TaxiBeat";
        this->distancia = distancia;
        this->tiempo = tiempo;
    }

    double  calcularPrecio() override{
        return (2.4) + (this->distancia * 1.05) + (this->tiempo * 0.34);
    }
};

class Tupla{
private:
    Taxi* taxi;
    string fecha;
public:
    Tupla(Taxi* taxi, string fecha){
        this->taxi = taxi;
        this->fecha = fecha;
    }

    friend class ServicioTaxi;
};

#endif //EXAMENTAXI_TAXI_H
