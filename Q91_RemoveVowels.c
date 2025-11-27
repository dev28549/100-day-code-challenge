\
    #include <stdio.h>

    int is_vowel(char c) {
        if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        char s[1000];
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            if (!is_vowel(s[i])) putchar(s[i]);
        }
        putchar('\n');
        return 0;
    }
