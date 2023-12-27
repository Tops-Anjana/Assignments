#include<stdio.h>
int main(){
 int start,end=10,sum=0;
  for(start=1;start<=end;start++){
    if(start!=end){
        printf("%d+",start,start);
    }
    else{
    printf("%d+",start,start);
    }
   sum=sum+start;
  }
  printf("%d",sum);
 }