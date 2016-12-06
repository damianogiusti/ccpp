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
	int sum = 0;
	while (!feof(file)) {
		int rowValue;
		fscanf(file, "%i", &rowValue);
		sum += rowValue;
	}

	printf("\nItems sum: %i\n", sum);
}
