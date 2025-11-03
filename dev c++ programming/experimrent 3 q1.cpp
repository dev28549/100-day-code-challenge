#include<stdio.h>
int main(){
printf("Name- dev choudhary\nSAP-ID-590028549\nCourse-BCA\nBatch-B6");
printf("\n-----------------------------------------------------\n");
int number;
printf("Enter an integer: ");
scanf("%d", &number);
if (number % 2 == 0) {
printf("%d is Even.\n", number);
} else {
printf("%d is Odd.\n", number);
}
return 0;
}