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

        char* fileContent = getc(inputFile);
	while (fileContent != EOF) {

	}

	fclose(inputFile);

	/* aqui vai a lógica pra compressão */
        char* compressedFile;

	FILE* outputFile = fopen(("output-%s", filename), "w");
	if (inputFile == NULL) {
		printf("Could not open file");
		return -1;
	}
        
	fprintf(outputFile, compressedFile);
        printf("File compressed!\n");
        
	fclose(outputFile);

	return 0;
}
