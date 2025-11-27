\
    #include <stdio.h>

    int main(void) {
        printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        int groups = 5;
        int counts[] = {1, 2, 3, 4, 1}; /* reasonable interpretation */
        for (int g = 0; g < groups; g++) {
            for (int i = 0; i < counts[g]; i++) {
                putchar('*');
                putchar('\n');
            }
            putchar('\n');
        }
        return 0;
    }
