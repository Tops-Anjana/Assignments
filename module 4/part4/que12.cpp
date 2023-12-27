//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class Swap{
    private:
    int num1,num2;
    public:
    Swap(int num1,int num2){
        this->num1=num1;
        this->num2=num2;
    }
    friend int swapping(Swap& sw);
};
int swapping(Swap &sw){
    cout<<"Values before swapping:"<<sw.num1<<"\t"<<sw.num2<<endl;
    sw.num1=sw.num1+sw.num2;
    sw.num2=sw.num1-sw.num2;
    sw.num1=sw.num1-sw.num2;
    cout<<"Values after swapping:"<<sw.num1<<"\t"<<sw.num2<<endl;
}
int main(){
    int num1,num2;
    cout<<"Enter the value of num1and num2:";
    cin>>num1;
    cin>>num2;
    Swap sw(num1,num2);
    swapping(sw);
}