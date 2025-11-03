#include<stdio.h>
int main(){
int i,j,k;
printf("Name - dev choudhary \nSAP ID - 590028549 \nCourse - BCA \nBatch-B6");
printf("\n----------------------------------------------------------------\n");
for(i=1;i<=5;i++){
for(k=1;k<=i;k++){
printf(" ");
}
for(j=5;j>=i;j--){
printf("%d",j);
}
printf("\n");
}
}