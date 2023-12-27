//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class student {
   public:
   int roll_no;
   string name;
    public: 
    void inputdata(){
     cout<<"Enter rollno:";
     cin>>roll_no;
     cout<<"Enter name:";
     cin>>name;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
    }
};
class Marks:public student{
    public:
    int eng,maths,science,hindi,computer,total;
    float percent;
    public: 
    int ipmarks(){
        inputdata();
        cout<<"Enter marks of English:";
        cin>>eng;
        cout<<"Enter marks of Maths:";
        cin>>maths;
        cout<<"Enter marks of Science:";
        cin>>science;
        cout<<"Enter marks of Hindi:";
        cin>>hindi;
        cout<<"Enter marks of Computer:";
        cin>>computer;
    }
    int output(){
        display();
        cout<<"\n English:"<<eng;
        cout<<"\n Maths  :"<<maths;
        cout<<"\n Science:"<<science;
        cout<<"\n Hindi:  "<<hindi;
        cout<<"\n Computer:"<<computer;
    }
    int total_res(){
    total=eng+maths+science+hindi+computer;
    cout<<"\n The total of all subject are:"<<total<<endl;
    percent= total/5;
    cout<<"\n The percentage of student is:"<<percent<<endl;
    }
};
int main(){
    Marks m;
    m.ipmarks();
    m.output();
    m.total_res();
}