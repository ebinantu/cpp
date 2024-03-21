#include<iostream>
using namespace std;
class student
{
   int classno,eng,maths,total;
   char name[20],status;
   public:
   void accept();
   void display();
   void check();
  };
void student::accept()
{
cout<<"Enter classno name eng maths\n";
cin>>classno>>name>>eng>>maths;
} 
void student::check()
{
total=eng+maths;
if(total>=180)
status='A' ;
else if(total>160)
status='B';
else if(total>=140)
status='C';
else if(total>=120)
status='D';
else
status='E';
}
void student::display()
{ 
 
 cout<<classno<<"\t"<<name<<"\t"<<eng<<"\t"<<maths<<"\t"<<total<<"\t"<<status<<"\n";
}
int main()
{
   student s1,s2;
   s1.accept();
   s2.accept();
   s1.check();
   s2.check();
  cout<<"classno"<<"\t"<<"name"<<"\t"<<"eng"<<"\t"<<"maths"<<"\t"<<"total"<<"\t"<<"status"<<"\n";
   s1.display();
}
