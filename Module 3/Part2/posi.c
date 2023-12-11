#include<stdio.h>
int main(){
    int num1;
    printf("enter num1:");
    scanf("%d",&num1);
    if(num1>0){
        printf("num1 is positive");

    }
    else if(num1<0){
        printf("num1 is negative");
    }
    else{
        printf("num1 is zero");
    }
}