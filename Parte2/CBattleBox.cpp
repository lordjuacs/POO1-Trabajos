//
// Created by J on 29-Nov-19.
//

#include "CBattleBox.h"


void CBattleBox::resizePlano(TipoEntero pAltura, TipoEntero pAncho) {
    m_Plano.resize(pAltura);
    for (auto& item : m_Plano)
        item.resize(pAncho);
}
CBattleBox::CBattleBox() {
    /*m_Plano.resize(ALTURA);
    for (auto& item: m_Plano)
        item.resize(ANCHO);*/
    resizePlano(ALTURA, ANCHO);
}
CBattleBox::CBattleBox(TipoEntero pAltura, TipoEntero pAncho) {
    /*m_Plano.resize(pAltura);
    for (auto& item: m_Plano)
        item.resize(pAncho);*/
    resizePlano(pAltura, pAncho);
}
CBattleBox::~CBattleBox() {}
void CBattleBox::adicionarRobot(CRobot* pRobot) {
    m_Robots.emplace_back(pRobot);
}

void CBattleBox::adicionarObstaculo(CObstaculo* pObstaculo) {
    m_Obstaculos.emplace_back(pObstaculo);
}

void CBattleBox::removerRobot(TipoString pNombre) {
    for (int i = 0; i < m_Robots.size(); i++)
    {
        if (m_Robots[i]->getNombre() == pNombre) {
            m_Robots.erase(m_Robots.begin() + i);
            cout << "Se removio el Robot" << endl;
            return;
        }
    }
    cout << "No se encontro el Robot" << endl;
}

void CBattleBox::removerRobot2(TipoString pNombre) {
    for (int i = 0; i < m_Robots.size(); i++)
    {
        if (m_Robots[i]->getNombre() == pNombre) {
            m_Robots.erase(m_Robots.begin() + i);
            return;
        }
    }
}

void CBattleBox::removerObstaculo(TipoString pNombre) {
    for (int i = 0; i < m_Robots.size(); i++)
    {
        if (m_Obstaculos[i]->getNombre() == pNombre) {
            m_Obstaculos.erase(m_Obstaculos.begin() + i);
            cout << "Se removio el Obstaculo" << endl;
            return;
        }
    }
    cout << "No se encontro el Obstaculo" << endl;
}

void CBattleBox::imprimirRobots(ostream& os) {
    os << "Robots: " << endl;
    int i = 0;
    for (auto& item : m_Robots) {
        os << "* * * * * * [" << i << "] ";
        os << " Nombre = " << item->getNombre() << " "
           << item->mostrarPosicion()
           << " , Color = " << item->getColor() << " "
           << ", Vidas = " << item->m_Vidas << " "
           << ", Daño = " << item->m_int_poder << "\n";
        i++;
    }
}

void CBattleBox::imprimirObs(ostream& os) {
    cout << "\nObstaculos: " << endl;
    int i = 0;
    for (auto& item : m_Obstaculos) {
        os << "* * * * * * [" << i << "] ";
        os << " Nombre = " << item->getNombre()
           << " , Tipo = " << item->getTipo() << " "
           << item->mostrarPosicion()
           << " , Color = " << item->getColor() << " "
           << ", Daño = " << item->getDanio() << "\n";
        i++;
    }
}

void CBattleBox::actualizarBattleBox() {
    for (auto& row : m_Plano)
        for (auto& cell : row)
            cell = COLOR;

    for (auto& item : m_Obstaculos)
        m_Plano[item->getPosY()][item->getPosX()]
                = item->getColor();

    for (auto& item : m_Robots)
        m_Plano[item->getPosY()][item->getPosX()]
                = item->getColor();
}


void CBattleBox::dibujarBattleBox(ostream& os) {
    os << '\n';
    os << setw(3) << ' ';
    for (auto j = 0; j < getAncho(); ++j)
        os << setw(3) << j;
    os << '\n';

    for (auto i = 0; i < getAltura(); ++i) {
        os << setw(3) << i;
        for (auto j = 0; j < getAncho(); ++j) {
            os << setw(3) << m_Plano[i][j];
        }
        os << '\n';
    }
}
//para mayor interaccion, el usuario puede elegir por si mismo el archivo que desea leer
string CBattleBox::pedirArchivo() {
    ofstream file;
    file.open("../laberintos/archivo1.txt");
    file << ANCHO << " " << ALTURA << endl;
        file << m_Obstaculos.size() << endl;
        for (auto elemento : m_Obstaculos)
            file << elemento->getPosY() << " " << elemento->getPosX() << endl;

        file.close();

        string fichero = "../laberintos/archivo1.txt";
        return fichero;
    }


void CBattleBox::simulacionCamino(){

}


TipoEntero CBattleBox::getAltura() {
    return m_Plano.size();
}

TipoEntero CBattleBox::getAncho() {
    return m_Plano[0].size();
}

void CBattleBox::mover(int n) {
    int m = -1;
    visitado.clear();
    for (int i = 0; i < m_Robots.size(); i++) {
        for (int j = 0; j < m_Robots.size(); j++) {
            Coord punto(m_Robots[j]->getPosX(), m_Robots[j]->getPosY(), j);
            visitado.push_back(punto);
        }
        if (i == n) {
            m = m_Robots[i]->moverse(ALTURA, ANCHO, visitado);
            if (m != -1) {
                m_Robots[i]->m_Vidas -= m_Robots[m]->m_int_poder;
                m_Robots[m]->m_Vidas -= m_Robots[i]->m_int_poder;
            }
        } else m_Robots[i]->moverseRand(ALTURA, ANCHO, visitado);
    }

    for (int i = 0; i < m_Robots.size(); i++) {
        for (int j = 0; j < m_Obstaculos.size(); j++) {
            if (m_Robots[i]->getPosX() == m_Obstaculos[j]->getPosX() &&
                m_Robots[i]->getPosY() == m_Obstaculos[j]->getPosY())
                m_Robots[i]->m_Vidas = m_Robots[i]->m_Vidas - m_Obstaculos[j]->getDanio();
        }
    }
}