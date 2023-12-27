//Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor
#include<iostream>
using namespace std;
class Employee{
   int e_id;
   char name[20];
   float salary;
   public:
   Employee(){
    cout<<"Enter e_id:";
    cin>>e_id;
    cout<<"Enter name of employee:";
    cin>>name;
    cout<<"Enter salary:";
    cin>>salary;
   }
   int cal_sal(float p_r){
       if(p_r>=0.0 && p_r<=1.4){
        salary=salary*p_r;
        cout<<"The updated salary is:"<<salary;
       }
       else{
           cout<<"Invalid rating.";
       }
   }
};
int main(){
    float p_r;
    Employee emp;
    cout<<"Enter performance rating:(0.0-1.3):";
    cin>>p_r;
    emp.cal_sal(p_r);
}