//
// Created by Damiano Giusti on 26/10/16.
//

#include <iostream>

using namespace std;

typedef enum {
    FALSE, TRUE
} boolean;

void swap(float array[], int indexA, int indexB) {
    float temp = array[indexA];
    array[indexA] = array[indexB];
    array[indexB] = temp;
}

void sort(float array[], int size) {
    boolean swapped = TRUE;
    while (swapped) {
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

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;

    sort(array, length);

    float min = array[0];
    float max = array[length - 1];
    float avg = 0;

    int i;
    for (i = 0; i < length; i++)
        avg += array[i];
    avg /= length;

    cout<<"min: "<<min<<"; max: "<<max<<"; avg: "<<avg<<endl;

    return 0;

}