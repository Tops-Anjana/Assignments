#include<stdio.h>
int main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
   int arr[size][size];
    int r1=0,c1=0,r2=size-1,c2=size-1,i=1,left,right;
    while(i<=(size*size)){
        for(left=c1;left<=c2;left++){
            arr[r1][left]=i++;
        }
        for(right=r1+1;right<=c2;right++){
            arr[right][c2]=i++;
        }
        for(left=c2-1;left>=c1;left--){
            arr[r2][left]=i++;
        }
        for(right=r2-1;right>=r1+1;right--){
            arr[right][c1]=i++;
        }
        r1++;r2--;c1++;c2--;
    }
    printf("\n for printing sprial pattern:\n ");
    for(left=0;left<size;left++){
        for(right=0;right<size;right++){
            printf("%d\t",arr[left][right]);
        }
        printf("\n");
    }
    return 0;
}