#include<stdio.h>
int main(){
int i,j,k;
printf("Name - dev choudhary \nSAP ID - 590028549 \nCourse - BCA \nBatch-B6");
printf("\n----------------------------------------------------------------\n");
for(i=5;i>=1;i--){
for(k=1;k<=i;k++){ // space
printf(" ");
}
for(j=5;j>=i;j--){// first uper half
printf("%d",j);
}
for(j=i+1;j<=5;j++){// second upper half
printf("%d",j);
}
printf("\n");
}
for(i=1;i<=5;i++){
for(k=0;k<=i;k++){ // space
printf(" ");
}
for(j=5;j>=i+1;j--){
printf("%d",j);
}
for(j=i+2;j<=5;j++){//upper half
printf("%d",j);
}
printf("\n");
}
}