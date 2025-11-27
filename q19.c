#include <stdio.h>
int main() {
	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    int a, b, c;
    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral triangle");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
    return 0;
}