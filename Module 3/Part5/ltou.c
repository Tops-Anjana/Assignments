#include<stdio.h>
int main(){
    char str[50];
    int i,ch,count;
    printf("Enter any string");
  for(i=0;(str[i]=getchar())!='\n';i++){
     ;
    }
    str[i]='\0';
    count=i;
    printf("the enter string is: %s",str);
    printf("\n");
  
    for(i=0;i<count;i++){
    ch=islower(str[i])? toupper(str[i]) : tolower(str[i]);
        putchar(ch);
}   
}