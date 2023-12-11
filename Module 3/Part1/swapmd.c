#include<stdio.h>
int main(){
int  n1,n2;
    printf("\n enter number num1,num2:");
    scanf("%d %d",&n1,&n2);
    n1=n1*n2;
    n2=n1/n2;
    n1=n1/n2;
    printf("\n the values after swapping of n1= %d and n2= %d",n1,n2);
}