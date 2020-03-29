#include <iostream>
using namespace std;
typedef int T;
int main(){
    //1. Declarar un puntero normal a una variable normal de tipo T.
    T a = 10;
    T* pa = nullptr;
    pa = &a;

    //2. Declarar un puntero constante a una variable normal.
    T b = 20;
    T *const pb = &b;

    //3. Declarar un puntero normal a una constante de tipo T.
    const T c = 10;
    T  const * pc = nullptr;
    pc = &c;

    //4. Declarar un puntero constante a una constante T.
    const T d = 40;
    T const * const pd = &d;

    return 0;
}