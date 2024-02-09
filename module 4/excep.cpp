#include<iostream>
//using namespace std;
double division(int a,int b){
    if(b==0){
        throw "division by zero condition!...";
    }
    return (a/b);
}
int main(){
      int a=45,b=0;
      try{
      int c=division(a,b);
    std::cout<<c<<std::endl;
      }
      catch(const char* msg){
       std::cerr<<msg<<std::endl;
     //   cout<<"Division by zero not possible.";
      }
}