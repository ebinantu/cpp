#include<iostream>
using namespace std;
class student
{
  int classno,marks;
  char name[20];
  public:
    void accept();
    void display();
    student calc(student d);
  };
  void student::accept()
  {
    cout<<"enter the classno and name";
    cin>>classno>>name;
    cout<<"enter the mark";
    cin>>marks;
    }
student student::calc(student d)
{
    if(marks>d.marks)
    return *this;
    else 
    return d;
}
void student::display()
{
    cout<<classno<<name<<marks;
}
int main()
{
     student t[10],t1;
     int i;
     for(i=0;i<10;i++)
             { 
         t[i].accept();
         t1=t1.calc(t[i]);
              }
t1.display();
}
