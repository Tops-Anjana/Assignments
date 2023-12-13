#include <stdio.h>   
int main(){
    float height;   
    printf("Input the height of the person (in centimetres) :");  
    scanf("%f", &height);   
    if (height < 150.0){   
           printf("The person is smaller in height. \n");
    }    
    else if ((height >= 150.0) && (height < 165.0)){ 
        printf("The person is  average heighted. \n");
    }    
    else if ((height >= 165.0) && (height <= 195.0)){   
        printf("The person is taller. \n");   
}
    else{
        printf("Abnormal height.\n");   
}
}
