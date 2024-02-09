#include<iostream>
using namespace std;
class student{
    int rollno;
    char name[20];
    float marks[4];
    public:
    int getdata(){
        cout<<"Rollno:";
        cin>>rollno;
        cout<<"Name:";
        cin>>name;
        cout<<"Marks:";
        for(int i=0;i<4;i++){
         cin>>marks[i];
        }
    }
    int show(){
    
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Name:"  <<name<<endl;
        for(int i=0;i<4;i++){
          cout<<"Marks:" <<marks[i]<<endl;
        }
        calc();
    }
    int calc(){
        int total=0;
        for(int i=0;i<4;i++){
          total+=marks[i];
    }
    cout<<"Total Marks Scored:"<<total<<endl;
    }
};
int main(){
    student student[2];  // array of objects;
    for(int i=0;i<2;i++){
        student[i].getdata();
}
    cout<<"Students Details:"<<endl;
    for(int i=0;i<2;i++){
        student[i].show();
}
}