#include<stdio.h>
#include<string.h>
 int main(){
 FILE *fp;
 char string[50];
   fp=fopen("C:\\SE-Assignment\\Module 3\\test.txt","r");
   if(fp == NULL){
    printf(" File test not found.");
   }
   else{
    printf("File created...");
    while(fgets(string,50,fp)!= NULL){
     printf("\n %s", string);
        }
        fclose(fp);
   }
 }