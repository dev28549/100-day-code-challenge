#include <stdio.h>
int main() {
	 printf("name-dev choudhary\nsap id-590028549\batch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    int total, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &total);
    h = total / 3600;
    total = total % 3600;
    m = total / 60;
    s = total % 60;
    printf("Time = %02d:%02d:%02d", h, m, s);
    return 0;
}