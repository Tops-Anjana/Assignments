#include <stdio.h>
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n){
    int i, j,swapped=0;
    for (i =0; i < n - 1; i++) {
        swapped = 0;
        for (j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
void printArray(int arr[], int size){
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
}
int main(){
    int arr[] = { 17,8,63,42,25,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}