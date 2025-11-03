#include<stdio.h>
int main() {
printf("Name-dev choudhary\nSap id-590028549\nCourse-BCA\nBatch-B6");
printf("\n-------------------------------------------------------\n");
float population = 100000;
float rate = 0.10;
int i;
printf("Year\tPopulation\n");
for(i = 1; i <= 10; i++) {
population = population + (population * rate);
printf("%d\t%.0f\n", i, population);
}
return 0;
}