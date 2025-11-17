#include <stdio.h>
int main() {
    int n, i, sum = 0;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += 2 * i - 1;
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
