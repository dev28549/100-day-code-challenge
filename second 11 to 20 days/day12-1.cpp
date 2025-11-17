#include <stdio.h>
int main() {
    int days;
     printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    float fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &days);
    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = (5 * 2) + (days - 5) * 4;
    else if (days <= 30)
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
    else
        printf("Membership Cancelled.\n");
    if (days <= 30)
        printf("Fine = ?%.2f\n", fine);
    return 0;
}
