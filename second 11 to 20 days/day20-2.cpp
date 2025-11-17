#include <stdio.h>
#include <string.h>
int main() {
    char bin[100];
    int i;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a binary number: ");
    scanf("%s", bin);
    for (i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
    }
    printf("1's Complement = %s\n", bin);
    return 0;
}
