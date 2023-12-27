//Write a program to calculate the area of circle, rectangle and triangle // using Function Overloading // Rectangle: Area * breadth // Triangle: ½ *Area* breadth//Circle: Pi * Area *Area
#include<iostream>
using namespace std;
# define pi 3.14
class shape{
    public:
     void area();
     void area(int length , int width);
     void area(double length , double breadth);
};
void shape::area(){
    double radius;
    cout<<"Enter the value of radius:";
    cin>>radius;
    float area=pi*radius*radius;
    cout<<"The area of circle is:"<<area<<endl;
}
void shape::area(int length , int width){
    int area=length*width;
    cout<<"The area of rectangle is:"<<area<<endl;    
}
void shape::area(double length , double breadth){
    float area=(length*breadth)/2;
    cout<<"The area of triangle is:"<<area<<endl;
}
int main(){
    shape ss;
    ss.area();
    ss.area(40,50);
    ss.area(2.5,5.0);
}