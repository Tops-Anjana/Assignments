#include<stdio.h>
int main(){
   int n1,n2,n3;
    printf("Enter numbers n1,n2,n3:");
    scanf("%d %d %d",&n1,&n2,&n3);
  int res =(n1<n2)&&(n1<n3)?printf("n1 is minimum"):(n2<n1)&&(n2<n3)?printf("n2 is minimum"):printf("n3 is minimum");
 // printf("\n resis: %d",res);
}