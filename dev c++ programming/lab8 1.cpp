#include<stdio.h>
int g = 10;
void display() {
printf("Inside display(), global variable g = %d\n", g);
}
int main() {
printf("Name-dev choudharyt\nSap id-590028549\nCourse-BCA\nBatch-B6");
printf("\n-------------------------------------------------------------\n");
printf("Inside main(), global variable g = %d\n", g);
display(); // Accessing global variable inside another function
g = g + 5;
printf("After modification, global variable g = %d\n", g);
return 0;
}