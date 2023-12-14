#include <stdio.h> 
int main(){
    int num,rem,sum = 0,i; 
    printf("Input a number: "); 
    scanf("%d",&num); 
    for(i=num;num!=0;num=num/10){ 
         rem=num%10; 
         sum=sum*10+rem;
    }
    printf("The number in reverse order is : %d \n", sum); 
}