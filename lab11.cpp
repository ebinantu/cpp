#include<iostream>
using namespace std;
class student
{
   int clsno,mark;
   char name[20];
   public:
   void accept();
   void display();
};
void student::accept()
{
   cout<<"enter class number,name,mark";
   cin>>clsno>>name>>mark;
}
void student::display()
{
    cout<<clsno<<"\t"<<name<<"\t"<<mark<<endl;
}
int main()
{
   student s[10];
   int i;
   for(i=0;i<10;i++)
   {
       s[i].accept();
   } 
   cout<<"clsno\tname\tmark"<<endl;
        for(i=0;i<10;i++)
           s[i].display();
}
