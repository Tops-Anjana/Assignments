#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the value of m");
    scanf("%d",&m);
    if(m>0){
        n=1;
        printf("The res is:: %d",n);
    }
    else if(m<0){
        n=-1;
        printf("the res is::%d",n);
    }
    else{
        n=0;
        printf("it is %d",n);
    }
}