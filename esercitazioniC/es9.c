//
// Created by Damiano Giusti on 26/10/16.
//

#include <stdio.h>

typedef enum {
    TRUE, FALSE
} boolean;

void swap(float array[], int indexA, int indexB) {
    float temp = array[indexA];
    array[indexA] = array[indexB];
    array[indexB] = temp;
}

void sort(float array[], int size) {
    boolean swapped = TRUE;
    while (swapped == TRUE) {
        swapped = FALSE;
        int i;
        for (i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                swap(array, i, i + 1);
                swapped = TRUE;
            }
        }
    }
}

void printArray(float array[], int length) {
    printf("{");
    int i;
    for (i = 0; i < length; i++) {
        if (i == (length - 1))
            printf(" %.2f ", array[i]);
        else printf(" %.2f, ", array[i]);
    }
    printf("}");
}

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;

    printf("input array: ");
    printArray(array, length);

    sort(array, length);

    printf("\nsorted array: ");
    printArray(array, length);
    printf("\n");

    return 0;

}