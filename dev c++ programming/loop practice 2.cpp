/*#include<stdio.h>
int main() {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	printf("%d \n", n);
	
	for(int i=0; i==1; i++) {
		if(n % 2 != 0){
		 break;
	}
	  
	}`
	
	 
	
	

	
}*/
/*#include <stdio.h>

int main() {
    int number;

    // --- The 'Infinite' for Loop Structure ---
    // 1. Initialization: (empty) - We don't need to initialize a counter variable.
    // 2. Condition: 1 - '1' means TRUE in C, so this condition is ALWAYS met.
    // 3. Increment: (empty) - We don't need to increment anything.
    for (; 1; ) {

        printf("Enter an integer: ");

        // Read the number from the user
        // We use a simple scanf here, without the advanced error checking,
        // to keep the code simpler for a beginner.
        scanf("%d", &number);

        // --- Check the Condition (Odd Number) ---
        // The modulo operator (%) gives the REMAINDER of a division.
        // If a number divided by 2 has a remainder NOT EQUAL to 0, it is odd.
        if (number % 2 != 0) {
            printf("\nSuccess! You entered an odd number (%d). \n", number);

            // --- The Exit Command ---
            // 'break' immediately stops the loop and moves the program
            // to the line of code right after the loop.
            break;
        } else {
            // If the number is even, print a message and the loop continues
            printf("You entered an even number (%d). Please try again.\n\n", number);
        }
    }

    // This line runs only AFTER the loop has been stopped by the 'break'
    printf("Program finished.\n");

    return 0;
}*/
#include<stdio.h>
int main() {
	int n;
	printf("enter a number :");
	scanf("%d", &n);
	
	
	
	for(int i=10; i>=1; i--) {
		printf("%d \n", n * i);
	}
	return 0;
}
