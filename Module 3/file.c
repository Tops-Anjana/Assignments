#include<stdio.h>
#include<string.h>
 int main(){
 FILE *fp;
 char string[]="Welcome to tops.";
   fp=fopen("C:\\SE-Assignment\\Module 3\\test.txt","w");
   if(fp == NULL){
    printf(" File test not found.");
   }
   else{
    printf("File created...");
   }
    if (strlen(string)>0){
      fputs(string,fp);
            fputs("\n",fp);
    }
    fclose(fp);
    printf("\n Data successfully written in file test.txt \n");
    printf("The file is now closed.");
 }