#include<stdio.h>
int main(){
printf("Name- dev choudhary\nSAP-ID-590028549\nCourse-BCA\nBatch-B6");
printf("\n-----------------------------------------------------\n");
float weight_kg, height_m, bmi;
printf("Enter your weight in kilograms (kg): ");
scanf("%f", &weight_kg);
printf("Enter your height in meters (m): ");
scanf("%f", &height_m);
bmi = weight_kg / (height_m * height_m);
printf("\nYour BMI is: %.2f\n", bmi);
if (bmi < 15.0) {
printf("Category: Starvation\n");
} else if (bmi >= 15.1 && bmi <= 17.5) {
printf("Category: Anorexic\n");
} else if (bmi >= 17.6 && bmi <= 18.5) {
printf("Category: Underweight\n");
} else if (bmi >= 18.6 && bmi <= 24.9) {
printf("Category: Ideal\n");
} else if (bmi >= 25.0 && bmi <= 25.9) {
printf("Category: Overweight\n");
} else if (bmi >= 30.0 && bmi <= 39.9) {
printf("Category: Obese\n");
} else if (bmi >= 40.0) {
printf("Category: Morbidly Obese\n");
} else {
printf("Category: Unspecified\n");
}
return 0;
}