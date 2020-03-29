//
// Created by J on 29-Nov-19.
//

#ifndef PARTE2_CROBOT_H
#define PARTE2_CROBOT_H


#include "Tipos.h"
#include "CObjeto.h"
#include "Coord.h"
using namespace std;

class CRobot : public CObjeto {
private:
    TipoEntero moverse(TipoEntero altura, TipoEntero ancho, vector<Coord> vis);
    void moverseRand(TipoEntero altura, TipoEntero ancho, vector<Coord> vis);
    friend class CBattleBox;
    friend class Menu;
public:
    TipoEntero m_Vidas;
    TipoEntero m_int_poder;
    TipoEntero Vidas_i;
    TipoEntero PosX_i;
    TipoEntero PosY_i;
    CRobot(TipoString pNombre, TipoCaracter pColor,
           TipoEntero pPosX, TipoEntero pPosY, TipoEntero pVidas, TipoEntero m_int_poder);
    virtual ~CRobot();
    void setNombre(TipoString pNombre);
    TipoString mostrarPosicion();
};



#endif //PARTE2_CROBOT_H
