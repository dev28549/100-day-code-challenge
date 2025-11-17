#include <stdio.h>
int main() {
    int i, j, k;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    for(i=5;i>=1;i--) {
        for(j=5;j>i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
