//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class Area{
    public:
  int length,width;
  public:
  int cal_area(){
    int res=length*width;
    cout<<"The area is:"<<res<<endl;
  }
};
class rectangle:public Area{
    public:
    int getdata(){
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter width:";
    cin>>width;
    }
};
int main(){
  rectangle rect;
  rect.getdata();
  rect.cal_area();
}