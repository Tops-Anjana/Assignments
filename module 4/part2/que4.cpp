//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference
#include<iostream>
using namespace std;
# define pi 3.14
class circle{
   int radius;
   public:
   int getdata(){
    cout<<"Enter the value of radius:";
    cin>>radius;
   }
   int area(){
     int area=pi*radius*radius;
     cout<<"\n The area is:"<<area;
   }
   int circum(){
    int cirm=2*pi*radius;
    cout<<"\n The circumference is:"<<cirm;
   }
};
int main(){
    circle cr;
    cr.getdata();
    cr.area();
    cr.circum();
}