#include<stdio.h>
int plainfun(int num){
int temp=num;
    int rev=0,rem;
    for(int i=0;i<=temp+1;i++){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
     printf("\n the reverse number is:%d",rev);
     if(rev==num){
        printf("\n num1 is plaindrome.");
    }
    else{
        printf("\n num1 is not plaindrome");
    }
    }
}
int main(){
    int num1;
    printf("Enter number:");
    scanf("%d",&num1);
    plainfun(num1);
    
}