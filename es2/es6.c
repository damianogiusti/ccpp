#include <stdio.h>
#include <stdlib.h>

typedef enum boolean {
	FALSE, TRUE
} boolean;

void readAndPrintFile(FILE*);

int main() {
	const char* FILENAME = "numbers.txt";

	FILE *file = fopen(FILENAME, "r");
	readAndPrintFile(file);
	return fclose(file);
}

void readAndPrintFile(FILE *file) {
	int max = 0;
	int min;
	boolean firstSet = FALSE;
	int count = 0;
	long int sum = 0;
	while (!feof(file)) {
		int rowValue;
		fscanf(file, "%i", &rowValue);
		if (rowValue > max)
			max = rowValue;
		if (!firstSet) {
			min = rowValue;
			firstSet = TRUE;
		} else if (rowValue < min)
			min = rowValue;
		sum += rowValue;
		count++;
	}

	double avg = sum / count;
	printf("\nItems max: %i\n", max);
	printf("\nItems min: %i\n", min);
	printf("\nItems average: %.3f\n", avg);
}
