\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        long n;
        printf("Enter a number: ");
        if (scanf("%ld", &n) != 1) return 0;

        if (n < 0) n = -n;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        printf("Sum of digits = %d\n", sum);
        return 0;
    }
