// min to sec and hours:
#include<stdio.h>
int main(){
    float hours,min,sec;
    printf("Enter minitues");
    scanf("%f",&min);
    hours=min/60;
    printf("the total hours are:%f",hours);
    sec=hours*3600;
    printf("\n the total sec are:%f",sec);

}