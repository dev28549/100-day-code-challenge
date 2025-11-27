\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) printf("%d", j);
            putchar('\n');
        }
        return 0;
    }
