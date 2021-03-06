//
// Created by Damiano Giusti on 26/10/16.
//
#include <iostream>

using namespace std;

int sums(int number) {
    if (number == 0)
        return 0;
    return number + sums(number - 1);
}

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;
    int weight = length;
    int i = 0;
    float avg = 0;
    for (i = 0; i < length; i++)
        avg += array[i] * (weight--);
    avg /= sums(length);

    cout<<"weighted average of array is: "<<avg<<endl;

    return 0;
}
