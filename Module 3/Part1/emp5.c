#include<stdio.h>
int main(){
    int avg,total_sal,s1,s2,s3,s4,s5;
    char emp1[20],emp2[20],emp3[20],emp4[20],emp5[20];
    printf("enter the name and salary of emp1:");
    scanf("%s %d",&emp1,&s1);
    printf("enter the name and salary of emp2:");
    scanf("%s %d",&emp2,&s2);
    printf("enter the name and salary of emp3:");
    scanf("%s %d",&emp3,&s3);
    printf("enter the name and salary of emp4:");
    scanf("%s %d",&emp4,&s4);
    printf("enter the name and salary of emp5:");
    scanf("%s %d",&emp5,&s5);
  total_sal=s1+s2+s3+s4+s5;
  avg=total_sal/5;
  printf("The total salary are:%d  and average salary is:%d",total_sal,avg);

}