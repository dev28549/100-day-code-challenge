#include <stdio.h>
int main() {
    int n, i, a[100], sum=0;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}
