#include<iostream>
using namespace std;
class Test{
   int a,b;
   public:
   Test(){
    a=1;
    b=23;
   }
   int show(){
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
   }
   ~Test(){
    cout<<"Destructor is called."<<endl;
   }
   };
int main(){
     Test *t1;
     t1= new Test;
     t1->show();
     delete t1;
     t1->show();
}