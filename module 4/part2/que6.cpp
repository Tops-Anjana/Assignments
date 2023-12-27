// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person{
  int age;
  char name[20],country[20];
  public:
  int getdata(){
    cout<<"Enter name ";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter country:";
    cin>>country;
  }
  int display(){
    cout<<"\n The entered name is:"<<name;
    cout<<"\n The age is:"<<age;
    cout<<"\n The country is:"<<country;
  }
};
int main(){
  person P;
  P.getdata();
  P.display();
}