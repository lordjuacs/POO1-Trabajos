//(*a).
//a->


#include "Funciones.h" //implementar aqui las funciones
int main() {

    cout<<"Alumno:\n";
    CAlumno *a1 = new CAlumno();
    pedirDatosBasicos<CAlumno>(a1);

    cout<<"Profesor:\n";
    CProfesor* p1 = new CProfesor();
    pedirDatosBasicos<CProfesor>(p1);

    cout<<"Mostrar:\n";
    mostrarDatosBasicos<CAlumno>(a1);
    mostrarDatosBasicos<CProfesor>(p1);
    delete a1; delete p1;

    return 0;
    }
