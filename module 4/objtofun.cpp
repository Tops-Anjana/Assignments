#include<iostream>
using namespace std;
class sum{
    public:
    int a;
    int show(sum s1){
        a=a+s1.a;
    }

};
int main(){
    sum s1,s2;
    s1.a=20;
    s2.a=50;
    cout<<"Initial Values \n";
    cout<<"Value of object1:"<<s1.a<<endl;
    cout<<"Value of object2:"<<s2.a<<endl;
    s2.show(s1);
    cout<<"New values \n";
    cout<<"Value of object1:"<<s1.a<<endl;
    cout<<"Value of object2:"<<s2.a<<endl;
}