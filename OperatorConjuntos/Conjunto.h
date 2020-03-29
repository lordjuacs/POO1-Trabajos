//
// Created by J on 22-Nov-19.
//

#ifndef OPERATORCONJUNTOS_CONJUNTO_H
#define OPERATORCONJUNTOS_CONJUNTO_H

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Conjunto {
private:
    vector<double>elementos;
public:
    Conjunto(){};

    void imprimir(ostream& os){
        os << "[";

        for(int i = 0; i < elementos.size(); i++)
        {
            os << elementos[i];
            if(i != elementos.size() - 1)
                os << ",";
        }
        os << "]";
        os << endl;
    }

    Conjunto& operator<<(double valor){
        if(!(find(elementos.begin(), elementos.end(), valor) != elementos.end()))
            elementos.emplace_back(valor);
        return *this;
    }

    Conjunto operator+(const Conjunto& conjunto2){
        Conjunto conjunto3;//el primer for puede ser obviado, copiando de frente Conjunto conjunto3 = *this;
        for(auto elemento1: elementos)
            conjunto3.elementos.emplace_back(elemento1);
        for(auto elemento2 : conjunto2.elementos){
            if(!(find(conjunto3.elementos.begin(), conjunto3.elementos.end(), elemento2) != conjunto3.elementos.end()))
                conjunto3.elementos.emplace_back(elemento2);
        }
        return conjunto3;
    }
};



#endif //OPERATORCONJUNTOS_CONJUNTO_H
