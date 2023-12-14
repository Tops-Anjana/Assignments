#include<stdio.h>
#include<string.h>
int main(){
    int i,count=0;
    char str[30];
    printf("Enter the string");
    scanf("%s[^\n]",&str);
    for (i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}