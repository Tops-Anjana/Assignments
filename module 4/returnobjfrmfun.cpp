#include<iostream>
using namespace std;
class sum{
    public:
    int num;
    sum add(sum a,sum b){
       sum c;
       c.num=a.num+b.num;
    return c;
    }
};
int main(){
    sum s1,s2,s3;
    s1.num=50;
    s2.num=100;
    s3.num=0;
    cout<<"Initial Values \n";
    cout<<"The value of object1:"<<s1.num<<endl;
    cout<<"The value of object2:"<<s2.num<<endl;
    cout<<"the value of object3:"<<s3.num<<endl;
    s3 = s3.add(s1,s2);
    cout<<"New values \n";
    cout<<"Value of object1:"<<s1.num<<endl;
    cout<<"Value of object2:"<<s2.num<<endl;
    cout<<"Value of object3:"<<s3.num<<endl;
}