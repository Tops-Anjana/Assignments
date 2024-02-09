  #include <iostream>
       using namespace std;
       #include<string.h>
       class student
       {
           char name[10],result[10];
           int i,rollno,mark[5],tot,avg;
           public:
             void get();
             void cal();
             void display();
       };
       void student::get()
       {
           cout<<"\n Enter name and rollno\n";
           cin>>name>>rollno;
           cout<<"\n Enter Marks";
           for(i=1;i<5;i++)
           {
               cin>>mark[i];
           }
       }
       void student::cal()
       {
            tot=0;
          int count=0;
           for(i=1;i<5;i++)
           {
               tot=tot+mark[i];
           }
         avg=tot/5;
           for(i=1;i<5;i++)
           {
               if(mark[i]>=35)
               {
                   count++;
                   if(count==4)
                   strcpy(result,"PASS");
                   else
                   strcpy(result,"fail");
               }
           }
       }
      void student::display()
      {
         cout<<"\n Student detail \n";
         cout<<"Student name: "<<name<<endl;
         cout<<"Rollno. "<<rollno<<endl;   
         cout<<"Marks: "<<mark<<endl;
          for(i=1;i<5;i++)
          {
              cout<<"Marks:"<<mark[i]<<endl;
          }
          cout<<"Total:  "<<tot<<endl;
          cout<<"Average:"<<avg<<endl;
          cout<<"Result: "<<result<<endl;
      }
      int main()
      {
          cout<<"\n Student Details using Array within class\n";
          student s[60];
          int i,n;
          cout<<"\n Enter no. of student";
          cin>>n;
          for(i=1;i<=n;i++)
          {
              s[i].get();
              s[i].cal();
              s[i].display();
          }
          return 0;
      }