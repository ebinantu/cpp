# include<iostream>
using namespace std;
class student
{
 int clno,mark;
 char name[20];
 public:
 void accept();
 void calc(student &);
 void display();
 student();
 };
void student::accept()
{
 cout<<"enter the clno,name mark";
 cin>>clno>>name>>mark;
}
student::student()
{
 mark=0;
}
void student::calc(student &t)
{
 if (mark>t.mark)
 {
  t=*this;
 }
}
void student::display()
{
 cout<<clno<<"\t"<<name<<"\t"<<mark;
}
int main()
{
 int i;
 student s[10],l;
 for(i=0;i<10;i++)
  s[i].accept();
 for(i=0;i<10;i++)
  s[i].calc(l);
 cout<<"details of highest mark scored student";
 l.display();
 return 0;
 }
