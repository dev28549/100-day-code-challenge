\
    #include <stdio.h>
    #include <math.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int n;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        if (n <= 1) {
            printf("Not prime\n");
            return 0;
        }

        for (int i = 2; i <= (int)sqrt(n); i++) {
            if (n % i == 0) {
                printf("Not prime\n");
                return 0;
            }
        }
        printf("Prime\n");
        return 0;
    }
