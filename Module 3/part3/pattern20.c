#include<stdio.h>
int main(){
    int row,col;
    for(row=0;row<=10;row++){
       for(col=0;col<=50;col++){
        if(row==11){
           printf("\n");  
        }
        else if(row==21){
            printf("\n");
        }
        else if((row==31)||(row==41)){
           printf("\n");
           continue;
           printf(".");
           
        }
        else
          printf(" %d ",row);
         // printf("\n");  
          row++;
       }      
    }
}