//
// Created by Damiano Giusti on 26/10/16.
//
#include <stdio.h>

int fact(int number) {
    if (number == 0)
        return 0;
    return number + fact(number - 1);
}

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;
    int weight = length;
    int i = 0;
    float avg = 0;
    for (i = 0; i < length; i++)
        avg += array[i] * (weight--);
    avg /= fact(length);

    printf("weighted average of array is: %.2f\n", avg);

    return 0;
}
