#include<stdio.h>
int main(){
    int days,months;
    printf("Enter days:");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("the months are %d months and  %d days",months,days);

}