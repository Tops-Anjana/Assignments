//Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
class Triangle{
    int side1,side2,side3;
    public:
    int getside(){
        cout<<"Enter sides for triangle:";
        cin>>side1>>side2>>side3;
    }
    int equilateral(){
       //all three sides are equal.
      if(side1==side2==side3){
        cout<<"This is an Equilateral triangle.";
      }
    }
    int isosceles(){
        //two side are equal.
        if(side1==side2||side1==side3||side2==side3||side2==side1){
            cout<<"this is an Isosceles traiangle.";
        }
    }
    int scalene(){
        //no sides are equal.
        if(side1!=side2!=side3){
            cout<<"This is scalene traingle.";
        }
    }
};
int main(){
   Triangle tri;
   tri.getside();
   tri.equilateral();
   tri.isosceles();
   tri.scalene();
}