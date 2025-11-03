#include <stdio.h>

int main() {
    int num;
    
    printf("NAME-dev choudhary \n SAP ID-590028549 \N COURCE BCA \N BATCH-6");
    
    printf("\n---------------------------------\n");
    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check Even or Odd
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);

    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
