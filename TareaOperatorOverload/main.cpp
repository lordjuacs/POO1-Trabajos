#include <iostream>
#include "CVector.h"





int main() {
    CVector p1(3);
    p1[0] = 4;
    p1[1] = 2;
    p1[2] = 1;
    //p1[3] = 6; //error
    CVector p2 (1, 3); //[1,1,1]
    p2 += p1; //[5,3,2]

    cout<< p1 + p2 <<endl;//[9,5,4]
    cout<< p1 * p2 <<endl; //[20,6,3]
    cout << (p1 ^ 2) << endl; // [16,4,1]

    cout<< (p1 == p2); // False
    return 0;
}