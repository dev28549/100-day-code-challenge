#include <stdio.h>
int main() {
printf("Name-dev choudhary\nSAPID-590028549\nCourse-BCA\nBatch-B6");
printf("\n------------------------------------------------------\n");
int n, i, pos=0, neg=0, even=0, odd=0;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for(i=0; i<n; i++) {
scanf("%d", &arr[i]);
if(arr[i] > 0) pos++;
else if(arr[i] < 0) neg++;
if(arr[i] % 2 == 0) even++;
else odd++;
}
printf("Positive numbers: %d\n", pos);
printf("Negative numbers: %d\n", neg);
printf("Even numbers: %d\n", even);
printf("Odd numbers: %d\n", odd);
return 0;
}