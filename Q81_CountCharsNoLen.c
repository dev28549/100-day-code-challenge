\
    #include <stdio.h>

    int main(void) {
    	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
        char s[1000];
        printf("Enter a string (newline to end):\n");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int count = 0;
        for (int i = 0; s[i] && s[i] != '\n'; i++) count++;
        printf("Characters (excluding newline) = %d\n", count);
        return 0;
    }
