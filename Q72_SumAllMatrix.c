\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int r, c;
        printf("Enter rows and columns: ");
        if (scanf("%d %d", &r, &c) != 2) return 0;

        long sum = 0;
        int x;
        for (int i = 0; i < r * c; i++) {
            printf("Enter element %d: ", i);
            if (scanf("%d", &x) != 1) return 0;
            sum += x;
        }

        printf("Sum of all elements = %ld\n", sum);
        return 0;
    }
