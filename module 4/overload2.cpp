#include<iostream>
using namespace std;
class Overload{
  private:
  int a[3];
  public:
  Overload(int i,int j,int k){
    a[0]=i;
    a[1]=j;
    a[2]=k;
  }
   int operator[](int i){
        return a[i];
  }
};
int main(){
    Overload ob(4,5,6);
     cout<<ob[0]<<endl;
     cout<<ob[1]<<endl;
     cout<<ob[3]<<endl;
}