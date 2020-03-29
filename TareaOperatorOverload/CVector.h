//
// Created by J on 21-Nov-19.
//

#ifndef TAREAOPERATOROVERLOAD_CVECTOR_H
#define TAREAOPERATOROVERLOAD_CVECTOR_H
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class CVector {
private:
    double *almacen;
    int dimension;
public:
    CVector(){
        almacen = nullptr;
        dimension = 0;
    }

    explicit CVector(int dimension){
        this->dimension = dimension;
        almacen = nullptr;
        almacen = new double[dimension];
        for(int i = 0; i < dimension; i++)
            almacen[i] = -1;
    }

    CVector(double repetidos, int dimension){
        this->dimension = dimension;
        almacen = nullptr;
        almacen = new double[dimension];
        for(int i = 0; i < dimension; i++)
            almacen[i] = repetidos;

    }


    double& operator[](int posicion){
        if(posicion < 0 || posicion >= dimension)
            cerr << "Posicion fuera del rango" << endl;

        return *(almacen + posicion);
    }


    void operator+=(const CVector &p2){
        if(dimension == p2.dimension) {
            for (int i = 0; i < dimension; i++) {
                almacen[i] += p2.almacen[i];
            }
        }
    }

    CVector operator^(double exponente){
        CVector p2(dimension);
        for(int i = 0; i < dimension; i++){
            p2.almacen[i] = pow(almacen[i], exponente);
        }
        return p2;
    }


    CVector operator+(const CVector &p2){
        CVector p3(dimension);
        for(int i = 0; i  < dimension; i++){
            p3.almacen[i] = almacen[i] + p2.almacen[i];
        }
        return p3;
    }

    CVector operator*(const CVector &p2){
        CVector p3(dimension);
        for(int i = 0; i  < dimension; i++){
            p3.almacen[i] = almacen[i] * p2.almacen[i];
        }
        return p3;
    }

    bool operator==(const CVector& p2){
        bool bandera = true;
        if(dimension == p2.dimension){
            for(int i = 0; i < dimension; i++){
                if(almacen[i] != p2.almacen[i])
                    bandera = false;
            }
            return bandera;
        }
        else{
            bandera = false;
            return bandera;
        }
    }

    friend ostream& operator <<(ostream& os, const CVector &p1);


    virtual ~CVector(){
        delete [] almacen;
    }

};

ostream& operator <<(ostream& os, const CVector &p1){
    os << "[";
    for(int i = 0; i < p1.dimension; i++){
        os << p1.almacen[i];
        if(i != p1.dimension - 1)
            os << ",";
    }
    os << "]";
    return os;
}

#endif //TAREAOPERATOROVERLOAD_CVECTOR_H
