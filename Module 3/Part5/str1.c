#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int size,i;
       printf("Input any string : ");
       scanf("%s",&str);
	   size=strlen(str);
	   printf("The string in reverse order : \n");
       for(i=size;i>=0;i--)
        {
          printf("%c  ",str[i]);
        }
    
    printf("\n");
}