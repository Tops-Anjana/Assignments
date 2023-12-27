//Write a program to concatenate the two strings using Operator Overloading.
#include<iostream>
using namespace std;
class strarr{
    string str1,str2;
    public:
    void getstr();
    void display();
    void operator +(strarr s){
    string res;
    res=str1+s.str2;
    cout<<"The output string is:"<<res<<endl;
}
};
void strarr::getstr(){
    cout<<"Enter string 1:";
    cin>>str1;
    cout<<"Enter string 2:";
    cin>>str2;
}
void strarr::display(){
    cout<<"String 1 is:"<<str1<<endl;
    cout<<"String 2 is:"<<str2<<endl;
}
int main(){
    strarr s1;
    s1.getstr();
    s1.display();
    s1.operator+(s1);
}