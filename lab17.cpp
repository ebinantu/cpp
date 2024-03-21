#include<iostream>
#include<string.h>
using namespace std;
class student
{
 int clno,mark;
 char name[20],school[10];
 public:
 student();
 student(int);
 student(student &); 
 void calc();
 void display();
};
student::student()
{
 strcpy(school,"GBHSS Aluva")
}
student::student(int k,char s[10],int i)
{
 clno
}
student::student(student &r)
{
 clno=r.clno;
 mark=r.mark;
 strcpy(name,r.name);
}
void student::calc()
{
 int n;
 cout<<"enter the grace mark";
 cin>>n;
 mark=mark+n;
}
void student::display()
{
 cout<<clno<<name<<mark;
}
int main()
{
 student s(1,"sachin",22);
 student n(s);
 n.calc();
 cout<<"details of mark scored";
 s.display();
 cout<<"details with grace mark";
 n.display();
 return 0;
}
