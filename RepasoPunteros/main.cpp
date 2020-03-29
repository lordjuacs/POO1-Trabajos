#include <iostream>
using namespace std;
typedef int entero;

int main() {
    entero *p = nullptr, **q = nullptr;
    p = new entero;
    *p = 20;
    q = &p;
    cout << &p << endl;
    cout << q << endl;
    return 0;
}
