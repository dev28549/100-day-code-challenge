#include <stdio.h>
int main() {
    int n, i, bin[32];
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    i = 0;
    while (n > 0) {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", bin[i]);
    printf("\n");
    return 0;
}
