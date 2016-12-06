#include <stdio.h>
#include <stdlib.h>

void processInteger(int, int, FILE*);

int main() {
	const char* FILENAME = "numbersIndexes.txt";

	int array[] = { 35, 46, 77, 11, 9, 0 };
    const int length = 6;

	FILE *file = fopen(FILENAME, "w");
	int i;
    for (i = 0; i < length; i++)
    	processInteger(array[i], i, file);
	
	return fclose(file);
}

void processInteger(int value, int position, FILE *file) {
    printf("[%d] = %d\n", position, value);
    fprintf(file, "[%d] = %d\n", position, value);
}