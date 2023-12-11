#include<stdio.h>
int main(){
    int days,years;
    printf("Enter years:");
    scanf("%d",&years);
days=years*365;

//    days=days%30;
    printf("total days are:%d",days);
   int y1,d1;
    printf("\n Enter days:");
    scanf("%d",&d1);
  y1=d1/365;

//    days=days%30;
    printf("total years are:%d",y1);


}