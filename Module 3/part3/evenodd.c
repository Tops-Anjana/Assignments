#include<stdio.h>
int main(){
    int num1,i,ec=0,oc=0,sumod=0,sumev=0;
   
    for(i=1;i<=5;i++){
         printf("Enter number::");
        scanf("%d",&num1);
    
    if(num1%2==0){
            ec++; 
            sumev+=num1;
    }
    else{
        oc++;
        sumod+=num1;
    }
}
printf("total even numbers are:%d",ec);
printf("\n Total odd numbers are:%d",oc);
printf("\n Summ odd :%d",sumod);
printf("\n Summ even:%d",sumev);

}