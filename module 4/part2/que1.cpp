//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calc{
   public:
   int a,b;
   public:
   int getdata(){
    cout<<"Enter the value:";
    cin>>a>>b;
   }
   public:
   int sum(){
    int res=a+b;
    cout<<"\n the result is:"<<res;
   }
   int sub(){
    int res=a-b;
    cout<<"\n the resulut is:"<<res;
   }
   int mul(){
    int res=a*b;
    cout<<"\n result is:"<<res;
   }
   int div(){
    int res=a/b;
    cout<<"\n result is:"<<res;
   }

};
int main(){
   calc c;
   c.getdata();
   c.sum();
   c.sub();
   c.mul();
   c.div();
}