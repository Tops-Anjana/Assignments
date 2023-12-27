#include<stdio.h>
int main(){
    int i,num1,rem;
    for(i=1;i<=3;i++){
    printf("\n Enter number:");
    scanf("%d",&num1);
    int temp=num1;
    int rev=0;
    while(temp>0){
       
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==num1){
        printf("num1 is plaindrome.");
    }
    else{
        printf("num1 is not plaindrome");
    }
   
}
} 