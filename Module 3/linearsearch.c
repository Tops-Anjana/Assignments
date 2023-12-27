#include<stdio.h>
int search(int array[],int size,int pivot){
    for(int i=0;i<size;i++)
        if(array[i] == pivot)
            return pivot;
    return -1;    
}
int main(){
    int array[]={17,55,33,1,5,99,44};
    int pivot;
    printf("\n Enter the number you want to search?");
    scanf("%d",&pivot);
    int size=sizeof(array)/sizeof(array[0]);
   int res=search(array,size,pivot);
    //printf("%d",pivot);
    if(res==-1){
        printf("\n Element not found");
    }
    else{
        printf("\n Element found is:%d",res);
    }
}