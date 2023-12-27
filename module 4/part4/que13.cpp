//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class Max{
  private:
  int num1,num2;
  public:
  Max(int num1,int num2){
    this->num1=num1;
    this->num2=num2;
  }
  friend int max(Max& m);
};
int max(Max& m){
    cout<<"the values of num1 and num2 is:"<<m.num1<<"\t"<<m.num2<<endl;
   if(m.num1>m.num2){
    cout<<"num1 is maximum.";
   }
   else{
    cout<<"num2 is maximum.";
   }
}
int main(){
   int num1,num2;
   cout<<"Enter the value of num1,num2:";
   cin>>num1;
   cin>>num2;
   Max m(num1,num2);
   max(m);
}