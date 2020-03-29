#include <iostream>
#include <string>
using namespace std;

bool jugadaReina(int c1, int n1, int c2, int n2){
    int tablero[8][8] = {{0,1,2,3,4,5,6,7}, {0,1,2,3,4,5,6,7}, {0,1,2,3,4,5,6,7}, {0,1,2,3,4,5,6,7}, {0,1,2,3,4,5,6,7},
                         {0,1,2,3,4,5,6,7}, {0,1,2,3,4,5,6,7}, {0,1,2,3,4,5,6,7}};
    //coordenada a capturar = tablero[c2][n2]
    // coordenada partida = tablero[c1][n1]
    //cout << c1 << n1 << endl;
    //cout << c2 << n2 << endl;
    //opcion arriba - abajo:
    for(int i = 0; i < 8; i++){
        if (c2 == c1 && n2 == i) {
            cout << "use arriba abajo" << endl;
            return true;
        }
    }
    //opcion derecha - izquierda:
    for(int elemento_fila = 0; elemento_fila < 8; elemento_fila++){ //es igual a for(auto & elemento_fila : tablero)
        if(tablero[elemento_fila][n1] == tablero[c2][n2]){
            cout << "use derecha izquierda" << endl;
            return true;
        }
    }
    //diago derecha pa arriba
    for(int i = 0, j = 0; i < 8; i++, j++){
       if(c2 == c1 + i && n2 == n1 + j){
           //cout << "use diago de1";
           return true;
       }
    }
    //diago izquierda pa abajo
    for(int i = 7, j = 7; i >= 0; i--, j--){
        if(c2 == c1 - i && n2 == n1 - j){
            //cout << "use diago de1";
            return true;
        }
    }
    //diago izquierda paarriba
    for(int i = 7, j = 0; i >= 0; i--, j++){
        if(c2 == c1 - i && n2 == n1 + j){
           //cout << "use diago iz1";
           cout <<"izi";
            return true;
        }
    }
    //diago derecha pa abajo
    for(int i = 0, j = 0; i < 8; i++, j++){
        if(c2 == c1 + i && n2 == n1 - j){
            //cout << "use diago de1";
            return true;
        }
    }
    return false;
}

int main() {
    string input1, input2;
    int casilla1a, casilla1b, casilla2a, casilla2b;
    while(true) {
        cout << "Ingrese la ubicacion de la reina:";
        cin >> input1;
        casilla1a = int(toupper(input1[0])) - 65;
        casilla1b = input1[1] - '0' - 1;
        if(casilla1a >= 0 && casilla1a <= 7 && casilla1b >= 0 && casilla1b <= 7)
            break;
        else {
            cout << "Error, las piezas no pueden estar fuera del tablero" << endl;
        }
    }
    while (true){
        cout << "Ingrese la ubicacion de la otra pieza:";
        cin >> input2;
        casilla2a = int(toupper(input2[0])) - 65;
        casilla2b = input2[1] - '0' - 1;
        if(casilla2a >= 0 && casilla2a <= 7 && casilla2b >= 0 && casilla2b <= 7)
            break;
        else {
            cout << "Error, las piezas no pueden estar fuera del tablero" << endl;
        }
    }
    if(casilla1a == casilla2a && casilla1b == casilla2b)
        cout << "Error, las piezas no pueden estar en la misma casilla" << endl;
    else {
        bool rpta = jugadaReina(casilla1a, casilla1b, casilla2a, casilla2b);
        if(rpta)
            cout << "SI puede ser tomada por la reina" << endl;
        else
            cout << "NO puede ser tomada por la reina" << endl;
    }
    return 0;
}