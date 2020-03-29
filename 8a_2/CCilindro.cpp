//
// Created by J on 16-Oct-19.
//

#include "CCilindro.h"

CCilindro::CCilindro(double radio, double altura) {
    this->radio = radio;
    this->altura = altura;
}

CCilindro::~CCilindro(){
}

decimal CCilindro::areaBases() {
    return 2 * pi * pow(this->radio, 2);
}

decimal CCilindro::areaLat(){
    return 2 * pi * this->radio * this->altura;
}
decimal CCilindro::areaTot(){
    return areaBases() + areaLat();
}
decimal CCilindro::volumen() {
    return (areaBases() / 2) * this ->altura;
}
void CCilindro::mostrarDatos(){

    cout << "Dimensiones cilindro:" << endl;
    cout << "Radio: " << radio << endl;
    cout << "Altura: " << altura << endl;
    cout << endl;
    cout << "Area Bases: " << areaBases()  << endl;
    cout << "Area Lateral: " << areaLat() << endl;
    cout << "Area Total: " << areaTot() << endl;
    cout << "Volumen: " << volumen() << endl;
}





