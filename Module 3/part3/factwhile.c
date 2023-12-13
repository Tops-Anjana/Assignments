#include<stdio.h>
int main(){
    int i=1,fact=1,num1;
    printf("Enter number :");
    scanf("%d",&num1);
    while(i<=num1){
        fact=fact*i;
        i++;
    }
    printf("the factorial of given number is:%d",fact);
}