#include <stdio.h>
int main() {
    int n, temp, r, sum = 0, i, fact;
     printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }
    if (sum == temp)
        printf("Strong number");
    else
        printf("Not a strong number");
    return 0;
}
