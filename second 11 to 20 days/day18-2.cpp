#include <stdio.h>
int main() {
    int a, b, i, hcf;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("HCF = %d\n", hcf);
    return 0;
}
