#include <stdio.h>
int main() {
    float cp, sp, profit, loss, percent;
    printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if(sp > cp) {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit Percentage = %.2f%%", percent);
    } else if(cp > sp) {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss Percentage = %.2f%%", percent);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
