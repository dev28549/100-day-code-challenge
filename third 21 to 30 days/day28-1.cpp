#include <stdio.h>
int main() {
    int n, i, j, flag;
    printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    scanf("%d", &n);
    for(i=2;i<=n;i++) {
        flag=0;
        for(j=2;j<=i/2;j++) {
            if(i%j==0) {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ", i);
    }
    return 0;
}
