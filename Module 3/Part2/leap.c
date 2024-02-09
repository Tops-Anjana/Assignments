#include<stdio.h>
int main(){
    int year;
    printf("enter years:");
    scanf("%d",&year);
    if((year%400==0  || year%100!=0)&& (year%4==0)){
        printf("the year is leap year");
    }
    else{
        printf("the is not a leap year");
    }
   }