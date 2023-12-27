//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date{
  int day,month,year;
  public:
     Date(int d, int m,int y):
        day(d),
        month(m),
        year(y)
        {}

    int setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
  }
   int getDay() const {
    return day;
  }
  int getMonth() const{
    return month;
  }
  int getyear() const{
    return year;
  }
   int valid_date(){
        if(day >=1 || day <=31){
            cout<<"day is:"<<day;
        }
        if(month >=1 ||month<=12 )
        {cout<<"Month is:"<<month;
     }
     if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {cout<< "this month have 30 days.";}

    if (month == 2) {
      if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        if (day > 29)
          cout<<"its a leap year.";
      } else {
        if (day > 28)
          cout<<"not a leap year.";
      }
    }
 }
};
int main() {
 int day,month,year;
  Date date(0, 0, 0);
  cout<<"Enter day:";
  cin>>day;
  cout<<"Enter month:";
  cin>>month;
  cout<<"Enter year:";
  cin>>year;
  date.setDate(day,month,year);
  cout<<"Date: "<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getyear()<<endl;
  if (date.valid_date())
    cout<<"\n The date is valid."<<endl;
  else
    cout<<"The date is invalid."<<endl;
  return 0;
}
