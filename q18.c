#include <stdio.h>
int main() {
	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);
    if (per >= 90)
        printf("Grade A");
    else if (per >= 80)
        printf("Grade B");
    else if (per >= 70)
        printf("Grade C");
    else if (per >= 60)
        printf("Grade D");
    else
        printf("Grade F");
    return 0;
}