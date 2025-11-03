#include<stdio.h>
int main(){
printf("Name- dev choudhary\nSAP-ID-590028549\nCourse-BCA\nBatch-B6");
printf("\n-----------------------------------------------------\n");
float a, b, c;
printf("Enter the three sides of the triangle:\n");
scanf("%f %f %f", &a, &b, &c);
if ((a + b > c) && (a + c > b) && (b + c > a)) {
printf("The triangle is VALID.\n");
if (a == b && b == c) {
printf("The triangle is EQUILATERAL.\n");
}
else if (a == b || b == c || a == c) {
printf("The triangle is ISOSCELES.\n");
}
else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
printf("The triangle is RIGHT-ANGLED.\n");
}
else {
printf("The triangle is SCALENE.\n");
}
} else {
printf("The triangle is NOT VALID.\n");
}
return 0;
}