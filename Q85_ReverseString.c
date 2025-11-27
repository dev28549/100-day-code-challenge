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
        for (int i = n - 1; i >= 0; i--) putchar(s[i]);
        putchar('\n');
        return 0;
    }
