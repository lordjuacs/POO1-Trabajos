#include <iostream>
#include <vector>
using namespace std;

bool esta_en_doble(int numero){
    int dobles = numero * 2;
    vector <int> original;
    vector <int> doble;
    while(numero > 0){
        int digito;
        digito = numero % 10;
        original.push_back(digito);
        numero /= 10;
    }
    while(dobles > 0){
        int digito;
        digito = dobles % 10;
        doble.push_back(digito);
        dobles /= 10;
    }
    for(auto elem : original){
        for(auto rev : doble){
            if(rev == elem)
                return true;
        }
    }
    return false;
}
int main() {
    int numero;
    cout << "Ingrese un numero:";
    cin >> numero;
    bool rpta = esta_en_doble(numero);
    if(rpta)
        cout << numero * 2 << " incluye digitos de " << numero << endl;
    else
        cout << numero * 2 << " NO incluye digitos de " << numero << endl;
    return 0;
}