#include<stdio.h>
int g = 20;
void test() {
int l = 5;
printf("Inside test(): local l = %d, global g = %d\n", l, g);
}
int main() {
printf("Name-dev choudhary\nSAPID-590028549\nCourse-BCA\nBatch-B6");
printf("\n---------------------------------------------------\n");
test();
printf("Accessing global variable g in main() = %d\n", g);
return 0;
}