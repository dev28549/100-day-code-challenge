#include<stdio.h>
int main() {
printf("Name-dev choudhary\nSAPID-590028549\nCourse-BCA\nBatch-6");
printf("\n-----------------------------------------------------\n");
int x = 10;
printf("Outside block, x = %d\n", x);
{
int y = 20;
printf("Inside block, x = %d and y = %d\n", x, y);
}
return 0;
}