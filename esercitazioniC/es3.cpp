//
// Created by Damiano Giusti on 26/10/16.
//

#include <iostream>

using namespace std;

int main() {
    int array[] = { 35, 46, 77, 11, 9, 0 };
    int length = 6;
    int i = 0, sub = 0;
    for (i = 0; i < length; i++)
        sub -= array[i];

    cout<<"subtraction of array is: "<<sub<<endl;

    return 0;
}