//Usando BFS (Breadth-first search): lo que hace esValida analizar todos los nodos vecinos antes de continuar con el siguiente.
//Siempre retorna la distancia mas corta
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//Sirve para almacenar una coordenada
class Point
{
public:
    int x;
    int y;
};

class vectorNodo
{
public:
    Point pt;  // Las coordenadas de una celda
    int dist;  // la distancia a la celda desde el origen
};
//este tipo de dato servira para poder almacenar las coordenadas candidatas en el vector
class Tupla
        {
public:
    Tupla(){};
    int x, y, dist;
};

// Revisa si una celda es valida valida o no
bool esValida(int row, int col, int filas, int columnas)
{
    // return true if row number and column number
    // is in range
    return (row >= 0) && (row < filas) && (col >= 0) && (col < columnas);
}

// Estos arrays se usan para tener el numero de filas y columnas de los 4 vecinos de cada celda
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};

// Es la funcion que encuentra el camino mas corto dentro de un laberinto con obstaculos
// Devuelve la distancia mas corta
int BFS(int ** matriz, int filas, int columnas, Point origen, Point destino, vector<Tupla> &CaminoPre)
    //CaminoPre va a almacenar todas las celdas visitadas posibles, para despues pasarlo por una funcion que de las validas
{
    // Revisa si el origen y el final tienen valor de 1 (sino no tiene sentido intentar encontrar la distancia)
    if (!matriz[origen.x][origen.y] || !matriz[destino.x][destino.y])
        return -1;

    bool visitado[filas][columnas];
    memset(visitado, false, sizeof visitado);

    // Marca la celda como visitada
    visitado[origen.x][origen.y] = true;

    // Crea un vector para intentar el algoritmo:
    vector<vectorNodo> q;

    // La distancia del origen al origen es 0
    vectorNodo s = {origen, 0};
    q.push_back(s);  // Se añade el nodo origen al vector

    //Se añade el nodo origen al vector CaminPre
    Tupla ori{};
    ori.x = origen.x;
    ori.y = origen.y;
    ori.dist = 0;
    CaminoPre.push_back(ori);

    // Se hace BFS empezando del origen
    while (!q.empty()) {
        vectorNodo curr = q.front();
        Point pt = curr.pt;

        // Si ya llegamos al destino, acaba todo
        if (pt.x == destino.x && pt.y == destino.y) {
            //se añade el destino al CaminoPre
            Tupla nodo;
            nodo.x = curr.pt.x;
            nodo.y = curr.pt.y;
            nodo.dist = curr.dist;
            CaminoPre.push_back(nodo);
            //Se devuelve la longitud del camino
            return curr.dist;
        }
        // Si no es el caso, eliminar el primer objeto y añadir los vecinos
        q.erase(q.begin());
        for (int i = 0; i < 4; i++) {
            int row = pt.x + rowNum[i];
            int col = pt.y + colNum[i];

            // Si la celda vecina es valida, tiene camino y aun no ha sido visitada, entonces añadirla al vector
            if (esValida(row, col, filas, columnas) && matriz[row][col] && !visitado[row][col]) {
                // marcar la celda como visitada y añadirla
                visitado[row][col] = true;
                vectorNodo Adjcell = {{row, col}, curr.dist + 1};
                //añadir la posible celda al CaminoPre
                Tupla coor;
                coor.x = row;
                coor.y = col;
                coor.dist = curr.dist + 1;
                CaminoPre.push_back(coor);
                q.push_back(Adjcell);
            }
        }

    }
    // Si el destino no se encontro, retornar -1
    return -1;
}


int main()
{
    int mat[filas][columnas] =
            {
                    { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
                    { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
                    { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
                    { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
                    { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
                    { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
                    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
                    { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
                    { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }
            };

    Point source = {0, 0};
    Point dest = {8, 1};
    vector<Tupla> previo;
    vector<Tupla> Final;
    //distancia minima desde el origen hasta el final (contando el origen y el final)
    int dist = BFS(mat, source, dest, previo);




    if (dist != -1) {
        cout << "El camino mas corto esValida: "<< dist + 1;

        //puntos por donde se desplaza el robot, se almacenan en el vector FINAL
        for(int i = 0; i < previo.size() - 1; i++){
            if(previo[i].dist + 1 == previo[i + 1].dist)
                Final.push_back(previo[i]);
        }
        Final.push_back(previo.back());

        cout << endl;
        for(int i = 0; i < Final.size(); i++){
            cout << i + 1  << "\tx: " << Final[i].x << "\ty: " << Final[i].y << endl;
        }
    }
    else
        cout << "No existe ningun camino";


    return 0;
}