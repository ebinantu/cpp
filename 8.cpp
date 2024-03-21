#include<iostream>
#include<cstring>
using namespace std;
class student
{
int classno,marks;
char name[21],status[10];
public:
void accept();
void display();
void check();
};
void student::accept()
{
 cout<<"Enter classno name Marks\n";
 cin>>classno>>name>>marks;
}
void student::display()
{ 
if(marks>=40)
 {
 strcpy(status,"passed");
 }
 else
 { 
 strcpy(status,"failed");
 }
  cout<<classno<<"\t"<<name<<"\t"<<marks<<"\t"<<status<<endl;
} 
int main()
{ 
  int i;
  student s[3];
  for(i=0;i<3;i++)
  {
  s[i].accept();
  }
  cout<<"classno\tname\tMarks\tstatus\n";
  for(i=0;i<3;i++)
  {
  s[i].display();
  }
}

