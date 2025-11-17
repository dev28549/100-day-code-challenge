#include <stdio.h>
int main() {
    int n, sum = 0, rem;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
