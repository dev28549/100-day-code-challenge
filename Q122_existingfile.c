#include <stdio.h>

int main() {
	printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    FILE *filePointer;
    char buffer[256];

    filePointer = fopen("info.txt", "r");

    if (filePointer == NULL) {
        printf("Error: Could not open info.txt for reading. Make sure the file exists.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);
    
    return 0;
}
