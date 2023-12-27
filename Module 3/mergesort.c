#include<stdio.h>
int merge(int array[],int start,int mid,int end){
    int i,j,k,n1=mid-start+1,n2=end-mid;
    int left[n1],right[n2];
        for(i=0;i<n1;i++)
            left[i]=array[start+i];
        for(j=0;j<n2;j++)
            right[j]=array[mid+1+j];
    i=0;
    j=0;
   k=start;

    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            array[k]=left[i];
           i++;
        }
        else{
            array[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        array[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        array[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(int array[],int start,int end){
    if(start<end){
   
        int mid=start+(end-start)/2;
       
        mergesort(array,start,mid);
        mergesort(array,mid+1,end);
        merge(array,start,mid,end);
    }
}
int parray(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d \t",array[i]);
    }
}
int main(){
    int array[]={17,11,22,35,9,66};
    int size=sizeof(array)/sizeof(array[0]);
    parray(array,size);
    printf("\n After sorting the array is:\n");
    mergesort(array,0,size-1);
    parray(array,size);
}