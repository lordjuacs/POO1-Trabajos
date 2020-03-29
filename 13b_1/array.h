//
// Created by J on 13-Nov-19.
//

#ifndef INC_13B_1_ARRAY_H
#define INC_13B_1_ARRAY_H


template <typename T>
class Array {
private:
    T *ptr;
    int size;
public:
    Array(int s);
    Array(T arr[], int s);
    T min();
    ~Array();
};


#include "array.cpp"

#endif //INC_13B_1_ARRAY_H
