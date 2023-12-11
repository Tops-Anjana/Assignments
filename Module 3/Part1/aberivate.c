#include<stdio.h>
int main(){
    char scnm[20],midnm[20],lastnm[20];
    printf("Enter the name of school:");
    scanf("%s %s %s",&scnm,&midnm,&lastnm);
    printf("Abbreviated name is:");
    printf("%c.%c.%s\n ",scnm[0],midnm[0],lastnm);
}