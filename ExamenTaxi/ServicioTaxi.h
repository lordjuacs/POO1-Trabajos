//
// Created by J on 27-Nov-19.
//

#ifndef EXAMENTAXI_SERVICIOTAXI_H
#define EXAMENTAXI_SERVICIOTAXI_H

#include <iostream>
#include <utility>
#include "Taxi.h"
using namespace std;

class ServicioTaxi {
private:
    vector<Tupla> taxis;
public:
    ServicioTaxi()= default;
    void agregar(vector<Taxi*>&taxis, string fecha){
        for(int i = 0; i < taxis.size(); i++){
            Tupla tupla(taxis[i], fecha);
            this->taxis.emplace_back(tupla);
        }
    }
    void agregar(Taxi* taxi, string fecha){
        Tupla tupla(taxi, std::move(fecha));
        this->taxis.emplace_back(tupla);
    }

    void precioTotal(ostream& os, string fecha){
        double total = 0, i=0;
        for(auto elemento : this->taxis) {
            if (elemento.fecha == fecha) {
                cout<< ++i;
                total += elemento.taxi->calcularPrecio();
            }
        }
        os << "El precio total diario del dia " << fecha << " es: " << total << endl;

    }
    void precioTotal(ostream& os){
        double total = 0;
        for(auto elemento : this->taxis) {
            total += elemento.taxi->calcularPrecio();
        }
        os << "El precio total acumulado es: " << total <<  endl;
    }

    void operator+=(Taxi* taxi){
        Tupla tupla(taxi, this->taxis[this->taxis.size() - 1].fecha);
        this->taxis.emplace_back(tupla);
    }
    void operator++(){
        Tupla tupla(new Uber(20, 10), "26/11/2018");
        this->taxis.emplace_back(tupla);
    }
};


#endif //EXAMENTAXI_SERVICIOTAXI_H
