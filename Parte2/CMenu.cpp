//
// Created by J on 29-Nov-19.
//

#include "CMenu.h"
#include "simulacion.h"
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

enum class Opciones { Agregar = 1, Remover, Mostrar, Simulacion};


void limpiar() {
    system("cls");
}

void esperar() {
    char w;
    do {
        w = input<TipoCaracter>("Presione C y Enter para continuar...");
    } while (toupper(w) != 'C');
}

void Menu::imprimirMenu() {
    limpiar();
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Agregar un nuevo objeto\n";
    cout << "2. Remover objeto\n";
    cout << "3. Dibujar Mapa\n";
    cout << "4. Simulacion\n\n";
    cout << "0. Para Salir\n\n";
    cout << "Ingrese opcion:";
}


void Menu::agregarRobot() {
    auto    nombre = input<TipoString>("Ingrese Nombre : ");
    auto color = input<TipoCaracter>("Ingrese color (Un caracter): ");

    auto x = input<TipoEntero>("Ingrese posicion X : ");


    while (x < 0 || x >= m_BattleBox.getAncho()) {
        cout << "Posicion X Incorrecta, los limites son: 0, "
             << m_BattleBox.getAncho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    TipoEntero y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 0 || y >= m_BattleBox.getAncho()) {
        cout << "Posicion Y Incorrecta, los limites son: 0, "
             << m_BattleBox.getAltura() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }
    auto vidas = input<TipoEntero>("Ingrese vidas : ");
    auto danio = input<TipoEntero>("Ingrese daño : ");

    m_BattleBox.adicionarRobot(new CRobot(nombre, color, x, y, vidas, danio));
}

void Menu::agregarObstaculo() {
    auto    nombre = input<TipoString>("Ingrese Nombre : ");
    auto    tipo = input<TipoString>("Ingrese Tipo : ");
    auto color = input<TipoCaracter>("Ingrese color (Un caracter): ");

    auto x = input<TipoEntero>("Ingrese posicion X : ");


    while (x < 0 || x >= m_BattleBox.getAncho()) {
        cout << "Posicion X Incorrecta, los limites son: 0, "
             << m_BattleBox.getAncho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    TipoEntero y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 0 || y >= m_BattleBox.getAncho()) {
        cout << "Posicion Y Incorrecta, los limites son: 0, "
             << m_BattleBox.getAltura() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }
    auto danio = input<TipoEntero>("Ingrese daño : ");

    m_BattleBox.adicionarObstaculo(new CObstaculo(nombre, color, x, y, danio, tipo));
}

void Menu::agregarObjeto() {
    cout << "1. Agregar Robot\n" << "2. Agregar Obstaculo\n";
    int n;
    do { cin >> n; } while (n != 1 && n != 2);
    limpiar();
    if (n == 1) Menu::agregarRobot();
    else Menu::agregarObstaculo();
}

void Menu::removerRob() {
    auto nombre = input<TipoString>("Ingrese Nombre: ");

    m_BattleBox.removerRobot(nombre);
    esperar();
}

void Menu::removerObs() {
    auto nombre = input<TipoString>("Ingrese Nombre: ");

    m_BattleBox.removerObstaculo(nombre);
    esperar();
}

void Menu::removerObjeto() {
    cout << "1. Remover Robot\n" << "2. Remover Obstaculo\n";
    int n;
    do { cin >> n; } while (n != 1 && n != 2);
    limpiar();
    if (n == 1) Menu::removerRob();
    else Menu::removerObs();
}

void Menu::dibujarMapa() {
    int n;//robot a controlar
    int cont = 0;
    m_BattleBox.imprimirRobots(cout);
    cout << "Robot a controlar: "; cin >> n;
    while (1) {
        limpiar();
        m_BattleBox.actualizarBattleBox();
        m_BattleBox.dibujarBattleBox(cout);
        cout << '\n';
        m_BattleBox.imprimirRobots(cout);
        m_BattleBox.imprimirObs(cout);
        cout << '\n';
        m_BattleBox.mover(n);
        limpiar();
        for (int i = 0; i < m_BattleBox.m_Robots.size(); i++)
        {
            if ((m_BattleBox.m_Robots[i])->m_Vidas <= 0)
            {
                TipoString nombre = m_BattleBox.m_Robots[i]->getNombre();
                m_BattleBox.removerRobot2(nombre);
                if (i == n)
                {
                    cont = 1;
                }
            }
        }
        if (m_BattleBox.m_Robots.size() == 1) cont = 1;
        if (cont == 1) break;
    }
    m_BattleBox.actualizarBattleBox();
    m_BattleBox.dibujarBattleBox(cout);
    for (int i = 0; i < m_BattleBox.m_Robots.size(); i++)
    {
        m_BattleBox.m_Robots[i]->m_Vidas = m_BattleBox.m_Robots[i]->Vidas_i;
        m_BattleBox.m_Robots[i]->m_PosY = m_BattleBox.m_Robots[i]->PosY_i;
        m_BattleBox.m_Robots[i]->m_PosX = m_BattleBox.m_Robots[i]->PosX_i;
    }
    esperar();
}

