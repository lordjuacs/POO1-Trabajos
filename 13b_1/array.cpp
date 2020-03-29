//
// Created by J on 13-Nov-19.
//
#include "array.h"



template <typename T>
Array<T>::Array(int s){
    size = s;
    ptr = new T[size];

}

template <typename T>
Array<T>::Array(T arr[], int s){
    size = s;
    ptr = new T[size];
    for(int i = 0; i < size; i++){
        ptr[i] = arr[i];
    }
}

template <typename T>
Array<T>::~Array(){
    delete [] ptr;
    ptr = nullptr;
}


template <typename T>
T Array<T>::min() {
    T minimo = ptr[0];
    for(int i = 1; i < size; i++){
        if(ptr[i] < minimo)
            minimo = ptr[i];
        // minimo = (ptr[i] < minimo)? ptr[i];
    }
    return minimo;
}

