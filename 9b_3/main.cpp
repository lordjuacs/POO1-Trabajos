#include "CAlumno.h"
#include "CProfesor.h"
#include "funciones.h"

int main() {
    CAlumno * alumnos = nullptr;
    int n = pedirNumero();
    alumnos = new CAlumno[n];
    for(int i = 0; i < n; i++){
        alumnos[i].pedirDatos();
    }
    cout << "Mostrar alumnos:" << endl;
    for(int i = 0; i < n; i++){
        alumnos[i].mostrarDatos();
    }
    cout << "El mayor es:" << endl;
    CAlumno mayor = buscarMayor<CAlumno>(alumnos, n);
    mayor.mostrarDatos();

    return 0;
}