\
    #include <stdio.h>

    int main(void) {
        printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        for (int i = 1; i <= 5; i++) {
            for (int j = 0; j < 2 * i - 1; j++) putchar('*');
            putchar('\n');
        }
        for (int i = 4; i >= 1; i--) {
            for (int j = 0; j < 2 * i - 1; j++) putchar('*');
            putchar('\n');
        }
        return 0;
    }
