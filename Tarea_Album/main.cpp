#include "Foto.h"
#include "Album.h"
#include "Resolucion.h"
int main (){
    Album * album;
    int n;
    cout <<" Ingrese numero de fotos en el album :";
    cin >>n;

//1- Crear la clase Album
// con un constructor que cree un arreglo dinamico para n fotos
    album = new Album (n);
    album->setNombre("Mis vacaciones ");

    for(int i = 0; i < n; i++){
//2- Crear la clase Foto con sus respectivos atributos
//Profesor, altere un poquito el codigo base porque los atributos los use como privados.
        Foto foto;
        string nombre, fecha;
        int ancho, alto;
        Resolucion  resolucion;
        cout <<" Ingrese nombre de foto #" << i + 1 << ":";
        cin >> nombre;
        foto.setNombre(nombre);
        cout <<" Ingrese fecha de capturade foto #" << i + 1 << ":";
        cin >> fecha;
        foto.setFecha(fecha);
        cout <<" Ingrese resolucion(ancho):";
        cin >> ancho;
        cout <<" Ingrese resolucion(alto):";
        cin >> alto;
        resolucion.setAncho(ancho);
        resolucion.setAlto(alto);
        foto.setResolucion(resolucion);

//3- Agregar la foto al album
        album->agregarFoto(foto);
    }

// 4- Buscar la imagen con mayor resolucion ( ancho x alto )
    Foto fotoMayor = album->getMayorResolucion();
    cout << "Foto con la mayor resolucion:";
    fotoMayor.mostrar();

// 5- En que fecha se tomaron mas fotos ?
    string fechaMayor = album->getFechaMasFotos();
    cout << endl << "Fecha en la que se tomaron mas fotos : " << fechaMayor << endl ;
    delete album;

    return 0;
}