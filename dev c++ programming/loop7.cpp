#include<stdio.h>
int main(){
int i,k,j;
printf("Name - dev choudhary \nSAP ID - 590028549 \nCourse - BCA \nBatch-B6");
printf("\n----------------------------------------------------------------\n");
for(i=5;i>=1;i--){
for(k=5;k>=i;k--){ // space
printf(" ");
}
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
}
