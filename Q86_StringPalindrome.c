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
        int i = 0, j = n - 1;
        while (i < j) {
            if (s[i++] != s[j--]) {
                printf("Not Palindrome\n");
                return 0;
            }
        }
        printf("Palindrome\n");
        return 0;
    }
