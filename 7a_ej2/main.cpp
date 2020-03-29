#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

vector <int> llenarVector(int tamano){
    vector <int> vec;
    for(int i = 0; i < tamano; i++)
        vec.push_back(rand() % (30 - 1 + 1) + 1);
    return vec;
}

/*void borrar(vector <int> &vec){
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] % 3 == 0)
            vec[i] = 0;

    }

}*/

void imprimir (vector <int> &vec){
    for(auto element : vec)
        cout << element << " ";
    cout << endl;
}


int main() {
    srand(time(NULL));
    int tamano;
    cout << "Ingrese el tamano del vector:";
    cin >> tamano;
    vector <int> vector1 = llenarVector(tamano);
    imprimir(vector1);
    //borrar(vector1);
    //imprimir(vector1);


    return 0;
}