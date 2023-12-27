// //Write a program in C to find the number of times a given word 'is' appears in the given string. 
#include<stdio.h>
int main(){
    char str[50];
    int i,s,count=0,space,times=0,k;
    printf("Enter any string:");
    //scanf("%s",&str);

    while(str[count] != '\0'){
        count++;
      //  printf("%d\n ",count);
    }
    for(k=0;k<=count-2;k++){
        i =(str[i]=='i' || str[i]== 'I');
        s =(str[i+1]=='s' || str[i+1]== 'S');
        space =(str[i+2]==' ' || str[i+2]== '\0');
        if((i && s && space) == 1)
            times++;
            printf("%d",times);
    }
    printf("\n Occurance of the word 'is' :%d", times);
}