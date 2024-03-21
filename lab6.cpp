#include<iostream>
using namespace std;
class student
{
    int clsno,mark;
    char name[10];
    public:
    void accept();
    void display();
};
void student::accept()
{
   cout<<"Enter the classnumber name  mark";
   cin>>clsno>>name>>mark;
}
void student::display()
{
   cout<<"clsno"<<"\t"<<"Name"<<"\t"<<"Mark\n";
   cout<<clsno<<"\t"<<name<<"\t"<<mark;
}
int main()
{
   student s;
   s.accept();
   s.display();
}
