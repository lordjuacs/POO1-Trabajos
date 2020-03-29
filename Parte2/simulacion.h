//
// Created by J on 29-Nov-19.
//

#ifndef PARTE2_SIMULACION_H
#define PARTE2_SIMULACION_H
#include "Tipos.h"


//liberar espacio de memoria de cualquier tipo de matriz
template<typename T>void liberarMatriz(T& matrix, int filas) {
    for (int i = 0; i < filas; i++)
        delete[] matrix[i];
    delete[] matrix;
    matrix = nullptr;
}


//menu permite la interaccion dinamica con el usuario
char menu() {
    char opcion;
    cout << "--------------------------\n";
    cout << "1- Seleccionar encuentro de robots\n";
    cout << "2- Salir\n";
    cout << "Elija opcion (1-2):";
    cin >> opcion;
    cout << endl;
    return opcion;
}


//la clase punto almacena una coordenada con "x" y "y"
class Point {
public:
    int x, y;
    Point() {
        x = 0;
        y = 0;
    };
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

//esta funcion llena una matriz con los obstaculos y el camino mas optimo (matriz de enteros)
void llenarMatriz(int**& matriz, const int filas, const int columnas, vector <Point>& obstaculos, vector <Point>& coordenadas) {
    matriz = new int* [filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 1;
        }
    }
    for (auto elemento : obstaculos)
        matriz[elemento.x][elemento.y] = 0;

    for (auto cosa : coordenadas)
        matriz[cosa.y][cosa.x] = 2;
    cout << "izi";
    return ;

}

// esta matriz convierte una matriz de enteros a una de chars, para que sea mas elegante la impresion final
void matrizChar(char**& arena, int**& matriz, int filas, int columnas) {
    arena = new char* [filas];
    for (int i = 0; i < filas; i++) {
        arena[i] = new char[columnas];
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == 1)
                arena[i][j] = '.';
            else if (matriz[i][j] == 2)
                arena[i][j] = char(175);
            else
                arena[i][j] = char(254);
        }
    }
}

void anadirObstaculos(const vector<CRobot*>&robots, vector<Point>&obstaculos, TipoEntero ox, TipoEntero oy, TipoEntero fx, TipoEntero fy){
    for(auto elemento : robots){
        if((elemento->getPosY() != ox and elemento->getPosX() != oy) and (elemento->getPosY() != fx and elemento->getPosX() != fy)){
            Point nuevo(elemento->getPosY(), elemento->getPosX());
            obstaculos.emplace_back(nuevo);
        }
    }
}

void difRobOb(char** &arena, vector<CRobot*>&robots,TipoEntero ox, TipoEntero oy,TipoEntero fx,TipoEntero fy){
    for(auto elemento : robots){
        if((elemento->getPosY() != ox and elemento->getPosX() != oy) and (elemento->getPosY() != fx and elemento->getPosX() != fy)){
            arena[elemento->getPosY()][elemento->getPosX()] = 'R';
        }
    }
}

//esta funcion crea lee el archivo indicado, cambia globalmente los valores de fila, columna y obstaculos. Ademas, en un vector por referencia
//almacenamos las coordenadas de todos los obstaculos
int txtAMatrizVector(const string& fichero, tipo_n& fil, tipo_n& col, tipo_n& tobs, vector <Point>& obstaculos)
{
    ifstream fi;
    fi.open(fichero);
    if (fi.is_open()) {
        fi >> fil >> col;
        fi >> tobs; // ya se cuentan los robots como obstaculos
        for (TipoEntero i = 0; i < tobs; i++)
        {
            TipoEntero xo, xy;
            fi >> xo >> xy;
            Point obs(xo, xy);
            obstaculos.push_back(obs);
        }
        fi.close();
        return 1;
    }
    else {
        cerr << "Error de lectura" << endl;
        return 0;
    }
}




//funcion para pedir origen y destino
Point pedirCoordenada(const string& palabra, int filas, int columnas) {
    Point coordenada{};
    int xi, yi;
    do {
        cout << "Ingrese las coordenadas de " << palabra << ":";
        cin >> xi >> yi;
    } while (xi < 0 or xi >= filas or yi < 0 or yi >= columnas);

    coordenada.x = xi;
    coordenada.y = yi;
    return coordenada;
}

// un struct es una estructura que almacena variables de diferentes tipos de dato. todo es publico
struct NODO
{
    // (x, y) representa las coordenadas de una celda
    int x, y;
    // parent (vector) almacena el NODO de la celda actual
    // solo tendra una coordenada
    vector<NODO> parent;
    // Como estamos usando struct, hay que "overload" algunos operadores
    //este retorna la igualdad entre dos coordenadas
    bool operator==(const NODO& ob) const
    {
        return x == ob.x && y == ob.y;
    }
    //este retorna si las filas son menor, o si son iguales las coordenadas
    bool operator<(const NODO& ob) const
    {
        return x < ob.x || (x == ob.x && y < ob.y);
    }

