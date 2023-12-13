#include<stdio.h>
int main(){
    int id,unit;
    float chg, surchg=0,gramt,netamt;
    char name[20];
    printf("Enter user id:");
    scanf("%d",&id);
    printf("Enter name of customer:");
    scanf("%s",&name);
    printf("Enter consumed unit:");
    scanf("%d",&unit);
    if(unit==350){
        chg=1.20;   
    }
    else if((unit>350) && (unit<=600)){
      chg=1.50;
    }
    else if((unit>600) && (unit<800)){
      chg=1.80;
    }
    else if(unit>=800){
       chg=2.00;   
    }
    gramt=unit*chg;
    netamt=gramt+surchg;  
    if (gramt>800){
        surchg=gramt*18/100.0;  
     netamt=gramt+surchg;  
}
    if(netamt<256){
        netamt=256;
}  
    printf("\n Electricity Bill");
    printf("\n Customer id: %d",id);
    printf("\n customer name: %s",name);
    printf("\n unit consumed: %d",unit);
    printf("\n charged applied: %f",chg);
    printf("\n Surcharged is %f",surchg);
    printf("\n the total bill is:%f",netamt);
}
