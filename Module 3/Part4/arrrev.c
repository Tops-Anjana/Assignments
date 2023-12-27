#include <stdio.h> 
int main(){
int size,arr[5];
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Input a number:"); 
    for(int i=0;i<size;i++){ 
    scanf("%d",&arr[i]);
 }
     printf("Reversed Array is:\n");  
    for(int i=size;i>0;i--){ 
        printf("%d\n", arr[i]);
  } 
}