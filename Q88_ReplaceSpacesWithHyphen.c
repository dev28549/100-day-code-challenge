\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        char s[1000];
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            if (s[i] == ' ') putchar('-');
            else putchar(s[i]);
        }
        putchar('\n');
        return 0;
    }
