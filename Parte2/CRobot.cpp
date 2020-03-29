//
// Created by J on 29-Nov-19.
//

#include "CRobot.h"
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

CRobot::CRobot(TipoString pNombre, TipoCaracter pColor,
               TipoEntero pPosX, TipoEntero pPosY, TipoEntero pVidas, TipoEntero pPoder) :CObjeto(pNombre, pColor, pPosX, pPosY) {
    m_Vidas = pVidas;
    m_int_poder = pPoder;
    Vidas_i = pVidas;
    PosX_i = pPosX;
    PosY_i = pPosY;
}
CRobot::~CRobot() {}
void CRobot::setNombre(TipoString pNombre) { this->m_Nombre = pNombre; }
TipoEntero CRobot::moverse(TipoEntero altura, TipoEntero ancho, vector<Coord> vis) {
    int ch = _getch();
    if (ch == 0 || ch == 224)
    {
        int cont;
        TipoEntero ind = -1;
        switch (_getch())
        {
            case UP:
                cont = 0;
                for (int i = 0; i < vis.size(); i++) {
                    if (m_PosX == vis[i].x && (m_PosY - 1) == vis[i].y) { ind = vis[i].idx; cont++; }
                }
                if (cont == 0) {
                    if (m_PosY != 0)
                        m_PosY--;
                }
                break;
            case DOWN:
                cont = 0;
                for (int i = 0; i < vis.size(); i++) {
                    if (m_PosX == vis[i].x && (m_PosY + 1) == vis[i].y) { ind = vis[i].idx; cont++; }
                }
                if (cont == 0)
                    if (m_PosY != altura - 1)
                        m_PosY++;
                break;
            case LEFT:
                cont = 0;
                for (int i = 0; i < vis.size(); i++) {
                    if ((m_PosX - 1) == vis[i].x && m_PosY == vis[i].y) { ind = vis[i].idx; cont++; }
                }
                if (cont == 0)
                    if (m_PosX != 0)
                        m_PosX--;
                break;
            case RIGHT:
                cont = 0;
                for (int i = 0; i < vis.size(); i++) {
                    if ((m_PosX + 1) == vis[i].x && m_PosY == vis[i].y) { ind = vis[i].idx; cont++; }
                }
                if (cont == 0)
                    if (m_PosX != ancho - 1)
                        m_PosX++;
                break;
            default:
                break;
        }
        return ind;
    }
    return -1;
}

void CRobot::moverseRand(TipoEntero altura, TipoEntero ancho, vector<Coord> vis) {
    int ch = rand() % 4 + 1;
    int cont;
    switch (ch)
    {
        case 1:
            cont = 0;
            for (int i = 0; i < vis.size(); i++) {
                if (m_PosX == vis[i].x && (m_PosY - 1) == vis[i].y) cont++;
            }
            if (cont == 0)
                if (m_PosY != 0)
                    m_PosY--;
            break;
        case 2:
            cont = 0;
            for (int i = 0; i < vis.size(); i++) {
                if (m_PosX == vis[i].x && (m_PosY + 1) == vis[i].y) cont++;
            }
            if (cont == 0)
                if (m_PosY != altura - 1)
                    m_PosY++;
            break;
        case 3:
            cont = 0;
            for (int i = 0; i < vis.size(); i++) {
                if ((m_PosX - 1) == vis[i].x && m_PosY == vis[i].y) cont++;
            }
            if (cont == 0)
                if (m_PosX != 0)
                    m_PosX--;
            break;
        case 4:
            cont = 0;
            for (int i = 0; i < vis.size(); i++) {
                if ((m_PosX + 1) == vis[i].x && m_PosY == vis[i].y) cont++;
            }
            if (cont == 0)
                if (m_PosX != ancho - 1)
                    m_PosX++;
            break;
        default:
            break;
    }
}
//setters
TipoString CRobot::mostrarPosicion() {
    return ", X = " + to_string(m_PosX) + " , Y = " + to_string(m_PosY);
}