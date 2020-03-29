//
// Created by J on 29-Nov-19.
//

#ifndef PARTE2_CBATTLEBOX_H
#define PARTE2_CBATTLEBOX_H


#include <iostream>
#include <vector>
#include "Tipos.h"
#include "CRobot.h"
#include "CObstaculo.h"
#include "Coord.h"

// Valores constantes
const TipoEntero ALTURA = 21;
const TipoEntero ANCHO = 21;
const TipoCaracter COLOR = '.';

using namespace std;

class CBattleBox {
private:
    vector<vector<TipoCaracter>> m_Plano;
    vector<CRobot*> m_Robots;
    vector<CObstaculo*> m_Obstaculos;
    vector<Coord> visitado;
    void resizePlano(TipoEntero pAltura, TipoEntero pAncho);
    friend class Menu;
public:
    CBattleBox();
    CBattleBox(TipoEntero pAltura, TipoEntero pAncho);
    virtual ~CBattleBox();
    void adicionarRobot(CRobot* pRobot);
    void adicionarObstaculo(CObstaculo* pObstaculo);
    void removerRobot(TipoString pNombre);
    void removerRobot2(TipoString pNombre);
    void removerObstaculo(TipoString pNombre);
    void imprimirRobots(ostream& os);
    void imprimirObs(ostream& os);
    TipoEntero getAltura();
    TipoEntero getAncho();
    void dibujarBattleBox(ostream& os);
    void actualizarBattleBox();
    void simulacionCamino();
    string pedirArchivo();

    void mover(int n);
    friend class CMenu;
};
#endif //PARTE2_CBATTLEBOX_H
