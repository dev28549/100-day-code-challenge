#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
	printf("name-dev choudhary\nsap id-590028549\nbatch-6\ncource-bca");
    printf("\n----------------------------------------\n");
    struct Student s;

    printf("Enter student name: ");
    if (scanf("%s", s.name) != 1) {
        return 1;
    }

    printf("Enter roll number: ");
    if (scanf("%d", &s.roll_no) != 1) {
        return 1;
    }

    printf("Enter marks: ");
    if (scanf("%f", &s.marks) != 1) {
        return 1;
    }

    printf("\n--- Student Data ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}


