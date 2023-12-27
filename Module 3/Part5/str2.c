#include <stdio.h>
int main()
{
    char str[30]; 
    int size=0;
       printf("enter string : ");
       scanf("%s",&str);
	   printf("The string character are : \n");
    while(str[size]!='\0')
    {
       printf("%c  ",str[size]);
       size++;
    }
    printf("\n");
}