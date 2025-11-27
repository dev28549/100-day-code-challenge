\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int n;
        double sum = 0.0;
        printf("Enter number of terms n: ");
        if (scanf("%d", &n) != 1) return 0;

        int den = 3;
        for (int i = 1; i <= n; i++) {
            double num = 2.0 * i;
            sum += num / den;
            den += 4;
        }

        printf("Sum = %.6f\n", sum);
        return 0;
    }
