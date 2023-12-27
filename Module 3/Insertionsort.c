  //Insertion sorting
#include<stdio.h>
int main(){
    int arr[6]={1,5,9,7,5,3};
    int i,j,mid,size;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        mid=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>mid){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=mid;
    }
  //sorting for descending order.  
// for(i=0;i<size;i++){
//     mid=arr[i];
//     j=i-1;
//     while(j>=0 && arr[j]<=mid){
//         arr[j+1]=arr[j];
//         j=j-1;
//     }
//     arr[j+1]=mid;
// }
    printf("printing sorted array \n ");
    for(i=0;i<size;i++){
        printf("%d \t ",arr[i]);
    }
}
