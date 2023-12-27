#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter any two string:");
    scanf("%s",&str1);
     strcpy(str2,str1);
   // printf(" string 1:%s",str1);
    printf("Stringcopy is:%s",str2);
}