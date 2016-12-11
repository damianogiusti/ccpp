#include "date.h"

char *twoDigitsNumberToString(int number) {
    char result[2];
    result[0] = number / 10 + '0';
    result[1] = number % 10 + '0';
    return result;
}

char *fourDigitsNumberToString(int number) {
    char result[4];
    result[0] = number / 1000 + '0';
    number /= 1000;
    result[1] = number / 100 + '0';
    number /= 100;
    result[2] = number / 10 + '0';
    result[3] = number % 10 + '0';
    return result;
}

char *stringifyDate(Date date) {
    char result[10];
}
