//
// Created by Damiano Giusti on 26/10/16.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;
    int i = 0;
    float sub = 0;
    for (i = 0; i < length; i++)
        sub -= array[i];

    cout<<"subtraction of array is: "<<sub<<endl;

    return 0;
}