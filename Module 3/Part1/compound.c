#include<stdio.h>
int main(){
    float amt,principle,time,com_int,rate;
    printf("Enter Principle ,time,rate :");
    scanf("%f %f %f",&principle,&time,&rate);
    amt=principle*((1+rate)/100)*time;
    com_int=amt=principle;
    printf("the Compounded interest is:%f",com_int);
}