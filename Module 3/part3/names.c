#include<stdio.h>
int main(){
    int i;
    char name[5][20];    
    printf("Enter names:\n");
    for (i=0;i<5;i++){
        printf("Enter name %d:",i+1);
        gets(name[i]);
    }
    printf("\nEntered names:\n");
    for (i=0;i<5;i++){
        printf("Name %d :%s \n",i+1,name[i]);
    }
}
