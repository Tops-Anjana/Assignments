#include<iostream>
using namespace std;
// class demo{
//    int x;
//    public:
//    int set_data(int a){
//     x=a;
//    }
//    int add() const{
//     x++;
//     cout<<x;
//    }
// };
// int main(){
//     demo d;
//     d.set_data(20);
//     d.add();
// }
class demo{
    int x;
   public:
   demo (int a=0){
    x=a;
   }
     int add() const{
    cout<<"The value of x="<<x;
   }
};
int main(){
    demo d(20);
    d.add();
}
