#include <iostream>
using namespace std;

void imprimir_tiempo(long int entrada){
    int horas, minutos, segundos;
    horas = entrada / 3600;
    minutos = (entrada % 3600) / 60;
    segundos = (entrada % 3600) % 60;

    if(horas < 10)
        cout << "0";
    cout << horas << ":";
    if(minutos < 10)
        cout << "0";
    cout << minutos << ":";
    if(segundos < 10)
        cout << "0";
    cout << segundos << endl;
}
int main() {
    long int entrada;
    cout << "Ingresar el tiempo en segundos:";
    cin >> entrada;
    imprimir_tiempo(entrada);

    return 0;
}