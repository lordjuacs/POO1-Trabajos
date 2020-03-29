//
// Created by J on 26-Sep-19.
//

#ifndef INC_4B_6_FUNCIONES_H
#define INC_4B_6_FUNCIONES_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;
typedef int tipo_T;
typedef double tipo_F;
typedef void nada;
const tipo_T MIN = 1;
const tipo_T MAX = 30;

nada fillArray(tipo_T *array, tipo_T tamano){
    for(tipo_T i = 0; i < tamano; i++){
        array[i] = rand() % (MAX - MIN + 1) + 1;
    }
}

tipo_F media(tipo_T *array, tipo_T tamano){
    tipo_F result = 0;
    for(tipo_T i = 0; i < tamano; i++){
        result += array[i];
    }
    return result / tamano;
}

tipo_T moda(tipo_T *array, tipo_T tamano){
    tipo_T result = 0, max = 0;
    for(tipo_T i = 0; i < tamano; i++){
        tipo_T evaluar = array[i];
        tipo_T cont = 0;
        for(tipo_T j = 0; j < tamano; j++){
            if(array[j] == evaluar)
                cont++;
        }
        if(cont > max){
            max = cont;
            result = evaluar;
        }
    }
    return result;
}

int partition(int *a,int start,int end)
{
    int pivot=a[end];
    //P-index indicates the pivot value index

    int P_index=start;
    int i,t; //t is temporary variable

    //Here we will check if array value is
    //less than pivot
    //then we will place it at left side
    //by swapping

    for(i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
    }
    //Now exchanging value of
    //pivot and P-index
    t=a[end];
    a[end]=a[P_index];
    a[P_index]=t;

    //at last returning the pivot value index
    return P_index;
}
void Quicksort(int *a,int start,int end)
{
    if(start<end)
    {
        int P_index=partition(a,start,end);
        Quicksort(a,start,P_index-1);
        Quicksort(a,P_index+1,end);
    }
}

tipo_F mediana(tipo_T *array, tipo_T tamano){
    if(tamano % 2 == 0){
        tipo_T anterior = (tamano - 1) / 2;
        tipo_T posterior = tamano / 2;
        tipo_F result = 1.0*(array[anterior] + array[posterior]) / 2;
        return result;
    }
    else{
        tipo_F result = array[tipo_T(tamano/2)];
        return result;
    }
}

tipo_F desResMedia(tipo_T *array, tipo_T tamano, tipo_T posicion, tipo_F media){
    return fabs (array[posicion] - media);
}

tipo_F desMedia(tipo_T *array, tipo_T tamano, tipo_F media){
    tipo_F result = 0;
    for(tipo_T i = 0; i < tamano; i++){
        result += fabs(array[i] - media);
    }
    return result / tamano;
}

tipo_F varianza(tipo_T *array, tipo_T tamano, tipo_F media){
    tipo_F result = 0;
    for(tipo_T i = 0; i < tamano; i++){
        result += pow((array[i] - media), 2);
    }
    return result / tamano;
}

tipo_F desEst(tipo_T *array, tipo_T tamano, tipo_F media){
    tipo_F result = 0;
    for(tipo_T i = 0; i < tamano; i++){
        result += pow((array[i] - media), 2);
    }
    return pow((result / tamano), 0.5);
}

tipo_T index(tipo_T *array, tipo_T tamano, tipo_T buscar){
    tipo_T indice;
    for(tipo_T i = 0; i < tamano; i++){
        if(array[i] == buscar)
            return i;
    }
}


nada MENU(tipo_T *arreglo, tipo_T tamano){
    while(true){
        tipo_T respuesta;
        cout << "Buenos dias, las opciones son:" << endl;
        cout << "1. Media" << endl;
        cout << "2. Moda" << endl;
        cout << "3. Mediana" << endl;
        cout << "4. Desviacion respecto a la Media" << endl;
        cout << "5. Desviacion media" << endl;
        cout << "6. Varianza" << endl;
        cout << "7. Desviacion Estandar" << endl;
        cout << endl;
        cout << "8. Terminar el programa" << endl;
        cout << "Ingrese la opcion elegida:";
        cin >> respuesta;
        if(respuesta == 8) {
            cout << "Hasta luego." << endl;
            break;
        }
        else if(respuesta == 1){
            tipo_F val = media(arreglo, tamano);
            cout << "El valor de la media es:" << val << endl;
        }
        else if(respuesta == 2){
            tipo_T val = moda(arreglo, tamano);
            cout << "El valor de la moda es:" << val << endl;
        }
        else if(respuesta == 3){
            tipo_F val = mediana(arreglo, tamano);
            cout << "El valor de la mediana es:" << val << endl;
        }
        else if(respuesta == 4){
            tipo_T buscar;
            cout << "Indique el elemento a comparar:";
            cin >> buscar;
            tipo_T posicion = index(arreglo, tamano, buscar);
            tipo_F MEDIA = media(arreglo, tamano);
            tipo_F val = desResMedia(arreglo, tamano, posicion, MEDIA);
            cout << "El valor de la desviacion respecto a la media para " << buscar << " es:" << val << endl;

        }
        else if(respuesta == 5){
            tipo_F MEDIA = media(arreglo, tamano);
            tipo_F val = desMedia(arreglo, tamano, MEDIA);
            cout << "El valor de la desviacion media es:" << val << endl;
        }
        else if(respuesta == 6){
            tipo_F MEDIA = media(arreglo, tamano);
            tipo_F val = varianza(arreglo, tamano, MEDIA);
            cout << "El valor de la varianza es:" << val << endl;
        }
        else if(respuesta == 7){
            tipo_F MEDIA = media(arreglo, tamano);
            tipo_F val = desEst(arreglo, tamano, MEDIA);
            cout << "El valor de la desviacion estandar es:" << val << endl;
        }
        else{
            cout << "Opcion incorrecta, intentelo de nuevo" << endl;
        }
    }
}
#endif //INC_4B_6_FUNCIONES_H
