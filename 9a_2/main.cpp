#include "CVector.h"
int main()
{
    //vector sin inicializar
    CVector vector1;
    //vector inicializado con tamaño 5 y elementos inicializados con 1
    CVector vector2(5, 1);
    //vector inicializado a partir de otro vector
    CVector vector3(vector2);//[1,1,1,1,1]
    //reemplazar el valor de un elemento
    vector3.setElemento(20, 0);//[20,1,1,1,1]
    //insertar elemento en una posicion especifica
    vector3.insertar(25, 4);//[20,1,1,1,25,1]
    //agregar elemento al final del vector
    vector3.agregar(10);//[20,1,1,1,25,1,10]
    //obtener el tamaño actual del vector
    entero n = vector3.getTamano();//n = 7
    for(int i = 0; i < n; i++)
        cout << vector3.getElemento(i) << endl;
    return 0;
}