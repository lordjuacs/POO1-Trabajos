//
// Created by J on 31-Oct-19.
//

#include "Album.h"
//constructores y destructor
//constructor sin parametros
Album::Album(){
    this->nombre = "mis vacaciones";
    this->tamano = 5;
    this->fotos = nullptr;
    this->fotos = new Foto[this->tamano];
    for(int i = 0; i < this->tamano; i++){
        this->fotos[i] = Foto();
    }
}

//constructor con tamano del album
Album::Album(int _tamano){
    this->nombre = "mis vacaciones";
    this->tamano = _tamano;
    this->fotos = nullptr;
    this->fotos = new Foto[_tamano];
    for(int i = 0; i < _tamano; i++){
        this->fotos[i] = Foto();
    }
}

//constructor con nombre, array y tamano
/*Album::Album(string _nombre, Foto * &_fotos, int _tamano){
    this->nombre = _nombre;
    this->tamano = _tamano;
    this->fotos = _fotos;
}*/

//destructor
Album::~Album(){
    delete [] this->fotos;
}

//setters
void Album::setNombre(string _nombre){
    this->nombre = _nombre;
}
/*void Album::setFotosyTamano(Foto * &_fotos, int _tamano){
    delete [] this->fotos;
    this->fotos = nullptr;
    this->tamano = _tamano;
    this->fotos = _fotos;

}*/

//getters
string Album::getNombre(){
    return this->nombre;
}
int Album::getTamano(){
    return this->tamano;
}

//metodos
Foto Album::getMayorResolucion(){
    Foto escogido;
    int maxPix = 0;
    for(int i = 0; i < tamano; i++){
        int tempPix = fotos[i].getResolucion().getTotalPixeles();
        if(tempPix > maxPix) {
            maxPix = tempPix;
            escogido.setNombre(fotos[i].getNombre());
            escogido.setFecha(fotos[i].getFecha());
            escogido.setResolucion(fotos[i].getResolucion());
        }
    }
    return escogido;
}
string Album::getFechaMasFotos(){
    string fecha_max = this->fotos[0].getFecha();
    vector<string> fechas_posibles;
    vector<string> todas_fechas;
    fechas_posibles.push_back(fecha_max);

    for(int i = 1; i < this->tamano; i++){
        string temp_fecha = this->fotos[i].getFecha();
        if(!(find(fechas_posibles.begin(), fechas_posibles.end(), temp_fecha) != fechas_posibles.end()))
            fechas_posibles.push_back(temp_fecha);
    }
    for(int i = 0; i < this->tamano; i++)
        todas_fechas.push_back(this->fotos[i].getFecha());

    int max_veces = 0;

    for(const auto& elemento :fechas_posibles){
        int contador = count (todas_fechas.begin(), todas_fechas.end(), elemento);
        if(contador > max_veces) {
            max_veces = contador;
            fecha_max = elemento;
        }
    }
    return fecha_max;

}
void Album::agregarFoto(const Foto& _foto) {
    for(int i = 0; i < this->tamano; i++){
        if(this->fotos[i].getNombre() == "NADA") {
            this->fotos[i] = _foto;
            break;
        }
    }
}