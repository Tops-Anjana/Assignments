#include<stdio.h>
int main(){
    int n,sum=0,num1;
    printf("Enter number:");
    scanf("%d",&num1);
   while(num1!=0){
    num1=n;
      int rem=num1%10;
      sum=rem*rem*rem;
      n=n/10;
   }
   if(num1==sum){
      printf("its a Armstrong number.");

   }
   else{
    printf("not an armstrong number");
   }
}
//using for loop:
// int main(){
// int i,num,sum=0,rem;
// printf("Enter the number:");
// scanf("%d",num);
// for(i=num;num!=0;num=num/10){
//     num=num%10;
//     sum=sum+(rem*rem*rem);
// }
// if(sum==i){
//     printf("Is an armstrong number");
// }
// else{
//     printf("Is not an armstrong number");
// }
// }