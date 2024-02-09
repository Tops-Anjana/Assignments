#include<stdio.h>
int main(){
    char country[20];
    printf("Enter the name of Country:");
    scanf("%s",&country);
    printf("the country name its abbreviated from is: %c%c%c",country[0],country[1]);
}