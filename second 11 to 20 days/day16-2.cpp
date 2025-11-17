#include <stdio.h>
int main() {
    int n, temp, rev = 0, rem;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (n == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
    return 0;
}
