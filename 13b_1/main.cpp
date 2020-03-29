#include <iostream>
using namespace std;
#include "array.h"

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    arr[0]= 12;
    int x = a.min();
    cout << x;
    return 0;
}