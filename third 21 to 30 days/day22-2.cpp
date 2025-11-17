#include <stdio.h>
int main() {
    int n, i;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    float sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += (float)(2*i - 1) / (2*i);
    printf("Sum = %.2f", sum);
    return 0;
}
