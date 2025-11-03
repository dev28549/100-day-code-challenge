#include <stdio.h>

int main() {
    int a, b, c;

    // Input from user
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity of triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        // Check for Equilateral
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check for Isosceles
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        // Otherwise Scalene
        else {
            printf("The triangle is Scalene.\n");
        }

        // Check for Right-angled triangle (Pythagoras theorem)
        if ((a*a + b*b == c*c) || 
            (a*a + c*c == b*b) || 
            (b*b + c*c == a*a)) {
            printf("The triangle is also Right-angled.\n");
        }
    } 
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
