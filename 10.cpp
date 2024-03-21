#include<iostream>
using namespace std;
class student 
{ 
    int clno,mark;
    char name[10];
    public:
    void accept();
    void calc(student);
};
void student::calc(student t)
{
   if(mark>t.mark)
    cout<<clno<<name<<mark;
    else
    cout<<t.clno<<t.name<<t.mark;
   }
void student::accept()
{
   cout<<"Enter clsno name mark";
   cin>>clno>>name>>mark;
}
int main()
{ 
  student t1,t2;
  t1.accept();
  t2.accept();
  t1.calc(t2);
}
