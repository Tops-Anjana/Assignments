#include<stdio.h>
void heap(int array[],int size,int ele){
    int large=ele;
    int left=2*ele+1;
    int right=2*ele+2;
    if(left<size && array[left]>array[large]){
        large=left;
    }
    if(right<size && array[right]>array[large]){
        large=right;
    }
    if(large!=ele){
        int temp=array[ele];
        array[ele]= array[large];
        array[large]=temp;
        heap(array,size,large);
    }
}
void heapsort(int array[],int size){
    for(int i=size/2-1;i>=0;i--){
        heap(array,size,i);
    }
    for(int i=size-1;i>=0;i--){
       int temp=array[0];
       array[0]=array[i];
       array[i]=temp;
       heap(array,i,0);
    }
}
int parray(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d \t",array[i]);
    }
}
int main(){
    int array[]={17,55,33,81,65,74};
    int size=sizeof(array)/sizeof(array[0]);
    parray(array,size);
    printf("\n After sorting array.\n");
    heapsort(array,size);
    parray(array,size);
}