#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10, digits);
    swapped = last * pow(10, digits) + (num % (int)pow(10, digits)) / 10 * 10 + first;
    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}
