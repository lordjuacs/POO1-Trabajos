#include <iostream>
using namespace std;

int intercambiar(int n){
    int reves=0, digito_nuevo;
    while(n > 0){
        digito_nuevo = n % 10;
        reves = reves * 10 + digito_nuevo;
        n /= 10;
    }
    return reves;
}
int main() {
    int numero, nuevo;
    cout << "Ingrese un numero:";
    cin >> numero;
    nuevo = intercambiar(numero);
    cout << "Respuesta:" << nuevo << endl;
    return 0;
}