//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream>
using namespace std;
class A{ 
    public: 
     A(){ 
        int a,b,c;
        cout<<"Enter value of a and b:";
        cin>>a;
        cin>>b; 
            c=a+b; 
            cout<<"Sum is:"<<c << endl; 
        } 
}; 
// Class B 
class B: public A { 
    public: 
        B() { 
            int d,e,f;
        cout<<"Enter value of d and e:";
        cin>>d;
        cin>>e; 
            f=d-e;
            cout << "Difference is: "<<f<<endl; 
        } 
}; 
// Derived class C 
class C: public B{ 
    public: 
        C(){ 
            int g,h,i;
        cout<<"Enter value of g and h:";
        cin>>g;
        cin>>h; 
              i=g*h;
            cout << "Product is:" <<i<< endl;             
        } 
}; 
int main(){ 
    C obj;
    return 0; 
}