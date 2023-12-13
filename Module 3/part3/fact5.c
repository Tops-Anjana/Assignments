#include<stdio.h>
int main(){
  int i,num1,fact=1,j=1;
  for(i=1;i<=5;i++){
  printf("Enter number :");
  scanf("%d",&num1);
    while(j<=num1){
      fact=fact*j;
      j++;
    } 
    printf("the factorial  of num  %d is : %d \n ",num1,fact);
 }
}