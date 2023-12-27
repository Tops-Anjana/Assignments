#include <stdio.h>
int binary(int array[], int start, int end, int pivot){
	if (end>=start) {
		int mid = start+(end-start)/2;
         if (array[mid] ==pivot)
			return mid;
	if (array[mid] >pivot)
			return binary(array,start,mid-1,pivot);
		return binary(array, mid+1,end,pivot);
	}
	return -1;
}
int main(){
	int array[] = {1,5,33,54,99,100};
	int size=sizeof(array)/sizeof(array[0]);
	int pivot;
	printf("Enter number to search:");
	scanf("%d",&pivot);
	int res=binary(array,0,size-1,pivot);
	if(res==-1){
		printf("Element is not present in array");
	}
	else{
	   printf("Element is present at index %d",res);
	}
	return 0;
}