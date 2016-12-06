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
	char buffer[255];

	int count = 0;
	while (!feof(file)) {
		String row = fgets(buffer, 255, file);
		printf("%s", row);
		count++;
	}

	printf("\nItems count: %i\n", count);
}
