#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("enter number num1,num2:");
    scanf("%d %d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("the values after swapping of num1= %d and num2= %d",num1,num2);
   int n1,n2;
    printf("\n enter number num1,num2:");
    scanf("%d %d",&n1,&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\n the values after swapping of n1= %d and n2= %d",n1,n2);


}