//3. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void setperson(int a, string n){
       name=n;
       age=a;
    }
    void display_person(){
      cout<<"Name: "<<name<<endl;
      cout<<"Age:  "<<age<<endl;
    }
};
class student:public person{
    float percent;
    public:
    void getst(string n,int a,float p){
    percent=p;
    setperson(a,n);
    }
    void display_st(){
        cout<<"Student details:"<<endl;
        display_person();
        cout<<"Percentage are: "<<percent<<endl;
    }
};
class teacher:public person{
    float salary;
    public:
    void getdet(string n,int a,float sal){
        salary=sal;
        setperson(a,n);
    }
    void display_teacher(){
        cout<<"Teacher deatils:"<<endl;
        display_person();
        cout<<"Salary is: "<<salary<<endl;
    }
};
int main(){
    student st;
    st.getst("Krishna",22,80);
    st.display_st();
    teacher tt;
    tt.getdet("Anjana",30,15000);
    tt.display_teacher();
}