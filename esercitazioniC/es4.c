//
// Created by Damiano Giusti on 26/10/16.
//


#include <stdio.h>

int main() {
    float array[] = {1.4, 4.67, 7.55, 11.1, 9.04, 0.75};
    int length = 6;
    int i = 0;
    float mul = 1.0;
    for (i = 0; i < length; i++)
        mul *= array[i];

    printf("multiplication of array is: %.2f\n", mul);

    return 0;
}