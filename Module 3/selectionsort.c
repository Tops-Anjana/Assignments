// Selection sort in C
#include <stdio.h>
int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int selectionSort(int array[], int size){
  for (int i=0;i<size-1;i++){
    int min_index = i;
    for (int j=i+1;j<size;j++){
          if(array[min_index]>array[j]){
        min_index=j;
    }
    swap(&array[min_index], &array[i]);
  }
}
}
int printArray(int array[], int size){
  for (int k=0;k<size;++k) {
    printf("%d  ", array[k]);
  }
  printf("\n");
}
int main() {
  int num[] = {99,33,22,44,66,11};
  int size = sizeof(num)/sizeof(num[0]);
  printArray(num,size);
  selectionSort(num,size);
  printf("Sorted array in Acsending Order:\n");
  printArray(num,size);
}
// #include <stdio.h>
// int main() {
//    int arr[10]={6,12,0,18,11,99,55,45,34,2};
//    int n=10;
//    int i, j, position, swap;
//    for (i = 0; i < (n - 1); i++) {
//       position = i;
//       for (j = i + 1; j < n; j++) {
//          if (arr[position] > arr[j])
//             position = j;
//       }
//       if (position != i) {
//          swap = arr[i];
//          arr[i] = arr[position];
//          arr[position] = swap;
//       }
//    }
//    for (i = 0; i < n; i++)
//       printf("%d\t", arr[i]);
//    return 0;
// }