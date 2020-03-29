#include <iostream>
using namespace std;
int main(){
    int rpta, claro;
    double precio;
    cout << "ENTRADAS PARA CONCIERTO - GIANMARCO" << endl;
    cout << "ZONAS:" << endl;
    cout << "1. Super VIP" << endl << "2. VIP" << endl << "3. Preferencial" << endl << "4. General" << endl;
    cout << "Seleccione la zona que desea:";
    cin >> rpta;
    if(rpta == 1){
        precio = 212;
    }
    else if(rpta == 2){
        precio = 170;
    }
    else if(rpta == 3){
        precio = 136;
    }
    else {
        precio = 59;
    }
    cout << "Indique si es usuario Claro:" << endl;
    cout << "1. SI" << endl;
    cout << "2. NO" << endl;
    cout << "Respuesta:";
    cin >> claro;
    if(claro == 1){
        precio *= 0.8;
    }
    else {
        precio *= 1;
    }
    cout << "El precio de su entrada es: " << precio << endl;
    return 0;
}