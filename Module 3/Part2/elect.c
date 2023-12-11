#include<stdio.h>
int main(){
    int id;
    float unit,total;
    char name[20];
    printf("Enter user id:");
    scanf("%d",&id);
    printf("Enter name of customer:");
    scanf("%s",&name);
    printf("Enter consumed unit:");
    scanf("%f",&unit);
    if(unit==350){
        total=unit*1.20;
        printf("the total bill is:%f",total);
    }
    else if((unit>350) && (unit<=600)){
      total=unit*1.50;
      printf("the total bill is:%f",total);
    }
    else if((unit>600) && (unit<800)){
      total=unit*1.80;
      printf("the total bill is:%f",total);
    }
    else if(unit>=800){
       total=unit*2.00;
       printf("the total bill is:%f",total);
    }
    else{
        
    }
}