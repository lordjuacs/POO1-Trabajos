//
// Created by J on 20-Nov-19.
//

#ifndef SUMAPUNTOS_PUNTO_H
#define SUMAPUNTOS_PUNTO_H

#include <iostream>
using namespace std;

class Punto{
private:
    double posx, posy;
public:
    Punto(){

    }
    Punto(double posx, double posy){
        this->posx = posx;
        this->posy = posy;
    }

    Punto suma(const Punto &p2){
        Punto p3(p2.posx + posx, p2.posy + posy);
        return p3;
    }
    Punto operator+(Punto p2){
        Punto p3;
        p3.posx = p2.posx + posx;
        p3.posy = p2.posy + posy;
        return p3;
    }

    void imprimir(){
        cout << "X: " << posx << endl;
        cout << "Y: " << posy << endl;
    }

    Punto operator *(Punto &p2){
        Punto p3(posx * p2.posx, posy * p2.posy);
        return p3;
    }
    double operator[](int posicion){
        if(posicion ==0)
            return posx;
        else if(posicion == 1)
            return posy;
        else
            return -1;
    }
    void operator++(){
        posx++;
        posy++;
    }


    friend ostream& operator<<(ostream &o, Punto &p);
    friend istream& operator>>(istream &o, Punto &p);



};

#endif //SUMAPUNTOS_PUNTO_H
