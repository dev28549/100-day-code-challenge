\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int n;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
        return 0;
    }
