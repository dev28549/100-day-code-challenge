#include <stdio.h>
int main() {
    int n, i, a[100], even=0, odd=0;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}
