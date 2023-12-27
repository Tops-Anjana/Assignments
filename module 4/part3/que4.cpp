// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class Bank_account{
  int acc_num,dep,rem;
  float balance;
  public:
   int getdata(){
    cout<<"Enter account number:";
    cin>>acc_num;
    cout<<"Enter balance";
    cin>>balance;
   }
   int deposit(){
    cout<<"Enter amount to deposit:";
    cin>>dep;
    balance=balance+dep;
    cout<<"The total balance is:"<<balance;
   }
   int withdraw(){
    cout<<"Enter amount to withdraw:";
    cin>>rem;
    balance=balance-rem;
    cout<<"the total is:"<<balance;
   }
};
int main(){
    Bank_account bank;
    bank.getdata();
    bank.deposit();
    bank.withdraw();
}