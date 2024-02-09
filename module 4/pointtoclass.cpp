#include<iostream>
using namespace std;
class box{
    private:
    int length,breadth,height;
    public:
    box(double l,double b,double h){
        length=l;
        breadth=b;
        height=h;
    }
    int area(){
        int res=length*breadth*height;
    }
};
int main(){
   box b1{1.2,3.2,4.2};
   box b2{1.1,2.2,3.3};
   box *ptr;
   ptr=&b1;
   cout <<"Area of Box1:"<<ptr->area()<<endl;
   ptr=&b2;
   cout<<"Area of Box2:"<<ptr->area()<<endl;
}