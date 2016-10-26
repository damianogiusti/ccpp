//
// Created by Damiano Giusti on 26/10/16.
//

#include <stdio.h>

int main() {

    int array[] = { 35, 46, 77, 11, 9, 0 };
    int length = 6;
    int i = 0;
    for (i = 0; i < length; i++)
        printf("[%d] = %d\n", i, array[i]);

    return 0;
}
