
    #include <stdio.h>

    int main(void) {
	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int n;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) sum += i;
        }

        if (sum == n) printf("Perfect\n");
        else printf("Not Perfect\n");

        return 0;
    }
