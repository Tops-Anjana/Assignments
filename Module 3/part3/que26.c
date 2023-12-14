//(1)+(1+2)+(1+2+3)+(1+2+3+4)....
#include<stdio.h>
int main(){
 int start,end=10,sum=0;
  for(start=1;start<=end;start++){
    if(start!=end){
        printf("(%d)+",start);
    }
    else{
    printf("(%d)+",start);
    }
    sum+=(start+start);
  }
  printf("%d",sum);
 }
 