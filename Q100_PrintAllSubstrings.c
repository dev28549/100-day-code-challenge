\
    #include <stdio.h>
    #include <string.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        char s[1000];
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int n = (int)strcspn(s, "\n");
        s[n] = '\0';

        for (int i = 0; i < n; i++) {
            for (int len = 1; i + len <= n; len++) {
                for (int k = 0; k < len; k++) putchar(s[i + k]);
                putchar('\n');
            }
        }
        return 0;
    }
