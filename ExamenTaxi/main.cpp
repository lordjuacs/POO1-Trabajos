#include <iostream>
#include <vector>
#include "ServicioTaxi.h"
using namespace std;

vector<Taxi*> ingresarServicios()
{
    int n;
    cout << "Ingrese total de taxis:";
    vector<Taxi*> taxis;
    cin >> n;
    for(int i = 0; i < n; i++){
        int eleccion;
        cout << "Escoja el servicio especifico: 1. Uber, 2. Cabify, 3. TaxiBeat" << endl << "Eleccion:";
        cin >> eleccion;

        double dist;
        double time;
        cout << "Distancia:"; cin >> dist;
        cout << "Tiempo:"; cin >> time;
        if(eleccion == 1){
            Taxi* taxi = new Uber(dist, time);
            taxis.emplace_back(taxi);
        }
        else if(eleccion == 2){
            Taxi* taxi = new Cabify(dist, time);
            taxis.emplace_back(taxi);

        }
        else{
            Taxi* taxi = new TaxiBeat(dist, time);
            taxis.emplace_back(taxi);

        }

    }
    return taxis;
}
int main(){
    vector<Taxi*> taxis = ingresarServicios();
    int n = taxis.size();
    cout<< endl << "Servicios de taxis: " << n << endl << endl;
    for(int i = 0; i < n; i++)
    {
        cout<< "--Taxi " << i + 1 << "--"<< endl;
        cout<<"Nombre del servicio: ";
        cout<<taxis[i]->getNombre()<<endl;
        cout<<"Distancia: ";
        cout<<taxis[i]->getDistancia()<<endl;
        cout<<"Tiempo: ";
        cout<<taxis[i]->getTiempo()<<endl;
        cout<<"Precio pagado: ";
        cout<<taxis[i]->calcularPrecio()<<endl;
        cout << endl;
    }
    cout << endl;
    ServicioTaxi servicios;
    servicios.agregar(taxis, "26/11/2019");
    servicios.agregar(new Uber(25, 15), "27/11/2019");
    servicios.agregar(new TaxiBeat (15, 30) , "27/11/2019");
    servicios += new Cabify(22,40) ; // se asocia al ultimo dia
    ++servicios;
    //cout<<"Precio Total Diario: ";
    servicios.precioTotal(cout, "26/11/2019");
    //cout << "Precio Total Acumulado: ";
    servicios.precioTotal(cout);
    return 0 ;
}