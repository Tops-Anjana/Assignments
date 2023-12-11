#include<stdio.h>
int main(){
   int n1,n2,n3,res;
    printf("Enter numbers n1,n2,n3:");
    scanf("%d %d %d",&n1,&n2,&n3);
   res=(n1>n2)&&(n1>n3)?printf("n1 is maximum"):(n2>n1)&&(n2>n3)?printf("n2 is maximum"):printf("n3 is maximum");
}