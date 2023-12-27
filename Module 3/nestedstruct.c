#include<stdio.h>
struct employee{
    int empid;
    char name[20];
    float salary;
    struct department{
        int did;
        char dep_name[50];
    }dep; 
}; 
int main(){
    struct employee emp;
    printf("Enter Employee id,name,salary:");
    gets(emp.name);
    scanf("%d %f",&emp.empid,&emp.salary);
    printf("\n Enter department details:");
    scanf("%d %s",&emp.dep.did,&emp.dep.dep_name);
    printf("\n Employees details:-\n ");
    printf("\n Employee id :%d",emp.empid);
    printf("\n Employee name :%s",emp.name);
    printf("\n Employee salary :%f",emp.salary);
    printf("\n Employee deapartment id : %d",emp.dep.did);
    printf("\n Employee deapartment name: %s",emp.dep.dep_name);
}