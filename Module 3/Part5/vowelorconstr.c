#include<stdio.h>
int main(){
    char str[100];
    int v=0,c=0,i=0;
    printf("Enter any string:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        if((str[i]>=65)&&(str[i]<=90)||(str[i]>=97)&&(str[i]<=122)){
            if(str[i]=='A'|| str[i]=='a' || str[i]=='E'|| str[i]=='e' || str[i]=='I'|| str[i]=='i' || str[i]=='O'|| str[i]=='o' || str[i]=='U'|| str[i]=='u'){
               v++;
    } 
    else{
        c++;
    }
  }
}
    printf("\n The total vowel are:%d",v);
    printf("\n The total consonant are:%d",c);
}