    //estas dos funciones bool permitiran que el set de NODOS este ordenado, asi que se restringe la posibilidad de "salto de nodos".
};

// Estas son todos los posibles movimientos desde una celda cualquiera
const int rowNum[] = { -1, 0, 0, 1 };
const int colNum[] = { 0, -1, 1, 0 };

// analiza la validez de una posicion cualquiera (si esta dentro de la matriz y si hay un obstaculo)
bool esValido(const int x, const int y, const vector<Point>& obstaculos, const int filas, const int columnas)
{
    int matrix[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrix[i][j] = 1;
        }
    }
    for (auto elemento : obstaculos)
        matrix[elemento.x][elemento.y] = 0;
    return (matrix[x][y] == 1 and (x >= 0 and x < filas) and (y >= 0 and y < columnas));
}

// funcion para imprimir el camino desde el origen hasta el destino
int imprimirCamino(vector<NODO> path, vector<Point>& coordenadas)
{
    //path es donde se almacena el camino
    if (path.empty())
        return 0;

    int len = imprimirCamino(path[0].parent, coordenadas) + 1;
    cout << "(" << path[0].y << ", " << path[0].x << ") ";
    Point coor(path[0].y, path[0].x);
    coordenadas.push_back(coor);
    //al mismo tiempo, en coordenadas se almacenan las celdas por donde se atraveso el camino
    return len;
}

// encuenntra la ruta mas corta en un laberinto N x M con obstaculos
int encontrarCamino(const int filas, const int columnas, const int ox, const int oy, const int fx, const int fy, const vector<Point>& obstaculos, vector<Point>& coordenadas)
{
    //se crea la arena

    int matrix[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrix[i][j] = 1;
        }
    }
    //se rellenan los obstaculos
    for (auto elemento : obstaculos)
        matrix[elemento.x][elemento.y] = 0;

    //se valida que el origen y el final no sean obstaculos
    if (!(matrix[ox][oy] && matrix[fx][fy]))
        return -1;
    // se crea un queue y se añade el nodo origen
    queue<NODO> q;
    NODO src = { ox, oy };
    q.push(src);
    // se crea un set para revisar si la celda ya fue visitada antes o no
    set<NODO> visited;
    visited.insert(src);
    // correra el siguiente algoritmo hasta que el queue este vacio(i.e. llegue al destino)
    while (!q.empty())
    {

        // elimina el nodo frontal y lo analiza
        NODO curr = q.front();
        q.pop();
        int i = curr.x;
        int j = curr.y;
        // si ya se llego al destino, imprimir el camino y la distancia mas corta
        if ((matrix[i][j]) && (i == fx) && (j == fy))
        {
            cout << "\nCON BFS:" << endl;
            cout << "--------------------------" << endl;
            int len = imprimirCamino({ curr }, coordenadas);
            return len;
        }
        //si no,
        //obtener el valor de la casilla actual
        // revisar los 4 posibles movimientos y recur para cada movimiento valido
        for (int k = 0; k < 4; k++)
        {
            // coordenadas de la siguiente celda
            int x = i + rowNum[k];
            int y = j + colNum[k];

            // revisar si es valido ir a la siguiente celda
            if (esValido(x, y, obstaculos, filas, columnas))
            {
                // se construye el nodo de la siguiente celda
                NODO next = { x, y, {curr} };

                // si aun no ha sido visitado
                if (!visited.count(next) && matrix[next.x][next.y])
                {
                    // meterlo en el queue y marcarlo como analizado
                    q.push(next);
                    visited.insert(next);
                }
            }
        }
    }

    // retornar -1 si el camino no existe
    return -1;
}

//encontrar camino

void CaminoFinal(const int filas, const int columnas, const int ox, const int oy, const int fx, int fy, const vector<Point>& obstaculos, vector<Point>& coordenadas) {
    int len = encontrarCamino(filas, columnas, ox, oy, fx, fy, obstaculos, coordenadas);
    if (len != -1) {
        cout << endl;
        cout << "Casillas del camino: " << len << endl;
    }
    else {
        cout << endl;
        cout << "No existe ningun camino. F.";
    }

}

//esta funcion imprime una matriz de cualquier tipo de datos
template<typename T>void imprimirMatriz(T& matrix, int filas, int columnas) {
    cout << endl;
    cout << setw(3) << ' ';
    for (auto j = 0; j < 21; ++j)
        cout << setw(3) << j;
    cout << '\n';
    for (auto i = 0; i < 21; ++i) {
        cout << setw(3) << i;
        for (auto j = 0; j < 21; ++j) {
            cout << setw(3) << matrix[i][j];
        }
        cout << '\n';
    }

}
#endif //PARTE2_SIMULACION_H
