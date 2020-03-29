#include <iostream>
#include <vector>
using namespace std;

vector <int> primosHasta(int a, int b){
    vector <int> vector1;
    int i;
    if(a > 1)
        i = a;
    else
        i = 2;
    for(i; i <= b; i++){
        bool bandera = true;
        for (int j = 2; j < i ; j++) {
            if (i % j == 0)
                bandera = false;
        }
        if(bandera)
            vector1.push_back(i);

    }
    return vector1;
}



int main() {
    int a, b;
    do{
        cout << "Ingrese valor de a:";
        cin >> a;
        cout << "Ingrese valor de b:";
        cin >> b;
    }while (a >= b);
    vector <int> vec = primosHasta(a, b);
    if(vec.empty())
        cout << "No existen numeros primos desde " << a << "hasta " << b << endl;
    else{
        cout << "Los numeros primos desde " << a << "hasta " << b << " son:" << endl;
        for(auto element : vec)
            cout << element << " ";
    }
    cout << endl;

    return 0;
}