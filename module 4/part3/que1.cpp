// Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
int main(){
  class multiplication{
      int num1,num2,res;
    public:
    int getdata(){
        cout<<"Enter the value of num1 and num2:";
        cin>>num1;
        cin>>num2;
    }
    int cubic(){
        res=num1*num1*num1;
        cout<<"\n The result is:"<<res;
    }
    int multiply(){
        res=num1*num2;
        cout<<"\n The product is:"<<res;
    }
  };
  multiplication mul;
  mul.getdata();
  mul.multiply();
  mul.cubic();
}