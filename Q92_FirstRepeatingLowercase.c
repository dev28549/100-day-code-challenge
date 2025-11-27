\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        char s[1000];
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int seen[26] = {0};
        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            char c = s[i];
            if (c >= 'a' && c <= 'z') {
                if (seen[c - 'a']) {
                    printf("%c\n", c);
                    return 0;
                }
                seen[c - 'a'] = 1;
            }
        }
        printf("No repeating lowercase alphabet\n");
        return 0;
    }
