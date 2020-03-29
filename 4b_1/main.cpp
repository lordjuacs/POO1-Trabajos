#include <iostream>
#include "funciones.h"
int main() {
    srand ( time ( NULL ) ) ;// semilla del random
    int k = 20;
    int *v1, *v2, *vsuma;
    v1 = new int[k];
    v2 = new int[k];
    vsuma = new int[k];
    for(int i = 0; i < k; i++){
        v1[i] = numero_random();
    }
    for(int i = 0; i < k; i++){
        v2[i] = numero_random();
    }
    for(int i = 0; i < k; i++){
        vsuma[i] = v1[i] + v2[i];
    }
    cout << "\tV1\tV2\tSUMA" << endl;
    for(int i = 0; i < k; i++){
        cout << i << "\t" << v1[i] << "\t" << v2[i] << "\t" << vsuma[i] << endl;
    }

    return 0;
}