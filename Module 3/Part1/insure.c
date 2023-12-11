#include<stdio.h>
int main(){
    float sal,rem_sal,ip,loan;
    printf("Enter salary:");
    scanf("%f",&sal);
    ip=sal-0.1;
    loan=sal=0.1;
    rem_sal=ip-loan;
    printf("the remaining salary is:%f",rem_sal);
}