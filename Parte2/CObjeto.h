//
// Created by J on 29-Nov-19.
//

#ifndef PARTE2_COBJETO_H
#define PARTE2_COBJETO_H
#include "Tipos.h"
class CObjeto
{
protected:
    TipoString    m_Nombre;
    TipoCaracter  m_Color;
    TipoEntero    m_PosX;
    TipoEntero    m_PosY;
    TipoEntero	  m_danio;
public:
    CObjeto() {}
    CObjeto(TipoString pNombre, TipoCaracter pColor,
            TipoEntero pPosX, TipoEntero pPosY) {
        m_Nombre = pNombre;
        m_Color = pColor;
        m_PosX = pPosX;
        m_PosY = pPosY;
    }
    TipoString mostrarPosicion() {
        return ", X = " + to_string(m_PosX) + " , Y = " + to_string(m_PosY);
    }
    TipoString   getNombre() { return m_Nombre; }
    TipoEntero   getPosX() { return m_PosX; }
    TipoEntero   getPosY() { return m_PosY; }
    TipoCaracter getColor() { return m_Color; }
    TipoEntero   getDanio() { return m_danio; }

};

#endif //PARTE2_COBJETO_H
