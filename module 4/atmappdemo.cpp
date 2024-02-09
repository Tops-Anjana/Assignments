#include<iostream>
#include<ctime>
using namespace std;
//
class BankAccount {
public:
    double balance;
    int pin;
public:
    // Constructor to initialize the account balance and PIN
    BankAccount() : balance(1000.0), pin(12345) {}
    void displayBalance() const {
        cout<<"Current Balance: ₹"<<balance<<endl;
    }
    void deposit(double amount){
        balance += amount;
        cout<<"Deposit successful. New balance: ₹ "<<balance<<endl;
    }
    void withdraw(double amount){
        if(balance >= amount){
            balance -= amount;
            cout<<"Withdrawal successful. New balance: ₹" << balance <<endl;
        } else{
           cout << "Insufficient funds. Withdrawal failed." <<endl;
        }
    }
};
void displayWelcomeScreen(){
    // Get current date and time
    time_t ttt =time(0);
   tm* now = localtime(&ttt);
   cout << "Welcome to the ATM Banking Application" <<endl;
   cout << "Current Date and Time: "<< (now->tm_year + 1900)<<'-' << (now->tm_mon + 1)<<'-'<< now->tm_mday<< ' ' << now->tm_hour << ':' << now->tm_min << ':' << now->tm_sec <<endl;
}
int main() {
      displayWelcomeScreen();
    BankAccount account;
    int enteredPin;
   cout << "Enter ATM PIN: ";
   cin >> enteredPin;
    if (enteredPin == account.pin){
        int choice;
        do{
           cout << "\n=== Main Menu ===" <<endl;
           cout << "1. Display Balance" <<endl;
           cout << "2. Deposit" <<endl;
           cout << "3. Withdraw" <<endl;
           cout << "4. Exit" <<endl;
           cout << "Enter your choice: ";
           cin >> choice;
            switch (choice) {
                case 1:
                    account.displayBalance();
                    break;
                case 2:
                   double depositAmount;
                   cout << "Enter the deposit amount: ₹";
                   cin >> depositAmount;
                    account.deposit(depositAmount);
                    break;
                case 3:
                    double withdrawAmount;
                   cout << "Enter the withdrawal amount: ₹";
                   cin >> withdrawAmount;
                    account.withdraw(withdrawAmount);
                    break;
                case 4:
                   cout << "Thank you for using the ATM Banking Application. Goodbye!" <<endl;
                    break;
                default:
                   cout << "Invalid choice. Please try again." <<endl;
            }
        } while (choice != 4);
    } else{
       cout << "Incorrect PIN. Access denied." <<endl;
    }
    return 0;
}
