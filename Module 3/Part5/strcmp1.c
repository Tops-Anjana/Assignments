#include<stdio.h>
int main(){
    char str1[50],str2[50];
    int res,i;
    printf("\n Enter string1:");
    scanf("%s",&str1);
    printf("\n Enter string2:");
    scanf("%s",&str2);
    for(i=0;str1[i]==str2[i] && str1[i] =='\0';i++);
     if(str1[i]<str2[i]){
        printf("str1 is less then str2");
     }
     else if(str1[i]>str2[i]){
        printf("str1 is greater then str2");
     }
     else{
        printf("str1 and str2 are equal.");
     }
}