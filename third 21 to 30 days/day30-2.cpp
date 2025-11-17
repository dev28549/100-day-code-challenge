#include <stdio.h>
int main() {
    int n, i, a[100], pos=0, neg=0, zero=0;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", pos, neg, zero);
    return 0;
}
