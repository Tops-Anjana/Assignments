//1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)
#include<iostream>
using namespace std;
class cricketer{
public:
int cri_id;
char cri_name[50];
};
class batsman:public cricketer{
public:
int total_runs,m_p,avg_runs,best_performance;
public:
int input_data(){
    cout<<"Enter batsman id:";
    cin>>cri_id;
    cout<<"Enter batsman name:";
    cin>>cri_name;
    cout<<"Enter total runs:";
    cin>>total_runs;
    cout<<"Enter total matches played:";
    cin>>m_p;
    cout<<"Enter performance:";
    cin>>best_performance;
    return 0;

}
int cal_avg_run(){
   avg_runs=total_runs/m_p;
   cout<<"The average runs are:"<<avg_runs<<endl;
   return 0;
}
int display(){
    cout<<"Batsman Information: "<<endl;
    cout<<"Batsman id:"<<cri_id<<endl;
    cout<<"Batsman name:"<<cri_name<<endl;
    cout<<"Total matches played :"<<m_p<<endl;
    cout<<"Total runs scored:"<<total_runs<<endl;
    cout<<"The best performance of batman in :"<<best_performance<<endl;
    return 0;
  }
};
int main(){
  batsman B;
  B.input_data();
  B.display();
  B.cal_avg_run();
}