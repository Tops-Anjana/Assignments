//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename t>
t swap_fun(t& x,t& y)
{
    x=x*y;
    y=x/y;
    x=x/y;
}
int main(){
int a,b;
 cout<<"enter the values of a and b:";
 cin>>a>>b;
 cout<<"the values before swapping: "<<a<<" "<<b<<" "<<endl; 
 swap_fun(a,b);
 cout<<"the values after swapping:  "<<a<<" "<<b<<" "<<endl;
}