#include<stdio.h>
int main(){
    int avg,total_exp,rent,elecbill,waterbill,medical,other;

    printf("enter the name and salary of emp1:");
    scanf("%d %d %d %d %d",&rent,&elecbill,&waterbill,&medical,&other);
     total_exp=rent+elecbill+waterbill+medical+other;
     avg=total_exp/5;
     printf("The total_expense are:%d and average Expense is:%d",total_exp,avg);
    }