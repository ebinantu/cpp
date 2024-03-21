# include<iostream>
using namespace std;
class student
{
 int clno,mark;
 char name[20];
 public:
 void accept();
 void display();
 void operator ++();
};
void student::accept()
{
 cout<<"enter clno,name,mark";
 cin>>clno>>name>>mark;
}
void student::display()
{
 cout<<clno<<name<<mark<<endl;
}
void student::operator++()
{
 mark=mark+5;
}
int main()
{
 student s;
 s.accept();
 s.display();
 ++s;
 s.display();
return 0;
}
