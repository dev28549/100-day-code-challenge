#include <stdio.h>
#include <string.h>

int main() {
	printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    FILE *filePointer;
    char fileName[100];
    char buffer[256];

    printf("Enter the file name to check and read: ");
    if (scanf("%s", fileName) != 1) {
        return 1;
    }

    filePointer = fopen(fileName, "r");

    if (filePointer == NULL) {
        printf("Error: File '%s' does not exist or could not be opened for reading.\n", fileName);
        return 1;
    }

    printf("\n--- Contents of %s ---\n", fileName);
    
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    printf("--------------------------\n");

    fclose(filePointer);

    return 0;
}



