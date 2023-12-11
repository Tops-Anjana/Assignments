#include <stdio.h>  
int main() {  
float area,length,width,height;  
printf("Enter the width and lengthand height: ");  
scanf("%f %f %f", &length,&width,&height);  
area = 2*((width*length)+(height*length)+(height*width)); 
printf("Area of the rectangle: %f\n", area);  
}  