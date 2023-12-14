#include <stdio.h>    
int main(){
    int arr[] = {7,11.8,2,6,41,21};     
    int temp = 0;     
    int size = sizeof(arr)/sizeof(arr[0]);  

    printf("Elements of array: \n");    
    for(int i=0;i<size;i++) {     
        printf("%d ",arr[i]);     
    }       
    for(int i=0;i<size;i++){     
        for(int j=i+1;j<size;j++){     
           if(arr[i]>arr[j]){    
               temp=arr[i];    
               arr[i]=arr[j];    
               arr[j]=temp;    
           }     
        }     
    }    
    printf("\n");    
printf("Array sorted in ascending order: \n");    
    for(int i=0;i<size;i++){     
        printf("%d ",arr[i]);    
    }       
}     