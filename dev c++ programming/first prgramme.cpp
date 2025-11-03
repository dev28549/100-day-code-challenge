#include <stdio.h>   // Standard Input/Output header
#include <stdlib.h>  // Standard library (optional, for exit, malloc, etc.)

// Main function: Every C program starts from here
int main() {
    // Variable declaration
    int number;

    // Print a welcome message
    printf("Hello, World! This is my C program.\n");

    // Example: take input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Example: display output
    printf("You entered: %d\n", number);

    // Return 0 means program ran successfully
    return 0;
}
