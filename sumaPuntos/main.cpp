#include <iostream>
#include <fstream>
#include "Punto.h"
using namespace std;


ostream& operator<<(ostream &o, Punto &p){
    o << "X: " << p.posx << " Y: " << p.posy;
    return o;
}
istream& operator >>(istream &i, Punto &p){
    i >> p.posx >> p.posy;
    return i;
}


int main() {
    //Punto p1(5, 2);
    //Punto p2;
    //cin >> p2;
    //Punto p3 = p1.suma(p2);
    //p3.imprimir();
    //Punto p4 = p1 + p2;
    //p4.imprimir();
    //cout << p1 << endl;
    //ofstream file("datos.txt");
    //file << p3 << endl;

    //ofstream ofile("probando2.txt");
    //ifstream ifile("probando1.txt");
    //si se quiere que sean los dos el mismo archivo, despues de leer uno hay que cerrarlo antes que escriba
    //Punto p5;
    //ifile >> p5;
    //cout << p5 << endl;
    //ofile << p5;
    Punto p6(3, 4);
    Punto p7(4,5);
    Punto p8 = p6 * p7;
    cout << p8 << endl;
    cout << p8[0] <<","<< p8[4];
    ++p8;
    cout << p8;





    return 0;
}