void Menu::simulacionMapa()
{
    string fichero = m_BattleBox.pedirArchivo();
    char op = menu();
    do {
        TipoEntero filas = 21, columnas = 21, tobs = 0;
        vector<Point> obstaculos;
        vector<Point> nuevosPuntos;

        if (txtAMatrizVector(fichero, filas, columnas, tobs, obstaculos)) {
            if(op == '1') {
                m_BattleBox.imprimirRobots(cout);
                TipoEntero ox, oy, fx, fy;
                TipoEntero robot1, robot2;
                cout << "Roboto de partida:"; cin >> robot1;
                cout << "Robot de llegada:"; cin >> robot2;
                ox = m_BattleBox.m_Robots[robot1]->getPosY();
                oy = m_BattleBox.m_Robots[robot1]->getPosX();
                fx = m_BattleBox.m_Robots[robot2]->getPosY();
                fy = m_BattleBox.m_Robots[robot2]->getPosX();
                cout << "leyo bien, toca el juego" << endl;
                anadirObstaculos(m_BattleBox.m_Robots, obstaculos, ox, oy, fx, fy);
                CaminoFinal(filas, columnas, ox, oy, fx, fy, obstaculos, nuevosPuntos);
                cout <<"izi" << endl;
                int **matriz = nullptr;
                llenarMatriz(matriz, filas, columnas, obstaculos, nuevosPuntos);
                char **arena = nullptr;
                matrizChar(arena, matriz, filas, columnas);
                difRobOb(arena, m_BattleBox.m_Robots, ox, oy, fx, fy);
                imprimirMatriz<char **>(arena, filas, columnas);

                liberarMatriz<int **>(matriz, filas);
                liberarMatriz<char **>(arena, filas);

            }

        }
        op = menu();
    } while (op != '2');

}
void Menu::ejecutar() {
    do {
        imprimirMenu();
        cin >> m_Opcion;
        seleccionarOpcion();
    } while (m_Opcion != 0);
    cout << "Fin del programa...\n";
}

void Menu::seleccionarOpcion() {
    limpiar();
    switch (Opciones(m_Opcion)) {
        case Opciones::Agregar:  // Agregar Objeto
            agregarObjeto();
            break;
        case Opciones::Remover:  // Remover Objeto
            removerObjeto();
            break;
        case  Opciones::Mostrar: // Dibujando Tierra
            dibujarMapa();
            break;
        case Opciones::Simulacion:
            simulacionMapa();
            break;
    }
}

/*void Menu::acabar(){
        RenderWindow window(VideoMode(1000, 1000), "BattleBox - Lord Heider", Style::Close | Style::Resize);
        Font font;
        if(!font.loadFromFile("canvas.otf"))
        {
            //manejar el error
        }
        Text Titulo;
        Titulo.setFont(font);
        Titulo.setString("Gracias por la Ejecucion");
        Titulo.setFillColor(Color::White);
        Titulo.setCharacterSize(100);
        Titulo.setOrigin(50.0f, 50.0f);
        Titulo.setPosition(150.0f, 360.0f);

        Text Integrantes;
        Integrantes.setFont(font);
        Integrantes.setString("Made by:\nLuis Carbajal\nPaul Rios\nJoaquin Ramirez\n\nProfesor;\nHeider Sanchez ");
        Integrantes.setFillColor(Color::White);
        Integrantes.setCharacterSize(60);
        Integrantes.setOrigin(50.0f, 50.0f);
        Integrantes.setPosition(450.0f, 600.0f);
        while (window.isOpen())
        {
            Event evento{};
            while(window.pollEvent(evento))
            {
                switch(evento.type)
                {
                    case Event::Closed:
                        window.close();
                        break;
                        //case Event::Resized:
                        //  cout << "New windond width:" << evento.size.width << " New window height:" <<evento.size.height << endl;
                        //break;
                        //case Event::TextEntered:
                        //  if(evento.Titulo.unicode < 128)
                        //    cout << char(evento.Titulo.unicode);
                }
                if(evento.type == evento.Closed)
                    window.close();

            }


            window.clear();
            window.draw(Titulo);
            window.draw(Integrantes);
            window.display();
        }


}*/