#include<stdio.h>
int partition(int array[],int start,int end){
     int pivot=array[end];
     int i=start-1;
     for(int j=start;j<=end-1;j++){
        if(array[j]<pivot){
            i++;
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
     }
     int temp=array[i+1];
     array[i+1]=array[end];
     array[end]=temp;
     return (i+1);
}
int quicksort(int array[],int start, int end){
       if(start<end){  
        int p=partition(array,start,end);
        quicksort(array,start,p-1);  
        quicksort(array,p+1,end);  
    }  
}  
int printArray(int array[], int size){
  for (int k=0;k<size;k++) {
    printf("%d ", array[k]);
  }
  printf("\n");
}
int main(){
    int arr[]={99,55,22,77,33};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    quicksort(arr,0,size-1);
    printArray(arr,size);
}