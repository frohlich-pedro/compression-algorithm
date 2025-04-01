#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	char* filename;
	if (argc > 1) {
		filename = *(argv + 1);
	}
	
	FILE* inputFile = fopen(filename, "r");
	if (inputFile == NULL) {
		printf("Could not open file\n");
		return -1;
	}

	while (getc(inputFile) != EOF) {

	}

	fclose(inputFile);

	/* aqui vai a lógica pra compressão */

	FILE* outputFile = fopen(("output-%s", filename), "w");
	if (inputFile == NULL) {
		printf("Could not open file");
		return -1;
	}
	
	fclose(outputFile);

	return 0;
}
