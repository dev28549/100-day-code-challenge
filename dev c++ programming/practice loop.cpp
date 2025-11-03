/*#include<stdio.h>

int main() {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	
	
	
	for(int i=1; i<=10; i++ ) {
		printf("%d \n",n*i);

	}
	
	return 0;
}*/
#include <stdio.h>

int main() {
    int number;
 for (; 1; ) {

        printf("Enter an integer: ");
 scanf("%d", &number);
 if (number % 2 != 0) {
            printf("\nSuccess! You entered an odd number (%d). \n", number);
    break;
        } else {      printf("You entered an even number (%d). Please try again.\n\n", number);
        }
    }
printf("Program finished.\n");

    return 0;
}