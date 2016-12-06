#include <stdio.h>

typedef char* String;

void readAndPrintFile(FILE*);

int main() {
	const char* FILENAME = "numbers.txt";

	FILE *file = fopen(FILENAME, "r");
	readAndPrintFile(file);
	return fclose(file);
}

void readAndPrintFile(FILE *file) {
	int count = 0;
	long int sum = 0;
	while (!feof(file)) {
		int rowValue;
		fscanf(file, "%i", &rowValue);
		sum += rowValue;
		count++;
	}

	double avg = sum / count;
	printf("\nItems average: %.3f\n", avg);
}
