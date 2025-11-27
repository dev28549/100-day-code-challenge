\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int n;
        printf("Enter size of square matrix n: ");
        if (scanf("%d", &n) != 1) return 0;

        long sum = 0;
        int x;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &x);
                if (i == j) sum += x;
            }
        }

        printf("Sum of main diagonal = %ld\n", sum);
        return 0;
    }
