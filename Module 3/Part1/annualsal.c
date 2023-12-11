#include<stdio.h>
int main(){
    float sal,annual_sal;
    printf("Enter person's salary of a month:");
    scanf("%f",&sal);
    annual_sal=sal*12;
    printf("the annual salary is:%f",annual_sal);
}