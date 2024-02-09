#include<iostream>
using namespace std;
class Bank_account{
    private:
    string name;
    long accnum;
    string type;
    double balance;
    double total;
    public:
    void getdata(){
        cout<<"enter name:";
        cin>>name;
        cout<<"Enter Account number:";
        cin>>accnum;
        cout<<"Enter type of Account:"; 
        cin>>type;
        cout<<"Enter balance:";
        cin>>balance;
    }
    int display(){
        cout<<"Name of Account holder is:"<<name<<endl;
        cout<<"Account number is:"<<accnum<<endl;
        cout<<"Type of Account is:"<<type<<endl;
        cout<<"Balance is:"<<balance<<endl;
    }
    int deposit(double amount){
        balance+=amount;
        cout<<"Deposit successfully new balance is:₹"<<balance<<endl;
    }
    int total_bal(){
        int total=0;
        total+=balance;
        cout<<"Total Balance is:"<<total<<endl;
    }
    int withdraw(double amount){
        if(balance>=amount){
        balance-=amount;
        cout<<"After withdraw the balance is:₹"<<balance<<endl;
    }  
    else{
        cout<<"Insufficent balance...."<<endl;
    }
    }
};
 int main(){
      Bank_account bank_acc;
      int choice;
      int amt;
      while(1){
        cout<<"\n ~~~~~~~~~~~~~~~~~~~~~Welcome~~~~~~~~~~~~~~~~~~~~~~\n\n";
        cout<<"enter choice \n";
        cout<<"\t 1.Enter data of your's\n";
        cout<<"\t 2.Balance Enquiry.\n";
        cout<<"\t 3.Deposit Money.\n";
        cout<<"\t 4.Withdraw Money.\n";
        cout<<"\t 5.Total balance. \n";
        cout<<"\t 6.Cancel.\n";
        cin>>choice;
        switch(choice){
            case 1:bank_acc.getdata();
                break;
            case 2:bank_acc.display();
                break;
            case 3:bank_acc.deposit(amt);
                break;
            case 4:bank_acc.withdraw(amt);
                break;
            case 5:bank_acc.total_bal();
                break;
            case 6:exit(0);
            break;
            default:
                cout<<"Invalid Choice!!!!....";
                break;    
        }
      }
}