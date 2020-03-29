//
// Created by J on 29-Nov-19.
//

#ifndef PARTE2_COBSTACULO_H
#define PARTE2_COBSTACULO_H
#include "CObjeto.h"
#include "CRobot.h"
#include "Tipos.h"

class CObstaculo :public CObjeto
{
private:
    TipoString m_tipo;
public:
    CObstaculo(TipoString pNombre, TipoCaracter pColor, TipoEntero pPosX, TipoEntero pPosY, TipoEntero danio, TipoString tipo ) {
        m_Nombre = pNombre;
        m_Color = pColor;
        m_PosX = pPosX;
        m_PosY = pPosY;
        m_danio = danio;
        m_tipo = tipo;
    }
    void hacerdanio(CRobot* otro) {
        otro->m_Vidas -= this->m_danio;
    }
    TipoString getTipo() { return m_tipo; }
};
#endif //PARTE2_COBSTACULO_H
