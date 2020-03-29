#include "funciones.h"

int main() {
    typedef int entero;
    entero entrada1, entrada2;
    while(true){
        cout << "MENU" << endl;
        cout << "----" << endl;
        cout << "1. INGRESA PUNTOS AZUL" << endl;
        cout << "2. INGRESA PUNTOS ROJO" << endl;
        cout << "3. IMPRIME PUNTAJES" << endl;
        cout << "4. SALIR" << endl;
        cout << endl;
        cout << "Ingrese opcion (1-4): ";
        cin >> entrada1;
        if(entrada1 == 1) {
            cout << "Ingrese puntos equipo azul: ";
            cin >> entrada2;
            actualizaPuntosAzul(&entrada2);
            //entero azul = entrada;
        }
        else if(entrada1 == 2){
            cout << "Ingrese puntos equipo rojo: ";
            cin >> entrada2;
            actualizaPuntosRojo(&entrada2);
            //entero rojo;
        }
        //else if(entrada1 == 3)
           // imprimeTablaPuntos(&azul, &rojo);
        else{
            cout << "FIN DEL PROGRAMA";
            break;
        }
    }
    return 0;
}