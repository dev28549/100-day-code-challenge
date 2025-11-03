#include <stdio.h>
int main() {
printf("Name-dev choudhary\nSAP ID-590028549\nCourse-BCA\nBatch-B6");
printf("\n-------------------------------------------\n");
int num;
printf("Enter a number to print its multiplication table: ");
scanf("%d", &num);
printf("\nMultiplication Table of %d:\n", num);
for (int i = 1; i <= 10; i++) {
printf("%d * %d = %d\n", num, i, num * i);
}
return 0;
}