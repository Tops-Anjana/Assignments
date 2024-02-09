#include<stdio.h>
int pascal(int n){
int line,space,i,num;
for(line=1;line<=n;line++){
  for(space=1;space<n-line;space++){
    printf(" ");
  }
    num=1;
    for(i=1;i<=line;i++){
        printf("%d ",num);
        num=num*(line-i)/i;
    }
    printf("\n");
  }
}
int main(){
    int n=6;
    pascal(n);
}