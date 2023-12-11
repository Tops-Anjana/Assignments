#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks>=33){
        printf(" student is pass");
    }
    else{
        printf("student is fail.");
    }
}