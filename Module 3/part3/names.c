#include<stdio.h>
int main(){
    int i;
    char name[20];
    
    printf("Enter numbers:");
    for(i=1;i<=5;i++){
        scanf("%s",&name);
    }
    for(i=1;i<=5;i++){
        printf("%s \n",name);
    }

}