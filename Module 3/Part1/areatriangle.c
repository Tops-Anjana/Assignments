#include <stdio.h>  
int main() {  
float area,base,height;  
printf("Enter the base and height: ");  
scanf("%f %f", &base,&height);  
area = (base*height)/2;  
printf("Area of the triangle: %f\n", area);  
}  