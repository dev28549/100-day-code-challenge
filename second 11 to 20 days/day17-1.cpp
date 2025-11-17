#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, rem, digits = 0;
    int sum = 0;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    if (sum == n)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
