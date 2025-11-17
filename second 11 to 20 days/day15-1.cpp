#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial of %d = %lld\n", n, fact);
    return 0;
}
