\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int n;
        unsigned long long fact = 1;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        for (int i = 1; i <= n; i++) fact *= i;

        printf("%d! = %llu\n", n, fact);
        return 0;
    }
