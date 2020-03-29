

#ifndef TAREAGANDALF_ALIMENTO_H
#define TAREAGANDALF_ALIMENTO_H

#include "Tipos.h"

class Alimento {
protected:
    TipoCadena nombre;
    static TipoEntero puntos;
public:
    Alimento(){} //default constructor
    //Initialization constructor
    Alimento(TipoCadena _nombre) : nombre(_nombre){}
    virtual ~Alimento(){}
    void estadoAnimo() {
        cout<<"Puntaje: "<<puntos<<endl;
        cout<<"Gandalf esta: ";
        if (puntos < -5) {
            cout<<"molesto."<<endl;
        } else if (puntos >= -5 && puntos <= 0) {
            cout<<"triste."<<endl;
        } else if (puntos >= 1 && puntos <= 15) {
            cout<<"feliz."<<endl;
        } else if (puntos > 15) {
            cout<<"super feliz. GAAAA"<<endl;
        }
    }
};

TipoEntero Alimento::puntos = 0;

#endif //TAREAGANDALF_ALIMENTO_H
