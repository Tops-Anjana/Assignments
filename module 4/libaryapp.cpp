#include <iostream>
using namespace std;
class book{
    public:
    int student_id,tot_book_iss,book_id;
    string name,bk_nm,author_nm,date_iss,date_ret;

    public:
    int issue_book(){
       cout<<"Enter student_id:";
       cin>>student_id;
       cout<<"Enter name of student:";
       cin>>name;
       cout<<"Author name:";
       cin>>author_nm;
       cout<<"Issue date:";
       cin>>date_iss;
    }
    int display_st_bk(){
       cout<<"Student details:"<<endl;
       cout<<"Student ID:"<<student_id<<endl;
       cout<<"Student name:"<<name<<endl;
       cout<<"Total number of books:"<<tot_book_iss<<endl;
    }
    int return_book(){
       cout<<"Enter student_id:";
       cin>>student_id;
       cout<<"Enter name of student:";
       cin>>name;
       cout<<"Author name:";
       cin>>author_nm;
       cout<<"Return date:";
       cin>>date_ret;  
    }
    int student_menu(){
        cout<<"Enter Student_id:";
        cin>>student_id;
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"total number of book issued:";
        cin>>tot_book_iss;
    }
    int bk_record(){
        cout<<"Book ID:"<<book_id<<endl;
        cout<<"Book name:"<<bk_nm<<endl;
        cout<<"Author name:"<<author_nm<<endl;
    }
    int book_menu(){
        cout<<"Book id:";
        cin>>book_id;
        cout<<"Book name:";
        cin>>bk_nm;
        cout<<"Author name:";
        cin>>author_nm;
    }  
};
int main(){
    int choice;
    for (;;){
        cout << "Press 1.Issue Book" << endl;
        cout << "Press 2.Return Book" << endl;
        cout << "Press 3.Student Record" << endl;
        cout << "Press 4.Book Record" << endl;
        cout << "Press 5.Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        book bk;
        switch(choice){
        case 1:
           bk.issue_book();
            break;
        case 2:            
          bk.return_book();
            break;
        case 3:
           bk.student_menu();
           bk.display_st_bk();
            break;
        case 4:
            bk.book_menu();
            bk.bk_record();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "\a";
            exit(0);
        }
    }
}