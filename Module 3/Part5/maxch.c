//call by value:
#include<stdio.h>
int change(int n){
   // printf("%d",n);
    n=n+10;
    printf("%d",n);
}
int main(){
   int x;
   printf("Enter the value of x:");
   scanf("%d",&x);
   change(x);
   printf("after call change fun:%d",x);
}