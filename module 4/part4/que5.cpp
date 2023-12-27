//Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class students{
    public:
    int rollno;
    public:int get(){
        cout<<"Enter rollno:";
        cin>>rollno;
    }
    int put(){
        cout<<"\n Rollno:"<<rollno;
    }
};
class test:public students{
    public:
    int eng,maths;
    public: 
    int ipmarks(){
        get();
        cout<<"Enter marks of English:";
        cin>>eng;
        cout<<"Enter marks of Maths:";
        cin>>maths;   
    }
    int output(){
        put();
        cout<<"\n English:"<<eng;
        cout<<"\n Maths  :"<<maths;      
    }
};
class result:public test{
    public:
    int total;
    public:
    int tot_marks(){
        total=eng+maths;
        cout<<"\n Total :"<<total<<endl;
    }
};
int main(){
    result rr;
    rr.ipmarks();
    rr.output();
    rr.tot_marks();
}