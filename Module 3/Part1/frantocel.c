#include<stdio.h>
int main(){
    float fran,cel;
    printf("Enter the degree in Fahrenheit: ");
    scanf("%f",&fran);
    cel=(fran-32)*5/9;
    printf("Celsius degree is:%f",cel);
}