//maximum numbers of characters in string.
#include<stdio.h>
int main(){
    char str[50];
    int i=0,occ[i];
    printf("Enter String:");
    gets(str);
    while(str[i] != '\0'){
   occ[i]= (int)str[i];
   occ[i]+=1;
   i++;
}
int max=0;
for(i=0;i<50;i++){
   if(occ[i] > occ[max])
      max = i;
}
   printf("The maximum characters of the string is:%d",max);
}