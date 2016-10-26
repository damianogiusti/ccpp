//
// Created by Damiano Giusti on 26/10/16.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;
    int i = 0;
    float sub = 0;
    for (i = 0; i < length; i++)
        sub -= array[i];

    printf("subtraction of array is: %.2f\n", sub);

    return 0;
}