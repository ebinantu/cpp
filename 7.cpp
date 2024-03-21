#include<iostream>
using namespace std;
class student
{ 

int classno,marks;
char name[21];
public:
void accept();
void display();
};
void student::accept()
{
 cout<<"Enter classno name Marks\n";
 cin>>classno>>name>>marks;
}
void student::display()
{
  cout<<classno<<"\t"<<name<<"\t"<<marks;
} 
int main()
{ 
  int i;
  student s[10];
  for(i=0;i<10;i++)
  {
  s[i].accept();
  }
  cout<<"classno\tname\tMarks";
  for(i=0;i<10;i++)
  {
  s[i].display();
  }
}

