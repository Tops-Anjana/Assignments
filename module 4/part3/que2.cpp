//Write a program of Addition, Subtraction, Division, Multiplication using constructor
#include<iostream>
using namespace std;
class mads{
    int num1,num2,res;
    public:
    mads(){  //constructor
        cout<<"Enter the num1 and num2";
        cin>>num1;
        cin>>num2;
    }
    int add(){
        res=num1+num2;
        cout<<"\n the addition is:"<<res;
    }
    int sub(){
        res=num1-num2;
        cout<<"\n the subtraction is:"<<res;
    }
    int mul(){
        res=num1*num2;
        cout<<"\n the multiplication is:"<<res;
    }
    int div(){
        res=num1/num2;
        cout<<"\n The division is:"<<res;
    }
};
int main(){
    mads obj;
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
}