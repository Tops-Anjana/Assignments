#include <stdio.h>
int main(){
    int size,arr[size],sum=0;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<size;i++)
    sum+=arr[i];
    printf("Sum of the array is: %d",sum);
}