#include <stdio.h>
int main() {
	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Uppercase alphabet");
    else if (c >= 'a' && c <= 'z')
        printf("Lowercase alphabet");
    else if (c >= '0' && c <= '9')
        printf("Digit");
    else
        printf("Special character");
    return 0;
}