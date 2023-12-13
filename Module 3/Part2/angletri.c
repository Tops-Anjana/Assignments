#include<stdio.h>
int main(){
   int a1,a2,a3,sum;
   printf("enter the values of angles:");
   scanf("%d %d %d",&a1,&a2,&a3);
   sum=a1+a2+a3;
   printf("\n the sum of angles:%d",sum);
   if(sum==180){
    printf("\n The triangle is formed.");
   }
   else{
    printf("Triangle will not be formed");
   }
}