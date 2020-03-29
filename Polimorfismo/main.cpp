#include <iostream>
#include <vector>
#include "funciones.h"
using namespace std;

template <class TP>
TP mayor(TP a, TP b){
    return (a > b)? a : b; // if a > b, return a; else return b.
}

int main() {
    cout << mayor<int>(6,8) << endl;
    cout << mayor<double >(6.5,8.8) << endl;
    cout << mayor<char>('B','A') << endl;
    cout << endl;
    vector <int> vector1;
    vector1.push_back(5);
    vector1.push_back(10);
    vector1.push_back(-9);
    for(int i = 0; i < vector1.size(); i++)
        cout << vector1[i] << endl;
    for(int elemento : vector1)
        cout << elemento << endl;

    return 0;
}



