#include<iostream>
using namespace std;
class student
{
  int mark,rollno;
  char name[15];
  public:
  void input();
  student calc(student d);
  void display();
  };
  void student::input()
  {
       cout<<"Enter the classnumber and name:";
       cin>>rollno>>name;
       cout<<"Enter the Marks:";
       cin>>mark;
  } 
  
  student student::calc(student t)
  {
       if(mark>t.mark)
       return *this;
       else
       return t;
  }
   void student::display()
   {
      cout<<rollno<<name<<mark;
  }
  int main()
  {
       student s1,s2,s3;
       s1.input();
       s2.input();
       s3=s1.calc(s2);
       s3.display();
       return 0;
       }
