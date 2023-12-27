#include<stdio.h>
int main(){
    char str[100];
    int ch=0,dig=0,spch=0,i;
    printf("Enter any string:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
     if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122){
      ch++;
    
     }
     else if(str[i]>=48 && str[i]<=57){
        dig++;
     }
     else if(str[i]>=33 && str[i]<=47 ||str[i]>=58 && str[i]<=64 || str[i]>=92 && str[i]<=96){
        spch++;
     }
    else{
        printf("invalid");
    } 
    }
    printf("\n The total character are:%d",ch);
    printf("\n The total Digit are:%d",dig);
    printf("\n The total  special character are:%d",spch);
}