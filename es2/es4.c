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
	long long int mul = 1;
	while (!feof(file)) {
		int rowValue;
		fscanf(file, "%i", &rowValue);
		mul = mul * rowValue;
	}

	printf("\nItems multiplication: %lli (maybe over long long int limit)\n", mul);
}
