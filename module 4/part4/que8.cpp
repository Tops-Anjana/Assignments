//Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different parameters and Function Overloading
#include<iostream>
using namespace std;
class oprate{
    public:
    int add(int a,int b){
        cout<<"sum="<<(a+b)<<endl;
        cout<<"sub="<<(a-b)<<endl;
        cout<<"mul="<<(a*b)<<endl;
        cout<<"div="<<(a/b);
    }
    int add(double a,double b){
        cout<<endl<<"sum="<<(a+b);
        cout<<endl<<"sub="<<(a-b);
        cout<<endl<<"mul="<<(a*b);
        cout<<endl<<"div="<<(a/b);
    }
};
int main(){
    oprate op;
 op.add(30,20);
 op.add(32.2,12.6);
}