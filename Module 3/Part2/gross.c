#include<stdio.h>
int main(){
    float basic_sal,hra,da,GS;
    printf("Enter basic salary:");
    scanf("%f",&basic_sal);
    printf("Enter HRA:");
    scanf("%f",&hra);
    printf("Enter Da:");
    scanf("%f",&da);
  if(basic_sal<=10000){
    hra=hra*0.2;
    da=da*0.8;
    GS=basic_sal+hra+da;
    printf("The gross salary is :%f",GS);
  }
  else if(basic_sal<=20000){
     hra=hra*0.25;
     da=da*0.9;
     GS=basic_sal+hra+da;
      printf("The gross salary is :%f",GS);
  }
  else if(basic_sal>20000){
  hra=hra*0.3;
  da=da*0.95;
  GS=basic_sal+hra+da;
   printf("The gross salary is :%f",GS);
}
  else{
    printf("invalid data");
  }
 } 