#include <stdio.h>

enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
    MONTH_COUNT
};

int main() {
	printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    const char *monthNames[] = {
        "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", 
        "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };
    
    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    
    int i;

    for (i = JANUARY; i < MONTH_COUNT; i++) {
        printf("%s has %d days.\n", monthNames[i], daysInMonth[i]);
    }

    return 0;
}