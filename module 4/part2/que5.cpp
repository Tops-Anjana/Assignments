//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;
class rectangle{
 int length,width;
 public:
  int getdata(){
    cout<<"Enter the value of length and width:";
    cin>>length>>width;
  }
  int area(){
    int area=length*width;
    cout<<"\n The area is:"<<area;
  }
  int perimeter(){
    int peri=2*(length+width);
    cout<<"\n The perimeter of rectangle is:"<<peri;
  }
};
int main(){
    rectangle rect;
    rect.getdata();
    rect.area();
    rect.perimeter();
}