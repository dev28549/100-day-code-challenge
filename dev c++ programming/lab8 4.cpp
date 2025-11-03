#include <stdio.h>
void counter() {
static int count = 0;
count++;
printf("Count = %d\n", count);
}
int main() {
printf("Name-dev choudhary\nSAPID-590028549\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------------------\n");
counter();
counter();
counter();
return 0;
}