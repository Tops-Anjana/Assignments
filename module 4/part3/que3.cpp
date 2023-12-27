//Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables
#include<iostream>
using namespace std;
class car{
  char company[20];
  char model[20];
  int year;
  public:
  int getdata(){
    cout<<"Enter the company name:";
    cin>>company;
    cout<<"Enter model:";
    cin>>model;
    cout<<"Enter year:";
    cin>>year;
  }
  int setdata(){
    cout<<"\n The company is:"<<company;
    cout<<"\n Model number is:"<<model;
    cout<<"\n Year is:"<<year;
  }
};
int main(){
    car cobj;
    cobj.getdata();
    cobj.setdata();
}