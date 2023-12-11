#include<stdio.h>
int main(){
    float temp;
    printf("Enter temperture:");
    scanf("%f",&temp);
    if(temp<0){
        printf("Freezing weather ");
    }
    else if(temp>0 && temp<10){
        printf("Very Cold weather");
    }
    else if(temp<10 && temp>20){
        printf("Cold weather");
    }
    else if(temp>20 && temp<30){
        printf("Normal in Temp");
    }
    else if(temp<30 && temp<40){
        printf("Its Hot");
    }
    else if(temp>=40){
        printf("very hot");
    }
    else{
        printf("invalid");
    }

}