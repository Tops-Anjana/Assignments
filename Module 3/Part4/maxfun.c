#include<stdio.h>
int max(int arr[5],int i){
    for(i=1;i<=arr;i++){
        int temp=arr[i];
       if(arr[i]>temp){
        printf("it is max");
       }
    }
}
int main(){
    int arr[5],i;
    max(arr[5],i);
    printf("the maximum number is:%d",arr[i]);
}