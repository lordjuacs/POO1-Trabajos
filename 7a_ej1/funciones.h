//
// Created by J on 04-Oct-19.
//

#ifndef INC_7A_1_FUNCIONES_H
#define INC_7A_1_FUNCIONES_H
#include <iostream>
#include <vector>
using namespace std;
typedef int number;

/*void ejemplo1() {
    number n;
    cout << "ingrese total de numeros: ";
    cin >> n;
    vector <number> vec(n);
    for (auto it = begin(vec); it != end(vec); ++it) {
        cout << "Ingresar el valor #"
             << distance(begin(vec), it) + 1

             << ": ";
        cin >> *it;
    }
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}*/

void imprimirReves(){
    number total;
    cout << "Ingrese total de numeros:";
    cin >> total;
    vector <int> vector1(total);
    for(auto iter = begin(vector1); iter != end(vector1); iter++) {
        cout << "Ingrese el numero #";
        cout << distance(begin(vector1), iter) + 1 << ":";
        cin >> *iter;

    }
    for(auto iter = end(vector1) - 1; iter != begin(vector1) - 1; iter--)
        cout << *iter << " ";

}
#endif //INC_7A_1_FUNCIONES_H
