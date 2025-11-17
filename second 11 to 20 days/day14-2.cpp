#include <stdio.h>
int main() {
    int n, i;
    long long product = 1;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
        product *= i;
    printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    return 0;
}
