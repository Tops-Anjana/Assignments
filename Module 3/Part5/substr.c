//Write a program in C to extract a substring from a given string.
#include<stdio.h>
int main(){
    int count=0,len,pos;
    char str1[20],str2[20];
    printf("Enter any string:");
    scanf("%s",&str1);
    printf("Enter position to exract:");
    scanf("%d",&pos);
    printf("Enter till which length you want that string:");
    scanf("%d",&len);
    while (count<len){
      str2[count] = str1[pos+count-1];
      count++;
   }
   str2[count] = '\0';
   printf("The substring retrieve is::%s",str2); 
}