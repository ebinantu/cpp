#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int m1,m2,m3,total;
    char grade[10];
    public:
    void accept();
    void display();
    void calc();
};
void student::accept()
{
     cout<<"Enter three marks each mark is out of 100:";
     cin>>m1>>m2>>m3;
}
void student::calc()
{
    total=m1+m2+m3+20;
    if(total>120)
    {
        strcpy(grade,"passed");
     }
     else
     strcpy(grade,"failed");
}
void student::display()
{ 
    cout<<"total="<<total<<"\t";
    cout<<"grade="<<grade;
}
int main()
{
  student s;
  s.accept();
  s.calc();
  s.display();
}
