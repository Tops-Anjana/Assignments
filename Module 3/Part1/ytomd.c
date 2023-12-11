#include<stdio.h>
int main(){
    int days,months,years;
    printf("Enter years:");
    scanf("%d",&years);
    months=years*12;
    days=days%30;
    printf("the months are %d months and  %d days",months,days);

}