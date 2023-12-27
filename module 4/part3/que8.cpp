// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement 
// using of aggregation
#include<iostream>
using namespace std;
class Student{
    private:
   string name,clname;
   int rollno,marks;
   public:
   Student(string &stname,string &clnm,int roll_no,int marks1):
   name(stname),
   clname(clnm),
   rollno(roll_no),
   marks(marks1){}

   string grade(){
    if(marks>=90){
        return "A+";
    }
    else if(marks>=75 && marks<=80){
      return "A";
    }
    else if(marks>=60 && marks<=50){
        return "B";
    }
    else if(marks>=50 && marks<=40){
        return "C";
    }
    else{
        return "D";
    }    
  }
  int display(){
    cout<<"Student Information:"<<endl;
    cout<<"the rollno is:"<<rollno<<endl;
    cout<<"Name is:"<<name<<endl;
    cout<<"class name"<<clname<<endl;
    cout<<"Marks:"<<marks<<endl;
    cout<<"grade is:"<<grade()<<endl;
  }
};
int main(){
    int rollno,marks;
    string name,clname;
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter class name:";
    cin>>clname;
    cout<<"Enter marks:";
    cin>>marks;
    Student s(name,clname,rollno,marks);
    s.display();

}