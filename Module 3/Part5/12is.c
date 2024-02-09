// //Write a program in C to find the number of times a given word 'is' appears in the given string. 
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];//="THis is my house.";
    int i,s,count=0,space,times=0,k;
   printf("Enter any string:");
    //scanf("%s",&str);
   fgets(str,sizeof(str),stdin);
    while(str[count] != '\0'){
       count++;    
    }
    printf("%d\n ",count);
      printf("%d",strlen(str));
    for(k=0;k<=count-2;k++){
       // space =(str[k]==' ' || str[k]==' ');
        i =(str[k]== 'i' || str[k]=='I');
        s =(str[k+1]=='s' || str[k+1]== 'S');
        space =(str[k+2]==' ' || str[k+2]=='\0');
        if((space&&i&&s&&space) == 1)
            times++;
            //printf("%d",times);
    }
    printf("\n Occurance of the word 'is' :%d", times);
}